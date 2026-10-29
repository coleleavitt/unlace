__int64 __fastcall sub_A42DE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  __int64 result; // rax
  __int64 v11; // rbp
  size_t v12; // r13
  __int64 v13; // rax
  const void *v14; // rax
  __int64 v15; // rdx
  unsigned __int8 (__fastcall *v16)(__int64, const char *, _BOOL8); // rbp
  char v17; // al
  _BOOL8 v18; // rdx
  unsigned __int8 (__fastcall *v19)(__int64, const char *, _BOOL8); // rbp
  char v20; // al
  _BOOL8 v21; // rdx
  char v22; // [rsp+7h] [rbp-51h] BYREF
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_QWORD *)a1;
  v22 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64))(v8 + 16))(a1);
  if ( v9 )
    v9 = *(_BYTE *)(a3 + 4) ^ 1;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
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
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char *, __int64 *))(*(_QWORD *)a1 + 120LL))(
             a1,
             a2,
             a5,
             v9,
             &v22,
             &v23);
  if ( !(_BYTE)result )
  {
LABEL_7:
    if ( v22 )
    {
      result = *a4;
      *(_QWORD *)a3 = *a4;
    }
    return result;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1)
    && (v11 = sub_2278BC0(a1), *(_DWORD *)(v11 + 32) == 1)
    && (v12 = j__strlen("<none>"),
        v13 = *(_QWORD *)(v11 + 80),
        v24[0] = *(_QWORD *)(v11 + 72),
        v24[1] = v13,
        v14 = (const void *)sub_A41530((__int64)v24, 32),
        v12 == v15)
    && (!v12 || !memcmp(v14, "<none>", v12)) )
  {
    *(_QWORD *)a3 = *a4;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    sub_A42710(a1, (_DWORD *)a3, (__int64)"none", 0);
    v16 = *(unsigned __int8 (__fastcall **)(__int64, const char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v18 = 0;
    if ( v17 )
      v18 = *(_DWORD *)a3 == 1;
    if ( v16(a1, "CFReturnsRetained", v18) )
      *(_DWORD *)a3 = 1;
    sub_A42710(a1, (_DWORD *)a3, (__int64)"CFReturnsNotRetained", 2);
    v19 = *(unsigned __int8 (__fastcall **)(__int64, const char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v21 = 0;
    if ( v20 )
      v21 = *(_DWORD *)a3 == 3;
    if ( v19(a1, "NSReturnsRetained", v21) )
      *(_DWORD *)a3 = 3;
    sub_A42710(a1, (_DWORD *)a3, (__int64)"NSReturnsNotRetained", 4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, v23);
}
