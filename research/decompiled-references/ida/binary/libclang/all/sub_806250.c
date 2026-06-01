__int64 __fastcall sub_806250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+8h] [rbp-60h]
  __int128 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v4 = sub_6BB140(a2);
  v5 = sub_A37240(a2, v4, sub_804030, 0);
  *(_QWORD *)(a1 + 8) = 0;
  v6 = v5;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  std::string::reserve();
  v16 = a1;
  v12 = 0;
  v10 = &off_49DA2C8;
  v11 = 0;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  sub_2623850(&v10, 0, 0, 0, v7, v8);
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(), _QWORD))(*(_QWORD *)v6 + 184LL))(
    v6,
    a3,
    &v10,
    0);
  v10 = &off_49DA2C8;
  sub_2623770(&v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}

