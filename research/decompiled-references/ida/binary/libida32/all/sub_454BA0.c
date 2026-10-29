__int64 __fastcall sub_454BA0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1480);
  LOBYTE(v8) = 1;
  v6 = v5 + 2312;
  sub_79B440(v5 + 2312, v3, a2, &v8, 1, 80);
  v8 = a3;
  sub_79B440(v6, v3, a2, &v8, 4, 65);
  return 0;
}

