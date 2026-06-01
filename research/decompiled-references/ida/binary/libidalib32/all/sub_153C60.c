__int64 __fastcall sub_153C60(__int64 a1, __int64 a2)
{
  const char *(*v2)(); // rax
  __int64 v3; // r13
  size_t v4; // r12
  const char *v5; // rbp
  void *v6; // rax
  size_t v8; // r12
  void *v9; // rax
  const char *v10; // rax

  if ( *(_QWORD *)(a2 + 936) <= 1u )
  {
    v2 = *(const char *(**)())(*(_QWORD *)a2 + 664LL);
    if ( v2 == sub_1519F0 )
    {
      *(_QWORD *)a1 = 0;
      v3 = 8;
      v4 = 7;
      *(_OWORD *)(a1 + 8) = 0;
      v5 = "IDAView";
    }
    else
    {
      v10 = (const char *)((__int64 (__fastcall *)(__int64))v2)(a2);
      *(_QWORD *)a1 = 0;
      v5 = v10;
      *(_OWORD *)(a1 + 8) = 0;
      if ( !v10 )
        return a1;
      v4 = strlen(v10);
      v3 = v4 + 1;
    }
    v6 = (void *)qvector_reserve();
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v3;
    memmove(v6, v5, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
    return a1;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v8 = *(_QWORD *)(a2 + 936);
  if ( !v8 )
    return a1;
  v9 = (void *)qalloc_or_throw();
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = v9;
  memcpy(v9, *(const void **)(a2 + 928), v8);
  *(_QWORD *)(a1 + 8) = v8;
  return a1;
}

