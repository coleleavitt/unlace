/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4280
// Address: 0x00000000000A4280

//----- (00000000000A4280) ----------------------------------------------------
void __fastcall sub_A4280(void *src, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  if ( src && (v2 = strlen((const char *)src)) != 0 )
  {
    v3 = v2;
    v4 = v2 + 1;
    v5 = *(void **)(a2 + 112);
    if ( *(_QWORD *)(a2 + 128) < v4 )
    {
      v5 = qvector_reserve(a2 + 112, *(char **)(a2 + 112), v4, 1u);
      *(_QWORD *)(a2 + 112) = v5;
    }
    *(_QWORD *)(a2 + 120) = v4;
    memmove(v5, src, v3);
    *(_BYTE *)(*(_QWORD *)(a2 + 112) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 120) = 0;
  }
}
