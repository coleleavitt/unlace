void *__fastcall sub_488B50(
        char *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rdx
  __int64 *v14; // rax
  char *v15; // r9
  __int64 *v16; // r11
  char *v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r11d
  size_t v24; // rcx
  unsigned int v25; // eax
  __int64 v27; // rcx
  __int64 *v28; // r11
  char *v29; // rax
  __int64 v30; // rax
  size_t v31; // [rsp+0h] [rbp-B8h]
  char *v32; // [rsp+0h] [rbp-B8h]
  size_t v33; // [rsp+0h] [rbp-B8h]
  size_t v34; // [rsp+0h] [rbp-B8h]
  __int64 *v35; // [rsp+10h] [rbp-A8h]
  __int64 v36; // [rsp+18h] [rbp-A0h]
  __int64 *v37; // [rsp+30h] [rbp-88h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 *src; // [rsp+60h] [rbp-58h]
  unsigned int srcb; // [rsp+60h] [rbp-58h]
  __int64 *srca; // [rsp+60h] [rbp-58h]
  int srcc; // [rsp+60h] [rbp-58h]
  __int64 *srcd; // [rsp+60h] [rbp-58h]
  __int64 *srce; // [rsp+60h] [rbp-58h]
  size_t v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  __int64 n; // [rsp+70h] [rbp-48h]
  char *v50; // [rsp+78h] [rbp-40h]
  __int128 v51; // [rsp+C0h] [rbp+8h]

  v8 = a5;
  v9 = a4;
  if ( a5 <= a4 )
    a4 = a5;
  v10 = a8;
  v11 = *((_QWORD *)&a7 + 1);
  if ( (__int64)a7 >= a4 )
  {
    v32 = a1;
  }
  else
  {
    v37 = a6;
    v12 = a2;
    v35 = (__int64 *)a1;
    if ( a5 >= v9 )
      goto LABEL_12;
LABEL_5:
    v13 = v40;
    v31 = (size_t)v12;
    LOBYTE(v13) = a8;
    v40 = v13;
    v36 = v9 / 2;
    v14 = sub_4875B0(v12, (__int64)a3, &v35[v9 / 2], *((__int64 *)&a7 + 1), v13);
    v15 = (char *)v31;
    v16 = &v35[v9 / 2];
    v17 = (char *)v14;
    v18 = (__int64)((__int64)v14 - v31) >> 3;
    v9 -= v9 / 2;
    if ( v9 <= v18 )
      goto LABEL_13;
LABEL_6:
    if ( v18 <= (__int64)a7 )
    {
      v32 = (char *)v16;
      if ( !v18 )
        goto LABEL_8;
      v27 = v15 - (char *)v16;
      v34 = v17 - v15;
      if ( v17 - v15 > 8 )
      {
        v48 = v15 - (char *)v16;
        srca = v16;
        memmove(v37, v15, v17 - v15);
        v28 = srca;
        if ( v48 <= 8 )
        {
          if ( v48 == 8 )
            *((_QWORD *)v17 - 1) = *srca;
        }
        else
        {
          memmove(&v17[-v48], srca, v48);
          v28 = srca;
        }
        v16 = (__int64 *)memmove(v28, v37, v34);
        goto LABEL_25;
      }
      if ( v17 - v15 != 8 )
      {
        if ( v27 <= 8 )
        {
          if ( v27 == 8 )
            *((_QWORD *)v17 - 1) = *v16;
        }
        else
        {
          srcd = v16;
          memmove(&v17[-v27], v16, v15 - (char *)v16);
          v16 = srcd;
        }
        goto LABEL_25;
      }
      v30 = *(_QWORD *)v15;
      *v37 = *(_QWORD *)v15;
      if ( v27 <= 8 )
      {
        if ( v27 != 8 )
          goto LABEL_41;
        *((_QWORD *)v17 - 1) = *v16;
      }
      else
      {
        srce = v16;
        memmove(&v17[-v27], v16, v15 - (char *)v16);
        v16 = srce;
      }
      v30 = *v37;
LABEL_41:
      *v16 = v30;
LABEL_25:
      v32 = (char *)v16 + v34;
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_13:
      if ( v9 > (__int64)a7 )
      {
        srcc = (int)v16;
        v29 = sub_488140((char *)v16, v15, v17);
        LODWORD(v16) = srcc;
        v32 = v29;
      }
      else
      {
        v32 = v17;
        if ( v9 )
        {
          v22 = v17 - v15;
          v32 = &v17[-(v15 - (char *)v16)];
          if ( v15 - (char *)v16 <= 8 )
          {
            if ( v15 - (char *)v16 == 8 )
            {
              *v37 = *v16;
              if ( v22 <= 8 )
              {
                if ( v22 == 8 )
                  *v16 = *(_QWORD *)v15;
              }
              else
              {
                LODWORD(v16) = (unsigned int)memmove(v16, v15, v17 - v15);
              }
              *((_QWORD *)v17 - 1) = *v37;
            }
            else if ( v22 <= 8 )
            {
              if ( v22 == 8 )
                *v16 = *(_QWORD *)v15;
            }
            else
            {
              LODWORD(v16) = (unsigned int)memmove(v16, v15, v17 - v15);
            }
          }
          else
          {
            v50 = v15;
            n = v17 - v15;
            v47 = v15 - (char *)v16;
            src = v16;
            memmove(v37, v16, v15 - (char *)v16);
            v23 = (unsigned int)src;
            v24 = v47;
            if ( n <= 8 )
            {
              if ( n == 8 )
                *src = *(_QWORD *)v50;
            }
            else
            {
              v25 = (unsigned int)memmove(src, v50, n);
              v24 = v47;
              v23 = v25;
            }
            srcb = v23;
            memmove(v32, v37, v24);
            LODWORD(v16) = srcb;
          }
        }
      }
LABEL_8:
      LOBYTE(v10) = a8;
      v8 -= v18;
      sub_488B50((_DWORD)v35, (_DWORD)v16, (_DWORD)v32, v36, v18, (_DWORD)v37, a7, v10);
      v19 = v8;
      if ( v9 <= v8 )
        v19 = v9;
      if ( (__int64)a7 >= v19 )
        break;
      v12 = (__int64 *)v17;
      v35 = (__int64 *)v32;
      if ( v8 < v9 )
        goto LABEL_5;
LABEL_12:
      v20 = v39;
      LOBYTE(v20) = a8;
      v33 = (size_t)v12;
      v18 = v8 / 2;
      v39 = v20;
      v17 = (char *)&v12[v8 / 2];
      v21 = sub_487640(v35, (__int64)v12, (__int64 *)v17, *((__int64 *)&a7 + 1), v20);
      v15 = (char *)v33;
      v16 = v21;
      v36 = v21 - v35;
      v9 -= v36;
      if ( v9 > v8 / 2 )
        goto LABEL_6;
    }
    a6 = v37;
    v11 = *((_QWORD *)&a7 + 1);
    a2 = (__int64 *)v17;
  }
  LOBYTE(v10) = a8;
  *(_QWORD *)&v51 = v11;
  *((_QWORD *)&v51 + 1) = v10;
  return sub_487E20((__int64 *)v32, a2, a3, v9, v8, a6, v51);
}
