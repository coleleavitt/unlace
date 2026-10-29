const char *__fastcall sub_11E4D70(char *a1, size_t a2)
{
  size_t v2; // rbx
  _BYTE *v3; // rax
  signed __int64 v4; // rax

  if ( a2 && (v2 = a2, (v3 = memchr(a1, 46, a2)) != nullptr) && (v4 = v3 - a1, v4 != -1) )
  {
    if ( v4 + 1 <= a2 )
      v2 = v4 + 1;
    return &a1[v2];
  }
  else
  {
    j__strlen(&byte_22F0C30);
    return &byte_22F0C30;
  }
}
