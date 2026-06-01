/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90EA0
// Address: 0x00090EA0

//----- (00090EA0) --------------------------------------------------------
int __fastcall sub_90EA0(int a1, int a2, int a3, int a4, int a5, void *a6)
{
  _DWORD *i; // r6
  int v8; // r0
  int v10; // [sp+0h] [bp-20h] BYREF

  if ( !a3 )
    sub_90BDC(0, a6);
  for ( i = (_DWORD *)(((4 * a1) ^ 0xFFFFFFFC) + a3); *i; ++i )
  {
    v8 = *(_DWORD *)((char *)i + *i);
    v10 = a5;
    if ( (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v8 + 16))(v8, a4, &v10) )
      return 0;
  }
  return 1;
}
