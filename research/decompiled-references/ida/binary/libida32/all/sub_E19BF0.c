bool __fastcall sub_E19BF0(__int64 *a1, __int64 a2, const void *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  unsigned int *v6; // rax
  size_t v7; // r9
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  __int16 v12; // ax
  size_t v13; // rax
  bool result; // al
  unsigned __int64 v15; // rax

  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 7) != 0 )
    BUG();
  v6 = *(unsigned int **)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v7 = *v6;
  if ( v7 != a4 )
    return 0;
  if ( *v6 && memcmp(v6 + 4, a3, v7) )
    return 0;
  v9 = *(_QWORD *)(a2 + 168);
  if ( *(_DWORD *)v9 != (a5 != 0) + 2 )
    return 0;
  v10 = *(_QWORD *)(v9 + 16);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 13 )
    return 0;
  v12 = (*(_WORD *)(v11 + 18) >> 3) & 0x1FF;
  if ( v12 != 448 && v12 != 437 )
    return 0;
  if ( !sub_E19B10(a1, *(_QWORD *)(v9 + 40), "char_traits", 11, *(_QWORD *)(v9 + 16)) )
    return 0;
  if ( !a5 || (v13 = j__strlen("allocator"), result = sub_E19B10(a1, *(_QWORD *)(v9 + 64), "allocator", v13, v10)) )
  {
    v15 = sub_B9B550(a2);
    return sub_B4EF30(v15) == 0;
  }
  return result;
}

