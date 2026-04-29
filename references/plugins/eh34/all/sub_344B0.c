__int64 __fastcall sub_344B0(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  char v5; // dl
  __int64 v6; // rax
  unsigned int v8; // edx

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v5 = hexdsp(205, a1 + 680, (unsigned int)a2);
  v6 = *(_QWORD *)(a1 + 696) + 8LL * (int)a2;
  if ( v5 )
  {
    *(_DWORD *)v6 = a3;
    *(_BYTE *)(v6 + 4) = 1;
    return *(unsigned int *)(*(_QWORD *)(a1 + 608) + 4LL * (int)a2);
  }
  else
  {
    if ( !*(_BYTE *)(v6 + 4) )
      sub_7964();
    v8 = *(_DWORD *)v6;
    *(_BYTE *)(v6 + 4) = 1;
    *(_DWORD *)v6 = a3;
    return v8;
  }
}
