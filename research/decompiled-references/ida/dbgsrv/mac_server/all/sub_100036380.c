/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036380
// Address: 0x0000000100036380

//----- (0000000100036380) ----------------------------------------------------
__int64 __fastcall sub_100036380(_BYTE *__src, _BYTE *a2)
{
  size_t v3; // rbx
  void *v4; // rdi
  char *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  _Unwind_Exception *v8; // rax
  _Unwind_Exception *v9; // rbx
  __int128 v10; // [rsp+0h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-30h]

  if ( __src > a2 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x729u);
    v9 = v8;
    sub_10000B8B0((__int64)&v10);
    _Unwind_Resume(v9);
  }
  v10 = 0;
  v11 = 0;
  v3 = a2 - __src;
  if ( a2 == __src
    || (v3 != -1
      ? (void *)(v4 = qvector_reserve((__int64)&v10, nullptr, v3 + 1, 1u), *(_QWORD *)&v10 = v4)
      : (v4 = nullptr),
        *((_QWORD *)&v10 + 1) = v3 + 1,
        memmove(v4, __src, v3),
        *(_BYTE *)(v10 + v3) = 0,
        !*((_QWORD *)&v10 + 1)) )
  {
    v5 = (char *)_s1;
  }
  else
  {
    v5 = (char *)v10;
  }
  result = qustrlen(v5);
  if ( (_QWORD)v10 )
  {
    *((_QWORD *)&v10 + 1) = 0;
    v7 = result;
    qfree((void *)v10);
    return v7;
  }
  return result;
}
// 100036468: variable 'v8' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
