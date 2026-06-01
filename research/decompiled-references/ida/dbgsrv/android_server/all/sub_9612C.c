/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9612C
// Address: 0x000000000009612C

//----- (000000000009612C) ----------------------------------------------------
__int64 __fastcall sub_9612C(__int64 a1, int a2)
{
  const char *v4; // x19
  __int64 v5; // x21
  int v6; // w20
  size_t v7; // x2
  unsigned int v8; // w19
  _WORD v10[2]; // [xsp+8h] [xbp-1448h] BYREF
  _WORD v11[3]; // [xsp+Ch] [xbp-1444h] BYREF
  _BYTE v12[5134]; // [xsp+12h] [xbp-143Eh] BYREF

  *(_QWORD *)&v12[5126] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10[0] = 0;
  memset(v11, 0, 0x1408u);
  v4 = (const char *)(a1 + 8);
  if ( a2 )
    v5 = 0;
  else
    v5 = *(_QWORD *)(a1 + 1136);
  v6 = *(_DWORD *)(a1 + 1144);
  sub_39FA0((__int64)"Looking for GNU DWARF file at \"%s\"... ", v4);
  if ( qfileexist(v4)
    && sub_8C510((__int64)v10, v4, v6)
    && (!v5 || (v7 = *(unsigned __int16 *)(v5 + 8), (_DWORD)v7 == v11[2]) && !memcmp(v12, (const void *)(v5 + 10), v7)) )
  {
    v8 = 1;
    sub_39FA0((__int64)"found!\n");
  }
  else
  {
    v8 = 0;
    sub_39FA0((__int64)"no.\n");
  }
  return v8;
}
