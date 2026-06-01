__int64 __fastcall sub_6D2E80(
        __int64 *a1,
        __int64 *a2,
        double a3,
        __m128i a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rbp
  char *v19; // rsi
  char *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rdx
  char *v25; // rdx
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rbp
  __int64 v29; // r13
  char *v30; // rsi
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  void *v35; // rbp
  __int64 v36; // r8
  unsigned int v37; // ebp
  __int64 v38; // rax
  __int64 v40; // rax
  char **p_s2; // [rsp+0h] [rbp-B8h]
  void **i; // [rsp+8h] [rbp-B0h]
  int v43; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+18h] [rbp-A0h] BYREF
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  int v46[4]; // [rsp+28h] [rbp-90h]
  int v47; // [rsp+38h] [rbp-80h]
  void *ptr[4]; // [rsp+40h] [rbp-78h] BYREF
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v11 = *a1;
  v51 = __readfsqword(0x28u);
  v13 = *(_QWORD **)(v11 + 1672);
  v14 = sub_5310F0((__int64)a1, a2[3]);
  if ( !v14 )
    return 1;
  v15 = (__int64)v14;
  v16 = *((_DWORD *)v14 + 7);
  if ( (v16 & 0x40) == 0 )
    *(_DWORD *)(v15 + 28) = v16 | 0x40;
  v17 = *(_QWORD *)v15;
  s1 = nullptr;
  *(_OWORD *)v46 = 0;
  s2 = (char *)sub_3BDD60(v13, v17);
  p_s2 = &s2;
  sub_7BF130(&s2, *a1, &s1);
  v18 = 0;
  if ( *(_DWORD *)(v15 + 8) )
  {
    while ( 1 )
    {
      v21 = sub_3BDD60(v13, *(_QWORD *)(*(_QWORD *)(v15 + 16) + 32 * v18));
      v22 = *a1;
      v44 = v21;
      memset(ptr, 0, 24);
      if ( sub_7BF130(&v44, v22, ptr) > 0 )
        break;
LABEL_12:
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
      if ( ++v18 >= (unsigned __int64)*(unsigned int *)(v15 + 8) )
        goto LABEL_22;
    }
    s2 = nullptr;
    v23 = haystack;
    v50 = 0;
    if ( ptr[1] )
      v23 = (const char *)ptr[0];
    if ( !sub_6BD400(v23, (__int64)&s2) )
    {
LABEL_9:
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 32 * v18) = -1;
      goto LABEL_10;
    }
    if ( (_QWORD)v50 )
    {
      v19 = s2;
      v20 = (char *)haystack;
      if ( !*(_QWORD *)v46 )
        goto LABEL_8;
    }
    else
    {
      v19 = (char *)haystack;
      if ( !*(_QWORD *)v46 )
      {
LABEL_10:
        if ( s2 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(s2);
        }
        goto LABEL_12;
      }
    }
    v20 = s1;
LABEL_8:
    if ( !strcmp(v20, v19) )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_22:
  v24 = *a2;
  s2 = nullptr;
  v50 = 0;
  sub_5BC010(v13, &s2, v24);
  v25 = (char *)haystack;
  if ( (_QWORD)v50 )
    v25 = s2;
  sub_52F580(a1, v15, v25);
  sub_6CD060(*(_QWORD **)(*a1 + 1672), v15, 0);
  v28 = v50;
  v29 = 2;
  if ( (_QWORD)v50 )
  {
    v29 = v50 + 1;
    v30 = s2;
    v28 = v50 - 1;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 1) )
      goto LABEL_26;
LABEL_42:
    s2 = (char *)qvector_reserve(&s2, v30, v29, 1);
    v30 = s2;
    goto LABEL_26;
  }
  v30 = s2;
  if ( *((_QWORD *)&v50 + 1) < 2u )
    goto LABEL_42;
LABEL_26:
  *(_QWORD *)&v50 = v29;
  v31 = 0;
  v30[v28] = 46;
  s2[v28 + 1] = 0;
  for ( i = ptr; v31 < *(unsigned int *)(v15 + 8); ++v31 )
  {
    while ( 1 )
    {
      v35 = *(void **)(*(_QWORD *)(v15 + 16) + 32 * v31);
      if ( v35 == (void *)-1LL )
        break;
      a4 = 0;
      *(_OWORD *)ptr = 0;
      getinf_buf(26, i, 16);
      if ( v35 < ptr[0] || v35 >= ptr[1] )
        break;
      sub_6CC9B0(*(_QWORD **)(*a1 + 1672), (__int64)v35, nullptr, (__int64)p_s2, v31);
      sub_6CB6A0(a1, v35, v32, v33, v34);
      if ( ++v31 >= *(unsigned int *)(v15 + 8) )
        goto LABEL_33;
    }
    sub_84F5B0(
      "migrate_asmframes: unknown or wrong members[%zu].id %a for frame %s\n",
      (__int64)p_s2,
      (int)i,
      v43,
      v44,
      (int)s1,
      v46[0],
      v46[2],
      v47,
      (int)ptr[0],
      (int)ptr[1],
      (__int64)ptr[2]);
  }
LABEL_33:
  v36 = *a2;
  ptr[0] = nullptr;
  v37 = sub_6CFB10(a1, v15, (unsigned __int64 *)ptr, 1, v36, 0.0, a4, a5, a6, v26, v27, a9, a10);
  if ( (_BYTE)v37 )
  {
    sub_530950((__int64)a1, v15, 384);
    v40 = ea2node(*a2);
    sub_53E720((__int64)v13, (unsigned __int64 *)ptr, v40);
    sub_5B6F10((__int64)v13, (unsigned __int64 *)ptr, nullptr, 0);
    v38 = *a2;
  }
  else
  {
    sub_530950((__int64)a1, v15, 0);
    v38 = -1;
  }
  a2[3] = v38;
  update_func(a2);
  clear_tinfo_t(ptr);
  if ( s2 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(s2);
  }
  if ( s1 )
  {
    *(_QWORD *)v46 = 0;
    qfree(s1);
  }
  return v37;
}
