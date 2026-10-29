/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEDD0
// Address: 0x00000000000AEDD0

//----- (00000000000AEDD0) ----------------------------------------------------
void __fastcall sub_AEDD0(void *src)
{
  size_t v1; // rax
  size_t v2; // r14
  void *v3; // r15
  bool v4; // cf
  void *v5; // rax

  if ( src && (v1 = strlen((const char *)src)) != 0 )
  {
    v2 = v1;
    v3 = (void *)(v1 + 1);
    v4 = (unsigned __int64)xmmword_156A28 < v1 + 1;
    v5 = xmmword_156A18;
    if ( v4 )
    {
      v5 = qvector_reserve((__int64)&xmmword_156A18, (char *)xmmword_156A18, (unsigned __int64)v3, 1u);
      xmmword_156A18 = v5;
    }
    *(&xmmword_156A18 + 1) = v3;
    memmove(v5, src, v2);
    *((_BYTE *)xmmword_156A18 + v2) = 0;
  }
  else
  {
    *(&xmmword_156A18 + 1) = nullptr;
  }
}
// 156A28: using guessed type __int128 xmmword_156A28;
