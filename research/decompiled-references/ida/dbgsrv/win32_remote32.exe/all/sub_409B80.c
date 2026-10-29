/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409B80
// Address: 0x00409B80

//----- (00409B80) --------------------------------------------------------
int __thiscall sub_409B80(void **this)
{
  _DWORD *v2; // esi
  void *v3; // eax

  v2 = *((_DWORD **)*this + 1);
  while ( !*((_BYTE *)v2 + 13) )
  {
    sub_408A30((int)this, v2[2]);
    v3 = v2;
    v2 = (_DWORD *)*v2;
    sub_4627F2(v3);
  }
  return sub_4627F2(*this);
}
