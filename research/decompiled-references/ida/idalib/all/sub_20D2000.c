_QWORD *__fastcall sub_20D2000(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  void *v14; // rax
  __int64 v15; // rcx
  size_t v16; // rdx
  size_t v17; // rsi

  sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 40);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 )
  {
    v8 = *(_BYTE **)(a2 + 8);
  }
  else
  {
    v6 = v3 + 993;
    v7 = 2 * v4;
    if ( v6 > v7 )
    {
      *(_QWORD *)(a2 + 24) = v6;
      v7 = v6;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v7;
    }
    v8 = realloc(*(void **)(a2 + 8), v7);
    *(_QWORD *)(a2 + 8) = v8;
    if ( !v8 )
      goto LABEL_22;
    v3 = *(_QWORD *)(a2 + 16);
    v5 = v3 + 1;
  }
  *(_QWORD *)(a2 + 16) = v5;
  v8[v3] = 40;
  v9 = *(_BYTE **)(a1 + 32);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v10 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 64LL))(*(_QWORD *)(a1 + 32), a2);
  else
    v10(a2, *(_QWORD *)(a1 + 32));
  if ( (v9[9] & 0xC0) != 0x40 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v11 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2);
    else
      v11(a2, (__int64)v9);
  }
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 24);
  --*(_DWORD *)(a2 + 40);
  v14 = *(void **)(a2 + 8);
  v15 = v12 + 1;
  if ( v12 + 1 > v13 )
  {
    v16 = v12 + 993;
    v17 = 2 * v13;
    if ( v16 > v17 )
    {
      *(_QWORD *)(a2 + 24) = v16;
      v17 = v16;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v17;
    }
    v14 = realloc(v14, v17);
    *(_QWORD *)(a2 + 8) = v14;
    if ( v14 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      v15 = v12 + 1;
      goto LABEL_17;
    }
LABEL_22:
    abort();
  }
LABEL_17:
  *(_QWORD *)(a2 + 16) = v15;
  *((_BYTE *)v14 + v12) = 41;
  return sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 40), *(const void **)(a1 + 48));
}
