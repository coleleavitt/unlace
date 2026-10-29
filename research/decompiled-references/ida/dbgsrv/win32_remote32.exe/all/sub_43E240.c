/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E240
// Address: 0x0043E240

//----- (0043E240) --------------------------------------------------------
int __userpurge sub_43E240@<eax>(__m128i a1@<xmm0>, int a2, int a3, double a4, int a5, int a6, int a7)
{
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int result; // eax
  int v11; // esi
  double v12; // [esp-4h] [ebp-24h]
  double v13; // [esp-4h] [ebp-24h]
  double v14; // [esp+0h] [ebp-20h]

  v7 = dword_4B4700;
  if ( dword_4B4700 == -1 )
  {
    v7 = sub_4560B0("IDA_IDB_BIN_SEARCH", nullptr);
    dword_4B4700 = (unsigned __int8)v7;
  }
  if ( v7 )
    return 0;
  sub_43C900(a2, (int)"dbg_bin_search %a..%a\n", a4, v14);
  if ( LODWORD(a4) >= HIDWORD(a4) || !*(_DWORD *)(a5 + 4) || !*(_DWORD *)(a2 + 192) )
    return 0;
  if ( (a6 & 0x10) != 0 )
  {
    v8 = sub_4627C2(0x104Cu);
    v9 = a7;
    if ( v8 )
    {
      sub_43DE10(v8, a3, a2, a5, a6, a7);
      *v8 = &off_48DAC8;
      v8[1042] = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v8 = sub_4627C2(0x104Cu);
    v9 = a7;
    if ( v8 )
    {
      sub_43DE10(v8, a3, a2, a5, a6, a7);
      *v8 = &off_48DABC;
      v8[1042] = 4096;
      goto LABEL_13;
    }
  }
  v8 = nullptr;
LABEL_13:
  result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v8 + 4))(v8, LODWORD(a4), HIDWORD(a4));
  if ( result == -7 )
  {
    v11 = v8[1034];
    if ( v11 != -1 )
    {
      LODWORD(v12) = v11;
      sub_43C900(a2, (int)"dbg_bin_search failed to read memory at %a\n", v12);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 4) <= 1u )
        {
          LODWORD(v13) = v11;
          sub_402970(a1, (LPVOID *)v9, "Failed to read memory at %a\n", v13);
        }
      }
    }
    return -7;
  }
  return result;
}
// 43E29D: variable 'v14' is possibly undefined
// 43E388: variable 'v12' is possibly undefined
// 43E3A1: variable 'v13' is possibly undefined
// 48DABC: using guessed type _UNKNOWN *off_48DABC;
// 48DAC8: using guessed type _UNKNOWN *off_48DAC8;
// 4B4700: using guessed type int dword_4B4700;
