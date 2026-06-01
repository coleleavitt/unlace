__int64 *__fastcall sub_486C80(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 *result; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 < v2 + 1 )
  {
    v6 = qvector_reserve(a1, 0, v2 + 1, 416);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v4 = (__int64 *)v6;
    v9 = *(__int64 **)a1;
    v10 = v7 - 1;
    if ( v10 >= 0 )
    {
      v11 = v6;
      do
      {
        v12 = v11;
        v11 += 416;
        sub_486910(v12, v9);
        v13 = (__int64)v9;
        v9 += 52;
        sub_481890(v13);
      }
      while ( v10-- != 0 );
      v9 = *(__int64 **)a1;
    }
    qfree(v9);
    *(_QWORD *)a1 = v4;
    v2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v8;
  }
  else
  {
    v4 = *(__int64 **)a1;
  }
  result = &v4[52 * v2];
  *((_WORD *)result + 134) = 0;
  *result = 0;
  result[3] = 0;
  result[6] = 0;
  result[9] = 0;
  result[12] = 0;
  *((_DWORD *)result + 30) = 0;
  result[16] = 0;
  result[19] = 0;
  result[22] = 0;
  *((_BYTE *)result + 184) = 0;
  result[24] = 0;
  result[27] = 0;
  result[30] = 0;
  *((_DWORD *)result + 66) = -1;
  *((_BYTE *)result + 270) = 0;
  result[34] = 0;
  result[37] = (__int64)(result + 43);
  result[38] = 1;
  result[39] = 0;
  result[40] = 0;
  *(_OWORD *)(result + 1) = 0;
  *((_OWORD *)result + 2) = 0;
  *(_OWORD *)(result + 7) = 0;
  *((_OWORD *)result + 5) = 0;
  *(_OWORD *)(result + 13) = 0;
  *(_OWORD *)(result + 17) = 0;
  *((_OWORD *)result + 10) = 0;
  *(_OWORD *)(result + 25) = 0;
  *((_OWORD *)result + 14) = 0;
  *(_OWORD *)(result + 31) = 0;
  *(_OWORD *)(result + 35) = 0;
  result[41] = 1065353216;
  result[42] = 0;
  result[47] = 0;
  result[50] = 0;
  *((_WORD *)result + 204) = 0;
  *(_OWORD *)(result + 43) = 0;
  *(_OWORD *)(result + 45) = 0;
  *((_OWORD *)result + 24) = 0;
  ++*(_QWORD *)(a1 + 8);
  return result;
}

