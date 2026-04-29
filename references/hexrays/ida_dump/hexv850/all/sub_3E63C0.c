__int64 __fastcall sub_3E63C0(__int64 a1, double a2)
{
  unsigned __int8 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rsi
  int v5; // edx

  v2 = (unsigned __int8 *)&unk_40DB40;
  LODWORD(result) = 8;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2;
    v5 = v2[14];
    if ( v2[14] )
      LODWORD(result) = (result + v5 - 1) & -v5;
    *(_DWORD *)(a1 + *(_QWORD *)v2) = result;
    result = (unsigned int)(v5 + result);
    if ( v4 == 504 )
      break;
    v2 += 16;
  }
  if ( (*(_BYTE *)(a1 + 488) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED3u, 504, a2);
    BUG();
  }
  return result;
}
