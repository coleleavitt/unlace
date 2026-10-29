/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_445B60
// Address: 0x00445B60

//----- (00445B60) --------------------------------------------------------
bool __usercall sub_445B60@<al>(__m128i a1@<xmm0>, _BYTE *a2, int a3)
{
  bool v3; // bl
  int v4; // esi
  int v5; // ecx
  _BYTE *v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  bool v9; // cc
  void *v10; // esi
  unsigned int v11; // eax
  _BYTE *v12; // eax
  bool v13; // zf
  char v14; // cl
  __m128i v16; // [esp-4h] [ebp-5Ch]
  void *v17; // [esp+10h] [ebp-48h] BYREF
  int v18; // [esp+14h] [ebp-44h]
  int v19; // [esp+18h] [ebp-40h]
  _DWORD v20[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  char v21; // [esp+28h] [ebp-30h]
  void *v22; // [esp+2Ch] [ebp-2Ch]
  unsigned int v23; // [esp+30h] [ebp-28h]
  int v24; // [esp+34h] [ebp-24h]
  char *v25; // [esp+38h] [ebp-20h]
  unsigned int v26; // [esp+3Ch] [ebp-1Ch]
  int v27; // [esp+40h] [ebp-18h]
  _BYTE *v28; // [esp+44h] [ebp-14h]
  char v29; // [esp+4Bh] [ebp-Dh]
  int v30; // [esp+54h] [ebp-4h]
  int (__stdcall **v31)(int, int); // [esp+58h] [ebp+0h] BYREF
  void *v32; // [esp+5Ch] [ebp+4h]
  int v33; // [esp+60h] [ebp+8h]
  int v34; // [esp+64h] [ebp+Ch]
  int v35; // [esp+90h] [ebp+38h]
  unsigned __int16 v36; // [esp+94h] [ebp+3Ch]
  unsigned __int16 v37; // [esp+96h] [ebp+3Eh]
  unsigned __int16 v38; // [esp+A4h] [ebp+4Ch]
  int v39; // [esp+294h] [ebp+23Ch]

  v3 = 0;
  v28 = a2;
  v31 = &off_48A4F0;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v30 = 0;
  if ( !sub_415880((int)&v31, a1, a3, 1, 1) )
    goto LABEL_45;
  v4 = -1;
  if ( v36 <= 0x266u )
  {
    if ( v36 != 614 )
    {
      switch ( v36 )
      {
        case 0x14Cu:
        case 0x14Du:
        case 0x14Eu:
          goto LABEL_5;
        case 0x162u:
        case 0x163u:
        case 0x166u:
        case 0x168u:
        case 0x169u:
          goto LABEL_16;
        case 0x184u:
          v4 = 24;
          break;
        case 0x1A2u:
        case 0x1A3u:
        case 0x1A4u:
        case 0x1A6u:
        case 0x1A8u:
          v4 = 18;
          break;
        case 0x1C0u:
        case 0x1C2u:
        case 0x1C4u:
          goto LABEL_20;
        case 0x1F0u:
        case 0x1F1u:
        case 0x1F2u:
          v4 = 15;
          break;
        case 0x200u:
          v4 = 31;
          break;
        default:
          goto LABEL_26;
      }
      goto LABEL_26;
    }
LABEL_16:
    v4 = 12;
    goto LABEL_26;
  }
  if ( v36 > 0xA00u )
  {
    switch ( v36 )
    {
      case 0xEBCu:
        v4 = 57;
        break;
      case 0x8664u:
LABEL_5:
        v4 = 0;
        break;
      case 0x9041u:
        v4 = 37;
        break;
    }
    goto LABEL_26;
  }
  if ( v36 == 2560 )
  {
LABEL_20:
    v4 = 13;
    goto LABEL_26;
  }
  if ( v36 > 0x466u )
  {
    if ( v36 == 1312 )
      v4 = 27;
    goto LABEL_26;
  }
  switch ( v36 )
  {
    case 0x466u:
      goto LABEL_16;
    case 0x268u:
      v4 = 7;
      break;
    case 0x366u:
      goto LABEL_16;
  }
LABEL_26:
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v16.m128i_i32[0] = a3;
  LOBYTE(v30) = 1;
  sub_4467F0((int)&v31, (int)&v17, v16);
  v20[0] = &off_48DF04;
  v20[1] = a3;
  v20[2] = &v17;
  v21 = 0;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  LOBYTE(v30) = 2;
  if ( v35 == 23126 )
    v5 = v39 + 40;
  else
    v5 = v39 + v38 + 24;
  sub_415290((int)&v31, 0, a3, v5, v37, (int)v20);
  v6 = v28;
  v7 = v26;
  v29 = v21;
  if ( v26 > 1 )
  {
    sub_45ACB0((unsigned int)(v28 + 1034), v25, 260);
    v7 = v26;
    v6 = v28;
  }
  else
  {
    v28[1034] = 0;
  }
  v8 = v23;
  v9 = v23 <= 0x400;
  *((_DWORD *)v6 + 1) = v4;
  v10 = v22;
  v11 = v8;
  if ( !v9 )
    v11 = 1024;
  *((_WORD *)v6 + 4) = v11;
  sub_464310((unsigned int)(v6 + 10), (unsigned int)v10, v11);
  v12 = v28;
  v13 = v21 == 0;
  v14 = v29;
  *v28 = 0;
  v12[1] = v14;
  v3 = !v13 || v8 || v7 > 1;
  LOBYTE(v30) = 3;
  if ( v25 )
  {
    v26 = 0;
    sub_453A20(v25);
    v10 = v22;
    v25 = nullptr;
    v27 = 0;
  }
  LOBYTE(v30) = 4;
  if ( v10 )
  {
    v23 = 0;
    sub_453A20(v10);
    v22 = nullptr;
    v24 = 0;
  }
  v20[0] = &off_48A4D8;
  LOBYTE(v30) = 5;
  if ( v17 )
  {
    v18 = 0;
    sub_453A20(v17);
  }
LABEL_45:
  v31 = &off_48A4F0;
  v30 = 6;
  if ( v32 )
  {
    v33 = 0;
    sub_453A20(v32);
  }
  return v3;
}
// 445CB8: variable 'v16' is possibly undefined
// 48A4D8: using guessed type int (__stdcall *off_48A4D8)(int, int, int);
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
// 48DF04: using guessed type int (__stdcall *off_48DF04)(int, int, int);
