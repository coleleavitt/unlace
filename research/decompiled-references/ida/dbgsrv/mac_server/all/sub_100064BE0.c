/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064BE0
// Address: 0x0000000100064BE0

//----- (0000000100064BE0) ----------------------------------------------------
size_t __fastcall sub_100064BE0(void *__src, __int64 a2)
{
  size_t result; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  if ( __src && (result = strlen((const char *)__src)) != 0 )
  {
    v3 = result;
    v4 = result + 1;
    v5 = *(void **)(a2 + 112);
    if ( *(_QWORD *)(a2 + 128) < v4 )
    {
      v5 = qvector_reserve(a2 + 112, *(void **)(a2 + 112), v4, 1u);
      *(_QWORD *)(a2 + 112) = v5;
    }
    *(_QWORD *)(a2 + 120) = v4;
    memmove(v5, __src, v3);
    result = *(_QWORD *)(a2 + 112);
    *(_BYTE *)(result + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 120) = 0;
  }
  return result;
}
