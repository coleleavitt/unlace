/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478BF0
// Address: 0x0000000000478BF0

//----- (0000000000478BF0) ----------------------------------------------------
char *__fastcall sub_478BF0(__int64 a1, unsigned __int64 *a2)
{
  int v3; // eax
  char v4; // dl
  char *v5; // rax
  char v6; // dl
  char *v7; // rax
  __int64 v8; // rbp
  int v9; // r12d
  char v10; // dl
  char *v11; // rax
  char v12; // dl
  char *v13; // rax
  char v14; // dl
  char *v15; // rax
  char v16; // dl
  char *v17; // rax
  char v18; // dl
  char *v19; // rax
  __int64 v20; // rax
  char v21; // dl
  char *v22; // rax
  char v23; // dl
  char *v24; // rax
  char v25; // dl
  char *v26; // rax
  char v27; // dl
  char *result; // rax

  *(_QWORD *)a1 = sub_47FE70(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 8) = sub_47FE70(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 16) = sub_47FE70(a2, a2[1]) - 1;
  *(_WORD *)(a1 + 24) = sub_47FCC0(a2, a2[1]);
  *(_WORD *)(a1 + 26) = sub_47FCC0(a2, a2[1]);
  v3 = sub_47FD50(a2, a2[1]);
  v4 = 0;
  *(_DWORD *)(a1 + 28) = v3;
  v5 = (char *)*a2;
  if ( *a2 < a2[1] )
    v4 = *v5++;
  *a2 = (unsigned __int64)v5;
  *(_BYTE *)(a1 + 32) = v4;
  v6 = 0;
  v7 = (char *)*a2;
  if ( *a2 < a2[1] )
    v6 = *v7++;
  *a2 = (unsigned __int64)v7;
  v8 = a1 + 40;
  v9 = 0;
  *(_BYTE *)(a1 + 33) = v6;
  *(_WORD *)(a1 + 34) = sub_47FCC0(a2, a2[1]);
  do
  {
    *(_BYTE *)v8 = v9;
    v10 = 0;
    v11 = (char *)*a2;
    if ( *a2 < a2[1] )
      v10 = *v11++;
    *a2 = (unsigned __int64)v11;
    *(_BYTE *)(v8 + 1) = v10;
    v12 = 0;
    v13 = (char *)*a2;
    if ( *a2 < a2[1] )
      v12 = *v13++;
    *a2 = (unsigned __int64)v13;
    *(_BYTE *)(v8 + 2) = v12;
    v14 = 0;
    v15 = (char *)*a2;
    if ( *a2 < a2[1] )
      v14 = *v15++;
    *a2 = (unsigned __int64)v15;
    *(_BYTE *)(v8 + 3) = v14;
    v16 = 0;
    v17 = (char *)*a2;
    if ( *a2 < a2[1] )
      v16 = *v17++;
    *a2 = (unsigned __int64)v17;
    *(_BYTE *)(v8 + 4) = v16;
    v18 = 0;
    v19 = (char *)*a2;
    if ( *a2 < a2[1] )
      v18 = *v19++;
    *a2 = (unsigned __int64)v19;
    *(_BYTE *)(v8 + 5) = v18;
    *(_WORD *)(v8 + 6) = sub_47FCC0(a2, a2[1]);
    *(_QWORD *)(v8 + 8) = sub_47FE70(a2, a2[1]) - 1;
    *(_QWORD *)(v8 + 16) = sub_47FE70(a2, a2[1]) - 1;
    v20 = sub_47FE70(a2, a2[1]);
    v21 = 0;
    *(_QWORD *)(v8 + 24) = v20 - 1;
    v22 = (char *)*a2;
    if ( *a2 < a2[1] )
      v21 = *v22++;
    *a2 = (unsigned __int64)v22;
    *(_BYTE *)(v8 + 32) = v21;
    v23 = 0;
    v24 = (char *)*a2;
    if ( *a2 < a2[1] )
      v23 = *v24++;
    *a2 = (unsigned __int64)v24;
    *(_BYTE *)(v8 + 33) = v23;
    v25 = 0;
    v26 = (char *)*a2;
    if ( *a2 < a2[1] )
      v25 = *v26++;
    *a2 = (unsigned __int64)v26;
    *(_BYTE *)(v8 + 34) = v25;
    v27 = 0;
    result = (char *)*a2;
    if ( *a2 < a2[1] )
      v27 = *result++;
    ++v9;
    *a2 = (unsigned __int64)result;
    v8 += 40;
    *(_BYTE *)(v8 - 5) = v27;
  }
  while ( v9 != 8 );
  return result;
}
