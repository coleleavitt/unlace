/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F500
// Address: 0x000000000005F500

//----- (000000000005F500) ----------------------------------------------------
__int64 __fastcall sub_5F500(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  char *v5; // rsi

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v5 = *(char **)(a1 + 40);
    else
      v5 = (char *)s1;
    *(_QWORD *)(a2 + 8) = (unsigned int)set_idcv_attr(a1, v5, (char *)(a1 + 64), 0, a3, a4) == 0;
    return 0;
  }
  else
  {
    set_error_string(0, "setattr");
    return set_qerrno(0x38u);
  }
}
