__int64 __fastcall sub_790190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rax
  _DWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]

  v10 = a1;
  v8[1] = HIDWORD(a3);
  v9 = a4;
  v8[0] = a3 & 0xDF7FFDFF | 0x800200;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  if ( v5 == 47 )
  {
    v6 = sub_B14A40(v4);
    return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v6 + 88LL))(v6, a2, v8);
  }
  if ( (v8[0] & 0x200000) != 0 && v5 == 28 )
  {
    v6 = sub_B14EC0(v4);
    return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v6 + 88LL))(v6, a2, v8);
  }
  v12 = 257;
  return sub_B2AEC0(&v10, a2, v8, v11, 0);
}

