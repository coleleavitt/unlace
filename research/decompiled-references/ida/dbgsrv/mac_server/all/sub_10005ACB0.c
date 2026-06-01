/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005ACB0
// Address: 0x000000010005ACB0

//----- (000000010005ACB0) ----------------------------------------------------
char *__fastcall sub_10005ACB0(void **a1, const void *a2, size_t a3)
{
  char *v4; // r12
  unsigned __int64 v5; // r13
  char *v6; // rax
  __int64 *v8; // rdx
  unsigned __int8 v9; // [rsp+Fh] [rbp-31h] BYREF

  if ( HIDWORD(a3) )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(5u);
    return sub_10005ADC0(5, (__int64)a2, v8);
  }
  else
  {
    sub_100032FE0(a1, a3);
    if ( a3 )
    {
      v4 = (char *)a1[1];
      v5 = 0x7FFFFFFFFFFFFFFFLL;
      if ( !__CFADD__(a3, v4) )
        v5 = (unsigned __int64)&v4[a3];
      if ( (unsigned __int64)v4 >= v5 )
      {
        if ( v4 != (char *)v5 )
        {
          v9 = 0;
          sub_10001CE90((__int64)a1, v5, &v9);
        }
      }
      else
      {
        v6 = (char *)*a1;
        if ( (unsigned __int64)a1[2] < v5 )
        {
          v6 = (char *)qvector_reserve((__int64)a1, *a1, v5, 1u);
          *a1 = v6;
        }
        __bzero(&v6[(_QWORD)a1[1]], v5 - (_QWORD)a1[1]);
        a1[1] = (void *)v5;
      }
      memcpy(&v4[(_QWORD)*a1], a2, a3);
    }
    return (char *)__stack_chk_guard;
  }
}
// 10005ADB4: variable 'v8' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
