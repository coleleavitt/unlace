/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032CE0
// Address: 0x0000000100032CE0

//----- (0000000100032CE0) ----------------------------------------------------
void *__fastcall sub_100032CE0(_QWORD *a1, __int64 *a2, void *a3, signed __int64 a4)
{
  if ( a1[3] - (_QWORD)a2 >= a4 )
    return memcpy(a3, (char *)a2 + *a1, a4);
  if ( under_debugger == 1 )
    BUG();
  interr(0x114u);
  return (void *)sub_100032D20((_QWORD *)0x114, a2);
}
// 1000AE23D: using guessed type char under_debugger;
