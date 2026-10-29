/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024400
// Address: 0x0000000100024400

//----- (0000000100024400) ----------------------------------------------------
__int64 __fastcall sub_100024400(__int64 a1, __int64 a2)
{
  const char *v3; // rsi

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  else
    v3 = _s1;
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v3) == 0;
  return 0;
}
