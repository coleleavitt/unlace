/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FA20
// Address: 0x0043FA20

//----- (0043FA20) --------------------------------------------------------
char __usercall sub_43FA20@<al>(char a1@<bl>, __m128i a2@<xmm0>, int a3)
{
  _DWORD *v3; // esi
  const CHAR *v4; // esi
  int *v5; // eax
  char v6; // bl
  bool v7; // al
  __m128i v9; // [esp-4h] [ebp-44h]
  _DWORD v10[3]; // [esp+14h] [ebp-2Ch] BYREF
  char v11; // [esp+20h] [ebp-20h]
  void *v12; // [esp+24h] [ebp-1Ch] BYREF
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int *v15; // [esp+30h] [ebp-10h]
  int v16; // [esp+3Ch] [ebp-4h]
  int (__stdcall **v17)(int, int); // [esp+40h] [ebp+0h] BYREF
  void *v18; // [esp+44h] [ebp+4h]
  int v19; // [esp+48h] [ebp+8h]
  int v20; // [esp+4Ch] [ebp+Ch]
  _WORD v21[262]; // [esp+78h] [ebp+38h] BYREF

  v3 = *(_DWORD **)a3;
  if ( !*(_DWORD *)a3 || v3[1] != 1 )
  {
    sub_402760("Input source is not local file.\n");
    return 0;
  }
  if ( v3[3] )
    v4 = (const CHAR *)v3[2];
  else
    v4 = MultiByteStr;
  v5 = sub_45C5A0(a1, a3, a2, v4, 0);
  v15 = v5;
  if ( !v5 )
  {
    sub_402760("Cannot open file: %s.\n");
    return 0;
  }
  v16 = 1;
  v17 = &off_48A4F0;
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  if ( sub_415880((int)&v17, a2, (int)v5, 1, 1) )
  {
    sub_446770(a3 + 52);
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    v9.m128i_i32[0] = (__int32)v15;
    LOBYTE(v16) = 4;
    sub_4467F0((int)&v17, (int)&v12, v9);
    v10[0] = &off_48DE08;
    v10[1] = a3;
    v10[2] = &v12;
    v11 = 0;
    LOBYTE(v16) = 5;
    sub_415250((int)&v17, a1, (int)v15, (int)v10);
    v7 = sub_414360(v21);
    v6 = v11;
    *(_BYTE *)(a3 + 96) = v7;
    *(_BYTE *)(a3 + 97) = v21[11] < 0;
    v10[0] = &off_48A4D8;
    LOBYTE(v16) = 6;
    if ( v12 )
    {
      v13 = 0;
      sub_453A20(v12);
      v12 = nullptr;
      v14 = 0;
    }
  }
  else
  {
    sub_402760("Failed to read PE header from: %s\n");
    v6 = 0;
  }
  v17 = &off_48A4F0;
  LOBYTE(v16) = 7;
  if ( v18 )
  {
    v19 = 0;
    sub_453A20(v18);
    v18 = nullptr;
    v20 = 0;
  }
  v16 = 8;
  sub_45C550(v6, a3, v15);
  return v6;
}
// 43FB23: variable 'v9' is possibly undefined
// 48A4D8: using guessed type int (__stdcall *off_48A4D8)(int, int, int);
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
// 48DE08: using guessed type int (__stdcall *off_48DE08)(int, int, int);
