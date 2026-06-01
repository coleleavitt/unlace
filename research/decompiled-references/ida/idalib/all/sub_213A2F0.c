__int64 __fastcall sub_213A2F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-98h]
  __int64 v9; // [rsp+18h] [rbp-90h]
  __int16 v10; // [rsp+20h] [rbp-88h]
  __m128i v11; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int16 v14; // [rsp+50h] [rbp-58h]
  __m128i v15; // [rsp+60h] [rbp-48h] BYREF
  char *v16; // [rsp+70h] [rbp-38h]
  __int16 v17; // [rsp+80h] [rbp-28h]

  if ( **(_DWORD **)(a1 + 48) == 9 )
  {
    if ( *(_QWORD *)(a1 + 368) == *(_QWORD *)(a1 + 360) )
    {
      v8 = a2;
      v11.m128i_i64[0] = (__int64)"' in file, no current macro definition";
      v14 = 259;
      v9 = a3;
      v10 = 1283;
      v7.m128i_i64[0] = (__int64)"unexpected '";
      sub_A41580(&v15, &v7, &v11, 1283, a5, a6);
      return sub_21543E0(a1, &v15, 0, 0);
    }
    else
    {
      sub_213A120(a1);
      return 0;
    }
  }
  else
  {
    v12 = a2;
    v11.m128i_i64[0] = (__int64)"unexpected token in '";
    v14 = 1283;
    v13 = a3;
    v15.m128i_i64[0] = (__int64)&v11;
    v16 = "' directive";
    v17 = 770;
    return sub_21543E0(a1, &v15, 0, 0);
  }
}
