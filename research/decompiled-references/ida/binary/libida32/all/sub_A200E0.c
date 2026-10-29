__int64 __fastcall sub_A200E0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  __int64 result; // rax
  __int64 v11; // rbp
  size_t v12; // r13
  __int64 v13; // rax
  const void *v14; // rax
  __int64 v15; // rdx
  unsigned __int8 (__fastcall *v16)(__int64 *, char *, _BOOL8); // rbp
  char v17; // al
  _BOOL8 v18; // rdx
  unsigned __int8 (__fastcall *v19)(__int64 *, char *, _BOOL8); // rbp
  char v20; // al
  _BOOL8 v21; // rdx
  unsigned __int8 (__fastcall *v22)(__int64 *, char *, _BOOL8); // rbp
  char v23; // al
  _BOOL8 v24; // rdx
  char v25; // [rsp+7h] [rbp-51h] BYREF
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a1;
  v25 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(a1);
  if ( v9 )
    v9 = *(_BYTE *)(a3 + 4) ^ 1;
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a3 + 4) )
      goto LABEL_10;
    *(_DWORD *)a3 = 0;
    *(_BYTE *)(a3 + 4) = 1;
  }
  if ( !*(_BYTE *)(a3 + 4) )
    goto LABEL_7;
LABEL_10:
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
             a1,
             a2,
             a5,
             v9,
             &v25,
             &v26);
  if ( !(_BYTE)result )
  {
LABEL_7:
    if ( v25 )
    {
      result = *a4;
      *(_QWORD *)a3 = *a4;
    }
    return result;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1)
    && (v11 = sub_2254E80(a1), *(_DWORD *)(v11 + 32) == 1)
    && (v12 = j__strlen("<none>"),
        v13 = *(_QWORD *)(v11 + 80),
        v27[0] = *(_QWORD *)(v11 + 72),
        v27[1] = v13,
        v14 = (const void *)sub_A1D7F0((__int64)v27, 32),
        v12 == v15)
    && (!v12 || !memcmp(v14, "<none>", v12)) )
  {
    *(_QWORD *)a3 = *a4;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
    v16 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
    v17 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    v18 = 0;
    if ( v17 )
      v18 = *(_DWORD *)a3 == 0;
    if ( v16(a1, "none", v18) )
      *(_DWORD *)a3 = 0;
    v19 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
    v20 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    v21 = 0;
    if ( v20 )
      v21 = *(_DWORD *)a3 == 1;
    if ( v19(a1, "struct", v21) )
      *(_DWORD *)a3 = 1;
    v22 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
    v23 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    v24 = 0;
    if ( v23 )
      v24 = *(_DWORD *)a3 == 2;
    if ( v22(a1, "enum", v24) )
      *(_DWORD *)a3 = 2;
    (*(void (__fastcall **)(__int64 *))(*a1 + 184))(a1);
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v26);
}

