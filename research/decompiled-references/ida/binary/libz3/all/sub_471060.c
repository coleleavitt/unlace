__m128i *__fastcall sub_471060(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  void *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  void *v16; // r12
  __int64 v17; // rsi
  __int64 *v18; // rbx
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-B0h]
  __int64 v25; // [rsp+10h] [rbp-A8h] BYREF
  int v26; // [rsp+18h] [rbp-A0h]
  int v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+28h] [rbp-90h]
  unsigned __int64 v29; // [rsp+30h] [rbp-88h]
  __int64 v30; // [rsp+38h] [rbp-80h]
  int v31; // [rsp+40h] [rbp-78h] BYREF
  int v32; // [rsp+48h] [rbp-70h]
  int v33; // [rsp+50h] [rbp-68h] BYREF
  int v34; // [rsp+58h] [rbp-60h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  __int64 v36; // [rsp+68h] [rbp-50h]
  __int64 v37; // [rsp+70h] [rbp-48h]
  __int64 v38; // [rsp+78h] [rbp-40h]
  char *v39; // [rsp+80h] [rbp-38h]
  __int64 v40; // [rsp+88h] [rbp-30h]

  sub_B1F240(&v25, *(_QWORD *)(a2 + 8));
  if ( *(_BYTE *)(a2 + 25) )
  {
    v5 = *a3;
    LOBYTE(v35) = *(_BYTE *)(a2 + 24);
    if ( !v5 )
      goto LABEL_39;
    v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
    if ( v5 == v6 )
      goto LABEL_39;
  }
  else
  {
    v5 = *a3;
    if ( !v5 || (v6 = v5 + 40LL * *(unsigned int *)(v5 - 4), v6 == v5) )
    {
LABEL_6:
      v7 = *(_QWORD *)(a2 + 8);
      sub_B221E0(
        (unsigned int)&v23,
        (unsigned int)&v25,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v8 = sub_15EC2C0(*(_QWORD *)(a2 + 8), v23);
      *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)v7);
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v9 = v23;
      if ( v23 )
      {
        v10 = v24;
        v11 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v10, v9);
      }
      goto LABEL_11;
    }
  }
  do
  {
    sub_B211C0(&v25, v5, *(_QWORD *)(v5 + 32));
    v5 += 40;
  }
  while ( v5 != v6 );
  if ( !*(_BYTE *)(a2 + 25) )
    goto LABEL_6;
LABEL_39:
  sub_B221E0(
    (_DWORD)a1,
    (unsigned int)&v25,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
LABEL_11:
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  if ( v39 )
    sub_186B220(v39 - 8);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v12, &v33);
  v13 = v30;
  if ( v30 )
  {
    v14 = *(unsigned int *)(v30 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v30 + 32 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v17 = v13 + 16;
        v13 += 32;
        sub_182CBA0(v16, v17);
      }
      while ( v13 != v15 );
      v13 = v30;
    }
    sub_186B220((void *)(v13 - 8));
  }
  v18 = (__int64 *)v29;
  if ( v29 )
  {
    v19 = v29 + 8LL * *(unsigned int *)(v29 - 4);
    if ( v29 >= v19 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = v28;
          v11 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v19 )
          goto LABEL_34;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v19 );
LABEL_34:
    v18 = (__int64 *)v29;
    if ( v29 )
LABEL_35:
      sub_186B220(v18 - 1);
  }
  return a1;
}

