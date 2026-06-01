void *__fastcall sub_4E9C20(
        char *a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        void *a11,
        void *a12,
        __int64 a13)
{
  char *v13; // r10
  char *v14; // r15
  char *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 *v21; // r15
  char *v22; // rax
  char *v23; // r10
  char *v24; // r11
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 *v27; // rax
  char *src; // [rsp+18h] [rbp-70h]
  char *v30; // [rsp+30h] [rbp-58h]
  char *v31; // [rsp+38h] [rbp-50h]
  char *v32; // [rsp+38h] [rbp-50h]
  char *v33; // [rsp+38h] [rbp-50h]
  char *v34; // [rsp+40h] [rbp-48h]
  char *v35; // [rsp+40h] [rbp-48h]

  v13 = a2;
  v14 = a2;
  v15 = a1;
  v16 = a5;
  v17 = a4;
  v18 = a4;
  if ( a5 <= a4 )
    v18 = a5;
  v19 = a13;
  if ( (__int64)a11 < v18 )
  {
    src = a1;
    v30 = a6;
    if ( a5 >= v17 )
      goto LABEL_10;
LABEL_5:
    v31 = v13;
    v20 = v17 / 2;
    v21 = (__int64 *)&src[8 * (v17 / 2)];
    v22 = (char *)sub_4E9650(v13, (__int64)a3, v21, (__int64)a12, a13, a7, a8, a9, a10);
    v23 = v31;
    v24 = v22;
    v25 = (v22 - v31) >> 3;
    while ( 1 )
    {
      v17 -= v20;
      v16 -= v25;
      v34 = v24;
      v32 = sub_4E91A0((char *)v21, v23, v24, v17, v25, v30, (__int64)a11);
      sub_4E9C20((int)src, (int)v21, (int)v32, v20, v25, (int)v30, a11, (__int64)a12, a13);
      v26 = v16;
      if ( v17 <= v16 )
        v26 = v17;
      if ( (__int64)a11 >= v26 )
        break;
      src = v32;
      v13 = v34;
      if ( v16 < v17 )
        goto LABEL_5;
LABEL_10:
      v33 = v13;
      v25 = v16 / 2;
      v35 = &v13[8 * (v16 / 2)];
      v27 = sub_4E97C0(src, (__int64)v13, v35, (__int64)a12, a13, a7, a8, a9, a10);
      v24 = v35;
      v23 = v33;
      v21 = v27;
      v20 = ((char *)v27 - src) >> 3;
    }
    v19 = a13;
    a6 = v30;
    v15 = v32;
    v14 = v34;
  }
  return sub_4E6B50(v15, v14, a3, v17, v16, a6, a7, a8, a9, a10, a12, v19);
}
