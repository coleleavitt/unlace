__int64 __fastcall sub_11500(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int16 v5; // [rsp+8h] [rbp-20h] BYREF
  __int16 v6; // [rsp+Ah] [rbp-1Eh] BYREF
  __int16 v7; // [rsp+Ch] [rbp-1Ch] BYREF
  __int16 v8; // [rsp+Eh] [rbp-1Ah] BYREF
  __int16 v9; // [rsp+10h] [rbp-18h] BYREF
  __int16 v10; // [rsp+12h] [rbp-16h] BYREF
  int v11; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v5 = 1;
  v3 = *a2;
  v7 = 1;
  v9 = 2047;
  v10 = 2047;
  v6 = 1;
  v8 = 1;
  v11 = 2;
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(v3 + 8))(a2, 1, &v5);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 2, &v6);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 3, &v7);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 4, &v8);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 5, &v9);
  (*(void (__fastcall **)(__int64 *, __int64, __int16 *))(*a2 + 8))(a2, 6, &v10);
  (*(void (__fastcall **)(__int64 *, __int64, int *))(*a2 + 8))(a2, 9, &v11);
  return 0;
}
