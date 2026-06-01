void __fastcall sub_F573F0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 *v10; // r14
  __int64 *v11; // rbp
  bool v12; // al
  __int64 v13; // r15
  __int64 v14; // r12
  _QWORD *v15; // r15
  size_t v16; // r15
  char *v17; // rbx
  signed __int64 v18; // r15
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 *v25; // rbp
  __int64 *v26; // r13
  __int64 *v27; // r15
  bool v28; // al
  __int64 v29; // r14
  __int64 v30; // rbp
  _QWORD *v31; // r14
  size_t v32; // r14
  char *v33; // rbx
  signed __int64 v34; // r14
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-88h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 *v41; // [rsp+10h] [rbp-78h]
  __int64 v42; // [rsp+10h] [rbp-78h]
  __int64 *v43; // [rsp+18h] [rbp-70h]
  bool v44; // [rsp+20h] [rbp-68h]
  __int64 *v45; // [rsp+20h] [rbp-68h]
  bool v46; // [rsp+20h] [rbp-68h]
  __int64 *v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+38h] [rbp-50h]
  bool v50; // [rsp+38h] [rbp-50h]
  bool v51; // [rsp+38h] [rbp-50h]
  __int64 *src; // [rsp+40h] [rbp-48h]

  v3 = (char *)a2 - (char *)a1;
  v48 = a2 - a1;
  v47 = (__int64 *)((char *)a3 + (char *)a2 - (char *)a1);
  if ( (char *)a2 - (char *)a1 <= 48 )
  {
    sub_F57210(a1, a2);
    return;
  }
  v43 = a2;
  src = a1;
  do
  {
    sub_F57210(a1, a1 + 7);
    a1 += 7;
  }
  while ( (char *)a2 - (char *)a1 > 48 );
  sub_F57210(a1, a2);
  if ( v3 > 56 )
  {
    v4 = 7;
LABEL_6:
    v38 = 2 * v4;
    if ( v48 >= 2 * v4 )
    {
      v49 = v4;
      v5 = a3;
      v39 = 16 * v4;
      v6 = 2 * v4;
      v7 = &src[v4];
      v8 = src;
      v9 = &src[v6];
      if ( &src[v6] != v7 )
      {
LABEL_8:
        v10 = v7;
        v41 = v7;
        v11 = v8;
        while ( 1 )
        {
          v14 = *v10;
          v15 = (_QWORD *)*v11;
          if ( *v10 == *v11 )
          {
            ++v11;
            goto LABEL_16;
          }
          v44 = sub_B744F0((_QWORD *)*v10, (__int64)a2);
          if ( v44 != sub_B744F0(v15, (__int64)a2) )
            break;
          v46 = sub_B74620((_QWORD *)v14, (__int64)a2);
          if ( v46 != sub_B74620(v15, (__int64)a2) )
          {
            v12 = sub_B74620((_QWORD *)v14, (__int64)a2);
LABEL_11:
            if ( v12 )
            {
              v13 = *v10;
              ++v5;
              ++v10;
              *(v5 - 1) = v13;
              if ( v11 == v41 )
                goto LABEL_17;
              goto LABEL_13;
            }
            goto LABEL_53;
          }
          v12 = (*(_BYTE *)(v14 + 28) & 0x7F) == 36;
          if ( v12 != ((*((_BYTE *)v15 + 28) & 0x7F) == 36) )
            goto LABEL_11;
LABEL_53:
          v15 = (_QWORD *)*v11++;
LABEL_16:
          *v5++ = (__int64)v15;
          if ( v11 == v41 )
          {
LABEL_17:
            v8 = v11;
            v7 = v41;
            v16 = (char *)v41 - (char *)v8;
            if ( v41 != v8 )
              goto LABEL_18;
            goto LABEL_19;
          }
LABEL_13:
          if ( v9 == v10 )
            goto LABEL_17;
        }
        v12 = sub_B744F0((_QWORD *)v14, (__int64)a2);
        goto LABEL_11;
      }
      while ( 1 )
      {
        v10 = v7;
        v16 = (char *)v7 - (char *)v8;
        if ( v7 == v8 )
          break;
LABEL_18:
        a2 = v8;
        memmove(v5, v8, v16);
LABEL_19:
        v17 = (char *)v5 + v16;
        v18 = (char *)v9 - (char *)v10;
        if ( v9 == v10 )
          goto LABEL_24;
        v19 = v17;
        a2 = v10;
        v5 = (__int64 *)&v17[v18];
        memmove(v19, v10, (char *)v9 - (char *)v10);
        v7 = (__int64 *)((char *)v7 + v39);
        v20 = v43 - v9;
        if ( v38 > v20 )
        {
          v4 = v49;
          goto LABEL_26;
        }
LABEL_21:
        v8 = v9;
        v9 = (__int64 *)((char *)v9 + v39);
        if ( v9 != v7 )
          goto LABEL_8;
      }
      v17 = (char *)v5 + v16;
      v10 = v7;
      v18 = 0;
LABEL_24:
      v5 = (__int64 *)&v17[v18];
      v7 = (__int64 *)((char *)v7 + v39);
      v20 = v43 - v10;
      if ( v38 > v20 )
      {
        v4 = v49;
        v9 = v10;
        goto LABEL_26;
      }
      goto LABEL_21;
    }
    v5 = a3;
    v20 = v48;
    v9 = src;
LABEL_26:
    if ( v20 > v4 )
      v20 = v4;
    v21 = 4 * v4;
    sub_F56280(v9, &v9[v20], &v9[v20], v43, v5);
    if ( v48 < v21 )
    {
      v37 = v38;
      if ( v48 <= v38 )
        v37 = v48;
      sub_F56280(a3, &a3[v37], &a3[v37], v47, src);
      return;
    }
    v22 = (__int64)a3;
    v23 = src;
    v42 = v21;
    v40 = 8 * v21;
    v24 = a3;
    v25 = &a3[v38];
    v26 = &a3[(unsigned __int64)v40 / 8];
    if ( &a3[(unsigned __int64)v40 / 8] != v25 )
    {
LABEL_30:
      v27 = v25;
      v45 = v25;
      while ( 1 )
      {
        v30 = *v27;
        v31 = (_QWORD *)*v24;
        if ( *v27 == *v24 )
        {
          ++v24;
          goto LABEL_38;
        }
        v50 = sub_B744F0((_QWORD *)*v27, v22);
        if ( v50 != sub_B744F0(v31, v22) )
          break;
        v51 = sub_B74620((_QWORD *)v30, v22);
        if ( v51 != sub_B74620(v31, v22) )
        {
          v28 = sub_B74620((_QWORD *)v30, v22);
LABEL_33:
          if ( v28 )
          {
            v29 = *v27;
            ++v23;
            ++v27;
            *(v23 - 1) = v29;
            if ( v24 == v45 )
              goto LABEL_39;
            goto LABEL_35;
          }
          goto LABEL_57;
        }
        v28 = (*(_BYTE *)(v30 + 28) & 0x7F) == 36;
        if ( v28 != ((*((_BYTE *)v31 + 28) & 0x7F) == 36) )
          goto LABEL_33;
LABEL_57:
        v31 = (_QWORD *)*v24++;
LABEL_38:
        *v23++ = (__int64)v31;
        if ( v24 == v45 )
        {
LABEL_39:
          v25 = v45;
          v32 = (char *)v45 - (char *)v24;
          if ( v45 != v24 )
            goto LABEL_40;
          goto LABEL_41;
        }
LABEL_35:
        if ( v26 == v27 )
          goto LABEL_39;
      }
      v28 = sub_B744F0((_QWORD *)v30, v22);
      goto LABEL_33;
    }
    while ( 1 )
    {
      v27 = v25;
      v32 = (char *)v25 - (char *)v24;
      if ( v25 == v24 )
      {
        v33 = (char *)v23 + v32;
        v27 = v25;
        v34 = 0;
      }
      else
      {
LABEL_40:
        v22 = (__int64)v24;
        memmove(v23, v24, v32);
LABEL_41:
        v33 = (char *)v23 + v32;
        v34 = (char *)v26 - (char *)v27;
        if ( v26 != v27 )
        {
          v35 = v33;
          v22 = (__int64)v27;
          v23 = (__int64 *)&v33[v34];
          memmove(v35, v27, (char *)v26 - (char *)v27);
          v25 = (__int64 *)((char *)v25 + v40);
          v36 = v47 - v26;
          if ( v42 > v36 )
          {
            v4 = v42;
            goto LABEL_48;
          }
          goto LABEL_43;
        }
      }
      v23 = (__int64 *)&v33[v34];
      v25 = (__int64 *)((char *)v25 + v40);
      v36 = v47 - v27;
      if ( v42 > v36 )
      {
        v4 = v42;
        v26 = v27;
LABEL_48:
        if ( v38 <= v36 )
          v36 = v38;
        a2 = &v26[v36];
        sub_F56280(v26, a2, a2, v47, v23);
        if ( v48 <= v4 )
          return;
        goto LABEL_6;
      }
LABEL_43:
      v24 = v26;
      v26 = (__int64 *)((char *)v26 + v40);
      if ( v26 != v25 )
        goto LABEL_30;
    }
  }
}

