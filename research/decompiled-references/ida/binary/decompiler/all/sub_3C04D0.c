__int64 __fastcall sub_3C04D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  const char *v11; // rsi
  unsigned int v12; // r13d

  if ( (unsigned __int8)get_tinfo_details() )
  {
    v11 = s1;
    if ( *(_QWORD *)(a2 + 8) )
      v11 = *(const char **)a2;
    v12 = sub_3C0390(a3, v11, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), a4);
  }
  else
  {
    if ( !a4 )
      sub_2B1D90((unsigned int)"AUTOHIDE NONE\nIncorrect function type", 12, v7, v8, v9, v10);
    v12 = 0;
  }
  cleanup_argloc();
  clear_tinfo_t();
  return v12;
}
