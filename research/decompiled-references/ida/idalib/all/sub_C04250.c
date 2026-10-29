__int64 __fastcall sub_C04250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+8h] [rbp-60h]
  __int128 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+2Ch] [rbp-3Ch]
  __int64 v14; // [rsp+30h] [rbp-38h]

  v4 = sub_A62AC0(a2);
  v5 = sub_E3AAF0(a2, v4, sub_BF6960, 0);
  *(_QWORD *)(a1 + 8) = 0;
  v6 = v5;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  sub_995C30(a1, 0x80u);
  v14 = a1;
  v10 = 0;
  v8 = &off_2BEBE68;
  v9 = 0;
  v12 = 0;
  v13 = 1;
  v11 = 0;
  sub_227B8B0(&v8, 0, 0, 0);
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(), _QWORD))(*(_QWORD *)v6 + 184LL))(v6, a3, &v8, 0);
  v8 = &off_2BEBE68;
  sub_227B7A0(&v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}
