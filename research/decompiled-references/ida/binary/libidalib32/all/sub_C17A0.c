unsigned __int64 __fastcall sub_C17A0(__int64 a1, __int64 a2)
{
  int v3; // eax
  bool v4; // cc
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbp
  const void *v9; // r12
  size_t v10; // rax
  size_t v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  void *dest; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  *(_DWORD *)a2 = 0;
  v3 = getinf();
  v4 = *(_QWORD *)(a2 + 24) <= 6u;
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)(a2 + 56) = 0;
  if ( v4 )
  {
    v13 = qvector_reserve();
    *(_QWORD *)(a2 + 8) = v13;
    v5 = v13;
  }
  *(_QWORD *)(a2 + 16) = 7;
  *(_DWORD *)v5 = 1330464077;
  *(_WORD *)(v5 + 4) = 22866;
  *(_BYTE *)(*(_QWORD *)(a2 + 8) + 6LL) = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a2 + 48) <= 3u )
  {
    v12 = qvector_reserve();
    *(_QWORD *)(a2 + 32) = v12;
    v6 = v12;
  }
  *(_QWORD *)(a2 + 40) = 4;
  *(_WORD *)v6 = 20053;
  *(_BYTE *)(v6 + 2) = 75;
  *(_BYTE *)(*(_QWORD *)(a2 + 32) + 3LL) = 0;
  *(_BYTE *)(a2 + 61) = 5;
  dest = nullptr;
  v7 = dbg;
  if ( !(unsigned int)sub_9E0A0() )
  {
    v9 = *(const void **)(v7 + 8);
    if ( v9 )
    {
      v10 = strlen(*(const char **)(v7 + 8));
      v11 = v10;
      if ( v10 )
      {
        v14 = nullptr;
        if ( v10 != -1 )
        {
          dest = (void *)qvector_reserve();
          v14 = dest;
        }
        memmove(v14, v9, v11);
        *((_BYTE *)dest + v11) = 0;
      }
    }
  }
  *(_BYTE *)(a2 + 60) = 1;
  if ( dest )
    qfree();
  return v16 - __readfsqword(0x28u);
}

