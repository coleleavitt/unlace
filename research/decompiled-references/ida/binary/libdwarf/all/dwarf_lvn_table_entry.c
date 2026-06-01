__int64 __fastcall dwarf_lvn_table_entry(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // rdi
  int v9; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( a1 > 0xB )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = qword_B7260[3 * a1];
  if ( a3 )
    *a3 = qword_B7260[3 * a1 + 1];
  if ( a5 )
    *a5 = qword_B7260[3 * a1 + 2];
  if ( a4 )
  {
    v9 = 0;
    v7 = qword_B7260[3 * a1];
    v10[0] = 0;
    dwarf_language_version_data(v7, &v9, v10, 3 * a1);
    *a4 = v10[0];
  }
  return 0;
}

