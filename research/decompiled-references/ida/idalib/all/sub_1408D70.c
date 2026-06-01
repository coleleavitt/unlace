void __fastcall sub_1408D70(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // r12
  __int64 v4; // r12
  char *v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD vars8[2]; // [rsp+8h] [rbp+8h] BYREF
  _BYTE vars18[128]; // [rsp+18h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  vars0 = *(_DWORD *)(a2 + 96);
  vars8[0] = vars18;
  vars8[1] = 0x200000000LL;
  if ( v2 )
    sub_13FA600((__int64)vars8, a2);
  v4 = *(_QWORD *)(v3 + 48);
  v5 = (char *)&vars0;
  vars18[80] = *(_BYTE *)(a2 + 100);
  v6 = *(unsigned int *)(v4 + 1072);
  v7 = *(_QWORD *)(v4 + 1064);
  v8 = v6 + 1;
  v9 = v7 + 112 * v6;
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 1076) )
  {
    v10 = v4 + 1064;
    if ( v7 > (unsigned __int64)&vars0 || v9 <= (unsigned __int64)&vars0 )
    {
      sub_1408BF0(v10, v8);
      v9 = *(_QWORD *)(v4 + 1064) + 112LL * *(unsigned int *)(v4 + 1072);
    }
    else
    {
      sub_1408BF0(v10, v8);
      v11 = *(_QWORD *)(v4 + 1064);
      v5 = (char *)vars8 + v11 - v7;
      v9 = v11 + 112LL * *(unsigned int *)(v4 + 1072);
    }
  }
  *(_DWORD *)v9 = *(_DWORD *)v5;
  *(_QWORD *)(v9 + 8) = v9 + 24;
  *(_QWORD *)(v9 + 16) = 0x200000000LL;
  if ( *((_DWORD *)v5 + 4) )
    sub_13FA600(v9 + 8, (__int64)(v5 + 8));
  *(_BYTE *)(v9 + 104) = v5[104];
  ++*(_DWORD *)(v4 + 1072);
  sub_13F4560((__int64)vars8);
}
