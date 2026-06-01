__int64 *__fastcall sub_49B900(__int64 a1)
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
    v6 = qvector_reserve(a1, 0, v2 + 1, 424);
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
        v11 += 424;
        sub_49B590(v12, v9);
        v13 = (__int64)v9;
        v9 += 53;
        sub_496580(v13);
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
  result = &v4[53 * v2];
  *((_WORD *)result + 136) = 0;
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
  result[33] = -1;
  *((_BYTE *)result + 274) = 0;
  result[35] = 0;
  result[38] = (__int64)(result + 44);
  result[39] = 1;
  result[40] = 0;
  result[41] = 0;
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
  *((_OWORD *)result + 18) = 0;
  result[42] = 1065353216;
  result[43] = 0;
  result[48] = 0;
  result[51] = 0;
  *((_WORD *)result + 208) = 0;
  *((_OWORD *)result + 22) = 0;
  *((_OWORD *)result + 23) = 0;
  *(_OWORD *)(result + 49) = 0;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
