unsigned __int64 __fastcall sub_690720(__int64 a1)
{
  int v2; // eax
  int v3; // r12d
  char *v4; // rbx
  __int64 v5; // rax
  char v6; // r8
  _BYTE *v7; // rsi
  char v8; // bl
  _BYTE *v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  void *v12; // rdi
  __m128i v14; // xmm1
  _BYTE *v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rax
  char v18; // [rsp+Fh] [rbp-69h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v20; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = reg_int_op("StrWinStringTypes", 0, 4919, 0);
  if ( v2 != 4919 )
  {
    v3 = v2;
    ptr = nullptr;
    v20 = 0;
    v4 = (char *)&unk_23B1B70;
    do
    {
      while ( !_bittest(&v3, (_DWORD)v4 - (unsigned int)&unk_23B1B70) )
      {
        if ( "StrWinMinlen" == ++v4 )
          goto LABEL_8;
      }
      v5 = v20.m128i_i64[0];
      v6 = *v4;
      v7 = ptr;
      if ( v20.m128i_i64[1] < (unsigned __int64)(v20.m128i_i64[0] + 1) )
      {
        v18 = *v4;
        ptr = (void *)qvector_reserve(&ptr, ptr, v20.m128i_i64[0] + 1, 1);
        v7 = ptr;
        v6 = v18;
        v5 = v20.m128i_i64[0];
      }
      ++v4;
      v7[v5] = v6;
      ++v20.m128i_i64[0];
    }
    while ( "StrWinMinlen" != v4 );
LABEL_8:
    reg_delete("StrWinStringTypes", 0);
    if ( v20.m128i_i64[0] )
      reg_bin_op("StrWinStringTypes", 1, ptr, v20.m128i_i64[0], 0, 0);
    if ( ptr )
    {
      v20.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
  v20 = 0;
  ptr = nullptr;
  if ( (unsigned __int8)reg_bin_op("StrWinStringTypes", 0, &ptr, 0, 0, 2) && v20.m128i_i64[0] )
  {
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v15 = *(_BYTE **)a1;
    v16 = _mm_loadh_ps((const double *)&v20.m128i_i64[1]);
    *(_QWORD *)a1 = ptr;
    ptr = v15;
    v20 = v14;
    *(__m128 *)(a1 + 8) = v16;
  }
  else
  {
    v8 = getinf(52);
    v9 = *(_BYTE **)a1;
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v10 + 1) )
    {
      v17 = qvector_reserve(a1, v9, v10 + 1, 1);
      *(_QWORD *)a1 = v17;
      v9 = (_BYTE *)v17;
      v10 = *(_QWORD *)(a1 + 8);
    }
    v9[v10] = v8;
    ++*(_QWORD *)(a1 + 8);
  }
  *(_BYTE *)(a1 + 32) = (unsigned int)reg_int_op("StrWinDisplayOnly", 0, 0, 0) != 0;
  *(_BYTE *)(a1 + 34) = (unsigned int)reg_int_op("StrWinIgnoreHeads", 0, 0, 0) != 0;
  *(_BYTE *)(a1 + 33) = (unsigned int)reg_int_op("StrWinOnly7Bit", 0, 1, 0) != 0;
  v11 = reg_int_op("StrWinMinlen", 0, 5, 0);
  v12 = ptr;
  *(_QWORD *)(a1 + 24) = v11;
  if ( v12 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v12);
  }
  return v21 - __readfsqword(0x28u);
}
