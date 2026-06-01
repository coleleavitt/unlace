/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448760
// Address: 0x00448760

//----- (00448760) --------------------------------------------------------
int __userpurge sub_448760@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3)
{
  int v4; // ebx
  int v5; // edi
  const CHAR *v6; // esi
  unsigned int v7; // eax
  int v8; // edx
  __int8 *v9; // ecx
  unsigned int v10; // esi
  bool v11; // cf
  unsigned __int8 v12; // bl
  const char *v13; // eax
  __int16 v15; // [esp+Ch] [ebp-514h] BYREF
  __m128i v16[80]; // [esp+10h] [ebp-510h] BYREF

  v15 = 0;
  sub_464890(v16, 0, 0x50Cu);
  v4 = *(_DWORD *)(a1 + 1084);
  if ( a3 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(a1 + 1080);
  v6 = (const CHAR *)(a1 + 4);
  sub_402760("Looking for GNU DWARF file at \"%s\"... ");
  if ( !sub_457B00(v6) || !sub_442380(v4, v5, a2, &v15, v6, v4) )
    goto LABEL_20;
  if ( !v5 )
    goto LABEL_19;
  v7 = *(unsigned __int16 *)(v5 + 8);
  if ( (_WORD)v7 != v16[0].m128i_i16[2] )
    goto LABEL_20;
  v8 = v5 + 10;
  v9 = &v16[0].m128i_i8[6];
  v10 = v7 - 4;
  if ( v7 < 4 )
  {
LABEL_11:
    if ( v10 != -4 )
      goto LABEL_12;
LABEL_19:
    v12 = 1;
    goto LABEL_21;
  }
  while ( *(_DWORD *)v9 == *(_DWORD *)v8 )
  {
    v9 += 4;
    v8 += 4;
    v11 = v10 < 4;
    v10 -= 4;
    if ( v11 )
      goto LABEL_11;
  }
LABEL_12:
  if ( *v9 == *(_BYTE *)v8
    && (v10 == -3
     || v9[1] == *(_BYTE *)(v8 + 1)
     && (v10 == -2 || v9[2] == *(_BYTE *)(v8 + 2) && (v10 == -1 || v9[3] == *(_BYTE *)(v8 + 3)))) )
  {
    goto LABEL_19;
  }
LABEL_20:
  v12 = 0;
LABEL_21:
  v13 = "found!\n";
  if ( !v12 )
    v13 = "no.\n";
  sub_402760(v13);
  return v12;
}
