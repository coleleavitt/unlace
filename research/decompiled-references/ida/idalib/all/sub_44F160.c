unsigned __int64 __fastcall sub_44F160(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rax
  void *v7; // r13
  const char *v8; // r8
  const char *v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  int v12; // eax
  char *v14; // rdx
  void *v15; // rdi
  __int64 v16; // rsi
  char *v17; // rsi
  const char *v18; // rdi
  char *v19; // rdx
  char *v20; // rdx
  int v21; // [rsp-8h] [rbp-D8h]
  const char *v22; // [rsp+0h] [rbp-D0h]
  const char *v23; // [rsp+8h] [rbp-C8h]
  int v24; // [rsp+10h] [rbp-C0h]
  void *v25; // [rsp+18h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+20h] [rbp-B0h]
  int v27; // [rsp+30h] [rbp-A0h]
  void *v28; // [rsp+38h] [rbp-98h] BYREF
  __int128 v29; // [rsp+40h] [rbp-90h]
  int v30; // [rsp+50h] [rbp-80h]
  char *s2; // [rsp+58h] [rbp-78h] BYREF
  int v32[4]; // [rsp+60h] [rbp-70h]
  __int64 v33; // [rsp+70h] [rbp-60h]
  void *ptr; // [rsp+78h] [rbp-58h] BYREF
  int v35[4]; // [rsp+80h] [rbp-50h]
  unsigned __int64 v36; // [rsp+90h] [rbp-40h]

  v4 = (int)a1;
  v36 = __readfsqword(0x28u);
  v24 = a2 - a4;
  v6 = a1[3];
  v26 = 0;
  v25 = nullptr;
  sub_44EC70((__int64)a1, (__int64)&v25, *(_QWORD *)(v6 + 16) & (a2 - a4), 0, nullptr);
  v29 = 0;
  v28 = nullptr;
  sub_44EC70((__int64)a1, (__int64)&v28, a2, 0, nullptr);
  v7 = *(void **)(a3 + 24);
  if ( v7 != (void *)-1LL )
  {
    v8 = haystack;
    if ( (_QWORD)v26 )
    {
      v8 = (const char *)v25;
      v9 = haystack;
      if ( !(_QWORD)v29 )
        goto LABEL_4;
    }
    else
    {
      v9 = haystack;
      if ( !(_QWORD)v29 )
      {
LABEL_4:
        sub_44BB70(a1, *(void **)(a3 + 24), v9, 0, v8);
        v7 = *(void **)(a3 + 24);
        goto LABEL_5;
      }
    }
    v9 = (const char *)v28;
    goto LABEL_4;
  }
LABEL_5:
  v23 = haystack;
  if ( (_QWORD)v29 )
    v23 = (const char *)v28;
  v22 = haystack;
  if ( (_QWORD)v26 )
    v22 = (const char *)v25;
  ptr = (void *)-1LL;
  LOBYTE(v35[0]) = 0;
  v10 = *a1;
  sub_3E3030(a1, (__int64)&ptr, a2);
  while ( ptr != (void *)-1LL )
  {
    if ( LOBYTE(v35[0]) == 19 && v7 != ptr )
      sub_44BB70(*(_QWORD **)(v10 + 1672), ptr, v23, 0, v22);
    sub_3E3220(a1, (__int64)&ptr, a2);
  }
  v11 = *(_QWORD *)(a3 + 24);
  if ( v11 != -1 && (sub_3BE900(a1, v11, 4) & 0x4000) != 0 )
  {
    *(_OWORD *)v32 = 0;
    s2 = nullptr;
    sub_35A790(&s2);
    v16 = *(_QWORD *)(a3 + 24);
    *(_OWORD *)v35 = 0;
    ptr = nullptr;
    if ( get_ea_name(&ptr, v16, 0, 0) <= 0 )
    {
LABEL_35:
      if ( ptr )
      {
        *(_QWORD *)v35 = 0;
        qfree(ptr);
      }
      if ( s2 )
      {
        *(_QWORD *)v32 = 0;
        qfree(s2);
      }
      goto LABEL_17;
    }
    if ( *(_QWORD *)v32 )
    {
      v17 = s2;
      v18 = haystack;
      if ( !*(_QWORD *)v35 )
        goto LABEL_34;
    }
    else
    {
      v17 = (char *)haystack;
      if ( !*(_QWORD *)v35 )
        goto LABEL_45;
    }
    v18 = (const char *)ptr;
LABEL_34:
    if ( strcmp(v18, v17) )
      goto LABEL_35;
LABEL_45:
    sub_35A790(&s2);
    v20 = (char *)haystack;
    if ( *(_QWORD *)v32 )
      v20 = s2;
    sub_4D7EC0(
      v4,
      *(_QWORD *)(a3 + 24),
      v20,
      v21,
      (int)v22,
      (int)v23,
      v24,
      (int)v25,
      (void *)v26,
      *((__int64 *)&v26 + 1),
      v27,
      (int)v28,
      (void *)v29,
      *((__int64 *)&v29 + 1),
      v30,
      (int)s2,
      v32[0],
      v32[2],
      v33,
      (int)ptr,
      v35[0],
      *(__int64 *)&v35[2]);
    goto LABEL_35;
  }
LABEL_17:
  v12 = sub_44D100(*(_QWORD *)(a3 + 8));
  if ( v12 == 1 )
  {
    *(_OWORD *)v35 = 0;
    ptr = nullptr;
    sub_35A790((char **)&ptr);
    v19 = (char *)haystack;
    if ( *(_QWORD *)v35 )
      v19 = (char *)ptr;
    sub_4D7EC0(
      v4,
      *(_QWORD *)(a3 + 8),
      v19,
      v21,
      (int)v22,
      (int)v23,
      v24,
      (int)v25,
      (void *)v26,
      *((__int64 *)&v26 + 1),
      v27,
      (int)v28,
      (void *)v29,
      *((__int64 *)&v29 + 1),
      v30,
      (int)s2,
      v32[0],
      v32[2],
      v33,
      (int)ptr,
      v35[0],
      *(__int64 *)&v35[2]);
    v15 = ptr;
    if ( ptr )
      goto LABEL_27;
  }
  else if ( v12 == 2 )
  {
    *(_OWORD *)v35 = 0;
    ptr = nullptr;
    sub_35A790((char **)&ptr);
    v14 = (char *)haystack;
    if ( *(_QWORD *)v35 )
      v14 = (char *)ptr;
    sub_4D7EC0(
      v4,
      *(_QWORD *)(a3 + 8),
      v14,
      v21,
      (int)v22,
      (int)v23,
      v24,
      (int)v25,
      (void *)v26,
      *((__int64 *)&v26 + 1),
      v27,
      (int)v28,
      (void *)v29,
      *((__int64 *)&v29 + 1),
      v30,
      (int)s2,
      v32[0],
      v32[2],
      v33,
      (int)ptr,
      v35[0],
      *(__int64 *)&v35[2]);
    v15 = ptr;
    if ( ptr )
    {
LABEL_27:
      *(_QWORD *)v35 = 0;
      qfree(v15);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v36 - __readfsqword(0x28u);
}
