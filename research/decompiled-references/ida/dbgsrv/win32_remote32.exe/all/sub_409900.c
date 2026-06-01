/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409900
// Address: 0x00409900

//----- (00409900) --------------------------------------------------------
int __thiscall sub_409900(void **this)
{
  _DWORD **v2; // edx
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v2 = (_DWORD **)*this;
  **((_DWORD **)*this + 1) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      sub_4627F2(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_4627F2(*this);
}
