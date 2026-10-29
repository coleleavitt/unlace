/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C630
// Address: 0x000000010000C630

//----- (000000010000C630) ----------------------------------------------------
__int64 __fastcall sub_10000C630(__int64 a1, char *a2, __va_list_tag *a3)
{
  char *v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // r15
  char *v8; // rax
  va_list v10; // [rsp+0h] [rbp-40h] BYREF

  v10[0] = *a3;
  v5 = *(char **)a1;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v6 )
  {
    v7 = v6 + 1LL;
    v8 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v7 )
    {
      v8 = (char *)qvector_reserve(a1, *(void **)a1, v7, 1u);
      *(_QWORD *)a1 = v8;
    }
    *(_QWORD *)(a1 + 8) = v7;
    qvsnprintf(v8, v7, a2, v10);
  }
  return a1;
}
