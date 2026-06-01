/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77090
// Address: 0x00077090

//----- (00077090) --------------------------------------------------------
int __cdecl sub_77090(int a1, int a2, unsigned int a3, unsigned int a4, int *a5, int a6, int a7)
{
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // edi
  int v10; // ecx
  int (__cdecl **v11)(int); // eax
  int v13; // edi

  v7 = dword_13B6A4;
  if ( dword_13B6A4 == -1 )
  {
    v7 = (unsigned __int8)qgetenv("IDA_IDB_BIN_SEARCH", 0);
    dword_13B6A4 = (unsigned __int8)v7;
  }
  v8 = 0;
  if ( !v7 )
  {
    sub_8A3F0(a1, "dbg_bin_search %a..%a\n", a3, a4);
    if ( a3 < a4 && a5[1] )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 200) )
      {
        v9 = operator new(0x104Cu);
        sub_77230(v9, a2, a1, a5, a6, a7);
        if ( (a6 & 0x10) != 0 )
        {
          v10 = 0;
          v11 = &off_1381E4;
        }
        else
        {
          v10 = 4096;
          v11 = &off_13823C;
        }
        *v9 = v11;
        v9[1042] = v10;
        v8 = ((int (__cdecl *)(_DWORD *, unsigned int, unsigned int))v11[2])(v9, a3, a4);
        if ( v8 == -7 )
        {
          v13 = v9[1034];
          v8 = -7;
          if ( v13 != -1 )
          {
            sub_8A3F0(a1, "dbg_bin_search failed to read memory at %a\n", v13);
            if ( a7 )
            {
              if ( *(_DWORD *)(a7 + 4) <= 1u )
                sub_1F400(a7, "Failed to read memory at %a\n", v13);
            }
          }
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
// 1381E4: using guessed type int (__cdecl *off_1381E4)(int);
// 13823C: using guessed type int (__cdecl *off_13823C)(int);
// 13B6A4: using guessed type int dword_13B6A4;
