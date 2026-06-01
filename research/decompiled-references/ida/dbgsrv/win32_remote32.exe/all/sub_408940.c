/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408940
// Address: 0x00408940

//----- (00408940) --------------------------------------------------------
int __stdcall sub_408940(int a1, int a2)
{
  _DWORD *v2; // esi
  void *v3; // eax
  int result; // eax

  v2 = (_DWORD *)a2;
  if ( !*(_BYTE *)(a2 + 13) )
  {
    do
    {
      sub_408940(a1, v2[2]);
      v3 = v2;
      v2 = (_DWORD *)*v2;
      result = sub_4627F2(v3);
    }
    while ( !*((_BYTE *)v2 + 13) );
  }
  return result;
}
