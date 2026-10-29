/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409A30
// Address: 0x00409A30

//----- (00409A30) --------------------------------------------------------
int __thiscall sub_409A30(void **this)
{
  _DWORD *v2; // esi
  void *v3; // eax

  v2 = *((_DWORD **)*this + 1);
  while ( !*((_BYTE *)v2 + 13) )
  {
    sub_408820((int)this, v2[2]);
    v3 = v2;
    v2 = (_DWORD *)*v2;
    sub_4627F2(v3);
  }
  return sub_4627F2(*this);
}
