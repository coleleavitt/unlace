__int64 __fastcall sub_B60A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+40h] [rbp-18h]

  v4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v9[1] = HIDWORD(a3);
  v10 = a4;
  v11 = a1;
  v9[0] = a3 & 0xDF7FFDFF | 0x800200;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(v5 + 16);
  if ( v6 == 48 )
  {
    v7 = sub_F3D1D0(v5, a2, a3, a4, v4);
    return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v7 + 88LL))(v7, a2, v9);
  }
  if ( (v9[0] & 0x200000) != 0 && v6 == 29 )
  {
    v7 = sub_F3D720(v5);
    return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v7 + 88LL))(v7, a2, v9);
  }
  v13 = 257;
  return sub_F50AF0(&v11, a2, v9, v12, 0);
}

