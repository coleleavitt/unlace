__int64 __fastcall sub_1A86BC0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // edx
  _DWORD v7[9]; // [rsp+4h] [rbp-24h] BYREF

  v4 = sub_16CA900(a2);
  v5 = 0;
  if ( v4 == 2 )
  {
    v5 = sub_16C5740(*(_DWORD *)(a2 + 48), *(_DWORD *)(a2 + 52), 0, 1, (__int64)v7);
    if ( (_BYTE)v5 )
      *a3 = v7[0];
  }
  return v5;
}
