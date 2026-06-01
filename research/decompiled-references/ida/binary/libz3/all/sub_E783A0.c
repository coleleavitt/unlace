__int64 __fastcall sub_E783A0(__m128i *a1, __m128i *a2, __m128i *a3, __m128i *a4, char **a5)
{
  char *v7; // r12
  char **v8; // rax
  char *v9; // r12
  char *v10; // r12
  __int64 result; // rax
  __int64 v12; // [rsp-10h] [rbp-70h]
  char *v14; // [rsp+18h] [rbp-48h] BYREF
  char *v15; // [rsp+20h] [rbp-40h] BYREF
  char *v16[7]; // [rsp+28h] [rbp-38h] BYREF

  if ( *a5 )
  {
    v14 = nullptr;
    sub_C7B020(&v14, a5);
    v7 = v14;
    sub_E77CA0(a1, a2, a4, &v14);
    if ( v7 )
      sub_186B220(v7 - 8);
    v8 = a5;
    if ( *a5 )
      goto LABEL_5;
LABEL_13:
    v15 = nullptr;
    sub_E77CA0(a2, a3, a4, &v15);
    goto LABEL_7;
  }
  v14 = nullptr;
  sub_E77CA0(a1, a2, a4, &v14);
  v8 = a5;
  if ( !*a5 )
    goto LABEL_13;
LABEL_5:
  v15 = nullptr;
  sub_C7B020(&v15, v8);
  v9 = v15;
  sub_E77CA0(a2, a3, a4, &v15);
  if ( v9 )
    sub_186B220(v9 - 8);
LABEL_7:
  v10 = *a5;
  if ( *a5 )
  {
    v16[0] = nullptr;
    sub_C7B020(v16, a5);
    v10 = v16[0];
  }
  v16[0] = v10;
  sub_E73540(a1, a2, a3, ((char *)a2 - (char *)a1) >> 3, ((char *)a3 - (char *)a2) >> 3, a4, v16);
  result = v12;
  if ( v10 )
    return sub_186B220(v10 - 8);
  return result;
}

