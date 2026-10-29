__int64 __fastcall sub_5718C0(__int64 a1, int a2)
{
  _WORD v3[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( (int)get_custom_data_type_ids(v3, a1) > 0
    && (unsigned __int8)is_attached_custom_data_format(v3[0], (unsigned int)(__int16)v3[a2 + 1]) )
  {
    return get_custom_data_format((unsigned int)(__int16)v3[a2 + 1]);
  }
  else
  {
    return 0;
  }
}
