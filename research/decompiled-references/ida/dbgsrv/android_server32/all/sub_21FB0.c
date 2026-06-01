/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21FB0
// Address: 0x00021FB0

//----- (00021FB0) --------------------------------------------------------
int __fastcall sub_21FB0(_DWORD *a1)
{
  _DWORD *v2; // r4
  FILE *v3; // r0
  void *v4; // r0
  int v5; // r2
  int v6; // r2
  int v7; // r2
  void *v8; // r0
  unsigned int *v9; // r5
  _DWORD *v10; // r7
  int v11; // r4
  unsigned int v12; // r6
  void *v13; // r0
  void *v14; // r0
  _DWORD *v16; // [sp+8h] [bp-8h]

  v2 = a1 + 242;
  if ( a1[242] != -1 )
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 80))(a1, 0);
  *v2 = -1;
  *((_BYTE *)a1 + 976) = 0;
  a1[243] = -1;
  *((_BYTE *)a1 + 389) = 0;
  *((_BYTE *)a1 + 1021) = 0;
  *((_BYTE *)a1 + 1022) = 0;
  sub_25098((int)(a1 + 228), (_DWORD *)a1[229]);
  a1[228] = a1 + 229;
  a1[230] = 0;
  a1[229] = 0;
  sub_250CA((int)(a1 + 225), (_DWORD *)a1[226]);
  a1[225] = a1 + 226;
  a1[227] = 0;
  a1[226] = 0;
  sub_25078((int)(a1 + 222), (_DWORD *)a1[223]);
  a1[222] = a1 + 223;
  a1[224] = 0;
  a1[223] = 0;
  sub_1B72C(a1 + 14);
  v3 = (FILE *)a1[253];
  if ( v3 )
  {
    qfclose(v3);
    a1[253] = 0;
  }
  *((_BYTE *)a1 + 836) = 0;
  sub_1B450((int)(a1 + 56), (_DWORD *)a1[57]);
  a1[56] = a1 + 57;
  a1[58] = 0;
  a1[57] = 0;
  *((_WORD *)a1 + 489) = 0;
  v4 = (void *)a1[199];
  if ( v4 )
  {
    sub_1A0E8(v4);
    a1[199] = 0;
    sub_25112((int)&dword_DE2DC, (_DWORD *)dword_DE2E0);
    dword_DE2DC = (int)&dword_DE2E0;
    dword_DE2E0 = 0;
    dword_DE2E4 = 0;
  }
  v5 = a1[200];
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *, int, int, _DWORD *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v5,
      a1 + 201,
      *((unsigned __int8 *)a1 + 808));
  a1[200] = 0;
  *((_BYTE *)a1 + 808) = 0;
  v6 = a1[203];
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *, int, int, _DWORD *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v6,
      a1 + 204,
      *((unsigned __int8 *)a1 + 820));
  a1[203] = 0;
  *((_BYTE *)a1 + 820) = 0;
  v7 = a1[206];
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *, int, int, _DWORD *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v7,
      a1 + 207,
      *((unsigned __int8 *)a1 + 832));
  a1[206] = 0;
  *((_BYTE *)a1 + 832) = 0;
  a1[254] = 0;
  v8 = (void *)a1[256];
  if ( v8 )
  {
    a1[257] = 0;
    qfree(v8);
    a1[256] = 0;
    a1[258] = 0;
  }
  *((_BYTE *)a1 + 977) = 0;
  a1[260] = 0;
  v9 = a1 + 220;
  v16 = a1;
  if ( a1[220] )
  {
    v10 = a1 + 219;
    v11 = 0;
    v12 = 0;
    do
    {
      qfree(*(void **)(*v10 + v11));
      v11 += 4;
      ++v12;
    }
    while ( v12 < *v9 );
  }
  v13 = (void *)v16[216];
  if ( v13 )
  {
    v16[217] = 0;
    qfree(v13);
    v16[216] = 0;
    v16[218] = 0;
  }
  v14 = (void *)v16[219];
  if ( v14 )
  {
    *v9 = 0;
    qfree(v14);
    v16[219] = 0;
    v16[221] = 0;
  }
  return sub_64B94((int)v16);
}
// DE2DC: using guessed type int dword_DE2DC;
// DE2E0: using guessed type int dword_DE2E0;
// DE2E4: using guessed type int dword_DE2E4;
