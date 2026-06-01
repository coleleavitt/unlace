__int64 __fastcall sub_7970F0(__int64 a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  __int64 v3; // rbp
  bool v4; // dl
  __int64 result; // rax
  _BYTE v6[13]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+Dh] [rbp-4Bh]
  _QWORD v8[8]; // [rsp+15h] [rbp-43h]

  *(_QWORD *)((char *)&v8[4] + 3) = __readfsqword(0x28u);
  if ( !a1 )
    return 2;
  v1 = (FILE *)fopenRB(a1);
  v2 = v1;
  if ( !v1 )
    return 2;
  v3 = qfread(v1, v6);
  qfclose(v2);
  if ( v3 != 45 )
    return 2;
  if ( v8[0] ^ 0x29432820352E3120LL | v7 ^ 0x7620656572742D42LL
    || (result = 3,
        *(_QWORD *)((char *)&v8[1] + 2) ^ 0x30393931206C6FLL | *(_QWORD *)((char *)v8 + 2) ^ 0x502029432820352ELL) )
  {
    v4 = sub_71B730((__int64)v6);
    result = 1;
    if ( v4 )
      return BYTE5(v7) != 0;
  }
  return result;
}

