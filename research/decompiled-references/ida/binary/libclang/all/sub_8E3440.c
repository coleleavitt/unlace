__int64 __fastcall sub_8E3440(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int8 **v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int8 **v12; // [rsp+18h] [rbp-40h] BYREF
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Ch] [rbp-2Ch]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(_QWORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v4) = v4 & 0x3F;
LABEL_3:
    v6 <<= v4;
LABEL_4:
    *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v6;
    return 1;
  }
  if ( v4 <= 0x3F )
    goto LABEL_3;
  v8 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
  v14 = 64;
  v13 = (void *)v4;
  v15 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v12 = (unsigned __int8 **)sub_A2E240(a1 + 384, v8, 2220, 0);
  v10 = v12;
  if ( v12 )
  {
    sub_8DF340(&v12, (__int64)&v13);
    sub_8D69A0(v10, v9);
    sub_8D6E40(v10, 64);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
    if ( v6 )
    {
      _BitScanReverse64(&v11, v6);
      v6 <<= (unsigned __int8)v11 ^ 0x3Fu;
    }
    goto LABEL_4;
  }
  if ( v14 > 0x40 && v13 )
  {
    operator delete[](v13);
    return 0;
  }
  return result;
}

