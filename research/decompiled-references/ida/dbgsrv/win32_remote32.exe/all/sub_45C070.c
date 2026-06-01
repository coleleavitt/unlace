/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C070
// Address: 0x0045C070

//----- (0045C070) --------------------------------------------------------
void __usercall sub_45C070(int a1@<ebx>, int a2, int a3)
{
  char *v3; // eax
  __int16 v4; // ax
  char *v5; // [esp+Ch] [ebp-40h] BYREF
  int v6; // [esp+10h] [ebp-3Ch]
  int v7; // [esp+14h] [ebp-38h]
  int v8; // [esp+18h] [ebp-34h] BYREF
  int v9; // [esp+1Ch] [ebp-30h]
  int v10; // [esp+20h] [ebp-2Ch]
  int v11; // [esp+24h] [ebp-28h]
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+48h] [ebp-4h]

  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v14 = 0;
  if ( sub_45A700((int)&v5, (unsigned __int16 *)(a3 + 36), -1) )
  {
    v3 = (char *)MultiByteStr;
    if ( v6 )
      v3 = v5;
    sub_45A4D0((char *)(a2 + 16), v3, 260);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
  }
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)a3;
  sub_4536D0(a1, a3, &v8, *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28));
  v4 = v12;
  *(_WORD *)(a2 + 12) = v8 / 2 + 32 * (v9 + ((_WORD)v10 << 6));
  *(_WORD *)(a2 + 14) = v11 + 32 * (16 * v13 + v4 + 769);
  v14 = 1;
  if ( v5 )
  {
    v6 = 0;
    sub_453A20(v5);
  }
}
