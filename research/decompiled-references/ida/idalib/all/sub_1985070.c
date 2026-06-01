__int64 __fastcall sub_1985070(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9

  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v6;
  if ( v9 )
  {
    v11 = sub_18CBE40((__int64)a1, v9);
    if ( v11 )
    {
      v13 = *a1;
      v9 = *(unsigned int *)(a2 + 4);
      v14 = v10 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v10 & 0xFFFFFFFFFFFFFFFELL) == *(_QWORD *)(a2 + 24) && v11 == *(_QWORD *)(a2 + 16) )
      {
        sub_1910D40(v13, v9, v11, 1, v14, v12, a3, a4);
        v17 = *(_DWORD **)(a2 + 24);
        goto LABEL_11;
      }
      return sub_19BD000(v13, v9, (*(_QWORD *)a2 & 0x80000LL) != 0, (*(_QWORD *)a2 & 0x100000LL) != 0, v14);
    }
    return 1;
  }
  v16 = v6;
  v17 = *(_DWORD **)(a2 + 24);
  v14 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (_DWORD *)v14 != v17 )
  {
    v13 = *a1;
    v9 = *(unsigned int *)(a2 + 4);
    return sub_19BD000(v13, v9, (*(_QWORD *)a2 & 0x80000LL) != 0, (*(_QWORD *)a2 & 0x100000LL) != 0, v14);
  }
LABEL_11:
  if ( (*v17 & 0x10000) == 0 )
  {
    v18 = *(_QWORD *)(*a1 + 248);
    v19 = sub_C93F60(a2, v9, v7, v8);
    v20 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v18, v19) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v20 + 16) == 48 )
    {
      v25 = sub_F60F10(*v20, v19, v21, v22, v23, v24);
      v26 = *a1;
      v27 = sub_1A69EF0(*a1, v25);
      sub_1910D40(v26, *(unsigned int *)(a2 + 4), v27, 1, v28, v29, a3, a4);
    }
  }
  return a2;
}
