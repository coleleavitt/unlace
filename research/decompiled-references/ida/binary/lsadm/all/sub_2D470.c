__int64 __fastcall sub_2D470(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  _QWORD *v7; // r12
  unsigned int *v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  size_t v11; // rdx
  unsigned __int64 v12; // r14
  char *v14; // rsi
  char *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 5128) )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 5720);
  v18 = 0;
  ptr = nullptr;
  v16 = v3;
  v4 = strlen((const char *)(a1 + 5128));
  v5 = v4 + 1;
  v6 = v4;
  ptr = sub_29E60((__int64)&ptr, nullptr, v4 + 1, 1u);
  *(_QWORD *)&v18 = v5;
  memmove(ptr, (const void *)(a1 + 5128), v6);
  *((_BYTE *)ptr + v6) = 0;
  v7 = sub_2D360(v16, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
  if ( v7 == (_QWORD *)(*(_QWORD *)(a1 + 5720) + 8LL) )
    return 0xFFFFFFFFLL;
  v8 = (unsigned int *)v7[7];
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *((unsigned __int8 *)v8 + 4);
  v11 = *v8;
  v12 = (v10 == 1) + (unsigned int)v11;
  if ( v9 < v12 )
  {
    v14 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v12 )
    {
      v15 = (char *)sub_29E60(a2, v14, (v10 == 1) + (unsigned int)v11, 1u);
      v9 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v15;
      v14 = v15;
    }
    memset(&v14[v9], 0, v12 - v9);
    *(_QWORD *)(a2 + 8) = v12;
    v11 = *v8;
  }
  else if ( v12 != v9 )
  {
    *(_QWORD *)(a2 + 8) = v12;
    v11 = *v8;
  }
  memcpy(*(void **)a2, (char *)v8 + 5, v11);
  if ( v10 == 1 )
    *(_BYTE *)(*(_QWORD *)a2 + (unsigned int)(v12 - 1)) = 0;
  return v10;
}

