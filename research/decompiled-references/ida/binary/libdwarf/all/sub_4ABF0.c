unsigned __int64 __fastcall sub_4ABF0(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, int a6, int a7)
{
  int v10; // edx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rdx
  _BYTE v16[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  dwarfstring_constructor_static(v16, qword_B9260, 200);
  if ( ((a6 ^ 1) & a7) != 0 )
  {
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_i(v16, "%3d ", a3);
    dwarfstring_append_printf_u(v16, "0x%08llx", *a5);
    dwarfstring_append_printf_u(v16, "/%01u", a5[7]);
    dwarfstring_append_printf_u(v16, " %5lu", a5[2]);
    dwarfstring_append_printf_u(v16, " %3u", *((unsigned __int16 *)a5 + 26));
    dwarfstring_append_printf_i(v16, "   %1d", *((_DWORD *)a5 + 9));
    v11 = "%1d\n";
    dwarfstring_append_printf_i(v16, "%1d\n", *((_DWORD *)a5 + 10));
  }
  else
  {
    if ( a7 | a6 )
    {
      dwarfstring_append_printf_s();
      dwarfstring_append_printf_i(v16, "%2d ", a3);
      dwarfstring_append_printf_u(v16, "0x%08llx ", *a5);
      dwarfstring_append_printf_u(v16, "%2lu   ", a5[1]);
      dwarfstring_append_printf_u(v16, "%4lu ", a5[2]);
      dwarfstring_append_printf_u(v16, "%2lu   ", a5[3]);
      dwarfstring_append_printf_i(v16, "%1d ", *((_DWORD *)a5 + 8));
      dwarfstring_append_printf_i(v16, "%1d ", *((_DWORD *)a5 + 9));
      dwarfstring_append_printf_i(v16, "%1d", *((_DWORD *)a5 + 10));
      v10 = *((_DWORD *)a5 + 11);
      if ( a5[8] || v10 || (a5[6] & 0xFFFFFFFFFFFFLL) != 0 )
      {
        dwarfstring_append_printf_i(v16, " %1d", v10);
        dwarfstring_append_printf_i(v16, " %1d", *((_DWORD *)a5 + 12));
        dwarfstring_append_printf_i(v16, " %1d", *((unsigned __int16 *)a5 + 26));
        dwarfstring_append_printf_u(v16, " 0x%llx", a5[8]);
      }
    }
    else
    {
      dwarfstring_append_printf_i(v16, "[%3d] ", a4);
      dwarfstring_append_printf_s();
      dwarfstring_append_printf_i(v16, "%3d ", a3);
      dwarfstring_append_printf_u(v16, "x%08llx", *a5);
      dwarfstring_append_printf_u(v16, "/%01u", a5[7]);
      dwarfstring_append_printf_u(v16, " %2lu ", a5[1]);
      dwarfstring_append_printf_u(v16, "%4lu  ", a5[2]);
      dwarfstring_append_printf_u(v16, "%1lu", a5[3]);
      v14 = a5[8];
      if ( v14 || *((_DWORD *)a5 + 11) || (a5[6] & 0xFFFFFFFFFFFFLL) != 0 || *((_DWORD *)a5 + 8) || a5[9] || a5[10] )
      {
        dwarfstring_append_printf_u(v16, "   x%02llx", v14);
        dwarfstring_append_printf_u(v16, "  x%02llx", a5[9]);
        dwarfstring_append_printf_u(v16, "  x%02llx", a5[10]);
        dwarfstring_append_printf_i(v16, "  %1d", *((_DWORD *)a5 + 8));
        dwarfstring_append_printf_i(v16, "%1d", *((unsigned __int16 *)a5 + 26));
        dwarfstring_append_printf_i(v16, "%1d", *((_DWORD *)a5 + 11));
        dwarfstring_append_printf_i(v16, "%1d", *((_DWORD *)a5 + 12));
      }
    }
    v11 = "\n";
    dwarfstring_append();
  }
  v12 = dwarfstring_string(v16, v11);
  _dwarf_printf(a1, v12);
  dwarfstring_destructor(v16);
  return v17 - __readfsqword(0x28u);
}

