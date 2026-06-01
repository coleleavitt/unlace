/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420AF0
// Address: 0x00420AF0

//----- (00420AF0) --------------------------------------------------------
unsigned int __thiscall sub_420AF0(void **this, int a2, char *a3)
{
  void *v4; // esi
  unsigned int v5; // edx
  char *v6; // eax
  unsigned int v7; // ecx
  void *v8; // eax
  unsigned int v9; // esi
  char v11[8]; // [esp+Ch] [ebp-24h] BYREF
  __int128 v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+2Ch] [ebp-4h]
  unsigned int v14; // [esp+38h] [ebp+8h]
  void *v15; // [esp+3Ch] [ebp+Ch]

  v11[0] = 2;
  v12 = 0;
  sub_423670(v11, a3);
  v4 = *this;
  v5 = (int)((unsigned __int64)(715827883LL * (a2 - (int)*this)) >> 32) >> 2;
  v6 = (char *)*(this + 1) + 1;
  v13 = 0;
  v7 = v5 + (v5 >> 31);
  v15 = v4;
  v14 = v7;
  if ( v6 > *(this + 2) )
  {
    v8 = sub_453B00((int)this, v4, (unsigned int)v6, 0x18u);
    v7 = v14;
    v4 = v8;
    v15 = v8;
    *this = v8;
  }
  v9 = (unsigned int)v4 + 24 * v7;
  sub_464310(v9 + 24, v9, 24 * ((int)((int)v15 + 24 * (_DWORD)*(this + 1) - v9) / 24));
  *(_BYTE *)v9 = 2;
  *(_OWORD *)(v9 + 8) = 0;
  sub_423670((char *)v9, v11);
  *(this + 1) = (char *)*(this + 1) + 1;
  v13 = 3;
  sub_423B70((int)v11);
  return v9;
}
