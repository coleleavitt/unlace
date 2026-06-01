/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C0D0
// Address: 0x000000000045C0D0

//----- (000000000045C0D0) ----------------------------------------------------
void *__fastcall sub_45C0D0(__int64 a1, const void *a2, size_t a3)
{
  void *result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  char *v8; // rsi
  __int64 v9; // rax
  char *v10; // rax

  if ( HIDWORD(a3) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(5);
    BUG();
  }
  result = (void *)sub_45BD90((char **)a1, a3);
  if ( a3 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 + a3;
    if ( __CFADD__(v6, a3) )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        return memcpy((void *)(v6 + *(_QWORD *)a1), a2, a3);
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *(char **)a1;
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < v7 )
    {
      v10 = (char *)sub_481540(a1, v8, v7, 1u);
      *(_QWORD *)a1 = v10;
      v8 = v10;
      v9 = *(_QWORD *)(a1 + 8);
    }
    memset(&v8[v9], 0, v7 - v9);
    *(_QWORD *)(a1 + 8) = v7;
    return memcpy((void *)(v6 + *(_QWORD *)a1), a2, a3);
  }
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
