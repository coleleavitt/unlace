unsigned __int64 __fastcall sub_3F89A0(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 segm_base; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  int v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a2 == 15 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = -(__int64)(get_sreg(v3, 20) == 0);
    v5 = getseg(v3);
    segm_base = get_segm_base(v5);
    v7 = *(_QWORD *)(a1 + 832);
    v8 = *(_QWORD *)(a1 + 40);
    v10[0] = 0xFFFFFFFF00000000LL;
    v10[1] = 0;
    sub_120450((__int64)v10, v7, v3 + (v4 & 4) + 4 - segm_base, 4, v8, 0);
    if ( LOBYTE(v10[0]) == 2 )
      BYTE1(v10[0]) |= 8u;
    v9 = *(_QWORD *)(a1 + 832);
    v11 = 0x400000001LL;
    v12 = *(_DWORD *)(v9 + 660);
    sub_3F86E0(a1, 4u, (unsigned __int8 *)v10, nullptr, (__int64)&v11);
    sub_11C7E0((__int64)&v11);
    sub_11C7E0((__int64)v10);
  }
  return v13 - __readfsqword(0x28u);
}
