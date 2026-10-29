/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032C70
// Address: 0x0000000100032C70

//----- (0000000100032C70) ----------------------------------------------------
_BYTE *__fastcall sub_100032C70(void **a1, __int64 *a2, __int16 a3)
{
  _BYTE *result; // rax
  int v4; // edx

  if ( (_BYTE *)a1[1] - (_BYTE *)a2 <= 1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x115u);
    return sub_100032CB0((void **)0x115, a2, v4);
  }
  else
  {
    *((_BYTE *)a2 + (_QWORD)*a1) = a3;
    result = *a1;
    *((_BYTE *)a2 + (_QWORD)*a1 + 1) = HIBYTE(a3);
  }
  return result;
}
// 100032CA8: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
