__int64 __fastcall sub_5FF0F0(__int64 a1, const char *a2)
{
  size_t v3; // rax
  void *v4; // rdi
  size_t v5; // r12

  if ( !a2 )
    return a1;
  v3 = strlen(a2);
  v4 = *(void **)(a1 + 32);
  v5 = v3;
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v4 >= v3 )
  {
    if ( v3 )
    {
      memcpy(v4, a2, v3);
      *(_QWORD *)(a1 + 32) += v5;
    }
    return a1;
  }
  return sub_26240F0(a1, a2, v3);
}

