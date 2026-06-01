/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439DF0
// Address: 0x00439DF0

//----- (00439DF0) --------------------------------------------------------
int __thiscall sub_439DF0(_BYTE *this, int a2)
{
  LPVOID v3; // eax
  int v4; // esi
  int v5; // eax

  v3 = sub_4627C2(0x108u);
  if ( v3 )
    v4 = sub_43FF70((int)v3, a2, (int)this);
  else
    v4 = 0;
  *(_BYTE *)(v4 + 104) = *(this + 67);
  v5 = sub_40D660();
  *(_DWORD *)(v5 + 20) = 1;
  sub_448470((_DWORD *)v4, v5);
  dword_4B6C08 = v4;
  return v4;
}
// 4B6C08: using guessed type int dword_4B6C08;
