/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000243C0
// Address: 0x00000001000243C0

//----- (00000001000243C0) ----------------------------------------------------
__int64 __fastcall sub_1000243C0(__int64 a1, __int64 a2)
{
  char *v2; // rdx

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = (char *)_s1;
  *(_QWORD *)(a2 + 8) = (unsigned int)get_idcv_attr(nullptr, a1, v2, 0) == 0;
  return 0;
}
