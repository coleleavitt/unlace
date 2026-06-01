__int64 __fastcall sub_1DFEA80(__int64 a1, __int64 **a2)
{
  __int64 v2; // r13
  void (__fastcall *v3)(__int64, __int64 (__fastcall ***)(), _QWORD *, __int64); // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-78h] BYREF
  int v12; // [rsp+18h] [rbp-70h]
  __int128 v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  char v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+3Ch] [rbp-4Ch]
  __int64 v17; // [rsp+40h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v17 = a1;
  v13 = 0;
  v11 = &off_2BEBE68;
  v12 = 0;
  v15 = 0;
  v16 = 1;
  v14 = 0;
  sub_227B8B0(&v11, 0, 0, 0);
  v2 = **a2;
  v3 = *(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), _QWORD *, __int64))(*(_QWORD *)v2 + 96LL);
  v10[0] = sub_16043A0((_QWORD *)a2[1][31], (_QWORD *)a2[1][30], v4, v5, v6, v7);
  v10[1] = v8;
  v3(v2, &v11, v10, 1);
  v11 = &off_2BEBE68;
  sub_227B7A0(&v11);
  return a1;
}
