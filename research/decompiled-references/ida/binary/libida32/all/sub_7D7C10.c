void __fastcall sub_7D7C10(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7)
{
  unsigned int *v7; // r11
  __int64 v8; // r12
  __int64 v9; // rbx
  bool v10; // cc
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r10
  unsigned int *v14; // r14
  _BYTE *v15; // r11
  unsigned int *v16; // r15
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r10
  signed __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // [rsp+8h] [rbp-70h]
  char *v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  size_t v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 n; // [rsp+30h] [rbp-48h]
  _BYTE *src; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v8 = a5;
  v9 = a4;
  v10 = a4 <= a5;
  v11 = a5;
  if ( v10 )
    v11 = v9;
  v23 = a1;
  if ( a7 < v11 )
  {
    if ( v9 <= a5 )
      goto LABEL_12;
LABEL_5:
    v12 = v9 / 2;
    v13 = 276 * (v9 / 2);
    v9 -= v9 / 2;
    v14 = &v23[v13];
    v16 = sub_7D1440(v7, (__int64)a3, v23[v13], v23[v13 + 1]);
    v17 = 0xF128CFC4A33F128DLL * (((char *)v16 - v15) >> 4);
    if ( v9 <= v17 )
      goto LABEL_13;
LABEL_6:
    if ( a7 >= v17 )
    {
      v24 = (char *)v14;
      if ( !v17 )
        goto LABEL_8;
      v22 = v15 - (_BYTE *)v14;
      v25 = (char *)v16 - v15;
      if ( (char *)v16 - v15 <= 1104 )
      {
        if ( (char *)v16 - v15 == 1104 )
        {
          qmemcpy(a6, v15, 0x450u);
          if ( v22 > 1104 )
          {
            memmove((char *)v16 - v22, v14, v15 - (_BYTE *)v14);
            goto LABEL_31;
          }
          if ( v22 != 1104 )
            goto LABEL_31;
        }
        else
        {
          if ( v22 > 1104 )
          {
            memmove((char *)v16 - v22, v14, v15 - (_BYTE *)v14);
LABEL_30:
            if ( v25 != 1104 )
              goto LABEL_24;
LABEL_31:
            qmemcpy(v14, a6, 0x450u);
            goto LABEL_24;
          }
          if ( v22 != 1104 )
            goto LABEL_24;
        }
      }
      else
      {
        v29 = v15 - (_BYTE *)v14;
        memmove(a6, v15, (char *)v16 - v15);
        if ( v29 > 1104 )
        {
          memmove((char *)v16 - v29, v14, v29);
LABEL_23:
          memmove(v14, a6, v25);
LABEL_24:
          v24 = (char *)v14 + v25;
          goto LABEL_8;
        }
        if ( v29 != 1104 )
          goto LABEL_23;
      }
      qmemcpy(v16 - 276, v14, 0x450u);
      if ( v25 > 1104 )
        goto LABEL_23;
      goto LABEL_30;
    }
    while ( 1 )
    {
LABEL_13:
      if ( a7 < v9 )
      {
        v24 = sub_7D7A20((char *)v14, v15, (char *)v16);
        goto LABEL_8;
      }
      v24 = (char *)v16;
      if ( !v9 )
        goto LABEL_8;
      v20 = v15 - (_BYTE *)v14;
      v21 = (char *)v16 - v15;
      v24 = (char *)v16 - (v15 - (_BYTE *)v14);
      if ( v15 - (_BYTE *)v14 <= 1104 )
      {
        if ( v15 - (_BYTE *)v14 == 1104 )
        {
          qmemcpy(a6, v14, 0x450u);
          if ( v21 > 1104 )
          {
            memmove(v14, v15, (char *)v16 - v15);
LABEL_41:
            qmemcpy(v16 - 276, a6, 0x450u);
            goto LABEL_8;
          }
          if ( v21 != 1104 )
            goto LABEL_41;
        }
        else
        {
          if ( v21 > 1104 )
          {
            memmove(v14, v15, (char *)v16 - v15);
            goto LABEL_8;
          }
          if ( v21 != 1104 )
            goto LABEL_8;
        }
      }
      else
      {
        src = v15;
        n = (char *)v16 - v15;
        v28 = v15 - (_BYTE *)v14;
        memmove(a6, v14, v15 - (_BYTE *)v14);
        v20 = v28;
        v15 = src;
        if ( n > 1104 )
        {
          memmove(v14, src, n);
          v20 = v28;
LABEL_18:
          memmove(v24, a6, v20);
          goto LABEL_8;
        }
        if ( n != 1104 )
          goto LABEL_18;
      }
      qmemcpy(v14, v15, 0x450u);
      if ( v20 > 1104 )
        goto LABEL_18;
      if ( v20 == 1104 )
        goto LABEL_41;
LABEL_8:
      v8 -= v17;
      sub_7D7C10((_DWORD)v23, (_DWORD)v14, (_DWORD)v24, v12, v17, (_DWORD)a6, a7);
      v18 = v8;
      if ( v9 <= v8 )
        v18 = v9;
      if ( v18 <= a7 )
      {
        sub_7D4A40((unsigned int *)v24, v16, a3, v9, v8, (unsigned int *)a6);
        return;
      }
      v23 = (unsigned int *)v24;
      v7 = v16;
      if ( v9 > v8 )
        goto LABEL_5;
LABEL_12:
      v17 = v8 / 2;
      v16 = &v7[276 * (v8 / 2)];
      v14 = sub_7D13C0(v23, (__int64)v7, *v16, v16[1]);
      v12 = 0xF128CFC4A33F128DLL * (((__int64)v14 - v19) >> 4);
      v9 -= v12;
      if ( v9 > v8 / 2 )
        goto LABEL_6;
    }
  }
  sub_7D4A40(a1, a2, a3, v9, a5, (unsigned int *)a6);
}

