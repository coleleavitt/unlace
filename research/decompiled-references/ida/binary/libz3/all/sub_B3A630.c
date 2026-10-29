__int64 __fastcall sub_B3A630(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // edi
  unsigned int v5; // edi
  __int64 v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (_DWORD *)(v2 + 16LL * v5);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = *v7;
  *(_DWORD *)(a1 + 40) = v7[1];
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v7[2];
  result = (unsigned int)v7[3];
  *(_DWORD *)(a1 + 56) = result;
  if ( v2 )
    *(_DWORD *)(v2 - 4) = v5;
  return result;
}

