__int64 __fastcall sub_B72C70(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x18 )
    return 0;
  v1 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( v1 )
    {
      result = sub_B8C660(a1);
      goto LABEL_5;
    }
    return 0;
  }
  if ( !v1 )
    return 0;
  result = *(_QWORD *)(a1 - 8);
LABEL_5:
  if ( !result )
    return 0;
  v3 = 1LL << *(_DWORD *)(result + 36);
  if ( (v3 & 0x143) != 0 )
    return 0;
  if ( (v3 & 0x80) != 0 )
    return *(_QWORD *)(result + 40);
  return result;
}
