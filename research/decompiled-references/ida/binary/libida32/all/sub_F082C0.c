__int64 __fastcall sub_F082C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( (*a2 & 0x200) == 0 )
  {
    if ( (result & 0x400) == 0 )
      return result;
    return sub_971800(*(_QWORD *)(a1 + 1096), " has_var");
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " has_init");
  result = *a2;
  if ( (*a2 & 0x400) != 0 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " has_var");
  return result;
}

