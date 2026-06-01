/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065EC0
// Address: 0x0000000100065EC0

//----- (0000000100065EC0) ----------------------------------------------------
__int64 __fastcall sub_100065EC0(void **a1, _QWORD *a2)
{
  const char *v2; // rax
  const char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  char *v8; // rax
  unsigned __int8 v10; // [rsp+Fh] [rbp-31h] BYREF

  sub_10005A320(a1, *a2 + 1LL);
  sub_10005A320(a1, a2[1] + 1LL);
  if ( a2[3] )
    v2 = (const char *)a2[2];
  else
    v2 = _s1;
  v3 = &_s;
  if ( v2 )
    v3 = v2;
  v4 = strlen(v3);
  v5 = v4 + 1;
  if ( v4 != -1 )
  {
    v6 = (unsigned __int64)a1[1];
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !__CFADD__(v5, v6) )
      v7 = v5 + v6;
    if ( v6 >= v7 )
    {
      if ( v6 != v7 )
      {
        v10 = 0;
        sub_10001CE90((__int64)a1, v7, &v10);
      }
    }
    else
    {
      v8 = (char *)*a1;
      if ( (unsigned __int64)a1[2] < v7 )
      {
        v8 = (char *)qvector_reserve((__int64)a1, *a1, v7, 1u);
        *a1 = v8;
      }
      __bzero(&v8[(_QWORD)a1[1]], v7 - (_QWORD)a1[1]);
      a1[1] = (void *)v7;
    }
    memcpy((char *)*a1 + v6, v3, v5);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
