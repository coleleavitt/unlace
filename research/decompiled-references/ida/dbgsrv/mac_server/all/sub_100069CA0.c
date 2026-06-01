/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069CA0
// Address: 0x0000000100069CA0

//----- (0000000100069CA0) ----------------------------------------------------
size_t __fastcall sub_100069CA0(void *__src, __int64 a2)
{
  size_t result; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  if ( __src && (result = strlen((const char *)__src)) != 0 )
  {
    v3 = result;
    v4 = result + 1;
    v5 = *(void **)(a2 + 8);
    if ( *(_QWORD *)(a2 + 24) < v4 )
    {
      v5 = qvector_reserve(a2 + 8, *(void **)(a2 + 8), v4, 1u);
      *(_QWORD *)(a2 + 8) = v5;
    }
    *(_QWORD *)(a2 + 16) = v4;
    memmove(v5, __src, v3);
    result = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(result + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = 0;
  }
  return result;
}
