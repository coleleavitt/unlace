__int64 __fastcall sub_6B1E80(
        __int64 *a1,
        int *a2,
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
  _DWORD *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // esi
  __int64 v18; // rbp
  char *v19; // rsi
  char *v20; // rdi
  int v21; // eax
  __int64 v22; // rsi
  const char *v23; // rdi
  int v24; // edx
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
  unsigned int v35; // ebp
  int v36; // r8d
  unsigned int v37; // ebp
  int v38; // eax
  unsigned int v40; // eax
  char **p_s2; // [rsp+0h] [rbp-B8h]
  void **i; // [rsp+8h] [rbp-B0h]
  int v43; // [rsp+10h] [rbp-A8h]
  int v44; // [rsp+18h] [rbp-A0h]
  int v45; // [rsp+1Ch] [rbp-9Ch] BYREF
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  int v47[4]; // [rsp+28h] [rbp-90h]
  int v48; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v11 = *a1;
  v53 = __readfsqword(0x28u);
  v13 = *(_QWORD **)(v11 + 1480);
  v14 = sub_518BB0((__int64)a1, a2[4]);
  if ( !v14 )
    return 1;
  v15 = (__int64)v14;
  v16 = v14[5];
  if ( (v16 & 0x40) == 0 )
    *(_DWORD *)(v15 + 20) = v16 | 0x40;
  v17 = *(_DWORD *)v15;
  s1 = nullptr;
  *(_OWORD *)v47 = 0;
  LODWORD(s2) = sub_3B90A0(v13, v17);
  p_s2 = &s2;
  sub_79BD30(&s2, *a1, &s1);
  v18 = 0;
  if ( *(_DWORD *)(v15 + 4) )
  {
    while ( 1 )
    {
      v21 = sub_3B90A0(v13, *(_DWORD *)(*(_QWORD *)(v15 + 8) + 20 * v18));
      v22 = *a1;
      v45 = v21;
      ptr = nullptr;
      v50 = 0;
      if ( sub_79BD30(&v45, v22, &ptr) > 0 )
        break;
LABEL_12:
      if ( ptr )
      {
        *(_QWORD *)&v50 = 0;
        qfree(ptr);
      }
      if ( ++v18 >= (unsigned __int64)*(unsigned int *)(v15 + 4) )
        goto LABEL_22;
    }
    s2 = nullptr;
    v23 = haystack;
    v52 = 0;
    if ( (_QWORD)v50 )
      v23 = (const char *)ptr;
    if ( !sub_69C980(v23, (__int64)&s2) )
    {
LABEL_9:
      *(_DWORD *)(*(_QWORD *)(v15 + 8) + 20 * v18) = -1;
      goto LABEL_10;
    }
    if ( (_QWORD)v52 )
    {
      v19 = s2;
      v20 = (char *)haystack;
      if ( !*(_QWORD *)v47 )
        goto LABEL_8;
    }
    else
    {
      v19 = (char *)haystack;
      if ( !*(_QWORD *)v47 )
      {
LABEL_10:
        if ( s2 )
        {
          *(_QWORD *)&v52 = 0;
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
  v52 = 0;
  sub_5A1A70(v13, &s2, v24);
  v25 = (char *)haystack;
  if ( (_QWORD)v52 )
    v25 = s2;
  sub_517140(a1, v15, v25);
  sub_6AC0E0(*(_QWORD **)(*a1 + 1480), (int *)v15, 0);
  v28 = v52;
  v29 = 2;
  if ( (_QWORD)v52 )
  {
    v29 = v52 + 1;
    v30 = s2;
    v28 = v52 - 1;
    if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
      goto LABEL_26;
LABEL_42:
    s2 = (char *)qvector_reserve(&s2, v30, v29, 1);
    v30 = s2;
    goto LABEL_26;
  }
  v30 = s2;
  if ( *((_QWORD *)&v52 + 1) < 2u )
    goto LABEL_42;
LABEL_26:
  *(_QWORD *)&v52 = v29;
  v31 = 0;
  v30[v28] = 46;
  s2[v28 + 1] = 0;
  for ( i = &ptr; v31 < *(unsigned int *)(v15 + 4); ++v31 )
  {
    while ( 1 )
    {
      v35 = *(_DWORD *)(*(_QWORD *)(v15 + 8) + 20 * v31);
      if ( v35 == -1 )
        break;
      ptr = nullptr;
      getinf_buf(26, i, 8);
      if ( v35 < (unsigned int)ptr || v35 >= HIDWORD(ptr) )
        break;
      sub_6ABA30(*(_QWORD **)(*a1 + 1480), v35, nullptr, (__int64)p_s2, v31);
      sub_6AA740(a1, v35, v32, v33, v34);
      if ( ++v31 >= *(unsigned int *)(v15 + 4) )
        goto LABEL_33;
    }
    sub_82BC50(
      "migrate_asmframes: unknown or wrong members[%zu].id %a for frame %s\n",
      (__int64)p_s2,
      (int)i,
      v43,
      v44,
      (int)s1,
      v47[0],
      v47[2],
      v48,
      (int)ptr,
      v50,
      *((__int64 *)&v50 + 1));
  }
LABEL_33:
  v36 = *a2;
  ptr = nullptr;
  v37 = sub_6AEB40(a1, v15, (__int64)&ptr, 1, v36, 0.0, a4, a5, a6, v26, v27, a9, a10);
  if ( (_BYTE)v37 )
  {
    sub_518560((__int64)a1, v15, 384);
    v40 = ea2node((unsigned int)*a2);
    sub_525A20((__int64)v13, (unsigned __int64 *)&ptr, v40);
    sub_59CD70((__int64)v13, (unsigned __int64 *)&ptr, nullptr, 0);
    v38 = *a2;
  }
  else
  {
    sub_518560((__int64)a1, v15, 0);
    v38 = -1;
  }
  a2[4] = v38;
  update_func(a2);
  clear_tinfo_t(&ptr);
  if ( s2 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(s2);
  }
  if ( s1 )
  {
    *(_QWORD *)v47 = 0;
    qfree(s1);
  }
  return v37;
}

