/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046AF0
// Address: 0x0000000140046AF0

//----- (0000000140046AF0) ----------------------------------------------------
void *__fastcall sub_140046AF0(__int64 a1, void *a2, size_t a3)
{
  const void *v6; // rdx
  __int64 v7; // rdi
  size_t v8; // rax
  void *v9; // rax
  __int64 v10; // rcx

  if ( !a3 )
    return nullptr;
  v6 = *(const void **)a1;
  v7 = 0;
  v8 = *(_QWORD *)a1 + a3;
  if ( v8 < *(_QWORD *)a1 || v8 > *(_QWORD *)(a1 + 8) )
  {
    v9 = nullptr;
  }
  else
  {
    *(_QWORD *)a1 = v8;
    v9 = memcpy(a2, v6, a3);
  }
  v10 = -1;
  if ( v9 )
    v10 = a3;
  if ( v10 == a3 )
    return a2;
  return (void *)v7;
}
