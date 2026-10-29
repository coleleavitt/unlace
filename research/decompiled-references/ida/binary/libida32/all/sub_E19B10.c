bool __fastcall sub_E19B10(__int64 *a1, __int64 a2, const void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int *v13; // rdi
  size_t v14; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 48 )
    return 0;
  v11 = sub_F3D1D0(v6, v5, a3, a4, a5);
  if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 60 > 1 )
    return 0;
  v12 = *(_QWORD *)(v11 + 40);
  if ( (v12 & 7) != 0 )
    BUG();
  v13 = *(unsigned int **)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v14 = *v13;
  if ( v14 != a4 || *v13 && memcmp(v13 + 4, a3, v14) )
    return 0;
  v16 = sub_E195F0(*a1, v11);
  if ( (*(_BYTE *)(v16 + 8) & 0x7F) != 0x18 )
    return 0;
  if ( !sub_E19A80(a1, v16) )
    return 0;
  v17 = *(_QWORD *)(v11 + 168);
  if ( *(_DWORD *)v17 != 1 || *(_QWORD *)(v17 + 16) != a5 )
    return 0;
  v18 = sub_B9B550(v11);
  return sub_B4EF30(v18) == 0;
}

