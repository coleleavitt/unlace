unsigned __int64 __fastcall sub_1ABB60(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r13
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // r11
  unsigned __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r11
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // [rsp+4h] [rbp-84h]
  unsigned __int64 v49; // [rsp+8h] [rbp-80h]
  unsigned __int64 v50; // [rsp+8h] [rbp-80h]
  unsigned __int64 v51; // [rsp+8h] [rbp-80h]
  unsigned __int64 v52; // [rsp+8h] [rbp-80h]
  unsigned __int64 v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+10h] [rbp-78h]
  unsigned __int64 v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  __int64 v57; // [rsp+18h] [rbp-70h]
  __int64 v59; // [rsp+28h] [rbp-60h]
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v5 = 2;
  v60 = __readfsqword(0x28u);
  v7 = sub_1A9A30(a3, (__int64)a2, (unsigned __int64)a1);
  v10 = a2[1];
  v59 = v7;
  if ( v10 )
    v5 = v10-- + 1;
  v11 = *a2;
  if ( a2[2] < v5 )
  {
    v4 = (__int64)a2;
    v46 = qvector_reserve(a2, v11, v5, 1);
    *a2 = v46;
    v11 = v46;
  }
  a2[1] = v5;
  *(_BYTE *)(v11 + v10) = 123;
  v48 = 0;
  *(_BYTE *)(*a2 + v10 + 1) = 0;
  v12 = 0;
  if ( a1[4] )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)(*a1 + 24 * v12);
      if ( !v13[1] )
        break;
      v28 = 0;
      v29 = 0;
      while ( 1 )
      {
        v30 = *(_QWORD *)(*v13 + 8 * v29);
        if ( v30 + 0x7FFFFFFFFFFFFFFFLL <= 0x7FFFFFFFFFFFFFFELL )
        {
          v35 = a2[1];
          v36 = 2;
          if ( v35 )
            v36 = v35-- + 1;
          v37 = *a2;
          if ( a2[2] < v36 )
          {
            v57 = v35;
            v55 = v30;
            v51 = v36;
            v39 = qvector_reserve(a2, v37, v36, 1);
            v35 = v57;
            v30 = v55;
            *a2 = v39;
            v37 = v39;
            v36 = v51;
          }
          a2[1] = v36;
          v30 = -(__int64)v30;
          *(_BYTE *)(v37 + v35) = 45;
          *(_BYTE *)(*a2 + v35 + 1) = 0;
        }
        v31 = "%lld";
        if ( v30 > 9 )
          v31 = "0x%llX";
        sub_F5F10(a2, (__int64)v31, v30);
        v29 = ++v28;
        if ( (unsigned __int64)v28 >= v13[1] )
          break;
        v32 = a2[1];
        v33 = 2;
        if ( v32 )
          v33 = v32-- + 1;
        v34 = *a2;
        if ( a2[2] < v33 )
        {
          v56 = v32;
          v50 = v33;
          v38 = qvector_reserve(a2, v34, v33, 1);
          v32 = v56;
          v29 = v28;
          *a2 = v38;
          v34 = v38;
          v33 = v50;
        }
        a2[1] = v33;
        *(_BYTE *)(v34 + v32) = 44;
        *(_BYTE *)(*a2 + v32 + 1) = 0;
      }
LABEL_10:
      v19 = a2[1];
      if ( v19 )
      {
        v20 = v19 + 3;
        v21 = v19 + 4;
        v22 = *a2;
        --v19;
        if ( a2[2] < v21 )
          goto LABEL_18;
      }
      else
      {
        v22 = *a2;
        v21 = 5;
        v20 = 4;
        if ( (unsigned __int64)a2[2] < 5 )
        {
LABEL_18:
          v54 = v20;
          v49 = v21;
          v27 = qvector_reserve(a2, v22, v21, 1);
          v20 = v54;
          v21 = v49;
          *a2 = v27;
          v22 = v27;
        }
      }
      a2[1] = v21;
      v4 = a3;
      *(_BYTE *)(v22 + v20) = 0;
      *(_DWORD *)(*a2 + v19) = 540949792;
      sub_1AAA00(a3, a2, *(unsigned int *)(a1[3] + 4 * v12), v9);
      v12 = ++v48;
      if ( (unsigned __int64)v48 >= a1[4] )
        goto LABEL_38;
      v9 = (unsigned int)v48;
      if ( v48 > 0 )
      {
        v23 = a2[1];
        if ( v23 )
        {
          v24 = v23 + 1;
          v25 = v23 + 2;
          v26 = *a2;
          --v23;
          if ( a2[2] >= v25 )
            goto LABEL_16;
        }
        else
        {
          v26 = *a2;
          v25 = 3;
          v24 = 2;
          if ( (unsigned __int64)a2[2] >= 3 )
            goto LABEL_16;
        }
        v53 = v25;
        v41 = qvector_reserve(a2, v26, v25, 1);
        *a2 = v41;
        v25 = v53;
        v26 = v41;
LABEL_16:
        a2[1] = v25;
        *(_BYTE *)(v26 + v24) = 0;
        *(_WORD *)(*a2 + v23) = 8236;
      }
    }
    v14 = a2[1];
    if ( v14 )
    {
      v15 = v14 + 2;
      v16 = v14 + 3;
      v17 = *a2;
      --v14;
      if ( a2[2] >= v16 )
      {
LABEL_9:
        a2[1] = v16;
        *(_BYTE *)(v17 + v15) = 0;
        v18 = *a2 + v14;
        *(_WORD *)v18 = 25956;
        *(_BYTE *)(v18 + 2) = 102;
        goto LABEL_10;
      }
    }
    else
    {
      v17 = *a2;
      v16 = 4;
      v15 = 3;
      if ( (unsigned __int64)a2[2] >= 4 )
        goto LABEL_9;
    }
    v52 = v16;
    v40 = qvector_reserve(a2, v17, v16, 1);
    *a2 = v40;
    v16 = v52;
    v17 = v40;
    goto LABEL_9;
  }
LABEL_38:
  v42 = a2[1];
  v43 = 2;
  if ( v42 )
    v43 = v42-- + 1;
  v44 = *a2;
  if ( a2[2] < v43 )
  {
    v4 = (__int64)a2;
    v47 = qvector_reserve(a2, v44, v43, 1);
    *a2 = v47;
    v44 = v47;
  }
  a2[1] = v43;
  *(_BYTE *)(v44 + v42) = 125;
  *(_BYTE *)(*a2 + v42 + 1) = 0;
  if ( v59 != -1 )
  {
    if ( ((unsigned __int8)v59 & 7u) > 2 )
      sub_1A92D0(v4, v44, v8, v9);
    sub_325070(a2, (unsigned int)(v59 & 7) + 41);
  }
  return v60 - __readfsqword(0x28u);
}
