/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024320
// Address: 0x0000000100024320

//----- (0000000100024320) ----------------------------------------------------
__int64 __fastcall sub_100024320(__int64 a1, unsigned __int8 *a2)
{
  char *v2; // rdx

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = (char *)_s1;
  return get_idcv_attr(a2, a1, v2, 0);
}
