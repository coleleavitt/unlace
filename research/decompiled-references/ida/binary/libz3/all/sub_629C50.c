void __fastcall sub_629C50(std::chrono::_V2::steady_clock *a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rbp
  double v3; // xmm0_8
  unsigned __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  double v9; // xmm0_8

  v1 = *(_QWORD *)a1;
  v2 = *((__int64 **)a1 + 1);
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  if ( *((_BYTE *)v2 + 16) )
  {
    v2[1] += std::chrono::_V2::steady_clock::now(a1) - *v2;
    *((_BYTE *)v2 + 16) = 0;
    v7 = std::chrono::_V2::steady_clock::now(a1);
    v8 = v2[1];
    *v2 = v7;
    *((_BYTE *)v2 + 16) = 1;
    v9 = (double)(int)(v8 / 1000000) / 1000.0 * 1000.0;
    if ( v9 >= 9.223372036854776e18 )
      v4 = (unsigned int)(int)(v9 - 9.223372036854776e18) ^ 0x8000000000000000LL;
    else
      v4 = (unsigned int)(int)v9;
    v1 = *(_QWORD *)a1;
    v2 = *((__int64 **)a1 + 1);
    if ( !*(_QWORD *)a1 )
      goto LABEL_6;
  }
  else
  {
    v3 = (double)(int)(v2[1] / 1000000) / 1000.0 * 1000.0;
    if ( v3 >= 9.223372036854776e18 )
      v4 = (unsigned int)(int)(v3 - 9.223372036854776e18) ^ 0x8000000000000000LL;
    else
      v4 = (unsigned int)(int)v3;
  }
  v5 = *(_DWORD *)(v1 + 16);
  v6 = *((_QWORD *)a1 + 3);
  *(_BYTE *)(v1 + 32) = 0;
  ++*(_DWORD *)(v1 + 20);
  *(_DWORD *)(v1 + 16) = v4 + v5 - v6;
LABEL_6:
  *((_BYTE *)a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  *((_QWORD *)a1 + 3) = v4;
LABEL_7:
  if ( v2 )
    sub_186B220(v2);
}

