/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008F980
// Address: 0x000000014008F980

//----- (000000014008F980) ----------------------------------------------------
__int64 __fastcall sub_14008F980(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  void *v4; // rcx

  v3 = sub_140054B30(a2 + 142, 2);
  sub_140040A30(a2[58], v3);
  v4 = (void *)a2[142];
  if ( v4 )
  {
    a2[143] = 0;
    j_free(v4);
  }
  return 0;
}
