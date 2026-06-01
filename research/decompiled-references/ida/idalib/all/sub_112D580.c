_QWORD *__fastcall sub_112D580(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  size_t v6; // rax

  v2 = *(unsigned int *)(a2 + 60);
  if ( (unsigned int)v2 <= 0x1F && (v4 = 4160750114LL, _bittest64(&v4, v2)) )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = j__strlen("libtool");
    sub_10E9650(a1, v5, "libtool", v6, a2);
    return a1;
  }
  else
  {
    sub_112D530(a1, a2, "llvm-ar");
    return a1;
  }
}
