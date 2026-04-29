bool __fastcall sub_80210(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v4; // dl
  int v5; // edx
  bool result; // al

  v4 = *(_BYTE *)(a2 + 1);
  if ( v4 == 1 )
    return *(_WORD *)(a2 + 6) <= 0xFu || (unsigned __int16)(*(_WORD *)(a2 + 6) - 129) <= 0x20u;
  if ( v4 != 4 )
    return 0;
  v5 = *(unsigned __int16 *)(a2 + 6);
  result = v5 == 161 || v5 == 13;
  if ( !result )
    return sub_301E0(*(_QWORD *)(a1 + 8), a4, v5);
  return result;
}
