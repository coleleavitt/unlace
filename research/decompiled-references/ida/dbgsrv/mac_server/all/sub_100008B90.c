/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008B90
// Address: 0x0000000100008B90

//----- (0000000100008B90) ----------------------------------------------------
char *__fastcall sub_100008B90(__int64 a1, __int64 *a2)
{
  char *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  void *v8; // rdi
  void *v9; // rdi

  result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 712LL))(a1);
  v3 = 80 * a2[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + v5);
      v7 = *(_QWORD *)(v4 + v5 + 8);
      if ( v7 - v6 == vm_page_size
        && v7 <= (unsigned __int64)result
        && v6 >= (unsigned __int64)(result - 0x100000)
        && v3 - 80 != v5
        && v5
        && *(_QWORD *)(v4 + v5 + 80) >= (unsigned __int64)result
        && *(_QWORD *)(v4 + v5 - 72) == v6 )
      {
        break;
      }
      v5 += 80;
      if ( v3 == v5 )
        return result;
    }
    *(_QWORD *)(v4 + v5 - 72) = v7;
    v8 = *(void **)(v4 + v5 + 40);
    if ( v8 )
    {
      *(_QWORD *)(v4 + v5 + 48) = 0;
      qfree(v8);
      *(_QWORD *)(v4 + v5 + 40) = 0;
      *(_QWORD *)(v4 + v5 + 56) = 0;
    }
    v9 = *(void **)(v4 + v5 + 16);
    if ( v9 )
    {
      *(_QWORD *)(v4 + v5 + 24) = 0;
      qfree(v9);
      *(_QWORD *)(v4 + v5 + 16) = 0;
      *(_QWORD *)(v4 + v5 + 32) = 0;
    }
    return (char *)memmove((void *)(v4 + v5), (const void *)(v4 + v5 + 80), *a2 + 80 * a2[1]-- - v4 - v5 - 80);
  }
  return result;
}
