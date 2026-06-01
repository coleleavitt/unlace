/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AB50
// Address: 0x0003AB50

//----- (0003AB50) --------------------------------------------------------
int __fastcall sub_3AB50(int a1)
{
  void *v2; // r0

  sub_45758((unsigned __int8 *)(a1 + 16));
  v2 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v2);
  }
  return a1;
}
