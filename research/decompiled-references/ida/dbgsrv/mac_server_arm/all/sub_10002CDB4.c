/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CDB4
// Address: 0x000000010002CDB4

//----- (000000010002CDB4) ----------------------------------------------------
_QWORD **__fastcall sub_10002CDB4(_QWORD **result)
{
  unsigned __int64 v1; // x9
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x0
  _QWORD *v5; // x1

  v1 = (unsigned __int64)result[1];
  v2 = v1 - 2;
  if ( v1 <= 2 )
  {
    if ( under_debugger == 1 )
      goto LABEL_7;
    interr(278);
LABEL_6:
    if ( under_debugger != 1 )
    {
LABEL_8:
      interr(279);
      return sub_10002CE24(v4, v5);
    }
LABEL_7:
    __break(1u);
    goto LABEL_8;
  }
  v3 = *(__int16 *)((char *)*result + v1 - 2);
  result[3] = (_QWORD *)(v2 - v3);
  if ( v2 <= v3 )
    goto LABEL_6;
  return result;
}
// 10002CE21: variable 'v4' is possibly undefined
// 10002CE21: variable 'v5' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
