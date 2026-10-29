__int64 __fastcall sub_A1CEB0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v4; // al
  _BOOL8 v5; // rcx
  __int64 result; // rax
  unsigned __int8 (__fastcall *v7)(__int64, char *, _BOOL8); // r12
  char v8; // al
  _BOOL8 v9; // rdx
  unsigned __int8 (__fastcall *v10)(__int64, const char *, _BOOL8); // r12
  char v11; // al
  _BOOL8 v12; // rdx
  unsigned __int8 (__fastcall *v13)(__int64, char *, _BOOL8); // r12
  char v14; // al
  _BOOL8 v15; // rdx
  char v16; // [rsp+7h] [rbp-21h] BYREF
  _QWORD v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = 0;
  if ( v4 )
    v5 = *a2 == *a3;
  result = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, _BOOL8, char *, _QWORD *))(*(_QWORD *)a1 + 120LL))(
             a1,
             "Availability",
             0,
             v5,
             &v16,
             v17);
  if ( (_BYTE)result )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    v7 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v9 = 0;
    if ( v8 )
      v9 = *a2 == 1;
    if ( v7(a1, "none", v9) )
      *a2 = 1;
    v10 = *(unsigned __int8 (__fastcall **)(__int64, const char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v12 = 0;
    if ( v11 )
      v12 = *a2 == 2;
    if ( v10(a1, "nonswift", v12) )
      *a2 = 2;
    v13 = *(unsigned __int8 (__fastcall **)(__int64, char *, _BOOL8))(*(_QWORD *)a1 + 168LL);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v15 = 0;
    if ( v14 )
      v15 = *a2 == 0;
    if ( v13(a1, "available", v15) )
      *a2 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, v17[0]);
  }
  else if ( v16 )
  {
    result = (unsigned int)*a3;
    *a2 = result;
  }
  return result;
}

