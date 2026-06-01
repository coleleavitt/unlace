/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430DF0
// Address: 0x00430DF0

//----- (00430DF0) --------------------------------------------------------
int __thiscall sub_430DF0(void **this)
{
  _DWORD **v2; // edx
  _DWORD *v3; // edi
  _DWORD *v4; // esi

  v2 = (_DWORD **)*this;
  **((_DWORD **)*this + 1) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      sub_430D50((int)(v3 + 2), (int)this, (int)v3);
      sub_4627F2(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_4627F2(*this);
}
