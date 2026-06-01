/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020EB0
// Address: 0x0000000100020EB0

//----- (0000000100020EB0) ----------------------------------------------------
__int64 __fastcall sub_100020EB0(__int64 a1, __int64 a2)
{
  char *v3; // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v3 = *(char **)(a1 + 40);
    else
      v3 = &byte_10007AE40;
    *(_QWORD *)(a2 + 8) = (unsigned int)set_idcv_attr(a1, v3, (unsigned __int8 *)(a1 + 64), 0) == 0;
    return 0;
  }
  else
  {
    set_error_string(0);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 100020F00: variable '_18' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
