/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DCA0
// Address: 0x000000010002DCA0

//----- (000000010002DCA0) ----------------------------------------------------
__int64 sub_10002DCA0(__int64 a1, char *a2, ...)
{
  int v2; // eax
  __int64 v3; // r15
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  bool v7; // cf
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  signed __int64 v10; // r15
  va_list va; // [rsp+B0h] [rbp-70h] BYREF
  va_list va1; // [rsp+D0h] [rbp-50h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v2 = qvsnprintf(nullptr, 0, a2, va);
  if ( v2 )
  {
    v3 = v2;
    v4 = *(char **)a1;
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 0;
    v7 = v5 == 0;
    v8 = v5 - 1;
    if ( !v7 )
      v6 = v8;
    v9 = v3 + v6 + 1;
    v10 = v3 + 1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v4 = (char *)qvector_reserve(a1, *(void **)a1, v9, 1u);
      *(_QWORD *)a1 = v4;
    }
    *(_QWORD *)(a1 + 8) = v9;
    qvsnprintf(&v4[v6], v10, a2, va1);
  }
  return a1;
}
