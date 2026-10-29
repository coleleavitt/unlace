__int64 __fastcall sub_A42240(__int64 a1, _BYTE *a2)
{
  unsigned __int8 (__fastcall *v2)(__int64, char *, _BOOL8); // r12
  char v3; // al
  _BOOL8 v4; // rdx
  unsigned __int8 (__fastcall *v5)(__int64, char *, _BOOL8); // r12
  char v6; // al
  _BOOL8 v7; // rdx
  unsigned __int8 (__fastcall *v8)(__int64, char *, _BOOL8); // r12
  char v9; // al
  _BOOL8 v10; // rdx
  unsigned __int8 (__fastcall *v11)(__int64, char *, _BOOL8); // r12
  char v12; // al
  _BOOL8 v13; // rdx
  unsigned __int8 (__fastcall *v14)(__int64, char *, _BOOL8); // r12
  char v15; // al
  _BOOL8 v16; // rdx
  unsigned __int8 (__fastcall *v17)(__int64, const char *, _BOOL8); // r12
  char v18; // al
  _BOOL8 v19; // rdx
  unsigned __int8 (__fastcall *v20)(__int64, char *, _BOOL8); // r12
  char v21; // al
  _BOOL8 v22; // rdx
  unsigned __int8 (__fastcall *v23)(__int64, char *, _BOOL8); // r12
  char v24; // al
  _BOOL8 v25; // rdx
  __int64 (__fastcall *v26)(__int64, char *, _BOOL8); // r12
  char v27; // al
  _BOOL8 v28; // rdx
  __int64 result; // rax

  v2 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v4 = 0;
  if ( v3 )
    v4 = *a2 == 0;
  if ( v2(a1, "Nonnull", v4) )
    *a2 = 0;
  v5 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v7 = 0;
  if ( v6 )
    v7 = *a2 == 1;
  if ( v5(a1, "Optional", v7) )
    *a2 = 1;
  v8 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v10 = 0;
  if ( v9 )
    v10 = *a2 == 2;
  if ( v8(a1, "Unspecified", v10) )
    *a2 = 2;
  v11 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v13 = 0;
  if ( v12 )
    v13 = *a2 == 3;
  if ( v11(a1, "NullableResult", v13) )
    *a2 = 3;
  v14 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v16 = 0;
  if ( v15 )
    v16 = *a2 == 2;
  if ( v14(a1, "Scalar", v16) )
    *a2 = 2;
  v17 = *(unsigned __int8 (__fastcall **)(__int64, const char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v19 = 0;
  if ( v18 )
    v19 = *a2 == 0;
  if ( v17(a1, "N", v19) )
    *a2 = 0;
  v20 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v22 = 0;
  if ( v21 )
    v22 = *a2 == 1;
  if ( v20(a1, "O", v22) )
    *a2 = 1;
  v23 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v25 = 0;
  if ( v24 )
    v25 = *a2 == 2;
  if ( v23(a1, "U", v25) )
    *a2 = 2;
  v26 = *(__int64 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v28 = 0;
  if ( v27 )
    v28 = *a2 == 2;
  result = v26(a1, "S", v28);
  if ( (_BYTE)result )
    *a2 = 2;
  return result;
}
