unsigned __int64 __fastcall sub_5A3520(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  size_t v11; // r15
  __int64 v13; // r14
  size_t v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // [rsp+8h] [rbp-50h]
  char v27; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 120);
  v28 = __readfsqword(0x28u);
  v6 = v4[1];
  v7 = *v4;
  if ( v4[2] < (unsigned __int64)(v6 + 1) )
  {
    v16 = qvector_reserve(v4, v7, v6 + 1, 24);
    v6 = v4[1];
    *v4 = v16;
    v7 = v16;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++v4[1];
  if ( !*(_BYTE *)(a1 + 60) )
  {
    *(_QWORD *)(v8 + 8) = 0;
    v9 = a3;
    if ( a3 )
    {
      v27 = 32;
      v17 = *(_QWORD *)v8;
      v18 = a3 + 1LL;
      if ( v9 == -1 )
      {
LABEL_19:
        *(_BYTE *)(v17 + v9) = 0;
        goto LABEL_5;
      }
      v19 = *(_QWORD *)(v8 + 16);
      if ( (unsigned __int64)&v27 < v17 )
      {
        v20 = 0;
        if ( v19 >= v18 )
          goto LABEL_21;
      }
      else
      {
        v20 = 0;
        if ( (unsigned __int64)&v27 < v17 + v19 )
        {
          if ( v19 >= v18
            || (v25 = qvector_reserve(v8, v17, v9 + 1, 1),
                *(_QWORD *)v8 = v25,
                v17 = v25,
                v20 = *(_QWORD *)(v8 + 8),
                v20 < v18) )
          {
            do
            {
              v21 = v20;
              *(_BYTE *)(v17 + v20++) = 32;
              v17 = *(_QWORD *)v8;
            }
            while ( v9 != v21 );
          }
          goto LABEL_18;
        }
        if ( v19 >= v18 )
          goto LABEL_21;
      }
      v24 = qvector_reserve(v8, v17, v9 + 1, 1);
      *(_QWORD *)v8 = v24;
      v17 = v24;
      v20 = *(_QWORD *)(v8 + 8);
      if ( v20 >= v18 )
      {
LABEL_18:
        *(_QWORD *)(v8 + 8) = v18;
        goto LABEL_19;
      }
      do
      {
LABEL_21:
        v23 = v20;
        *(_BYTE *)(v17 + v20++) = 32;
        v17 = *(_QWORD *)v8;
      }
      while ( v9 != v23 );
      goto LABEL_18;
    }
  }
LABEL_5:
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = v10 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v11 + v13;
        v10 += v13;
      }
      v15 = *(_QWORD *)v8;
      if ( *(_QWORD *)(v8 + 16) < v10 )
      {
        v26 = v14;
        v22 = qvector_reserve(v8, v15, v10, 1);
        v14 = v26;
        *(_QWORD *)v8 = v22;
        v15 = v22;
      }
      *(_QWORD *)(v8 + 8) = v10;
      *(_BYTE *)(v15 + v14) = 0;
      memcpy((void *)(v13 + *(_QWORD *)v8), *(const void **)a2, v11);
    }
  }
  ++*(_DWORD *)(a1 + 144);
  return v28 - __readfsqword(0x28u);
}
