/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024350
// Address: 0x0000000100024350

//----- (0000000100024350) ----------------------------------------------------
__int64 __fastcall sub_100024350(__int64 a1, __int64 a2)
{
  char *v3; // rsi

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v3 = *(char **)(a1 + 40);
    else
      v3 = (char *)_s1;
    *(_QWORD *)(a2 + 8) = (unsigned int)set_idcv_attr(a1, v3, (unsigned __int8 *)(a1 + 64), 0) == 0;
    return 0;
  }
  else
  {
    set_error_string(0, "setattr");
    return set_qerrno();
  }
}
