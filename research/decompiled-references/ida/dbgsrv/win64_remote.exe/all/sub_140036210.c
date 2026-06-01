/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140036210
// Address: 0x0000000140036210

//----- (0000000140036210) ----------------------------------------------------
void *__fastcall sub_140036210(_QWORD *a1, const void *a2, size_t a3)
{
  __int64 v3; // rbp
  void *result; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    unknown_libname_5();
  if ( a3 > 0xF )
  {
    if ( (a3 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v3 = a3 | 0xF;
      if ( (a3 | 0xF) < 0x16 )
        v3 = 22;
    }
    v8 = sub_140003060(v3 + 1);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v3;
    v9 = v8;
    result = memcpy(v8, a2, a3);
    *((_BYTE *)v9 + a3) = 0;
  }
  else
  {
    a1[2] = a3;
    a1[3] = 15;
    result = memcpy(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
// 140037CD0: using guessed type void __noreturn unknown_libname_5(void);
