__int64 __fastcall CoinModelLink::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm0_8
  int v4; // edx

  result = a1;
  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v4 = *(_DWORD *)(a2 + 4);
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 4) = v4;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  }
  return result;
}

