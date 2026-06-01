__int64 __fastcall sub_2132100(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h]
  __int64 v11; // [rsp+18h] [rbp-A0h]
  __int16 v12; // [rsp+20h] [rbp-98h]
  __m128i v13[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v14; // [rsp+50h] [rbp-68h]
  __m128i v15[2]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v16; // [rsp+80h] [rbp-38h]

  v2 = sub_2131D40(a1);
  v4 = v3;
  result = sub_21544B0(a1);
  if ( !(_BYTE)result )
  {
    if ( v4 )
    {
      v11 = v4;
      v13[0].m128i_i64[0] = (__int64)"' detected. Assembly stopping";
      v14 = 259;
      v12 = 1283;
      v9.m128i_i64[0] = (__int64)".abort '";
      v10 = v2;
      sub_A41580(v15, &v9, v13, v6, v7, v8);
      return sub_2153E90(a1, a2, v15, 0, 0);
    }
    else
    {
      v16 = 259;
      v15[0].m128i_i64[0] = (__int64)".abort detected. Assembly stopping";
      return sub_2153E90(a1, a2, v15, 0, 0);
    }
  }
  return result;
}
