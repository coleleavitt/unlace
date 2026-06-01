/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF0D0
// Address: 0x00000000000AF0D0

//----- (00000000000AF0D0) ----------------------------------------------------
char __fastcall sub_AF0D0(const char *src, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rax

  LOBYTE(v2) = qisdir(src);
  if ( !(_BYTE)v2 )
  {
    LODWORD(v2) = qmkdir(src, 0x1FFu);
    if ( (_DWORD)v2 )
      sub_3A5C0("Cannot create directory '%s' for recording conversations into", src);
  }
  if ( src && (v2 = strlen(src)) != 0 )
  {
    v3 = v2;
    v4 = v2 + 1;
    v5 = *(void **)(a2 + 184);
    if ( *(_QWORD *)(a2 + 200) < v4 )
    {
      v5 = qvector_reserve(a2 + 184, *(char **)(a2 + 184), v4, 1u);
      *(_QWORD *)(a2 + 184) = v5;
    }
    *(_QWORD *)(a2 + 192) = v4;
    memmove(v5, src, v3);
    v2 = *(_QWORD *)(a2 + 184);
    *(_BYTE *)(v2 + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 192) = 0;
  }
  return v2;
}
