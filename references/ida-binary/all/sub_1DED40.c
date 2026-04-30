bool __fastcall sub_1DED40(__int64 a1)
{
  bool result; // al
  __int64 custom_data_format; // rax

  if ( !a1 || dword_8CC5F0 >= 0 || (*(_BYTE *)(a1 + 36) & 2) != 0 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(a1 + 40) != -1 )
  {
    custom_data_format = get_custom_data_format();
    return custom_data_format && *(_QWORD *)(custom_data_format + 72) != 0;
  }
  return result;
}
