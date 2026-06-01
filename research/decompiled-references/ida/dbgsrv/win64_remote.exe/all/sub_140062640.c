/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140062640
// Address: 0x0000000140062640

//----- (0000000140062640) ----------------------------------------------------
unsigned __int64 __fastcall sub_140062640(__int64 a1, unsigned __int64 *a2)
{
  char v4; // dl
  char *v5; // rcx
  unsigned __int64 v6; // rax
  char v7; // dl
  char *v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rdi
  char v12; // dl
  char *v13; // rcx
  unsigned __int64 v14; // rax
  char v15; // dl
  char *v16; // rcx
  unsigned __int64 v17; // rax
  char v18; // dl
  char *v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // dl
  char *v22; // rcx
  unsigned __int64 v23; // rax
  char v24; // dl
  char *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  char v28; // dl
  char *v29; // rcx
  unsigned __int64 v30; // rax
  char v31; // dl
  char *v32; // rcx
  unsigned __int64 v33; // rax
  char v34; // dl
  char *v35; // rcx
  unsigned __int64 v36; // rax
  char v37; // dl
  char *v38; // rcx
  unsigned __int64 result; // rax

  *(_QWORD *)a1 = sub_14005B7B0(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 8) = sub_14005B7B0(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 16) = sub_14005B7B0(a2, a2[1]) - 1;
  *(_WORD *)(a1 + 24) = sub_14005B7F0(a2, a2[1]);
  *(_WORD *)(a1 + 26) = sub_14005B7F0(a2, a2[1]);
  *(_DWORD *)(a1 + 28) = sub_14005B690(a2, a2[1]);
  v4 = 0;
  v5 = (char *)*a2;
  if ( *a2 < a2[1] )
    v4 = *v5;
  v6 = (unsigned __int64)(v5 + 1);
  if ( *a2 >= a2[1] )
    v6 = *a2;
  *a2 = v6;
  *(_BYTE *)(a1 + 32) = v4;
  v7 = 0;
  v8 = (char *)*a2;
  if ( *a2 < a2[1] )
    v7 = *v8;
  v9 = (unsigned __int64)(v8 + 1);
  if ( *a2 >= a2[1] )
    v9 = *a2;
  *a2 = v9;
  *(_BYTE *)(a1 + 33) = v7;
  v10 = 0;
  *(_WORD *)(a1 + 34) = sub_14005B7F0(a2, a2[1]);
  v11 = a1 + 41;
  do
  {
    *(_BYTE *)(v11 - 1) = v10;
    v12 = 0;
    v13 = (char *)*a2;
    if ( *a2 < a2[1] )
      v12 = *v13;
    v14 = (unsigned __int64)(v13 + 1);
    if ( *a2 >= a2[1] )
      v14 = *a2;
    *a2 = v14;
    *(_BYTE *)v11 = v12;
    v15 = 0;
    v16 = (char *)*a2;
    if ( *a2 < a2[1] )
      v15 = *v16;
    v17 = (unsigned __int64)(v16 + 1);
    if ( *a2 >= a2[1] )
      v17 = *a2;
    *a2 = v17;
    *(_BYTE *)(v11 + 1) = v15;
    v18 = 0;
    v19 = (char *)*a2;
    if ( *a2 < a2[1] )
      v18 = *v19;
    v20 = (unsigned __int64)(v19 + 1);
    if ( *a2 >= a2[1] )
      v20 = *a2;
    *a2 = v20;
    *(_BYTE *)(v11 + 2) = v18;
    v21 = 0;
    v22 = (char *)*a2;
    if ( *a2 < a2[1] )
      v21 = *v22;
    v23 = (unsigned __int64)(v22 + 1);
    if ( *a2 >= a2[1] )
      v23 = *a2;
    *a2 = v23;
    *(_BYTE *)(v11 + 3) = v21;
    v24 = 0;
    v25 = (char *)*a2;
    if ( *a2 < a2[1] )
      v24 = *v25;
    v26 = (unsigned __int64)(v25 + 1);
    if ( *a2 >= a2[1] )
      v26 = *a2;
    *a2 = v26;
    *(_BYTE *)(v11 + 4) = v24;
    *(_WORD *)(v11 + 5) = sub_14005B7F0(a2, a2[1]);
    *(_QWORD *)(v11 + 7) = sub_14005B7B0(a2, a2[1]) - 1;
    *(_QWORD *)(v11 + 15) = sub_14005B7B0(a2, a2[1]) - 1;
    v27 = sub_14005B7B0(a2, a2[1]);
    v28 = 0;
    *(_QWORD *)(v11 + 23) = v27 - 1;
    v29 = (char *)*a2;
    if ( *a2 < a2[1] )
      v28 = *v29;
    v30 = (unsigned __int64)(v29 + 1);
    if ( *a2 >= a2[1] )
      v30 = *a2;
    *a2 = v30;
    *(_BYTE *)(v11 + 31) = v28;
    v31 = 0;
    v32 = (char *)*a2;
    if ( *a2 < a2[1] )
      v31 = *v32;
    v33 = (unsigned __int64)(v32 + 1);
    if ( *a2 >= a2[1] )
      v33 = *a2;
    *a2 = v33;
    *(_BYTE *)(v11 + 32) = v31;
    v34 = 0;
    v35 = (char *)*a2;
    if ( *a2 < a2[1] )
      v34 = *v35;
    v36 = (unsigned __int64)(v35 + 1);
    if ( *a2 >= a2[1] )
      v36 = *a2;
    *a2 = v36;
    *(_BYTE *)(v11 + 33) = v34;
    v37 = 0;
    v38 = (char *)*a2;
    if ( *a2 < a2[1] )
      v37 = *v38;
    result = (unsigned __int64)(v38 + 1);
    if ( *a2 >= a2[1] )
      result = *a2;
    ++v10;
    *a2 = result;
    *(_BYTE *)(v11 + 34) = v37;
    v11 += 40;
  }
  while ( v10 < 8 );
  return result;
}
