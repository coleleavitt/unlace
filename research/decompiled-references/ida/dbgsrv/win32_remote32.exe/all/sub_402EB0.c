/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402EB0
// Address: 0x00402EB0

//----- (00402EB0) --------------------------------------------------------
int __thiscall sub_402EB0(void **this)
{
  _DWORD *v2; // esi
  void *v3; // eax

  v2 = *((_DWORD **)*this + 1);
  while ( !*((_BYTE *)v2 + 13) )
  {
    sub_402A60((int)this, v2[2]);
    v3 = v2;
    v2 = (_DWORD *)*v2;
    sub_4627F2(v3);
  }
  return sub_4627F2(*this);
}
