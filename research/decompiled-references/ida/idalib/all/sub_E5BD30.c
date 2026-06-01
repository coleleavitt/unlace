__int64 __fastcall sub_E5BD30(__int64 a1, __int64 a2)
{
  bool v2; // cf
  bool v3; // zf
  char *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  size_t v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v9; // [rsp+10h] [rbp-48h] BYREF
  bool v10; // [rsp+18h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 2) < 0xFu;
  v3 = *(_BYTE *)(a2 + 2) == 15;
  v9 = 1;
  v10 = v2 || v3;
  sub_222AB70(a1 + 1048, "isPostfix", 9);
  sub_222CAC0(a1 + 1048, &v9);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v9);
  v4 = sub_BF9560(*(_BYTE *)(a2 + 2) >> 3);
  sub_E59830((__int64)&v9, (__int64)v4, v5);
  sub_222AB70(a1 + 1048, "opcode", 6);
  sub_222CAC0(a1 + 1048, &v9);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v9);
  result = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x1000000) == 0 )
  {
    v10 = 0;
    v9 = 1;
    v7 = j__strlen("canOverflow");
    v8[0] = &v9;
    v8[1] = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"canOverflow", v7, (__int64)sub_E58580, v8);
    return sub_222B2A0(&v9);
  }
  return result;
}
