/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AB60
// Address: 0x0043AB60

//----- (0043AB60) --------------------------------------------------------
int __thiscall sub_43AB60(int this)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  void *v7; // eax
  void **v8; // eax
  void *v10; // [esp-4h] [ebp-24h]
  _DWORD *v11; // [esp+10h] [ebp-10h]

  *(_DWORD *)(this + 240) = 0;
  sub_415E00((unsigned int *)(this + 188), 0);
  v2 = *(_DWORD *)(this + 28);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      sub_40ACD0((_DWORD *)(v3 + *(_DWORD *)(this + 24)));
      v3 += 32;
      --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(this + 28) = 0;
  sub_43ACB0((void ***)this);
  if ( *(_DWORD *)(this + 176) )
  {
    v10 = *(void **)(this + 176);
    *(_DWORD *)(this + 180) = 0;
    sub_453A20(v10);
    *(_DWORD *)(this + 176) = 0;
    *(_DWORD *)(this + 184) = 0;
  }
  v4 = *(_DWORD *)(this + 168);
  sub_4089B0((void *)(this + 168), this + 168, *(int **)(v4 + 4));
  *(_DWORD *)(v4 + 4) = v4;
  *(_DWORD *)v4 = v4;
  *(_DWORD *)(v4 + 8) = v4;
  *(_DWORD *)(this + 172) = 0;
  v5 = *(_DWORD **)(this + 248);
  v11 = v5;
  v6 = (_DWORD *)v5[1];
  if ( !*((_BYTE *)v6 + 13) )
  {
    do
    {
      sub_408A30(this + 248, v6[2]);
      v7 = v6;
      v6 = (_DWORD *)*v6;
      sub_4627F2(v7);
    }
    while ( !*((_BYTE *)v6 + 13) );
    v5 = v11;
  }
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  *(_DWORD *)(this + 252) = 0;
  v8 = *(void ***)this;
  *(_DWORD *)(this + 256) = 0;
  *(_BYTE *)(this + 373) = 0;
  return ((int (__thiscall *)(int))v8[74])(this);
}
