unsigned __int64 __fastcall sub_18D860(__int64 a1, char *a2, size_t a3)
{
  size_t v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rsi
  signed __int64 v8; // rdx
  size_t v9; // r12
  void *v11; // [rsp+0h] [rbp-48h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 144);
  if ( a3 <= v5 )
    v5 = a3;
  memcpy(a2, *(const void **)(a1 + 96), v5);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 144);
  v8 = v6 - v7;
  if ( (__int64)(a3 - v7) < v6 - v7 )
    v8 = a3 - v7 - 1;
  if ( v8 > 0 )
  {
    memcpy(&a2[v7], (const void *)(*(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 120) + v7), v8);
    v6 = *(_QWORD *)(a1 + 112);
  }
  if ( (__int64)a3 <= v6 )
    v6 = a3 - 1;
  a2[v6] = 0;
  trim();
  v11 = nullptr;
  if ( a2 )
  {
    v9 = strlen(a2);
    if ( v9 )
    {
      v11 = (void *)qvector_reserve();
      memmove(v11, a2, v9);
      *((_BYTE *)v11 + v9) = 0;
    }
  }
  qstrncpy();
  if ( v11 )
    qfree();
  return v12 - __readfsqword(0x28u);
}

