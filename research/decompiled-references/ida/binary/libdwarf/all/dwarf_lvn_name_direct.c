__int64 __fastcall dwarf_lvn_name_direct(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v4 = qword_B7260;
  v8 = __readfsqword(0x28u);
  v7 = 0;
  while ( 1 )
  {
    if ( *v4 == a1 && v4[1] == a2 )
    {
      v5 = v4[2];
      if ( v5 )
        break;
    }
    v4 += 3;
    if ( v4 == (__int64 *)&off_B7380 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = v5;
  if ( a4 )
    dwarf_language_version_data(a1, &v7, a4, &off_B7380);
  return 0;
}

