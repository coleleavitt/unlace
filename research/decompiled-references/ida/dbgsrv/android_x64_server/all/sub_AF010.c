/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF010
// Address: 0x00000000000AF010

//----- (00000000000AF010) ----------------------------------------------------
char __fastcall sub_AF010(void *src, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax
  int v6; // eax

  if ( src && (v2 = strlen((const char *)src)) != 0 )
  {
    v3 = v2;
    v4 = v2 + 1;
    v5 = *(void **)(a2 + 136);
    if ( *(_QWORD *)(a2 + 152) < v4 )
    {
      v5 = qvector_reserve(a2 + 136, *(char **)(a2 + 136), v4, 1u);
      *(_QWORD *)(a2 + 136) = v5;
    }
    *(_QWORD *)(a2 + 144) = v4;
    memmove(v5, src, v3);
    *(_BYTE *)(*(_QWORD *)(a2 + 136) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 144) = 0;
  }
  LOBYTE(v6) = qisdir((const char *)src);
  if ( !(_BYTE)v6 )
  {
    v6 = qmkdir((const char *)src, 0x1FFu);
    if ( v6 )
      sub_3A5C0("Cannot create directory '%s' for bad requests", (const char *)src);
  }
  return v6;
}
