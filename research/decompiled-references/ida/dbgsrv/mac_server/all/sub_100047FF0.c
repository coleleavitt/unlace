/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047FF0
// Address: 0x0000000100047FF0

//----- (0000000100047FF0) ----------------------------------------------------
void **__fastcall sub_100047FF0(void **a1, const void *a2, size_t a3)
{
  void *v3; // rax
  void *v4; // rcx
  __int64 v5; // r14
  bool v6; // cf
  __int64 v7; // rcx
  size_t v8; // r12
  unsigned __int64 v9; // r15
  size_t v10; // r13

  v3 = *a1;
  v4 = a1[1];
  v5 = 0;
  v6 = v4 == nullptr;
  v7 = (__int64)v4 - 1;
  if ( !v6 )
    v5 = v7;
  v8 = v5 + a3;
  v9 = v5 + a3 + 1;
  if ( (unsigned __int64)a1[2] < v9 )
  {
    v10 = a3;
    v3 = qvector_reserve((__int64)a1, v3, v5 + a3 + 1, 1u);
    a3 = v10;
    *a1 = v3;
  }
  a1[1] = (void *)v9;
  *((_BYTE *)v3 + v8) = 0;
  memmove((char *)*a1 + v5, a2, a3);
  return a1;
}
