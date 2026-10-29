__int64 __fastcall sub_81D6D0(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int64 v4; // r12
  void *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v14; // rcx
  size_t v15; // r13
  __int64 v16; // rax
  unsigned int v17; // eax

  v4 = a3;
  v7 = *(void **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = ((__int64)v7 - v8) >> 3;
  if ( v4 >= v9 )
  {
    v14 = v4 + 1 - v9;
    v15 = 8 * v14;
    if ( (__int64)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)v7) >> 3 < v14 )
    {
      sub_81D560(a1 + 16, a2, v4 + 1);
      v7 = *(void **)(a1 + 24);
    }
    memset(v7, 0, v15);
    v16 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 24) += v15;
    *(_QWORD *)(v16 + 8 * v4) = a4;
    if ( a4 )
    {
      v17 = ((unsigned int)((*a4 >> 14) | (*(_DWORD *)a1 >> 14)) >> 2) & 7;
      *(_BYTE *)(a1 + 1) = (((unsigned __int8)(*a4 >> 14) | (unsigned __int8)(*(_DWORD *)a1 >> 14)) << 6)
                         | *(_BYTE *)(a1 + 1) & 0x3F;
      *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | v17;
    }
    return 0;
  }
  else
  {
    v10 = (__int64 *)(8 * v4 + v8);
    v11 = *v10;
    *v10 = (__int64)a4;
    if ( a4 )
    {
      v12 = ((unsigned int)((*a4 >> 14) | (*(_DWORD *)a1 >> 14)) >> 2) & 7;
      *(_BYTE *)(a1 + 1) = (((unsigned __int8)(*a4 >> 14) | (unsigned __int8)(*(_DWORD *)a1 >> 14)) << 6)
                         | *(_BYTE *)(a1 + 1) & 0x3F;
      *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | v12;
    }
  }
  return v11;
}

