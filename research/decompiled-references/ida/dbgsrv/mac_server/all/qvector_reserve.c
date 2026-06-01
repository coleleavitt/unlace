/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x000000010007CE50

//----- (000000010007CE50) ----------------------------------------------------
void *__fastcall qvector_reserve(__int64 a1, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  size_t v7; // rcx
  void *result; // rax
  int v9; // edx
  int v10; // ecx

  if ( a1 )
  {
    v5 = 2LL * *(_QWORD *)(a1 + 16);
    v6 = a3;
    if ( v5 > a3 )
      v6 = v5;
    if ( is_mul_ok(v6, a4) || v5 > a3 && (v6 = a3, is_mul_ok(a3, a4)) )
    {
      v7 = v6 * a4;
      if ( v7 < 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( !v7 )
        {
          free(a2);
          sub_10007CE40();
        }
        result = realloc(a2, v7);
        if ( result )
        {
          *(_QWORD *)(a1 + 16) = v6;
          return result;
        }
        set_qerrno();
      }
    }
    sub_10007CE40();
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0xA74u);
  return (void *)qhost2addr_(2676, (const char *)a2, v9, v10);
}
// 10007CEEE: variable 'v9' is possibly undefined
// 10007CEEE: variable 'v10' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
