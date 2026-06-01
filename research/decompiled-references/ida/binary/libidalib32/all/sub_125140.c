unsigned __int64 __fastcall sub_125140(_QWORD *a1, char a2)
{
  void (__fastcall **v3)(_QWORD *, __int64, int *); // rax
  __int64 v4; // r12
  void (__fastcall **v5)(_QWORD *, __int64, int *); // rax
  int v6; // r12d
  char v7; // al
  char v8; // al
  char v9; // al
  void (__fastcall **v10)(_QWORD *, __int64, int *); // rax
  int v12; // [rsp+Ch] [rbp-5Ch] BYREF
  int v13; // [rsp+10h] [rbp-58h] BYREF
  int v14; // [rsp+14h] [rbp-54h] BYREF
  int v15; // [rsp+18h] [rbp-50h] BYREF
  int v16; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int128 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = (void (__fastcall **)(_QWORD *, __int64, int *))*a1;
  v18 = __readfsqword(0x28u);
  v4 = ((__int64 (__fastcall *)(_QWORD *))v3[9])(a1);
  v5 = (void (__fastcall **)(_QWORD *, __int64, int *))*a1;
  v17 = 0;
  LOBYTE(v17) = a2;
  (*v5)(a1, 2, &v12);
  v6 = *(_DWORD *)(**(_QWORD **)(v4 + 176) + 4LL * v12);
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 3, &v13);
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 4, &v14);
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 5, &v15);
  if ( v13 )
    v7 = v14 == 0 ? 12 : 4;
  else
    v7 = 8 * (v14 != 0);
  v8 = (v15 | v7) & 0xF;
  if ( (v6 & 0xFFFFFF0F) != 0 || v6 == 192 )
  {
    v9 = v8 | 0xC0;
  }
  else
  {
    v9 = v6 | v8;
    v6 = 0;
  }
  BYTE1(v17) = v9;
  v10 = (void (__fastcall **)(_QWORD *, __int64, int *))*a1;
  HIDWORD(v17) = v6;
  (*v10)(a1, 6, &v16);
  BYTE5(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 9, &v16);
  BYTE3(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 7, &v16);
  BYTE2(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 11, &v16);
  BYTE4(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 8, &v16);
  BYTE6(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 10, &v16);
  BYTE7(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 12, &v16);
  BYTE8(v17) = v16;
  (*(void (__fastcall **)(_QWORD *, __int64, int *))*a1)(a1, 15, &v16);
  BYTE9(v17) = v16;
  set_compiler();
  return v18 - __readfsqword(0x28u);
}

