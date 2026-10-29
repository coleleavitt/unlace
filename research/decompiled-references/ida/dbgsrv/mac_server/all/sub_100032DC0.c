/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032DC0
// Address: 0x0000000100032DC0

//----- (0000000100032DC0) ----------------------------------------------------
__int64 __fastcall sub_100032DC0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = a1[3] - (_QWORD)a2;
  if ( v2 > 3 && v2 - 4 > 3 )
    return *(__int64 *)((char *)a2 + *a1);
  if ( under_debugger == 1 )
    BUG();
  interr(0x114u);
  return sub_100032E00((_QWORD *)0x114, a2);
}
// 1000AE23D: using guessed type char under_debugger;
