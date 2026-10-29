__int64 __fastcall sub_726F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx

  v2 = sub_186B270(0x38u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C538A0;
  *(_QWORD *)(v2 + 16) = a1;
  sub_1858590(v2 + 24, a2);
  *(_OWORD *)(v2 + 40) = 0;
  v3 = sub_186B270(0x1E8u);
  sub_1242AA0(v3, *(_QWORD *)(v2 + 16), a2);
  *(_QWORD *)(v2 + 32) = v3;
  v4 = sub_726800(a1, a2, 0);
  v5 = sub_EE7A70(v4, v2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, a2);
  return v5;
}

