__int64 __fastcall sub_21B2C70(__int64 a1)
{
  __int64 (*v1)(void); // rax
  char v2; // al
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 == (char *)sub_21B1110 )
    v2 = *(_DWORD *)(a1 + 8) == 12;
  else
    v2 = v1();
  v3 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    return _byteswap_ulong(*(_DWORD *)(v3 + 20));
  result = _byteswap_ulong(*(_DWORD *)(v3 + 12));
  if ( (int)result < 0 )
    return 0;
  return result;
}
