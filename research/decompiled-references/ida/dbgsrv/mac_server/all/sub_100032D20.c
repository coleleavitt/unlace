/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032D20
// Address: 0x0000000100032D20

//----- (0000000100032D20) ----------------------------------------------------
__int64 __fastcall sub_100032D20(_QWORD *a1, __int64 *a2)
{
  if ( (__int64)(a1[3] - (_QWORD)a2) > 0 )
    return *((unsigned __int8 *)a2 + *a1);
  if ( under_debugger == 1 )
    BUG();
  interr(0x114u);
  return sub_100032D50((_QWORD *)0x114, a2);
}
// 1000AE23D: using guessed type char under_debugger;
