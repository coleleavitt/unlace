__int64 __fastcall sub_3EFFF0(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF
  __int16 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v1 = *(_BYTE *)(a1 + 728) == 0;
  v7 = __readfsqword(0x28u);
  if ( v1 )
  {
    parse_decls(
      0,
      "enum ptrauth_key { ptrauth_key_asia = 0, ptrauth_key_asib = 1, ptrauth_key_asda = 2, ptrauth_key_asdb = 3 };",
      sub_6CAE0,
      0);
    v6 = 256;
    v5[1] = "ptrauth_key";
    v5[0] = get_idati(
              0,
              "enum ptrauth_key { ptrauth_key_asia = 0, ptrauth_key_asib = 1, ptrauth_key_asda = 2, ptrauth_key_asdb = 3 };",
              v3,
              v4);
    create_tinfo(a1 + 728, 45, 61, v5);
  }
  return a1 + 728;
}
