/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E280
// Address: 0x000000010003E280

//----- (000000010003E280) ----------------------------------------------------
void **__fastcall sub_10003E280(void **a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r14
  bool v4; // cf
  size_t v5; // rax
  void *v6; // rax
  void *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // r12

  v2 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  if ( !v4 && v5 != 0 )
  {
    v6 = *a1;
    v7 = a1[1];
    v8 = 0;
    v4 = v7 == nullptr;
    v9 = (__int64)v7 - 1;
    if ( !v4 )
      v8 = v9;
    v10 = v8 + v3 + 1;
    if ( (unsigned __int64)a1[2] < v10 )
    {
      v6 = qvector_reserve((__int64)a1, v6, v8 + v3 + 1, 1u);
      *a1 = v6;
    }
    a1[1] = (void *)v10;
    *((_BYTE *)v6 + v8 + v3) = 0;
    memcpy((char *)*a1 + v8, *(const void **)a2, v3);
  }
  return a1;
}
