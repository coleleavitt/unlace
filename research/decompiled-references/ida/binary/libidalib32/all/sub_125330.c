unsigned __int64 __fastcall sub_125330(__int64 a1)
{
  int v3; // [rsp+Ch] [rbp-3Ch] BYREF
  __int128 v4; // [rsp+10h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  getinf_buf();
  v3 = 0;
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 9, &v3);
  v3 = BYTE2(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 7, &v3);
  v3 = BYTE4(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 11, &v3);
  v3 = BYTE6(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 8, &v3);
  v3 = BYTE7(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 10, &v3);
  v3 = BYTE8(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 12, &v3);
  v3 = BYTE9(v4);
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 8LL))(a1, 15, &v3);
  return v5 - __readfsqword(0x28u);
}

