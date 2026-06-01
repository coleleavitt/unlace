void *__fastcall sub_20D7DD0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rsi
  void *v4; // rax
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  void *result; // rax
  __int64 v16; // rcx
  size_t v17; // rdx
  size_t v18; // rsi
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-38h] BYREF
  __int16 v20; // [rsp+8h] [rbp-30h]
  char v21; // [rsp+Ah] [rbp-2Eh]
  __int64 v22; // [rsp+10h] [rbp-28h]

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 16);
  v3 = *(_QWORD *)(*a1 + 24);
  ++*(_DWORD *)(v1 + 40);
  v4 = *(void **)(v1 + 8);
  v5 = v2 + 1;
  if ( v2 + 1 > v3 )
  {
    v6 = v2 + 993;
    v7 = 2 * v3;
    if ( v6 > v7 )
    {
      *(_QWORD *)(v1 + 24) = v6;
      v7 = v6;
    }
    else
    {
      *(_QWORD *)(v1 + 24) = v7;
    }
    v4 = realloc(v4, v7);
    *(_QWORD *)(v1 + 8) = v4;
    if ( !v4 )
      goto LABEL_20;
    v2 = *(_QWORD *)(v1 + 16);
    v5 = v2 + 1;
  }
  *(_QWORD *)(v1 + 16) = v5;
  *((_BYTE *)v4 + v2) = 40;
  v8 = *a1;
  v9 = *(_QWORD *)(a1[1] + 16);
  v20 = 16426;
  v22 = v9;
  v21 = v21 & 0xF0 | 5;
  v19 = off_2BE7680;
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL);
  if ( v10 == sub_20CEB40 )
    sub_20D4A40((__int64)&v19, v8);
  else
    v10(v8, (__int64)&v19);
  if ( (HIBYTE(v20) & 0xC0) != 0x40 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL);
    if ( v11 != sub_20CEB60 )
      v11(v8, (__int64)&v19);
  }
  v12 = *a1;
  v13 = *(_QWORD *)(*a1 + 16);
  v14 = *(_QWORD *)(*a1 + 24);
  --*(_DWORD *)(v12 + 40);
  result = *(void **)(v12 + 8);
  v16 = v13 + 1;
  if ( v13 + 1 > v14 )
  {
    v17 = v13 + 993;
    v18 = 2 * v14;
    if ( v17 > v18 )
    {
      *(_QWORD *)(v12 + 24) = v17;
      v18 = v17;
    }
    else
    {
      *(_QWORD *)(v12 + 24) = v18;
    }
    result = realloc(result, v18);
    *(_QWORD *)(v12 + 8) = result;
    if ( result )
    {
      v13 = *(_QWORD *)(v12 + 16);
      v16 = v13 + 1;
      goto LABEL_16;
    }
LABEL_20:
    abort();
  }
LABEL_16:
  *(_QWORD *)(v12 + 16) = v16;
  *((_BYTE *)result + v13) = 41;
  return result;
}
