unsigned __int64 __fastcall sub_1EB3E0(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a3 != 2 )
  {
    if ( a3 != 3 )
      goto LABEL_3;
    v8 = a1[113];
    if ( v8 )
    {
      v9 = a2[1];
      v10 = a2[2];
      v11 = *a2;
      if ( v10 < v9 + 1 )
      {
        v17 = qvector_reserve(a2, v11, v9 + 1, 8);
        *a2 = v17;
        v11 = v17;
        v9 = a2[1];
      }
      *(_QWORD *)(v11 + 8 * v9) = v8;
      ++a2[1];
    }
  }
  v12 = a1[112];
  if ( v12 )
  {
    v13 = a2[1];
    v14 = *a2;
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v16 = qvector_reserve(a2, v14, v13 + 1, 8);
      *a2 = v16;
      v14 = v16;
      v13 = a2[1];
    }
    *(_QWORD *)(v14 + 8 * v13) = v12;
    ++a2[1];
  }
LABEL_3:
  v4 = a1[111];
  if ( v4 )
  {
    v5 = a2[1];
    v6 = *a2;
    if ( a2[2] < (unsigned __int64)(v5 + 1) )
    {
      v15 = qvector_reserve(a2, v6, v5 + 1, 8);
      *a2 = v15;
      v6 = v15;
      v5 = a2[1];
    }
    *(_QWORD *)(v6 + 8 * v5) = v4;
    ++a2[1];
  }
  return v18 - __readfsqword(0x28u);
}
