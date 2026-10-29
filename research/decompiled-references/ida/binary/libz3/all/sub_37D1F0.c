__int64 __fastcall sub_37D1F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = sub_186B270(0x30u);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_BYTE *)(v4 + 24) = 1;
  *(_QWORD *)v4 = &off_1C64D38;
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = sub_D93300(v3, a2);
  return v4;
}

