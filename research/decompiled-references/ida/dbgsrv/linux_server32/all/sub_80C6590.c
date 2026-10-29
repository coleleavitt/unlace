/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C6590
// Address: 0x080C6590

//----- (080C6590) --------------------------------------------------------
int __cdecl sub_80C6590(int a1, unsigned int *a2)
{
  int v3; // eax
  char v4; // dl
  char *v5; // eax
  char v6; // dl
  char *v7; // eax
  int v8; // edi
  int v9; // ebp
  char v10; // dl
  char *v11; // eax
  char v12; // dl
  char *v13; // eax
  char v14; // dl
  char *v15; // eax
  char v16; // dl
  char *v17; // eax
  char v18; // dl
  char *v19; // eax
  int v20; // eax
  char v21; // dl
  char *v22; // eax
  char v23; // dl
  char *v24; // eax
  char v25; // dl
  char *v26; // eax
  __int64 v27; // rax

  *(_DWORD *)a1 = sub_80CE010(a2, a2[1]) - 1;
  *(_DWORD *)(a1 + 4) = sub_80CE010(a2, a2[1]) - 1;
  *(_DWORD *)(a1 + 8) = sub_80CE010(a2, a2[1]) - 1;
  *(_WORD *)(a1 + 12) = sub_80CDE30(a2, a2[1]);
  *(_WORD *)(a1 + 14) = sub_80CDE30(a2, a2[1]);
  v3 = sub_80CDEC0(a2, a2[1]);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = v3;
  v5 = (char *)*a2;
  if ( *a2 < a2[1] )
    v4 = *v5++;
  *a2 = (unsigned int)v5;
  *(_BYTE *)(a1 + 20) = v4;
  v6 = 0;
  v7 = (char *)*a2;
  if ( *a2 < a2[1] )
    v6 = *v7++;
  *a2 = (unsigned int)v7;
  v8 = a1 + 24;
  v9 = 0;
  *(_BYTE *)(a1 + 21) = v6;
  *(_WORD *)(a1 + 22) = sub_80CDE30(a2, a2[1]);
  do
  {
    v10 = 0;
    *(_BYTE *)v8 = v9;
    v11 = (char *)*a2;
    if ( *a2 < a2[1] )
      v10 = *v11++;
    *a2 = (unsigned int)v11;
    *(_BYTE *)(v8 + 1) = v10;
    v12 = 0;
    v13 = (char *)*a2;
    if ( *a2 < a2[1] )
      v12 = *v13++;
    *a2 = (unsigned int)v13;
    *(_BYTE *)(v8 + 2) = v12;
    v14 = 0;
    v15 = (char *)*a2;
    if ( *a2 < a2[1] )
      v14 = *v15++;
    *a2 = (unsigned int)v15;
    *(_BYTE *)(v8 + 3) = v14;
    v16 = 0;
    v17 = (char *)*a2;
    if ( *a2 < a2[1] )
      v16 = *v17++;
    *a2 = (unsigned int)v17;
    *(_BYTE *)(v8 + 4) = v16;
    v18 = 0;
    v19 = (char *)*a2;
    if ( *a2 < a2[1] )
      v18 = *v19++;
    *a2 = (unsigned int)v19;
    *(_BYTE *)(v8 + 5) = v18;
    *(_WORD *)(v8 + 6) = sub_80CDE30(a2, a2[1]);
    *(_DWORD *)(v8 + 8) = sub_80CE010(a2, a2[1]) - 1;
    *(_DWORD *)(v8 + 12) = sub_80CE010(a2, a2[1]) - 1;
    v20 = sub_80CE010(a2, a2[1]);
    v21 = 0;
    *(_DWORD *)(v8 + 16) = v20 - 1;
    v22 = (char *)*a2;
    if ( *a2 < a2[1] )
      v21 = *v22++;
    *a2 = (unsigned int)v22;
    *(_BYTE *)(v8 + 20) = v21;
    v23 = 0;
    v24 = (char *)*a2;
    if ( *a2 < a2[1] )
      v23 = *v24++;
    *a2 = (unsigned int)v24;
    *(_BYTE *)(v8 + 21) = v23;
    v25 = 0;
    v26 = (char *)*a2;
    if ( *a2 < a2[1] )
      v25 = *v26++;
    *a2 = (unsigned int)v26;
    *(_BYTE *)(v8 + 22) = v25;
    v27 = *a2;
    if ( *a2 < a2[1] )
    {
      BYTE4(v27) = *(_BYTE *)v27;
      LODWORD(v27) = v27 + 1;
    }
    ++v9;
    *a2 = v27;
    v8 += 24;
    *(_BYTE *)(v8 - 1) = BYTE4(v27);
  }
  while ( v9 != 8 );
  return v27;
}
