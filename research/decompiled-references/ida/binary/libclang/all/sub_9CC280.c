__int64 __fastcall sub_9CC280(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int8 **v9; // r12
  unsigned int v10; // ecx
  unsigned __int8 **v11; // [rsp+18h] [rbp-40h] BYREF
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_DWORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0x1F;
LABEL_3:
    v5 <<= v3;
LABEL_4:
    *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v5;
    return 1;
  }
  if ( v3 <= 0x1F )
    goto LABEL_3;
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v14 = 1;
  v13 = 32;
  v8 = *(_QWORD *)(v7 + 8);
  v12 = (void *)v3;
  v11 = (unsigned __int8 **)sub_A2E240(a1, v7, 2220, 0);
  v9 = v11;
  if ( v11 )
  {
    sub_9C19A0(&v11, (__int64)&v12);
    sub_9B5660(v9, v8);
    sub_9B58B0(v9, 32);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v13 > 0x40 && v12 )
      operator delete[](v12);
    if ( v5 )
    {
      _BitScanReverse(&v10, v5);
      v5 <<= v10 ^ 0x1F;
    }
    goto LABEL_4;
  }
  if ( v13 > 0x40 && v12 )
  {
    operator delete[](v12);
    return 0;
  }
  return result;
}

