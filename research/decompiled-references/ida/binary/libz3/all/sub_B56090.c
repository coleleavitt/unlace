__int64 __fastcall sub_B56090(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rax
  unsigned int v4; // r14d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-68h]
  _BYTE v13[8]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v14[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 32) + 24LL;
  v3 = *(_DWORD **)(a2 + 24);
  if ( v3 && *v3 == *(_DWORD *)(a1 + 40) && v3[1] == 1 )
    return sub_15E1AF0(*(_QWORD *)(a1 + 24));
  v12 = *(_QWORD *)(a1 + 32) + 24LL;
  sub_181A6B0(v13);
  v4 = sub_15C5560(a1 + 24, a2);
  v9 = sub_15C5540((int)a1 + 24, a2, v5, v6, v7, v8);
  sub_181AAB0(v2, v13, v9, v4, 0);
  v10 = sub_15CC210(*(_QWORD *)(a1 + 32), v13);
  sub_182EF00(*(_QWORD *)(v12 + 728), v14);
  return v10;
}

