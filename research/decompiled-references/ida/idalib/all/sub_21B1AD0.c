__int64 __fastcall sub_21B1AD0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  char v3; // al
  __int64 v4; // rdx
  unsigned __int32 v5; // eax
  int v6; // edx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
    v3 = *(_DWORD *)(a1 + 8) == 12;
  else
    v3 = v2();
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v5 = _byteswap_ulong(*(_DWORD *)(a2 + 8));
    if ( _byteswap_ulong(*(_DWORD *)(v4 + 20)) > v5 )
      return *(_QWORD *)(a1 + 72) + 18LL * v5;
  }
  else
  {
    v5 = _byteswap_ulong(*(_DWORD *)(a2 + 4));
    v6 = _byteswap_ulong(*(_DWORD *)(v4 + 12));
    if ( v6 >= 0 && v6 > v5 )
      return *(_QWORD *)(a1 + 72) + 18LL * v5;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
}
