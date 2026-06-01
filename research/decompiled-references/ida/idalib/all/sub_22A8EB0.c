std::_V2 *__fastcall sub_22A8EB0(std::_V2 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v6; // rax
  const char *v7; // rdx
  char v9; // cl
  _QWORD v10[4]; // [rsp+0h] [rbp-D8h] BYREF
  __int16 v11; // [rsp+20h] [rbp-B8h]
  __m128i v12; // [rsp+30h] [rbp-A8h] BYREF
  char *v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+48h] [rbp-90h]
  __int16 v15; // [rsp+50h] [rbp-88h]
  __m128i v16; // [rsp+60h] [rbp-78h] BYREF
  char *v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-60h]
  __int16 v19; // [rsp+80h] [rbp-58h]
  __m128i v20; // [rsp+90h] [rbp-48h] BYREF
  char *v21; // [rsp+A0h] [rbp-38h]
  __int16 v22; // [rsp+B0h] [rbp-28h]

  if ( a3 == 1 )
  {
    v13 = a2;
    v16.m128i_i64[0] = (__int64)"'";
    v12.m128i_i64[0] = (__int64)"unsupported standard user-level extension '";
    v19 = 259;
    v15 = 1283;
    v14 = 1;
    sub_A41580(&v20, &v12, &v16, a4, a5, 259);
    sub_22A8430(a1, &v20);
    return a1;
  }
  else
  {
    if ( a3 )
    {
      v9 = *a2;
      if ( *a2 == 115 )
      {
        v6 = j__strlen("standard supervisor-level extension");
        v7 = "standard supervisor-level extension";
      }
      else if ( v9 == 120 )
      {
        v6 = j__strlen("non-standard user-level extension");
        v7 = "non-standard user-level extension";
      }
      else
      {
        v6 = 0;
        v7 = nullptr;
        if ( v9 == 122 )
        {
          v6 = j__strlen("standard user-level extension");
          v7 = "standard user-level extension";
        }
      }
    }
    else
    {
      v6 = 0;
      v7 = nullptr;
    }
    v10[3] = v6;
    v12.m128i_i64[0] = (__int64)v10;
    v13 = " '";
    v16.m128i_i64[0] = (__int64)&v12;
    v11 = 1283;
    v15 = 770;
    v19 = 1282;
    v20.m128i_i64[0] = (__int64)&v16;
    v17 = a2;
    v18 = a3;
    v21 = "'";
    v10[0] = "unsupported ";
    v10[2] = v7;
    v22 = 770;
    sub_22A8430(a1, &v20);
    return a1;
  }
}
