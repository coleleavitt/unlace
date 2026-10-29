/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18B8C
// Address: 0x00018B8C

//----- (00018B8C) --------------------------------------------------------
int __fastcall sub_18B8C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = *(void **)(a1 + 68);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 72) = 0;
    sub_77E08(v2);
  }
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    sub_77E08(v3);
  }
  sub_18B5C(a1 + 32, *(_DWORD **)(a1 + 40));
  v4 = *(void **)(a1 + 20);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    sub_77E08(v4);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    sub_77E08(v5);
  }
  return a1;
}
