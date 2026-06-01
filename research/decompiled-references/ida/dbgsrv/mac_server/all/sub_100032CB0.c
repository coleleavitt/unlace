/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032CB0
// Address: 0x0000000100032CB0

//----- (0000000100032CB0) ----------------------------------------------------
void *__fastcall sub_100032CB0(void **a1, __int64 *a2, int a3)
{
  void *result; // rax
  void *v4; // rdx
  signed __int64 v5; // rcx

  if ( (_BYTE *)a1[1] - (_BYTE *)a2 <= 3 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x115u);
    return sub_100032CE0((_QWORD *)0x115, a2, v4, v5);
  }
  else
  {
    result = *a1;
    *(_DWORD *)((char *)a2 + (_QWORD)*a1) = a3;
  }
  return result;
}
// 100032CDC: variable 'v4' is possibly undefined
// 100032CDC: variable 'v5' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
