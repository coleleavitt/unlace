__int64 __fastcall sub_2212E20(__int64 a1, char *a2, size_t a3, _BYTE *a4)
{
  char *v6; // rbp
  char *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v14; // [rsp+0h] [rbp-B8h] BYREF
  char *v15; // [rsp+10h] [rbp-A8h]
  size_t v16; // [rsp+18h] [rbp-A0h]
  __int16 v17; // [rsp+20h] [rbp-98h]
  __m128i v18[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v19; // [rsp+50h] [rbp-68h]
  __m128i v20[5]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a2;
  if ( a3 == j__strlen(&byte_22F0C30) )
  {
    if ( !a3 )
      goto LABEL_23;
    a2 = (char *)&byte_22F0C30;
    if ( !memcmp(v6, &byte_22F0C30, a3) )
      goto LABEL_23;
    if ( a3 != j__strlen("true") )
      goto LABEL_5;
    goto LABEL_25;
  }
  if ( a3 == j__strlen("true") )
  {
    if ( !a3 )
      goto LABEL_23;
LABEL_25:
    a2 = "true";
    if ( !memcmp(v6, "true", a3) )
      goto LABEL_23;
LABEL_5:
    if ( a3 == j__strlen("TRUE") )
      goto LABEL_6;
    goto LABEL_27;
  }
  if ( a3 == j__strlen("TRUE") )
  {
    if ( !a3 )
      goto LABEL_23;
LABEL_6:
    a2 = "TRUE";
    if ( !memcmp(v6, "TRUE", a3) )
      goto LABEL_23;
    if ( a3 == j__strlen("True") )
    {
LABEL_8:
      a2 = "True";
      if ( !memcmp(v6, "True", a3) )
        goto LABEL_23;
      if ( a3 == j__strlen("1") )
        goto LABEL_10;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
LABEL_27:
  if ( a3 == j__strlen("True") )
  {
    if ( !a3 )
      goto LABEL_23;
    goto LABEL_8;
  }
LABEL_28:
  if ( a3 == j__strlen("1") )
  {
    if ( !a3 )
      goto LABEL_23;
LABEL_10:
    a2 = "1";
    if ( memcmp(v6, "1", a3) )
    {
      if ( a3 != j__strlen("false") )
        goto LABEL_12;
LABEL_35:
      a2 = "false";
      if ( !memcmp(v6, "false", a3) )
        goto LABEL_40;
      if ( a3 == j__strlen("FALSE") )
        goto LABEL_14;
      goto LABEL_37;
    }
LABEL_23:
    *a4 = 1;
    return 0;
  }
LABEL_33:
  if ( a3 == j__strlen("false") )
  {
    if ( !a3 )
      goto LABEL_40;
    goto LABEL_35;
  }
LABEL_12:
  if ( a3 == j__strlen("FALSE") )
  {
    if ( !a3 )
      goto LABEL_40;
LABEL_14:
    a2 = "FALSE";
    if ( !memcmp(v6, "FALSE", a3) )
      goto LABEL_40;
    if ( a3 == j__strlen("False") )
      goto LABEL_16;
    goto LABEL_38;
  }
LABEL_37:
  if ( a3 == j__strlen("False") )
  {
    if ( !a3 )
      goto LABEL_40;
LABEL_16:
    a2 = "False";
    if ( memcmp(v6, "False", a3) )
    {
      v8 = "0";
      if ( a3 != j__strlen("0") )
      {
LABEL_19:
        v16 = a3;
        v9 = sub_227D6D0(v8, a2);
        v17 = 1283;
        v18[0].m128i_i64[0] = (__int64)"' is invalid value for boolean argument! Try 0 or 1";
        v19 = 259;
        v14.m128i_i64[0] = (__int64)"'";
        v15 = v6;
        sub_A41580(v20, &v14, v18, v10, v11, v12);
        return sub_2212D60(a1, (__int64)v20, 0, 0, v9);
      }
      goto LABEL_18;
    }
    goto LABEL_40;
  }
LABEL_38:
  v8 = "0";
  if ( a3 != j__strlen("0") )
    goto LABEL_19;
  if ( a3 )
  {
LABEL_18:
    a2 = "0";
    v8 = v6;
    if ( memcmp(v6, "0", a3) )
      goto LABEL_19;
  }
LABEL_40:
  *a4 = 0;
  return 0;
}
