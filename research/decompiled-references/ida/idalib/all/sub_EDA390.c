char *__fastcall sub_EDA390(__int64 *src, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r10
  _QWORD *v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned int v17; // r11d
  unsigned int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned int v22; // esi
  __int64 *v23; // r14
  unsigned int v24; // r11d
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  signed __int64 v28; // rbx
  char *v29; // r13
  __int64 v31; // rax
  int v32; // edi
  int v33; // edi
  bool v34; // zf
  int v35; // ecx
  __int64 *v36; // rsi
  __int64 *v37; // rcx
  __int64 *v38; // rsi
  __int64 *v39; // rdi
  __int64 *v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 *v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  __int64 *v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  int v46; // [rsp+8h] [rbp-70h]
  int v47; // [rsp+8h] [rbp-70h]
  __int64 *v48; // [rsp+10h] [rbp-68h]
  __int64 *v49; // [rsp+10h] [rbp-68h]
  __int64 *v50; // [rsp+10h] [rbp-68h]
  __int64 *v51; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v53[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2;
  v7 = (_QWORD *)a5;
  v8 = a3;
  v9 = src;
  v40 = (__int64 *)a4;
  if ( src != a2 && a3 != (__int64 *)a4 )
  {
    v10 = a6;
    while ( 1 )
    {
      v11 = *v9;
      v12 = *v8;
      v52 = v11;
      v13 = *(_QWORD *)(v11 + 128);
      if ( v13
        || (v42 = v6,
            sub_7052B0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104), (__int64)a3, a4, a5, a6),
            v13 = *(_QWORD *)(v11 + 128),
            v6 = v42,
            v13) )
      {
        v13 = *(_QWORD *)(v13 + 88);
      }
      v14 = *(_QWORD *)(v10 + 72);
      v52 = v13;
      v15 = *(_DWORD *)(v14 + 80);
      v16 = v14 + 64;
      if ( !v15 )
        break;
      v17 = v15 - 1;
      a6 = *(_QWORD *)(v14 + 64);
      v18 = (v15 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      a3 = (__int64 *)(a6 + 16LL * v18);
      v19 = *a3;
      if ( v13 == *a3 )
        goto LABEL_8;
      if ( v19 != -4096 )
      {
        v46 = 1;
        v36 = nullptr;
        while ( 1 )
        {
          if ( v19 == -8192 && !v36 )
            v36 = a3;
          v18 = v17 & (v46 + v18);
          v16 = (unsigned int)(v46 + 1);
          a3 = (__int64 *)(a6 + 16LL * v18);
          v19 = *a3;
          if ( v13 == *a3 )
            break;
          if ( v19 == -4096 )
          {
            v37 = v36;
            v16 = v14 + 64;
            v15 = *(_DWORD *)(v14 + 80);
            if ( v37 )
              a3 = v37;
            goto LABEL_37;
          }
          ++v46;
        }
LABEL_8:
        a4 = a3[1];
        goto LABEL_9;
      }
LABEL_37:
      v35 = *(_DWORD *)(v14 + 72);
      v53[0] = a3;
      a4 = (unsigned int)(v35 + 1);
      a6 = (unsigned int)(4 * a4);
      if ( (unsigned int)a6 >= 3 * v15 )
        goto LABEL_45;
      a6 = v15 >> 3;
      if ( v15 - *(_DWORD *)(v14 + 76) - (unsigned int)a4 <= (unsigned int)a6 )
      {
        v50 = v6;
        goto LABEL_46;
      }
LABEL_39:
      v34 = *a3 == -4096;
      *(_DWORD *)(v14 + 72) = a4;
      if ( !v34 )
        --*(_DWORD *)(v14 + 76);
      *a3 = v13;
      a4 = 0;
      a3[1] = 0;
LABEL_9:
      v52 = v12;
      v20 = *(_QWORD *)(v12 + 128);
      if ( v20
        || (v48 = v6,
            v41 = a4,
            sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), (__int64)a3, a4, v16, a6),
            a4 = v41,
            v6 = v48,
            (v20 = *(_QWORD *)(v12 + 128)) != 0) )
      {
        v20 = *(_QWORD *)(v20 + 88);
      }
      v21 = *(_QWORD *)(v10 + 72);
      v52 = v20;
      v22 = *(_DWORD *)(v21 + 80);
      v23 = (__int64 *)(v21 + 64);
      if ( !v22 )
      {
        v53[0] = 0;
LABEL_43:
        v49 = v6;
        v43 = a4;
        sub_7055A0((__int64)v23, 2 * v22, (__int64)a3, a4, v16, a6);
        sub_A6DD20(v23, &v52, v53);
        v20 = v52;
        a3 = (__int64 *)v53[0];
        a4 = v43;
        v33 = *(_DWORD *)(v21 + 72) + 1;
        v6 = v49;
LABEL_33:
        v34 = *a3 == -4096;
        *(_DWORD *)(v21 + 72) = v33;
        if ( !v34 )
          --*(_DWORD *)(v21 + 76);
        *a3 = v20;
        v26 = 0;
        a3[1] = 0;
        goto LABEL_14;
      }
      v24 = v22 - 1;
      a6 = *(_QWORD *)(v21 + 64);
      v25 = (v22 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      a3 = (__int64 *)(a6 + 16LL * v25);
      a5 = *a3;
      if ( v20 != *a3 )
      {
        if ( a5 == -4096 )
        {
LABEL_30:
          v32 = *(_DWORD *)(v21 + 72);
          v16 = 3 * v22;
          v53[0] = a3;
          v33 = v32 + 1;
          a6 = (unsigned int)(4 * v33);
          if ( (unsigned int)a6 >= (unsigned int)v16 )
            goto LABEL_43;
          a5 = v22 - *(_DWORD *)(v21 + 76) - v33;
          a6 = v22 >> 3;
          if ( (unsigned int)a5 <= (unsigned int)a6 )
          {
            v51 = v6;
            v45 = a4;
            sub_7055A0((__int64)v23, v22, (__int64)a3, a4, a5, a6);
            sub_A6DD20(v23, &v52, v53);
            v20 = v52;
            a3 = (__int64 *)v53[0];
            v6 = v51;
            v33 = *(_DWORD *)(v21 + 72) + 1;
            a4 = v45;
          }
          goto LABEL_33;
        }
        v47 = 1;
        v38 = nullptr;
        while ( 1 )
        {
          if ( a5 == -8192 && !v38 )
            v38 = a3;
          v25 = v24 & (v47 + v25);
          a3 = (__int64 *)(a6 + 16LL * v25);
          a5 = *a3;
          if ( v20 == *a3 )
            break;
          if ( a5 == -4096 )
          {
            v39 = v38;
            v22 = *(_DWORD *)(v21 + 80);
            if ( v39 )
              a3 = v39;
            goto LABEL_30;
          }
          ++v47;
        }
      }
      v26 = a3[1];
LABEL_14:
      if ( a4 <= v26 )
      {
        v31 = *v9++;
        *v7++ = v31;
        if ( v6 == v9 || v40 == v8 )
          goto LABEL_17;
      }
      else
      {
        v27 = *v8;
        ++v7;
        ++v8;
        *(v7 - 1) = v27;
        if ( v40 == v8 || v6 == v9 )
          goto LABEL_17;
      }
    }
    v53[0] = 0;
LABEL_45:
    v50 = v6;
    v15 *= 2;
LABEL_46:
    v44 = (__int64 *)v16;
    sub_7055A0(v16, v15, (__int64)a3, a4, v16, a6);
    sub_A6DD20(v44, &v52, v53);
    v13 = v52;
    a3 = (__int64 *)v53[0];
    v6 = v50;
    LODWORD(a4) = *(_DWORD *)(v14 + 72) + 1;
    goto LABEL_39;
  }
LABEL_17:
  v28 = (char *)v6 - (char *)v9;
  if ( v6 != v9 )
    memmove(v7, v9, (char *)v6 - (char *)v9);
  v29 = (char *)v7 + v28;
  if ( v40 != v8 )
    memmove(v29, v8, (char *)v40 - (char *)v8);
  return &v29[(char *)v40 - (char *)v8];
}
