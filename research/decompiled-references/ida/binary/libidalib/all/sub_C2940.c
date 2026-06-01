unsigned __int64 __fastcall sub_C2940(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  bool v6; // cc
  __int64 v7; // rsi
  __int64 v8; // rbp
  const void *v10; // r12
  size_t v11; // rax
  size_t v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rdi
  void *dest; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  *(_QWORD *)a2 = 0;
  v3 = getinf();
  *(_QWORD *)(a2 + 8) = v3;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  *(_QWORD *)(a2 + 64) = 0;
  if ( v5 < v3 )
    v3 = v5 - 1;
  v6 = *(_QWORD *)(a2 + 32) <= 6u;
  *(_QWORD *)(a2 + 8) = v3;
  if ( v6 )
  {
    v14 = qvector_reserve();
    *(_QWORD *)(a2 + 16) = v14;
    v4 = v14;
  }
  *(_QWORD *)(a2 + 24) = 7;
  *(_DWORD *)v4 = 1330464077;
  *(_WORD *)(v4 + 4) = 22866;
  *(_BYTE *)(*(_QWORD *)(a2 + 16) + 6LL) = 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(a2 + 56) <= 3u )
  {
    v13 = qvector_reserve();
    *(_QWORD *)(a2 + 40) = v13;
    v7 = v13;
  }
  *(_QWORD *)(a2 + 48) = 4;
  *(_WORD *)v7 = 20053;
  *(_BYTE *)(v7 + 2) = 75;
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + 3LL) = 0;
  *(_BYTE *)(a2 + 73) = 5;
  dest = nullptr;
  v8 = dbg;
  if ( !(unsigned int)sub_9E1E0() )
  {
    v10 = *(const void **)(v8 + 8);
    if ( v10 )
    {
      v11 = strlen(*(const char **)(v8 + 8));
      v12 = v11;
      if ( v11 )
      {
        v15 = nullptr;
        if ( v11 != -1 )
        {
          dest = (void *)qvector_reserve();
          v15 = dest;
        }
        memmove(v15, v10, v12);
        *((_BYTE *)dest + v12) = 0;
      }
    }
  }
  *(_BYTE *)(a2 + 72) = 2;
  if ( dest )
    qfree();
  return v17 - __readfsqword(0x28u);
}

