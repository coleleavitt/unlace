/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400507D0
// Address: 0x00000001400507D0

//----- (00000001400507D0) ----------------------------------------------------
void *__fastcall sub_1400507D0(_QWORD *a1, __int64 a2)
{
  const char *v4; // rdi
  void *result; // rax
  size_t v6; // rbp
  size_t v7; // rbx
  unsigned __int64 v8; // rdx

  sub_140002D20(a1, *(_DWORD *)(a2 + 4));
  if ( *(_QWORD *)(a2 + 16) )
  {
    v4 = pNodeName;
    if ( *(_QWORD *)(a2 + 8) )
      v4 = *(const char **)(a2 + 8);
  }
  else
  {
    v4 = Str1;
  }
  result = (void *)strlen(v4);
  v6 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v7 = a1[1];
    v8 = v7 + v6;
    if ( v7 + v6 < v7 )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v8);
    return memcpy((void *)(v7 + *a1), v4, v6);
  }
  return result;
}
