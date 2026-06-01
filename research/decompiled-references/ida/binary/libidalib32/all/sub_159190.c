__int64 __fastcall sub_159190(__int64 a1, const char *a2)
{
  __int64 *v3; // rbp
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // r13
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rax

  if ( !a2 )
    return 0;
  v3 = *(__int64 **)(a1 + 8);
  v4 = strlen(a2);
  v5 = v3[1];
  v6 = v4;
  v7 = v4;
  if ( v5 )
  {
    --v5;
    v7 = v4 + v5;
  }
  v8 = *v3;
  if ( v3[2] < v7 + 1 )
  {
    v10 = qvector_reserve();
    *v3 = v10;
    v8 = v10;
  }
  v3[1] = v7 + 1;
  *(_BYTE *)(v8 + v7) = 0;
  memmove((void *)(v5 + *v3), a2, v6);
  return 0;
}

