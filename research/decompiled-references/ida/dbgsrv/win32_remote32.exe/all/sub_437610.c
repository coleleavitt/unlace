/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437610
// Address: 0x00437610

//----- (00437610) --------------------------------------------------------
char __usercall sub_437610@<al>(int a1@<ebx>, CHAR *lpMultiByteStr, int a3)
{
  const CHAR *v3; // eax
  int v4; // ecx
  const CHAR *v5; // esi
  void *v6; // eax
  int v7; // ecx
  char *v8; // eax
  _BYTE *v9; // eax
  void *v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  unsigned int v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+20h] [ebp-4h]
  int v15; // [esp+24h] [ebp+0h] BYREF
  char v16[272]; // [esp+28h] [ebp+4h] BYREF
  int v17; // [esp+138h] [ebp+114h]
  CHAR MultiByteStr[260]; // [esp+24Ch] [ebp+228h] BYREF
  int v19; // [esp+350h] [ebp+32Ch] BYREF

  if ( sub_457B00(lpMultiByteStr) )
    return 1;
  MultiByteStr[0] = 0;
  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    v3 = sub_456590(lpMultiByteStr);
    v4 = v12;
    v5 = v3;
    if ( v12 + 1 <= v13 )
    {
      v6 = v11;
    }
    else
    {
      v6 = sub_453B00((int)&v11, v11, v12 + 1, 4u);
      v4 = v12;
      v11 = v6;
    }
    *((_DWORD *)v6 + v4) = v5;
    v7 = ++v12;
    if ( v5 == lpMultiByteStr )
      break;
    *((_BYTE *)v5 - 1) = 0;
    if ( sub_457BA0(lpMultiByteStr) )
    {
      sub_45ACB0((unsigned int)MultiByteStr, lpMultiByteStr, 260);
      v7 = v12;
      break;
    }
  }
  if ( !v7 )
  {
LABEL_17:
    sub_45ACB0((unsigned int)lpMultiByteStr, MultiByteStr, a3);
    v14 = 5;
    if ( v11 )
    {
      v12 = 0;
      sub_453A20(v11);
    }
    return 1;
  }
  while ( 1 )
  {
    v8 = *((char **)v11 + v7 - 1);
    if ( v7 )
      v12 = v7 - 1;
    if ( MultiByteStr[0] )
      sub_4569C0(MultiByteStr, 260, MultiByteStr, v8, 0);
    else
      sub_45ACB0((unsigned int)MultiByteStr, v8, 260);
    v17 = 0;
    LOBYTE(v14) = 1;
    if ( sub_45C230(a1, (int)lpMultiByteStr, MultiByteStr, (int)&v15, v12 != 0 ? 0x10 : 0) )
      break;
    v9 = sub_456590(MultiByteStr);
    sub_45ACB0((unsigned int)v9, v16, (char *)&v19 - v9);
    LOBYTE(v14) = 4;
    sub_45C180((int)&v15);
    v7 = v12;
    LOBYTE(v14) = 0;
    if ( !v12 )
      goto LABEL_17;
  }
  LOBYTE(v14) = 2;
  sub_45C180((int)&v15);
  v14 = 3;
  if ( v11 )
  {
    v12 = 0;
    sub_453A20(v11);
  }
  return 0;
}
