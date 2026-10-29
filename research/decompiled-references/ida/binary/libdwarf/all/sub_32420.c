__int64 __fastcall sub_32420(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( a2 - (unsigned __int64)a3 < *(_QWORD *)(a1 + 152) )
    return dwarfstring_append();
  dwarfstring_append_printf_u(a4, "/ERROR<corrupt include directory index %u unusable,", a2);
  return dwarfstring_append_printf_u(a4, " only %u directories present>", *(_QWORD *)(a1 + 152));
}

