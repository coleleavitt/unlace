void __fastcall sub_203EF10(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // cl
  __m128i v11; // [rsp+0h] [rbp-98h] BYREF
  bool v12; // [rsp+10h] [rbp-88h]
  char v13; // [rsp+11h] [rbp-87h]
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+60h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 && sub_208B160(*(_QWORD *)(a1 + 16)) && (v8 = *(_QWORD *)(sub_208B160(v7) + 72)) != 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = v9 != 0;
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  v12 = v10;
  v14 = v9;
  v13 = 1;
  v11.m128i_i64[0] = (__int64)&off_2BE5CC8;
  v11.m128i_i64[1] = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_203ED60(a1, a2, &v11, a3, a5, a6);
  sub_202F1D0(&v11);
}
