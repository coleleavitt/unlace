unsigned __int64 __fastcall sub_690BD0(__int64 a1, __int64 a2, __int64 *a3)
{
  size_t v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  size_t v28; // r8
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+10h] [rbp-78h]
  unsigned __int64 v32; // [rsp+10h] [rbp-78h]
  unsigned __int64 v33; // [rsp+10h] [rbp-78h]
  unsigned __int64 v34; // [rsp+10h] [rbp-78h]
  unsigned __int64 v35; // [rsp+10h] [rbp-78h]
  unsigned __int64 v36; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+18h] [rbp-70h]
  size_t nc; // [rsp+18h] [rbp-70h]
  size_t nd; // [rsp+18h] [rbp-70h]
  size_t ne; // [rsp+18h] [rbp-70h]
  size_t n; // [rsp+18h] [rbp-70h]
  size_t nb; // [rsp+18h] [rbp-70h]
  unsigned __int64 v43; // [rsp+20h] [rbp-68h]
  unsigned __int64 v44; // [rsp+20h] [rbp-68h]
  unsigned __int64 v45; // [rsp+20h] [rbp-68h]
  unsigned __int64 v46; // [rsp+20h] [rbp-68h]
  unsigned __int64 v47; // [rsp+20h] [rbp-68h]
  unsigned __int64 v48; // [rsp+20h] [rbp-68h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v51[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v52[8]; // [rsp+48h] [rbp-40h] BYREF

  v52[0] = __readfsqword(0x28u);
  v4 = pack_dd(src, v51, *(unsigned int *)(a1 + 24)) - (_QWORD)src;
  if ( v4 )
    sub_68FA20(a3, src, v4);
  v5 = -1;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 + 16LL * *(_QWORD *)(a1 + 24) != v6 )
  {
    v7 = v6 + 16LL * *(_QWORD *)(a1 + 24);
    while ( 1 )
    {
      v22 = *(_QWORD *)v6 - v5;
      if ( v5 == -1 )
        v22 = sub_3BDD60(*(_QWORD **)(a2 + 1672), *(_QWORD *)v6);
      v23 = pack_dq(src, v52, v22) - (_QWORD)src;
      v28 = v23;
      if ( v23 )
        break;
LABEL_9:
      v10 = pack_dd(src, v51, *(unsigned int *)(v6 + 8)) - (_QWORD)src;
      v11 = v10;
      if ( !v10 )
        goto LABEL_15;
      v12 = a3[1];
      v13 = v12 + v10;
      if ( __CFADD__(v12, v10) )
      {
        if ( v12 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
            a3[1] = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v14 = *a3;
      v15 = a3[1];
      if ( a3[2] < v13 )
      {
        v48 = a3[1];
        nb = v11;
        v36 = v13;
        v30 = qvector_reserve(a3, v14, v13, 1);
        v12 = v48;
        v11 = nb;
        *a3 = v30;
        v14 = v30;
        v13 = v36;
        v15 = a3[1];
      }
      v44 = v12;
      nc = v11;
      v32 = v13;
      memset((void *)(v14 + v15), 0, v13 - v15);
      v11 = nc;
      v12 = v44;
      a3[1] = v32;
LABEL_14:
      memcpy((void *)(v12 + *a3), src, v11);
LABEL_15:
      v16 = pack_dd(src, v51, *(unsigned int *)(v6 + 12)) - (_QWORD)src;
      v17 = v16;
      if ( v16 )
      {
        v18 = a3[1];
        v19 = v18 + v16;
        if ( __CFADD__(v18, v16) )
        {
          if ( v18 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v20 = *a3;
            v21 = a3[1];
            v19 = 0x7FFFFFFFFFFFFFFFLL;
            if ( (unsigned __int64)a3[2] < 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_36;
            goto LABEL_18;
          }
          if ( v18 != 0x7FFFFFFFFFFFFFFFLL )
            a3[1] = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v20 = *a3;
          v21 = a3[1];
          if ( a3[2] >= v19 )
            goto LABEL_18;
LABEL_36:
          v46 = a3[1];
          ne = v17;
          v34 = v19;
          v25 = qvector_reserve(a3, v20, v19, 1);
          v18 = v46;
          v17 = ne;
          *a3 = v25;
          v20 = v25;
          v19 = v34;
          v21 = a3[1];
LABEL_18:
          v45 = v18;
          nd = v17;
          v33 = v19;
          memset((void *)(v20 + v21), 0, v19 - v21);
          v17 = nd;
          v18 = v45;
          a3[1] = v33;
        }
        memcpy((void *)(v18 + *a3), src, v17);
      }
      v5 = *(_QWORD *)v6;
      v6 += 16;
      if ( v7 == v6 )
        return v52[0] - __readfsqword(0x28u);
    }
    v27 = a3[1];
    v29 = v27 + v23;
    if ( __CFADD__(v27, v23) )
    {
      if ( v27 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v27 != 0x7FFFFFFFFFFFFFFFLL )
          a3[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v27 + *a3), src, v28);
        goto LABEL_9;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a3;
    v9 = a3[1];
    if ( a3[2] < v29 )
    {
      v47 = a3[1];
      n = v28;
      v35 = v29;
      v26 = qvector_reserve(a3, v8, v29, 1);
      v27 = v47;
      v28 = n;
      *a3 = v26;
      v8 = v26;
      v29 = v35;
      v9 = a3[1];
    }
    v43 = v27;
    na = v28;
    v31 = v29;
    memset((void *)(v8 + v9), 0, v29 - v9);
    v28 = na;
    v27 = v43;
    a3[1] = v31;
    goto LABEL_8;
  }
  return v52[0] - __readfsqword(0x28u);
}
