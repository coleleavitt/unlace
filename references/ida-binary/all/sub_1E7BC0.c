unsigned __int64 __fastcall sub_1E7BC0(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  const char *v14; // rbp
  __int64 *v15; // r8
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // rax
  const char *v21; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // [rsp+0h] [rbp-90h]
  __int64 v26; // [rsp+10h] [rbp-80h] BYREF
  __int64 v27; // [rsp+18h] [rbp-78h] BYREF
  __int128 v28; // [rsp+20h] [rbp-70h]
  __int128 v29; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v6 = (const char *)&v29;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)&v29 = 0;
  *((_QWORD *)&v29 + 1) = a3;
  v7 = sub_1E7840(a2, &v29);
  v28 = 0;
  v27 = 0;
  if ( v7 )
  {
    v9 = (_QWORD *)v7;
    v10 = *(_QWORD *)(v7 + 8);
    if ( (int)v10 <= 0 )
      return v30 - __readfsqword(0x28u);
    v11 = (unsigned int)(v10 - 1);
    v12 = 0;
    v13 = 0;
    v14 = nullptr;
    v15 = &v26;
    v16 = 16 * (v11 + 1);
    do
    {
      while ( 1 )
      {
        v17 = v12 + *v9;
        if ( !*(_BYTE *)v17 )
          break;
        v12 += 16;
        if ( v16 == v12 )
          goto LABEL_9;
      }
      v18 = *(_QWORD *)(v17 + 8);
      v17 = *((_QWORD *)&v28 + 1);
      v6 = (const char *)(v13 + 1);
      v26 = v18;
      if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v13 + 1) )
      {
        v6 = v14;
        v25 = v15;
        v27 = qvector_reserve(&v27, v14, v13 + 1, 8);
        v14 = (const char *)v27;
        v15 = v25;
        v13 = v28;
      }
      *(_QWORD *)&v14[8 * v13] = v18;
      v12 += 16;
      v14 = (const char *)v27;
      v13 = v28 + 1;
      *(_QWORD *)&v28 = v28 + 1;
    }
    while ( v16 != v12 );
  }
  else
  {
    v6 = nullptr;
    v24 = qvector_reserve(&v27, 0, 1, 8);
    v17 = v28;
    v27 = v24;
    *(_QWORD *)(v24 + 8 * v28) = a3;
    v14 = (const char *)v27;
    v13 = v28 + 1;
    *(_QWORD *)&v28 = v28 + 1;
  }
LABEL_9:
  if ( 8 * v13 )
  {
    do
    {
      v6 = (const char *)qword_8CB4F0;
      v17 = xmmword_8CB4F8;
      v19 = *(_QWORD *)v14;
      v8 = (_QWORD *)(qword_8CB4F0 + 8 * xmmword_8CB4F8);
      if ( (_QWORD *)qword_8CB4F0 == v8 )
        goto LABEL_19;
      v20 = (_QWORD *)qword_8CB4F0;
      while ( v19 != *v20 )
      {
        if ( v8 == ++v20 )
          goto LABEL_19;
      }
      if ( v8 == v20 )
      {
LABEL_19:
        if ( *((_QWORD *)&xmmword_8CB4F8 + 1) < (unsigned __int64)(xmmword_8CB4F8 + 1) )
        {
          qword_8CB4F0 = qvector_reserve(&qword_8CB4F0, qword_8CB4F0, xmmword_8CB4F8 + 1, 8);
          v8 = (_QWORD *)(qword_8CB4F0 + 8 * xmmword_8CB4F8);
        }
        *v8 = v19;
        v17 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&xmmword_8CB4F8 = xmmword_8CB4F8 + 1;
        v6 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v17 + 1) )
        {
          v23 = qvector_reserve(a1, v6, v17 + 1, 8);
          *(_QWORD *)a1 = v23;
          v17 = *(_QWORD *)(a1 + 8);
          v6 = (const char *)v23;
        }
        *(_QWORD *)&v6[8 * v17] = v19;
        ++*(_QWORD *)(a1 + 8);
      }
      v21 = (const char *)v27;
      v14 += 8;
    }
    while ( v14 != (const char *)(v27 + 8 * v28) );
  }
  else
  {
    v21 = v14;
  }
  if ( v21 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v21, v6, v17, v8, v15);
  }
  return v30 - __readfsqword(0x28u);
}
