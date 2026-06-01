__int64 __fastcall sub_971800(__int64 a1, const char *a2)
{
  size_t v3; // rax
  void *v4; // rdi
  size_t v5; // r12

  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = *(void **)(a1 + 32);
    v5 = v3;
    if ( v3 > *(_QWORD *)(a1 + 24) - (_QWORD)v4 )
      return sub_22581D0(a1, a2, v3);
    if ( v3 )
    {
      memcpy(v4, a2, v3);
      *(_QWORD *)(a1 + 32) += v5;
    }
  }
  return a1;
}

