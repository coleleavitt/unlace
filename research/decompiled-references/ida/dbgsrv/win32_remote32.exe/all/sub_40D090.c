/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D090
// Address: 0x0040D090

//----- (0040D090) --------------------------------------------------------
int __thiscall sub_40D090(_DWORD *this)
{
  _DWORD *v2; // edi
  _DWORD *i; // esi
  void *v4; // eax
  int result; // eax

  v2 = (_DWORD *)*this;
  for ( i = *(_DWORD **)(*this + 4); !*((_BYTE *)i + 13); result = sub_4627F2(v4) )
  {
    sub_408820((int)this, i[2]);
    v4 = i;
    i = (_DWORD *)*i;
  }
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  *(this + 1) = 0;
  return result;
}
