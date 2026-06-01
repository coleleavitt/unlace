unsigned __int64 __fastcall sub_1B103A0(
        _QWORD **a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  unsigned int v10; // r14d
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  size_t v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  size_t v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp-10h] [rbp-58h]
  __int64 v31; // [rsp-8h] [rbp-50h]
  _QWORD v32[8]; // [rsp+8h] [rbp-40h] BYREF

  v10 = a5;
  v13 = (__int64)a3;
  v14 = sub_19146F0((__int64)*a1, a3, (__int64)a3, a4, a5, (__int64)a6, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  if ( !v14 )
    return 0;
  v17 = v14;
  if ( a6 )
  {
    v13 = a2;
    v18 = sub_1929BB0((__int64)*a1, a2, v10, (unsigned int)(a9 != 5) + 5, v14, a6, a7, a8, 0);
    v15 = v30;
    v16 = v31;
    v17 = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v18 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      return 0;
  }
  v32[0] = a1[8][6];
  v19 = sub_C1BEF0((__int64)v32, v13, v15, v16);
  if ( !sub_9EC890(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), v13, v20, v21, v22)
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
    && (*(_BYTE *)((*a1)[29] + 1LL) & 8) == 0 )
  {
    return 0;
  }
  if ( !*((_BYTE *)a1 + 104) )
  {
    v28 = j__strlen(".capture_expr.");
    v29 = sub_1B00390(*a1, a1[10], a4, ".capture_expr.", v28, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
    v25 = v29;
    if ( !*((_BYTE *)a1 + 104) )
      goto LABEL_9;
    v17 = v29;
  }
  v23 = j__strlen(".capture_expr.");
  v24 = sub_1B00390(*a1, a1[10], a4, ".capture_expr.", v23, a7, a8);
  v25 = v17;
  v17 = v24 & 0xFFFFFFFFFFFFFFFELL;
LABEL_9:
  if ( !v25 )
    return 0;
  if ( !v17 )
    return 0;
  v26 = sub_1B0EA60(*a1, a2, *((_DWORD *)a1 + 6), v17, v25, a1[12], a7, a8, v19, 0, 0, a4);
  if ( v26 <= 1 )
    return 0;
  return v26 & 0xFFFFFFFFFFFFFFFELL;
}
