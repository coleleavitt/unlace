__int64 __fastcall sub_8E6F0(void *src, __int64 a2)
{
  size_t v2; // rsi
  __int64 v3; // rbx
  void *v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-38h]

  v7 = 0;
  v2 = a2 - (_QWORD)src;
  if ( v2 )
  {
    v6 = nullptr;
    if ( v2 != -1 )
    {
      v7 = qvector_reserve();
      v6 = (void *)v7;
    }
    memmove(v6, src, v2);
    *(_BYTE *)(v7 + v2) = 0;
  }
  v3 = tag_strlen();
  if ( v7 )
    qfree();
  return v3;
}

