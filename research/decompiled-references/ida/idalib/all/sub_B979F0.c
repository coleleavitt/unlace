bool __fastcall sub_B979F0(_QWORD *a1)
{
  unsigned __int8 v1; // dl
  bool result; // al
  __int64 v3; // rdx

  v1 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1) + 81);
  result = 1;
  if ( v1 >> 5 != 2 )
  {
    v3 = a1[5];
    result = 0;
    if ( (a1[5] & 7) == 6 )
      return (*(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1
          || ((*(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) - 2) & 0xFFFFFFFD) == 0;
  }
  return result;
}
