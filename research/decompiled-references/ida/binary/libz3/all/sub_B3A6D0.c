__int64 __fastcall sub_B3A6D0(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  _DWORD *v5; // rsi
  __int64 v6; // rsi

  result = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v4 = *(_DWORD *)(result - 4) - a2;
    v5 = (_DWORD *)(result + 8LL * v4);
    if ( v3 )
      *(_DWORD *)(v3 - 4) = *v5;
    *(_DWORD *)(a1 + 40) = v5[1];
    *(_DWORD *)(result - 4) = v4;
  }
  else
  {
    v6 = (unsigned int)-a2;
    if ( v3 )
      *(_DWORD *)(v3 - 4) = *(_DWORD *)(8 * v6);
    result = *(unsigned int *)&byte_4[8 * v6];
    *(_DWORD *)(a1 + 40) = result;
  }
  return result;
}

