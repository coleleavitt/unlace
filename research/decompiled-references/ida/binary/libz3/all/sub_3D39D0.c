void __fastcall sub_3D39D0(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char *v7; // r11
  char *v8; // r10
  char *v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  char *v12; // rbp
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 i; // rax
  char *v16; // rsi
  __int64 v17; // r14
  size_t v18; // r15
  __int64 v19; // r9
  int v20; // ecx
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rcx
  __int64 v25; // r8
  size_t v26; // r9
  int v27; // ecx
  int v28; // r11d
  char *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  char *dest; // [rsp+8h] [rbp-70h]
  char *v33; // [rsp+10h] [rbp-68h]
  int v34; // [rsp+18h] [rbp-60h]
  int v35; // [rsp+18h] [rbp-60h]
  size_t v36; // [rsp+18h] [rbp-60h]
  int v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+18h] [rbp-60h]
  int v39; // [rsp+18h] [rbp-60h]
  int v40; // [rsp+18h] [rbp-60h]
  int v41; // [rsp+18h] [rbp-60h]
  int v42; // [rsp+18h] [rbp-60h]
  int v43; // [rsp+18h] [rbp-60h]
  __int64 n; // [rsp+20h] [rbp-58h]
  int na; // [rsp+20h] [rbp-58h]
  int nb; // [rsp+20h] [rbp-58h]
  size_t nc; // [rsp+20h] [rbp-58h]
  int nd; // [rsp+20h] [rbp-58h]
  int ne; // [rsp+20h] [rbp-58h]
  int nf; // [rsp+20h] [rbp-58h]
  int ng; // [rsp+20h] [rbp-58h]
  int nh; // [rsp+20h] [rbp-58h]
  int ni; // [rsp+20h] [rbp-58h]
  int v54; // [rsp+28h] [rbp-50h]
  __int64 v55; // [rsp+28h] [rbp-50h]
  int v56; // [rsp+30h] [rbp-48h]
  char *src; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = a2;
  v9 = a1;
  v10 = a5;
  v11 = a4;
  v12 = a2;
  if ( a5 <= a4 )
    a4 = a5;
  if ( a7 < a4 )
  {
    v33 = a3;
    dest = a6;
    if ( v11 <= a5 )
      goto LABEL_21;
LABEL_5:
    v12 = v8;
    v13 = v11 / 2;
    v14 = &v7[8 * (v11 / 2)];
    for ( i = (v33 - v8) >> 3; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v16 = &v12[8 * (i >> 1)];
        if ( **(_DWORD **)v16 >= **(_DWORD **)v14 )
          break;
        v12 = v16 + 8;
        i = i - (i >> 1) - 1;
        if ( i <= 0 )
          goto LABEL_9;
      }
    }
LABEL_9:
    v11 -= v13;
    v17 = (v12 - v8) >> 3;
    if ( v11 <= v17 )
      goto LABEL_26;
LABEL_10:
    if ( a7 >= v17 )
    {
      v9 = v14;
      if ( !v17 )
        goto LABEL_17;
      v18 = v12 - v8;
      v19 = v8 - v14;
      if ( v12 - v8 > 8 )
      {
        v54 = (int)v7;
        n = v8 - v14;
        v34 = v13;
        memmove(dest, v8, v12 - v8);
        v20 = v34;
        v21 = v54;
        if ( n <= 8 )
        {
          if ( n == 8 )
            *((_QWORD *)v12 - 1) = *(_QWORD *)v14;
        }
        else
        {
          memmove(&v12[-n], v14, n);
          v20 = v34;
          v21 = v54;
        }
        na = v21;
        v35 = v20;
        memmove(v14, dest, v18);
        LODWORD(v13) = v35;
        LODWORD(v7) = na;
        goto LABEL_16;
      }
      if ( v12 - v8 != 8 )
      {
        if ( v19 <= 8 )
        {
          if ( v19 == 8 )
            *((_QWORD *)v12 - 1) = *(_QWORD *)v14;
        }
        else
        {
          nf = (int)v7;
          v40 = v13;
          memmove(&v12[-v19], v14, v8 - v14);
          LODWORD(v13) = v40;
          LODWORD(v7) = nf;
        }
        goto LABEL_16;
      }
      v30 = *(_DWORD **)v8;
      *(_QWORD *)dest = *(_QWORD *)v8;
      if ( v19 <= 8 )
      {
        if ( v19 != 8 )
          goto LABEL_45;
        *((_QWORD *)v12 - 1) = *(_QWORD *)v14;
      }
      else
      {
        ng = (int)v7;
        v41 = v13;
        memmove(&v12[-v19], v14, v8 - v14);
        LODWORD(v13) = v41;
        LODWORD(v7) = ng;
      }
      v30 = *(_DWORD **)dest;
LABEL_45:
      *(_QWORD *)v14 = v30;
LABEL_16:
      v9 = &v14[v18];
      goto LABEL_17;
    }
    while ( 1 )
    {
LABEL_26:
      if ( a7 < v11 )
      {
        ne = (int)v7;
        v39 = v13;
        v29 = sub_3D3310(v14, v8, v12);
        LODWORD(v7) = ne;
        LODWORD(v13) = v39;
        v9 = v29;
        goto LABEL_17;
      }
      v9 = v12;
      if ( !v11 )
        goto LABEL_17;
      v25 = v12 - v8;
      v9 = &v12[-(v8 - v14)];
      if ( v8 - v14 <= 8 )
      {
        if ( v8 - v14 == 8 )
        {
          v31 = *(_DWORD **)v14;
          *(_QWORD *)dest = *(_QWORD *)v14;
          if ( v25 > 8 )
          {
            ni = (int)v7;
            v43 = v13;
            memmove(v14, v8, v12 - v8);
            LODWORD(v13) = v43;
            LODWORD(v7) = ni;
            goto LABEL_53;
          }
          if ( v25 == 8 )
          {
            *(_QWORD *)v14 = *(_QWORD *)v8;
LABEL_53:
            v31 = *(_DWORD **)dest;
          }
          *((_QWORD *)v12 - 1) = v31;
          goto LABEL_17;
        }
        if ( v25 <= 8 )
        {
          if ( v25 == 8 )
            *(_QWORD *)v14 = *(_QWORD *)v8;
        }
        else
        {
          nh = (int)v7;
          v42 = v13;
          memmove(v14, v8, v12 - v8);
          LODWORD(v13) = v42;
          LODWORD(v7) = nh;
        }
      }
      else
      {
        src = v8;
        v56 = (int)v7;
        v55 = v12 - v8;
        nb = v13;
        v36 = v8 - v14;
        memmove(dest, v14, v8 - v14);
        v26 = v36;
        v27 = nb;
        v28 = v56;
        if ( v55 <= 8 )
        {
          if ( v55 == 8 )
            *(_QWORD *)v14 = *(_QWORD *)src;
        }
        else
        {
          nc = v36;
          v37 = v27;
          memmove(v14, src, v55);
          v27 = v37;
          v26 = nc;
          v28 = v56;
        }
        nd = v28;
        v38 = v27;
        memmove(v9, dest, v26);
        LODWORD(v13) = v38;
        LODWORD(v7) = nd;
      }
LABEL_17:
      v10 -= v17;
      sub_3D39D0((_DWORD)v7, (_DWORD)v14, (_DWORD)v9, v13, v17, (_DWORD)dest, a7);
      v22 = v10;
      if ( v11 <= v10 )
        v22 = v11;
      if ( v22 <= a7 )
      {
        a3 = v33;
        a6 = dest;
        break;
      }
      v8 = v12;
      v7 = v9;
      if ( v11 > v10 )
        goto LABEL_5;
LABEL_21:
      v14 = v7;
      v23 = (v8 - v7) >> 3;
      v17 = v10 / 2;
      v12 = &v8[8 * (v10 / 2)];
      while ( v23 > 0 )
      {
        while ( 1 )
        {
          v24 = &v14[8 * (v23 >> 1)];
          if ( **(_DWORD **)v12 < **(_DWORD **)v24 )
            break;
          v14 = v24 + 8;
          v23 = v23 - (v23 >> 1) - 1;
          if ( v23 <= 0 )
            goto LABEL_25;
        }
        v23 >>= 1;
      }
LABEL_25:
      v13 = (v14 - v7) >> 3;
      v11 -= v13;
      if ( v11 > v17 )
        goto LABEL_10;
    }
  }
  sub_3D3100(v9, v12, a3, v11, v10, a6);
}

