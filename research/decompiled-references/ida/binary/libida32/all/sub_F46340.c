unsigned __int64 __fastcall sub_F46340(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v15[2]; // [rsp+0h] [rbp-58h] BYREF
  char v16; // [rsp+10h] [rbp-48h]
  __m128i v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]

  v6 = a4;
  sub_F460D0((__int64)v15, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a3, a4, a5, a6);
  if ( !v16 )
    return *a1;
  v9 = sub_B68470(a3);
  v10 = sub_B685F0(v9);
  v11 = *a1;
  v19 = v6;
  v17.m128i_i64[0] = v10;
  v17.m128i_i64[1] = v15[0];
  v18 = v15[1];
  return sub_F44AC0(&v17, v11, v12, v13, v14);
}

