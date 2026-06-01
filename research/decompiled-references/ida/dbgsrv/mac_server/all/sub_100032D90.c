/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032D90
// Address: 0x0000000100032D90

//----- (0000000100032D90) ----------------------------------------------------
__int64 __fastcall sub_100032D90(_QWORD *a1, __int64 *a2)
{
  if ( (__int64)(a1[3] - (_QWORD)a2) > 3 )
    return *(unsigned int *)((char *)a2 + *a1);
  if ( under_debugger == 1 )
    BUG();
  interr(0x114u);
  return sub_100032DC0((_QWORD *)0x114, a2);
}
// 1000AE23D: using guessed type char under_debugger;
