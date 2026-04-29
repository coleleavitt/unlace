unsigned __int64 __fastcall sub_37F170(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+2Ch] [rbp-3Ch]
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v6 = a2[17];
  v7 = *a2;
  v23 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 8);
  v14 = off_4C6C58;
  v16 = v7;
  v17 = v7;
  v20 = v6 - 1;
  v18 = off_4C6C58;
  v21 = v7;
  v22 = v7;
  v15 = 0;
  v19 = 0;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64, __int64))callui)(
    74,
    v8,
    &v14,
    &v18,
    a5,
    a6);
  callui(67, *(_QWORD *)(a1 + 8), v9, v10, v11, v12, v14, v15, v16, v17);
  return v23 - __readfsqword(0x28u);
}
