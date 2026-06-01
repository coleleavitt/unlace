__int64 __fastcall sub_1F757C0(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax
  volatile signed __int32 *v5; // rdi
  _QWORD *v6; // [rsp+0h] [rbp-28h] BYREF
  volatile signed __int32 *v7; // [rsp+8h] [rbp-20h]

  v2 = (_QWORD *)operator new(0x220u);
  v2[1] = 0x100000001LL;
  *v2 = off_2C02AF8;
  v2[2] = v2 + 4;
  v2[3] = 0x2000000000LL;
  sub_A1FE00((__int64)(v2 + 2), 1, 1);
  sub_A1FE00((__int64)(v2 + 2), 6, 4);
  sub_A1FE00((__int64)(v2 + 2), 3, 4);
  v3 = *(_QWORD *)(a1 + 16);
  v6 = v2 + 2;
  v7 = (volatile signed __int32 *)v2;
  result = sub_A22F90(v3, (__int64 *)&v6);
  v5 = v7;
  *(_DWORD *)(a1 + 3448) = result;
  if ( v5 )
    return sub_4343A0(v5);
  return result;
}
