__int64 __fastcall sub_C1750(_QWORD *a1)
{
  __int64 v2; // rax

  if ( !dword_2530D8 || !get_module_data() )
    return sub_BD8E0(&qword_2515F0, a1);
  v2 = sub_B7CA0();
  return sub_BD8E0((__int64 *)(v2 + 8), a1);
}

