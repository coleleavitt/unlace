/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469828
// Address: 0x0000000000469828

//----- (0000000000469828) ----------------------------------------------------
__int64 __fastcall sub_469828(__int64 a1, int a2)
{
  const char *v4; // x21
  __int64 v5; // x24
  int v6; // w20
  unsigned int v7; // w20
  _BYTE v9[4]; // [xsp+48h] [xbp-1418h] BYREF
  int v10; // [xsp+4Ch] [xbp-1414h] BYREF
  unsigned __int16 v11; // [xsp+50h] [xbp-1410h]
  _BYTE v12[6]; // [xsp+52h] [xbp-140Eh] BYREF

  v4 = (const char *)(a1 + 8);
  v9[0] = 0;
  v5 = 0;
  v9[1] = 0;
  memset(&v10, 0, 0x1408u);
  if ( !a2 )
    v5 = *(_QWORD *)(a1 + 1136);
  v6 = *(_DWORD *)(a1 + 1144);
  sub_40A690((int)"Looking for GNU DWARF file at \"%s\"... ", v4);
  if ( (unsigned __int8)sub_490268(v4)
    && (unsigned __int8)sub_4697A0((__int64)v9, v4, v6)
    && (!v5 || v11 == *(unsigned __int16 *)(v5 + 8) && !memcmp(v12, (const void *)(v5 + 10), v11)) )
  {
    v7 = 1;
    sub_40A690((int)"found!\n");
  }
  else
  {
    v7 = 0;
    sub_40A690((int)"no.\n");
  }
  return v7;
}
