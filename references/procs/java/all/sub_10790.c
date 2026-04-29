__int64 __fastcall sub_10790(_QWORD *a1, unsigned __int16 a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  __int64 module_data; // rax

  if ( !a5 )
    return sub_10630(a1, a2, a3, a4);
  if ( (*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 150) & 0x8001) != 0 )
  {
    module_data = get_module_data((unsigned int)dword_2D4F4);
    if ( (unsigned __int8)sub_1B1A0(module_data, a2) )
      return sub_10630(a1, a2, 1u, 0x12u);
  }
  return sub_10000(a1, a2, 35);
}
