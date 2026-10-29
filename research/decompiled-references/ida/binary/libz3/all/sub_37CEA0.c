__int64 __fastcall sub_37CEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-48h]

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C4D990;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (_QWORD *)sub_186B270(0x4E8u);
  *v4 = a2;
  v5 = v4 + 1;
  v6 = v4;
  sub_D50630(v4 + 1, a2);
  v8 = *v6;
  sub_D85990(v6 + 81, *v6, *(_DWORD *)(*v6 + 712LL) != 0, v6 + 148);
  v6[81] = &off_1C4D970;
  sub_D83130(v6 + 148, v8, v5, a1 + 24);
  *(_QWORD *)(v3 + 16) = v6;
  return v3;
}

