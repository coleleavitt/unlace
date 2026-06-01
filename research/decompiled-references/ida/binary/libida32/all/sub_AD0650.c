__int64 __fastcall sub_AD0650(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  bool v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned int *v13; // rsi
  _DWORD *v14; // rdi
  size_t v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx

  v5 = *(_QWORD *)(a3 + 40);
  if ( (v5 & 7) != 0 )
  {
    v9 = 0;
    v12 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      goto LABEL_8;
LABEL_14:
    v10 = v9 == v12;
LABEL_7:
    if ( v10 )
      goto LABEL_8;
    return 0;
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8;
  v10 = v8 == 0;
  if ( (v7 & 7) != 0 )
    goto LABEL_7;
  v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v11;
  if ( v11 == 0 || v10 )
    goto LABEL_14;
  v13 = *(unsigned int **)(v8 + 16);
  v14 = *(_DWORD **)(v11 + 16);
  v15 = *v13;
  if ( v15 != *v14 )
    return 0;
  if ( *v13 )
  {
    v10 = memcmp(v14 + 4, v13 + 4, v15) == 0;
    goto LABEL_7;
  }
LABEL_8:
  v16 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
    v17 = v16[1];
  else
    v17 = *v16;
  v18 = (unsigned __int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    return sub_ACDF50(a1, v18[1], v17);
  else
    return sub_ACDF50(a1, *v18, v17);
}

