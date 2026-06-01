/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F970
// Address: 0x0044F970

//----- (0044F970) --------------------------------------------------------
DWORD __stdcall sub_44F970(int *lpThreadParameter)
{
  int v1; // eax
  int v2; // edi
  volatile signed __int32 *v3; // esi
  int (__stdcall *v4)(const CHAR *, const CHAR *, int, _DWORD *); // eax
  void (__stdcall *v5)(LPVOID); // eax
  const CHAR *v7; // [esp+18h] [ebp-14h]
  _DWORD v8[4]; // [esp+1Ch] [ebp-10h] BYREF
  const CHAR *lpThreadParametera; // [esp+34h] [ebp+8h]
  LPVOID lpThreadParameterb; // [esp+34h] [ebp+8h]
  LPVOID lpThreadParameterc; // [esp+34h] [ebp+8h]

  v1 = lpThreadParameter[1];
  if ( v1 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 4));
  v2 = *lpThreadParameter;
  v3 = (volatile signed __int32 *)lpThreadParameter[1];
  v8[3] = 0;
  if ( v3 )
  {
    if ( !_InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  sub_4627F2(lpThreadParameter);
  v8[0] = 0;
  if ( *(_DWORD *)(v2 + 28) )
    lpThreadParametera = *(const CHAR **)(v2 + 24);
  else
    lpThreadParametera = MultiByteStr;
  if ( *(_DWORD *)(v2 + 16) )
    v7 = *(const CHAR **)(v2 + 12);
  else
    v7 = MultiByteStr;
  v4 = (int (__stdcall *)(const CHAR *, const CHAR *, int, _DWORD *))dword_4B70E0;
  if ( !dword_4B70E0 )
  {
    v4 = (int (__stdcall *)(const CHAR *, const CHAR *, int, _DWORD *))sub_450400(-1, v2, 0);
    dword_4B70E0 = (int)v4;
  }
  lpThreadParameterb = (LPVOID)v4(v7, lpThreadParametera, v2 + 36, v8);
  WSASetLastError((int)lpThreadParameterb);
  sub_4562D0(*(LPCRITICAL_SECTION *)(v2 + 4));
  if ( *(_BYTE *)(v2 + 72) )
  {
    lpThreadParameterc = (LPVOID)v8[0];
    if ( v8[0] )
    {
      v5 = (void (__stdcall *)(LPVOID))dword_4B70E8;
      if ( !dword_4B70E8 )
      {
        v5 = (void (__stdcall *)(LPVOID))sub_450400(-1, v2, 2u);
        dword_4B70E8 = (int)v5;
      }
      v5(lpThreadParameterc);
      v8[0] = 0;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = lpThreadParameterb;
    *(_DWORD *)v2 = v8[0];
  }
  sub_4562F0(*(LPCRITICAL_SECTION *)(v2 + 4));
  sub_456350(*(HANDLE *)(v2 + 8));
  if ( v3 )
  {
    if ( !_InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 2) )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  return 0;
}
// 4B70E0: using guessed type int dword_4B70E0;
// 4B70E8: using guessed type int dword_4B70E8;
