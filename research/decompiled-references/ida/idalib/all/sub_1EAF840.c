__int64 __fastcall sub_1EAF840(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v4[32]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+50h] [rbp-18h]

  sub_1EAF7C0(&v2, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  result = v2;
  if ( v2 )
  {
    v3 = v2;
    v2 = 0;
    sub_2221210(v4, &v3);
    v5[0] = "Cursor should always be able to go back, failed: ";
    v5[2] = v4;
    v6 = 1027;
    sub_2221AD0(v5, 1);
  }
  return result;
}
