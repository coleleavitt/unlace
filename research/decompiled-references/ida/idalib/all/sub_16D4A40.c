__int64 __fastcall sub_16D4A40(__int64 a1, __int64 a2, double a3)
{
  __int64 (*v3)(); // rax
  unsigned int v4; // eax
  int v5; // ebx
  unsigned int v6; // r13d
  char v8; // al
  unsigned __int64 v9; // r14
  int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  void *v13; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-D0h]
  char v15; // [rsp+1Ch] [rbp-CCh]
  void *v16; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-C0h]
  char v18; // [rsp+2Ch] [rbp-BCh]

  v3 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 784LL);
  if ( v3 == sub_102BB40 || !(unsigned __int8)v3() )
  {
    v4 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v16, (__int64 *)(a1 + 8), v4, 0xD1Bu, 0);
    v5 = *(_DWORD *)(a2 + 20);
    LODWORD(v13) = sub_BF6D70(a2);
    HIDWORD(v13) = v5;
    v6 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v16, (__int64 *)&v13) + 120);
    sub_15F7200(&v16);
  }
  else
  {
    v8 = *(_BYTE *)(a2 + 2);
    v14 = 1;
    v15 = 0;
    v13 = nullptr;
    v9 = *(_QWORD *)(a2 + 8 * (((v8 & 8) != 0) + 1LL) + 40);
    v6 = sub_16D4840(a1, a2, 1u, (__int64)&v13);
    if ( !(_BYTE)v6 )
    {
      v17 = 64;
      v18 = 0;
      v16 = &dword_0 + 1;
      v10 = sub_98E2D0((__int64 *)&v13, (__int64 *)&v16);
      if ( v17 > 0x40 && v16 )
        operator delete[](v16);
      if ( v10 )
      {
        v11 = sub_BF6D70(a2);
        sub_168B9F0((__int64)&v16, (__int64 *)(a1 + 8), v11, 0xD1Au, 0);
        HIDWORD(v12) = sub_EEC140(v9);
        LODWORD(v12) = sub_EEB7E0(v9, a1 + 8, a3);
        v6 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v16, &v12) + 120);
        sub_15F7200(&v16);
      }
    }
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
  }
  return v6;
}
