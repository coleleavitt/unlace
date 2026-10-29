_QWORD *__fastcall sub_20D4EB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // rax
  size_t v7; // rdx
  size_t v8; // rsi
  _BYTE *v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  void *v14; // rax
  __int64 v15; // rcx
  size_t v16; // rdx
  size_t v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx

  v2 = a2[2];
  ++*((_DWORD *)a2 + 10);
  v4 = a2[3];
  v5 = v2 + 1;
  v6 = (void *)a2[1];
  if ( v2 + 1 > v4 )
  {
    v7 = v2 + 993;
    v8 = 2 * v4;
    if ( v7 > v8 )
    {
      a2[3] = v7;
      v8 = v7;
    }
    else
    {
      a2[3] = v8;
    }
    v6 = realloc(v6, v8);
    a2[1] = v6;
    if ( !v6 )
      goto LABEL_23;
    v2 = a2[2];
    v5 = v2 + 1;
  }
  a2[2] = v5;
  *((_BYTE *)v6 + v2) = 40;
  v9 = *(_BYTE **)(a1 + 16);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v10 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v9 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v10((__int64)a2, *(_QWORD *)(a1 + 16));
  if ( (v9[9] & 0xC0) != 0x40 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v11 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v9 + 72LL))(v9, a2);
    else
      v11((__int64)a2, (__int64)v9);
  }
  v12 = a2[2];
  v13 = a2[3];
  --*((_DWORD *)a2 + 10);
  v14 = (void *)a2[1];
  v15 = v12 + 1;
  if ( v12 + 1 > v13 )
  {
    v16 = v12 + 993;
    v17 = 2 * v13;
    if ( v16 > v17 )
    {
      a2[3] = v16;
      v17 = v16;
    }
    else
    {
      a2[3] = v17;
    }
    v14 = realloc(v14, v17);
    a2[1] = v14;
    if ( v14 )
    {
      v12 = a2[2];
      v15 = v12 + 1;
      goto LABEL_16;
    }
LABEL_23:
    abort();
  }
LABEL_16:
  a2[2] = v15;
  *((_BYTE *)v14 + v12) = 41;
  if ( **(_BYTE **)(a1 + 32) != 110 )
    return sub_20D1ED0(a2, *(_QWORD *)(a1 + 24), *(const void **)(a1 + 32));
  sub_20CFD70((__int64)a2);
  v19 = a2[2];
  v20 = a2[1];
  a2[2] = v19 + 1;
  *(_BYTE *)(v20 + v19) = 45;
  return sub_20D1ED0(a2, *(_QWORD *)(a1 + 24) - 1LL, (const void *)(*(_QWORD *)(a1 + 32) + 1LL));
}
