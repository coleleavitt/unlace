__int64 __fastcall sub_629D90(std::chrono::_V2::steady_clock *a1, __int64 a2)
{
  __int64 v2; // r12
  double v4; // xmm0_8
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(v2 + 16) )
  {
    *(_QWORD *)(v2 + 8) += std::chrono::_V2::steady_clock::now(a1) - *(_QWORD *)v2;
    *(_BYTE *)(v2 + 16) = 0;
    v9 = std::chrono::_V2::steady_clock::now(a1);
    *(_BYTE *)(v2 + 16) = 1;
    *(_QWORD *)v2 = v9;
  }
  v4 = (double)(int)(*(_QWORD *)(v2 + 8) / 1000000LL) / 1000.0 * 1000.0;
  if ( v4 >= 9.223372036854776e18 )
    v5 = (unsigned int)(int)(v4 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v5 = (unsigned int)(int)v4;
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = *((_QWORD *)a1 + 3);
    v8 = *(_DWORD *)(result + 16);
    *(_BYTE *)(result + 32) = 0;
    ++*(_DWORD *)(result + 20);
    *(_DWORD *)(result + 16) = v5 + v8 - v7;
  }
  *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 3) = v5;
  *((_BYTE *)a1 + 16) = a2 != 0;
  if ( a2 )
    *(_BYTE *)(a2 + 32) = 1;
  return result;
}

