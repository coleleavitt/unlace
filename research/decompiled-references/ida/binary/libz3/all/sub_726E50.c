__int64 __fastcall sub_726E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx

  v2 = sub_186B270(0x28u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C53978;
  *(_QWORD *)(v2 + 16) = a1;
  sub_1858590(v2 + 24, a2);
  v4 = sub_186B270(0x5D8u);
  sub_1230FB0(v4, *(_QWORD *)(v3 + 16), a2, v5, v6, v7);
  *(_QWORD *)(v3 + 32) = v4;
  v8 = sub_EE8D70(v3);
  v9 = sub_EF4120();
  v10 = sub_EE9040(v9);
  v11 = sub_EE7A70(v10, v8);
  v12 = sub_726800(a1, a2, 1);
  v13 = sub_EE7A70(v12, v11);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 112LL))(v13, a2);
  return v13;
}

