__int64 __fastcall sub_820130(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  void (__fastcall *v7)(__int64, __int64 (__fastcall ***)(), __int64, __int64); // r14
  __int64 v8; // rax
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+8h] [rbp-60h]
  __int128 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  __int64 v16; // [rsp+30h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v16 = a1;
  v12 = 0;
  v10 = &off_49DA2C8;
  v11 = 0;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  sub_2623850(&v10, 0, 0, 0, a5, a6);
  v6 = **a2;
  v7 = *(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64, __int64))(*(_QWORD *)v6 + 96LL);
  v8 = sub_798D40(v6);
  v7(v6, &v10, v8 + 17304, 1);
  v10 = &off_49DA2C8;
  sub_2623770(&v10);
  return a1;
}

