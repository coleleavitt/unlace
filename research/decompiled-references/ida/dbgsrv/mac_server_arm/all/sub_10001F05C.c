/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F05C
// Address: 0x000000010001F05C

//----- (000000010001F05C) ----------------------------------------------------
__int64 __fastcall sub_10001F05C(__int64 a1, __int64 a2)
{
  char *v3; // x1

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v3 = *(char **)(a1 + 40);
    else
      v3 = &byte_100075A30;
    *(_QWORD *)(a2 + 8) = (unsigned int)set_idcv_attr(a1, v3, (unsigned __int8 *)(a1 + 64), 0) == 0;
    return 0;
  }
  else
  {
    set_error_string(0);
    return set_qerrno();
  }
}
// 100075A30: using guessed type char byte_100075A30;
