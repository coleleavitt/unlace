/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEF80
// Address: 0x00000000000AEF80

//----- (00000000000AEF80) ----------------------------------------------------
void __fastcall sub_AEF80(void *src)
{
  size_t v1; // rax
  size_t v2; // r14
  unsigned __int64 v3; // r15
  bool v4; // cf
  void *v5; // rax

  if ( src && (v1 = strlen((const char *)src)) != 0 )
  {
    v2 = v1;
    v3 = v1 + 1;
    v4 = *((_QWORD *)&xmmword_156A68 + 1) < v1 + 1;
    v5 = *((void **)&xmmword_156A58 + 1);
    if ( v4 )
    {
      v5 = qvector_reserve((__int64)&xmmword_156A58 + 8, *((char **)&xmmword_156A58 + 1), v3, 1u);
      *((_QWORD *)&xmmword_156A58 + 1) = v5;
    }
    *(_QWORD *)&xmmword_156A68 = v3;
    memmove(v5, src, v2);
    *(_BYTE *)(*((_QWORD *)&xmmword_156A58 + 1) + v2) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_156A68 = 0;
  }
}
// 156A58: using guessed type __int128 xmmword_156A58;
// 156A68: using guessed type __int128 xmmword_156A68;
