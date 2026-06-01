/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CCE8
// Address: 0x0004CCE8

//----- (0004CCE8) --------------------------------------------------------
void *__fastcall sub_4CCE8(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *result; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_4B630(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  result = memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
