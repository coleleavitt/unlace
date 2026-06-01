/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A88E0
// Address: 0x00000000000A88E0

//----- (00000000000A88E0) ----------------------------------------------------
void __fastcall sub_A88E0(void *src, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  if ( src && (v2 = strlen((const char *)src)) != 0 )
  {
    v3 = v2;
    v4 = v2 + 1;
    v5 = *(void **)(a2 + 56);
    if ( *(_QWORD *)(a2 + 72) < v4 )
    {
      v5 = qvector_reserve(a2 + 56, *(char **)(a2 + 56), v4, 1u);
      *(_QWORD *)(a2 + 56) = v5;
    }
    *(_QWORD *)(a2 + 64) = v4;
    memmove(v5, src, v3);
    *(_BYTE *)(*(_QWORD *)(a2 + 56) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 64) = 0;
  }
}
