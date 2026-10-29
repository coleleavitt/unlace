/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BECC
// Address: 0x0008BECC

//----- (0008BECC) --------------------------------------------------------
void __fastcall sub_8BECC(_DWORD *a1, size_t a2, int a3, _BYTE *a4, size_t a5)
{
  _DWORD *v7; // r9
  int v8; // r7
  _BYTE *v10; // r0
  int v12; // r3
  size_t v13; // r2
  size_t v14; // r7
  _BYTE *v15; // r0
  _BYTE *v16; // r10
  _BYTE *v17; // r1
  bool v18; // zf
  _BYTE *v19; // r0
  size_t v20; // r6
  size_t v21; // r5
  size_t v22; // r3
  size_t v23[2]; // [sp+4h] [bp-8h] BYREF

  v7 = a1 + 2;
  v8 = a1[1];
  v10 = (_BYTE *)*a1;
  v12 = v8 - a2;
  v23[0] = a5 - a3 + v8;
  if ( v7 == (_DWORD *)v10 )
    v13 = 15;
  else
    v13 = a1[2];
  v14 = v12 - a3;
  v15 = sub_8BC90((int)a1, v23, v13, v12);
  v16 = v15;
  if ( a2 )
  {
    v17 = (_BYTE *)*a1;
    if ( a2 == 1 )
      *v15 = *v17;
    else
      memcpy(v15, v17, a2);
  }
  v18 = a4 == nullptr;
  if ( a4 )
    v18 = a5 == 0;
  if ( !v18 )
  {
    if ( a5 == 1 )
      v16[a2] = *a4;
    else
      memcpy(&v16[a2], a4, a5);
  }
  v19 = (_BYTE *)*a1;
  if ( v14 )
  {
    v20 = a5 + a2;
    v21 = a2 + a3;
    if ( v14 == 1 )
      v16[v20] = v19[v21];
    else
      memcpy(&v16[v20], &v19[v21], v14);
    v19 = (_BYTE *)*a1;
  }
  if ( v7 != (_DWORD *)v19 )
    sub_80648(v19);
  v22 = v23[0];
  *a1 = v16;
  a1[2] = v22;
}
