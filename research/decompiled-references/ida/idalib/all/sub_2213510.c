__int64 __fastcall sub_2213510(__int64 a1, char *a2, __int64 a3, __int64 a4, void *a5, size_t a6, _DWORD *a7)
{
  __int64 v7; // r12
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v16[3]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v18; // [rsp+50h] [rbp-68h]
  __m128i v19; // [rsp+60h] [rbp-58h] BYREF
  void *v20; // [rsp+70h] [rbp-48h]
  size_t v21; // [rsp+78h] [rbp-40h]
  __int16 v22; // [rsp+80h] [rbp-38h]

  v7 = (__int64)a2;
  if ( j__strlen(&byte_22F0C30) == a6 )
  {
    if ( !a6 )
      goto LABEL_23;
    a2 = (char *)&byte_22F0C30;
    if ( !memcmp(a5, &byte_22F0C30, a6) )
      goto LABEL_23;
    if ( j__strlen("true") != a6 )
      goto LABEL_5;
    goto LABEL_25;
  }
  if ( j__strlen("true") == a6 )
  {
    if ( !a6 )
      goto LABEL_23;
LABEL_25:
    a2 = "true";
    if ( !memcmp(a5, "true", a6) )
      goto LABEL_23;
LABEL_5:
    if ( j__strlen("TRUE") == a6 )
      goto LABEL_6;
    goto LABEL_27;
  }
  if ( j__strlen("TRUE") == a6 )
  {
    if ( !a6 )
      goto LABEL_23;
LABEL_6:
    a2 = "TRUE";
    if ( !memcmp(a5, "TRUE", a6) )
      goto LABEL_23;
    if ( j__strlen("True") == a6 )
    {
LABEL_8:
      a2 = "True";
      if ( !memcmp(a5, "True", a6) )
        goto LABEL_23;
      if ( j__strlen("1") == a6 )
        goto LABEL_10;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
LABEL_27:
  if ( j__strlen("True") == a6 )
  {
    if ( !a6 )
      goto LABEL_23;
    goto LABEL_8;
  }
LABEL_28:
  if ( j__strlen("1") == a6 )
  {
    if ( !a6 )
      goto LABEL_23;
LABEL_10:
    a2 = "1";
    if ( memcmp(a5, "1", a6) )
    {
      if ( j__strlen("false") != a6 )
        goto LABEL_12;
LABEL_35:
      a2 = "false";
      if ( !memcmp(a5, "false", a6) )
        goto LABEL_40;
      if ( j__strlen("FALSE") == a6 )
        goto LABEL_14;
      goto LABEL_37;
    }
LABEL_23:
    *a7 = 1;
    return 0;
  }
LABEL_33:
  if ( j__strlen("false") == a6 )
  {
    if ( !a6 )
      goto LABEL_40;
    goto LABEL_35;
  }
LABEL_12:
  if ( j__strlen("FALSE") == a6 )
  {
    if ( !a6 )
      goto LABEL_40;
LABEL_14:
    a2 = "FALSE";
    if ( !memcmp(a5, "FALSE", a6) )
      goto LABEL_40;
    if ( j__strlen("False") == a6 )
      goto LABEL_16;
    goto LABEL_38;
  }
LABEL_37:
  if ( j__strlen("False") == a6 )
  {
    if ( !a6 )
      goto LABEL_40;
LABEL_16:
    a2 = "False";
    if ( memcmp(a5, "False", a6) )
    {
      v10 = "0";
      if ( j__strlen("0") != a6 )
      {
LABEL_19:
        v21 = a6;
        v11 = sub_227D6D0(v10, a2);
        v20 = a5;
        v22 = 1283;
        v17[0].m128i_i64[0] = (__int64)"' is invalid value for boolean argument! Try 0 or 1";
        v18 = 259;
        v19.m128i_i64[0] = (__int64)"'";
        sub_A41580(v16, &v19, v17, v12, v13, v14);
        return sub_2212D60(v7, (__int64)v16, 0, 0, v11);
      }
      goto LABEL_18;
    }
    goto LABEL_40;
  }
LABEL_38:
  v10 = "0";
  if ( j__strlen("0") != a6 )
    goto LABEL_19;
  if ( a6 )
  {
LABEL_18:
    a2 = "0";
    v10 = (char *)a5;
    if ( memcmp(a5, "0", a6) )
      goto LABEL_19;
  }
LABEL_40:
  *a7 = 2;
  return 0;
}
