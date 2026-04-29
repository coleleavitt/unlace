__int64 __fastcall sub_D2F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v7[4]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v8[5]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( sub_5AB0((__int64)v7, a2)
    && !v7[2]
    && !v7[1]
    && v7[0] == 22
    && (sub_D210(a2, v8, 1u, (__int64)"Number of ASN1 string bytes", -1, -1),
        sub_C840(a1, v8[0], v3, v4, v5, v6),
        qlread(a2, *a1, (a1[1] == 0) + a1[1] - 1) == (a1[1] == 0) + a1[1] - 1) )
  {
    return v8[1];
  }
  else
  {
    return -1;
  }
}
