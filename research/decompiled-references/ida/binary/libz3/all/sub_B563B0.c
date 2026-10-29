__int64 __fastcall sub_B563B0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // r12
  _DWORD *v4; // rax
  unsigned int v5; // r14d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-68h]
  _BYTE v14[8]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v15[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v2 != (char *)sub_B56090 )
    return v2();
  v3 = *(_QWORD *)(a1 + 32) + 24LL;
  v4 = *(_DWORD **)(a2 + 24);
  if ( v4 && *(_DWORD *)(a1 + 40) == *v4 && v4[1] == 1 )
    return sub_15E1AF0(*(_QWORD *)(a1 + 24));
  v13 = *(_QWORD *)(a1 + 32) + 24LL;
  sub_181A6B0(v14);
  v5 = sub_15C5560(a1 + 24, a2);
  v10 = sub_15C5540((int)a1 + 24, a2, v6, v7, v8, v9);
  sub_181AAB0(v3, v14, v10, v5, 0);
  v11 = sub_15CC210(*(_QWORD *)(a1 + 32), v14);
  sub_182EF00(*(_QWORD *)(v13 + 728), v15);
  return v11;
}

