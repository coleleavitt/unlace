unsigned __int64 __fastcall sub_4DB7C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+18h] [rbp-B0h]
  __int64 v26; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+30h] [rbp-98h]
  __int128 v28; // [rsp+40h] [rbp-88h]
  __int128 v29; // [rsp+50h] [rbp-78h]
  __int128 v30; // [rsp+60h] [rbp-68h]
  int v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  __int64 v34; // [rsp+88h] [rbp-40h]
  unsigned __int64 v35; // [rsp+98h] [rbp-30h]

  v23 = a2;
  v35 = __readfsqword(0x28u);
  if ( sub_4D88F0((_QWORD *)a1, a2) == -1 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)sub_4DB560((char **)(a1 + 384), &v23) = v7;
    v8 = *(_QWORD *)(a1 + 440);
    v9 = **(unsigned int **)(a3 + 8) / (unsigned __int64)*(int *)(a1 + 376);
    v10 = *(_QWORD *)(a1 + 448);
    v11 = v9;
    if ( v9 < v10 )
      goto LABEL_11;
    v24 = 0;
    v17 = (unsigned int)(2 * v9 + 1);
    if ( v17 >= v10 )
    {
      if ( v10 >= v17 )
        goto LABEL_11;
      v18 = *(_QWORD *)(a1 + 456);
      v19 = a1 + 440;
      if ( (unsigned __int64)&v24 < v8 || (unsigned __int64)&v24 >= v8 + 8 * v18 )
      {
        if ( v18 >= v17
          || (v21 = qvector_reserve(v19, v8, v17, 8),
              v10 = *(_QWORD *)(a1 + 448),
              *(_QWORD *)(a1 + 440) = v21,
              v8 = v21,
              v10 < v17) )
        {
          do
          {
            *(_QWORD *)(v8 + 8 * v10++) = v24;
            v8 = *(_QWORD *)(a1 + 440);
          }
          while ( v17 != v10 );
        }
      }
      else if ( v18 >= v17
             || (v22 = qvector_reserve(v19, v8, v17, 8),
                 v10 = *(_QWORD *)(a1 + 448),
                 *(_QWORD *)(a1 + 440) = v22,
                 v8 = v22,
                 v10 < v17) )
      {
        do
        {
          *(_QWORD *)(v8 + 8 * v10++) = 0;
          v8 = *(_QWORD *)(a1 + 440);
        }
        while ( v17 != v10 );
      }
    }
    *(_QWORD *)(a1 + 448) = v17;
LABEL_11:
    v12 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v8 + 8 * v11) = v12;
    v13 = v12 + 1;
    v14 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v13 )
    {
      v20 = qvector_reserve(a1 + 24, v14, v13, 128);
      *(_QWORD *)(a1 + 24) = v20;
      v14 = v20;
    }
    v15 = v14 + (*(_QWORD *)(a1 + 32) << 7);
    *(_OWORD *)(v15 + 8) = 0;
    *(_OWORD *)(v15 + 32) = 0;
    *(_QWORD *)v15 = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 96) = -1;
    *(_QWORD *)(v15 + 104) = 12;
    *(_QWORD *)(v15 + 112) = -1;
    *(_QWORD *)(v15 + 120) = -1;
    *(_OWORD *)(v15 + 48) = 0;
    *(_OWORD *)(v15 + 64) = 0;
    *(_OWORD *)(v15 + 80) = 0;
    v16 = *(int *)(a1 + 376);
    ++*(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v15 + 16) < v16 )
    {
      *(_QWORD *)v15 = qvector_reserve(v15, *(_QWORD *)v15, v16, 24);
      v16 = *(int *)(a1 + 376);
      if ( *(_QWORD *)(v15 + 40) >= v16 )
        goto LABEL_15;
    }
    else if ( *(_QWORD *)(v15 + 40) >= v16 )
    {
LABEL_15:
      sub_4D86D0(a3, v15);
      return v35 - __readfsqword(0x28u);
    }
    *(_QWORD *)(v15 + 24) = qvector_reserve(v15 + 24, *(_QWORD *)(v15 + 24), v16, 16);
    sub_4D86D0(a3, v15);
    return v35 - __readfsqword(0x28u);
  }
  v5 = *(int *)(a1 + 376);
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v26 = 0;
  v31 = -1;
  v32 = 12;
  v33 = -1;
  v34 = -1;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( v5 )
  {
    v24 = qvector_reserve(&v24, 0, v5, 24);
    if ( *((_QWORD *)&v27 + 1) < v5 )
      v26 = qvector_reserve(&v26, v26, v5, 16);
  }
  sub_4D86D0(a3, (__int64)&v24);
  if ( (_QWORD)v28 )
  {
    *((_QWORD *)&v28 + 1) = 0;
    qfree(v28, (const char *)&v24);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, (const char *)&v24);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)&v24);
  }
  return v35 - __readfsqword(0x28u);
}
