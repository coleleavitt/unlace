/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x00000001000714A0

//----- (00000001000714A0) ----------------------------------------------------
const char *__fastcall str2user(char *a1, const char *a2, __int64 a3)
{
  const char *v3; // rbx
  const char *v5; // rsi
  _Unwind_Exception *v7; // rax
  int v8; // edx
  __int128 v9; // [rsp+0h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x4C9u);
    if ( v8 )
      sub_100001690(v7);
    _Unwind_Resume(v7);
  }
  v3 = a1;
  if ( a3 )
  {
    v9 = 0;
    v10 = 0;
    sub_100071100((__int64)&v9, a2, -1, a3);
    if ( *((_QWORD *)&v9 + 1) )
      v5 = (const char *)v9;
    else
      v5 = _s1;
    v3 = qstrncpy(a1, (__int64)v5, a3);
    if ( (_QWORD)v9 )
    {
      *((_QWORD *)&v9 + 1) = 0;
      qfree((void *)v9);
    }
  }
  return v3;
}
// 10007155E: variable 'v8' is possibly undefined
// 100071563: variable 'v7' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
