/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032C40
// Address: 0x0000000100032C40

//----- (0000000100032C40) ----------------------------------------------------
_BYTE *__fastcall sub_100032C40(_QWORD *a1, __int64 *a2, char a3)
{
  _BYTE *result; // rax
  __int16 v4; // dx

  if ( (__int64)(a1[1] - (_QWORD)a2) <= 0 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x115u);
    return sub_100032C70((void **)0x115, a2, v4);
  }
  else
  {
    result = (_BYTE *)*a1;
    *((_BYTE *)a2 + *a1) = a3;
  }
  return result;
}
// 100032C6F: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
