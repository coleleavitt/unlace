/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4942F8
// Address: 0x00000000004942F8

//----- (00000000004942F8) ----------------------------------------------------
__int64 __fastcall sub_4942F8(__int64 a1, _QWORD **a2)
{
  _QWORD **v2; // x20
  unsigned __int64 v3; // x21
  _QWORD **v5; // x0
  _QWORD **v6; // x19
  _QWORD **v7; // t1
  int *v8; // x23
  __int64 v9; // x0
  __int64 result; // x0

  v7 = *(_QWORD ***)(a1 + 24);
  v5 = (_QWORD **)(a1 + 24);
  v6 = v7;
  if ( v7 == v5 )
    goto LABEL_6;
  v2 = v6 + 2;
  v3 = (unsigned __int64)a2;
  if ( a2 != v6 + 2 )
  {
    while ( 1 )
    {
      v6 = (_QWORD **)*v6;
      if ( v5 == v6 )
        break;
      v2 = v6 + 2;
      if ( a2 == v6 + 2 )
        goto LABEL_8;
    }
LABEL_6:
    if ( !under_debugger )
      sub_492270(1209);
    goto LABEL_7;
  }
LABEL_8:
  while ( 1 )
  {
    v8 = __errno_location();
    v9 = *(_QWORD *)(v3 + 16);
    v3 = (unsigned int)*v8;
    if ( !sub_4941A8(v9, 0) )
      break;
    if ( !under_debugger )
      sub_492270(1158);
LABEL_7:
    __break(0x3E8u);
  }
  *v6[1] = *v6;
  (*v6)[1] = v6[1];
  sub_493E90((__int64)v2[2]);
  j__free(v6);
  result = *(_QWORD *)(a1 + 40) - 1LL;
  *(_QWORD *)(a1 + 40) = result;
  *v8 = v3;
  return result;
}
// 49435C: variable 'v3' is possibly undefined
// 4943A4: variable 'v2' is possibly undefined
// 52451C: using guessed type char under_debugger;
