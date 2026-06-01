/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422D00
// Address: 0x00422D00

//----- (00422D00) --------------------------------------------------------
int __thiscall sub_422D00(char *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  char *v6; // esi
  char *v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  _BYTE *v10; // eax
  bool v11; // zf
  char *v13; // [esp-4h] [ebp-34h]
  char v14[8]; // [esp+Ch] [ebp-24h] BYREF
  __int128 v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+2Ch] [ebp-4h]
  int v17; // [esp+38h] [ebp+8h]

  if ( !a4 )
    return a2;
  v5 = a5 - (a3 - a2);
  v17 = a3 - a2;
  if ( v5 >= 0 && v5 < a5 )
  {
    v6 = this + 12;
    v7 = (char *)(a4 + 24 * v5);
    do
    {
      v13 = v7;
      v14[0] = 2;
      v7 += 24;
      v15 = 0;
      sub_423670(v14, v13);
      v8 = *((_DWORD *)v6 + 1) + 1;
      v16 = 0;
      if ( v8 > *((_DWORD *)v6 + 2) )
        *(_DWORD *)v6 = sub_453B00((int)v6, *(void **)v6, v8, 0x18u);
      v9 = 3 * *((_DWORD *)v6 + 1);
      v10 = *(_BYTE **)v6;
      v10[8 * v9] = 2;
      *(_OWORD *)&v10[8 * v9 + 8] = 0;
      sub_423670(&v10[8 * v9], v14);
      ++*((_DWORD *)v6 + 1);
      v16 = 2;
      sub_423B70((int)v14);
      v11 = v17-- == 1;
      v16 = -1;
    }
    while ( !v11 );
  }
  return a3;
}
