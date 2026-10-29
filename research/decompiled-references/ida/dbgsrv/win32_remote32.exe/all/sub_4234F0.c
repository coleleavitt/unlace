/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4234F0
// Address: 0x004234F0

//----- (004234F0) --------------------------------------------------------
void __thiscall sub_4234F0(char *this, char *a2)
{
  char *v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  char v6[8]; // [esp+8h] [ebp-24h] BYREF
  __int128 v7; // [esp+10h] [ebp-1Ch]
  int v8; // [esp+28h] [ebp-4h]

  v6[0] = 2;
  v2 = this + 12;
  v7 = 0;
  sub_423670(v6, a2);
  v3 = *((_DWORD *)v2 + 1) + 1;
  v8 = 0;
  if ( v3 > *((_DWORD *)v2 + 2) )
    *(_DWORD *)v2 = sub_453B00((int)v2, *(void **)v2, v3, 0x18u);
  v4 = 3 * *((_DWORD *)v2 + 1);
  v5 = *(_BYTE **)v2;
  v5[8 * v4] = 2;
  *(_OWORD *)&v5[8 * v4 + 8] = 0;
  sub_423670(&v5[8 * v4], v6);
  ++*((_DWORD *)v2 + 1);
  v8 = 2;
  sub_423B70((int)v6);
}
