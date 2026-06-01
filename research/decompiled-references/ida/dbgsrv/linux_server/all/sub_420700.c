/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420700
// Address: 0x0000000000420700

//----- (0000000000420700) ----------------------------------------------------
__int64 __fastcall sub_420700(
        _QWORD *a1,
        unsigned __int64 a2,
        const char *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rbp
  unsigned __int8 v11; // r13
  __int64 v12; // rbx
  const char *v14; // rdi
  __m128 v15; // xmm4
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-99h]
  _BYTE v20[32]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 *v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v7 = 2306;
  v8 = a1[19];
  v9 = (__int64 *)a1[20];
  v10 = a1[21];
  v11 = _bittest64(&v7, a2);
  v24 = __readfsqword(0x28u);
  v12 = a1[17];
LABEL_2:
  if ( v12 == v10 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (_DWORD)a2 == (*(_DWORD *)(v12 + 20) & 0xFFFFFFF) )
      {
        if ( (unsigned int)a2 > 0xB || (v17 = v11) == 0 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(3295);
          BUG();
        }
        v14 = s1;
        if ( *(_QWORD *)(v12 + 32) )
          v14 = *(const char **)(v12 + 24);
        if ( !strcmp(v14, a3) )
          break;
      }
      v12 += 72;
      if ( v8 != v12 )
        goto LABEL_2;
      v12 = v9[1];
      ++v9;
      v8 = v12 + 504;
      if ( v12 == v10 )
        return 0;
    }
    v16 = *v9;
    v21.m128i_i64[0] = v12;
    v21.m128i_i64[1] = v16;
    v22 = v16 + 504;
    v23 = v9;
    sub_420150((__int64)v20, (__int64)(a1 + 15), &v21, a4, a5, a6, a7, v15);
  }
  return v17;
}
// 420821: variable 'v15' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
