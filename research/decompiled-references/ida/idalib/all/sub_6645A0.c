__int64 __fastcall sub_6645A0(__int64 *a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v7; // rax
  char v8; // al
  char *v9; // r15
  char v10; // al
  char v11; // dl
  const char *v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rsi
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  size_t v22; // r15
  __int64 v24; // r8
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  _BYTE *v29; // rsi
  __int64 v30; // r8
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  char *v35; // r8
  __int64 v36; // r8
  _BYTE *v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  _BYTE *v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  _BYTE *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // rsi
  void *v48; // rax
  void *v49; // rax
  void *v50; // rax
  void *v51; // rax
  __int64 v52; // r13
  size_t v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 v58; // rax
  unsigned __int64 v59; // r13
  __int64 v60; // rsi
  void *v61; // rax
  void *v62; // rax
  void *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // [rsp+0h] [rbp-70h]
  __int64 v67; // [rsp+8h] [rbp-68h]
  __int64 v68; // [rsp+8h] [rbp-68h]
  __int64 v69; // [rsp+8h] [rbp-68h]
  __int64 v70; // [rsp+8h] [rbp-68h]
  __int64 v71; // [rsp+8h] [rbp-68h]
  __int64 v72; // [rsp+8h] [rbp-68h]
  __int64 v73; // [rsp+8h] [rbp-68h]
  unsigned __int64 v74; // [rsp+10h] [rbp-60h]
  __int64 v75; // [rsp+10h] [rbp-60h]
  __int64 v76; // [rsp+10h] [rbp-60h]
  __int64 v77; // [rsp+10h] [rbp-60h]
  unsigned __int8 v78; // [rsp+10h] [rbp-60h]
  unsigned __int64 v79; // [rsp+10h] [rbp-60h]
  unsigned __int64 v80; // [rsp+10h] [rbp-60h]
  unsigned __int64 v81; // [rsp+10h] [rbp-60h]
  size_t v82; // [rsp+10h] [rbp-60h]
  __int64 v83; // [rsp+18h] [rbp-58h]
  unsigned __int64 v84; // [rsp+18h] [rbp-58h]
  __int64 v85; // [rsp+18h] [rbp-58h]
  void *src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v87; // [rsp+28h] [rbp-48h]
  unsigned __int64 v88; // [rsp+38h] [rbp-38h]

  v4 = *a1;
  v5 = *a3;
  v88 = __readfsqword(0x28u);
  v7 = sub_534260(*(_QWORD *)(v4 + 1824), v5);
  v83 = v7;
  if ( !v7 )
    return 0;
  v8 = *(_BYTE *)(v7 + 70) & 0x30;
  if ( v8 == 32 )
  {
    v9 = "__far";
  }
  else if ( v8 == 48 )
  {
    if ( *(_BYTE *)(v83 + 28) )
    {
      v78 = *(_BYTE *)(v83 + 28);
      v56 = sub_3792E0(0x7D2u);
      v57 = v56;
      if ( !v56 )
      {
        v57 = 4;
        LODWORD(v56) = 4;
      }
      v9 = (char *)&byte_22F0C30;
      if ( v57 < v78 )
        v9 = sub_5E6630(*a1 + 928, v78 - 1 - (unsigned int)v56, &src);
    }
    else
    {
      v9 = "__closure";
      if ( !*(_BYTE *)(v83 + 8) )
        v9 = nullptr;
    }
  }
  else
  {
    v9 = "__near";
    if ( v8 != 16 )
      v9 = nullptr;
  }
  src = nullptr;
  v87 = 0;
  v10 = *(_BYTE *)(v83 + 29);
  v11 = v10 & 0x60;
  if ( (v10 & 0x60) == 0x40 )
  {
    v12 = "__ptr64";
  }
  else if ( v11 == 96 )
  {
    v12 = "__restrict";
  }
  else
  {
    v12 = "__ptr32";
    if ( v11 != 32 )
      goto LABEL_14;
  }
  sub_65E8C0((__int64 *)&src, v12, 32);
  v13 = v87;
  v14 = 2;
  if ( (_QWORD)v87 )
  {
    v14 = v87 + 1;
    v13 = v87 - 1;
  }
  v15 = src;
  if ( *((_QWORD *)&v87 + 1) < v14 )
  {
    v67 = v13;
    v74 = v14;
    v48 = (void *)qvector_reserve(&src, src, v14, 1);
    v13 = v67;
    v14 = v74;
    src = v48;
    v15 = v48;
  }
  *(_QWORD *)&v87 = v14;
  v15[v13] = 32;
  *((_BYTE *)src + v13 + 1) = 0;
  v10 = *(_BYTE *)(v83 + 29);
LABEL_14:
  if ( v10 >= 0 )
    goto LABEL_15;
  v24 = v87;
  v25 = 2;
  if ( (_QWORD)v87 )
  {
    v25 = v87 + 1;
    v26 = src;
    v24 = v87 - 1;
    if ( *((_QWORD *)&v87 + 1) >= (unsigned __int64)(v87 + 1) )
      goto LABEL_35;
  }
  else
  {
    v26 = src;
    if ( *((_QWORD *)&v87 + 1) >= 2u )
      goto LABEL_35;
  }
  v69 = v24;
  v76 = v25;
  v50 = (void *)qvector_reserve(&src, v26, v25, 1);
  v24 = v69;
  v25 = v76;
  src = v50;
  v26 = v50;
LABEL_35:
  *(_QWORD *)&v87 = v25;
  v27 = 2;
  v26[v24] = 1;
  *((_BYTE *)src + v24 + 1) = 0;
  v28 = v87;
  if ( (_QWORD)v87 )
  {
    v27 = v87 + 1;
    v29 = src;
    v28 = v87 - 1;
    if ( *((_QWORD *)&v87 + 1) >= (unsigned __int64)(v87 + 1) )
      goto LABEL_37;
  }
  else
  {
    v29 = src;
    if ( *((_QWORD *)&v87 + 1) >= 2u )
      goto LABEL_37;
  }
  v70 = v28;
  v77 = v27;
  v51 = (void *)qvector_reserve(&src, v29, v27, 1);
  v28 = v70;
  v27 = v77;
  src = v51;
  v29 = v51;
LABEL_37:
  *(_QWORD *)&v87 = v27;
  v29[v28] = 32;
  *((_BYTE *)src + v28 + 1) = 0;
  v30 = v87;
  if ( (_QWORD)v87 )
  {
    v33 = v87 + 8;
    v32 = v87 + 9;
    v31 = src;
    v30 = v87 - 1;
    if ( *((_QWORD *)&v87 + 1) >= (unsigned __int64)(v87 + 9) )
      goto LABEL_39;
LABEL_62:
    v66 = v33;
    v68 = v30;
    v75 = v32;
    v49 = (void *)qvector_reserve(&src, v31, v32, 1);
    v33 = v66;
    v30 = v68;
    src = v49;
    v31 = v49;
    v32 = v75;
    goto LABEL_39;
  }
  v31 = src;
  v32 = 10;
  v33 = 9;
  if ( *((_QWORD *)&v87 + 1) < 0xAu )
    goto LABEL_62;
LABEL_39:
  *(_QWORD *)&v87 = v32;
  v34 = 2;
  v31[v33] = 0;
  v35 = (char *)src + v30;
  *(_QWORD *)v35 = 0x6574666968735F5FLL;
  v35[8] = 100;
  v36 = v87;
  if ( (_QWORD)v87 )
  {
    v34 = v87 + 1;
    v36 = v87 - 1;
  }
  v37 = src;
  if ( *((_QWORD *)&v87 + 1) < v34 )
  {
    v72 = v36;
    v80 = v34;
    v62 = (void *)qvector_reserve(&src, src, v34, 1);
    v36 = v72;
    v34 = v80;
    src = v62;
    v37 = v62;
  }
  *(_QWORD *)&v87 = v34;
  v38 = 2;
  v37[v36] = 2;
  *((_BYTE *)src + v36 + 1) = 0;
  v39 = v87;
  if ( (_QWORD)v87 )
  {
    v38 = v87 + 1;
    v39 = v87 - 1;
  }
  v40 = src;
  if ( *((_QWORD *)&v87 + 1) < v38 )
  {
    v71 = v39;
    v79 = v38;
    v61 = (void *)qvector_reserve(&src, src, v38, 1);
    v39 = v71;
    v38 = v79;
    src = v61;
    v40 = v61;
  }
  *(_QWORD *)&v87 = v38;
  v40[v39] = 32;
  *((_BYTE *)src + v39 + 1) = 0;
  sub_65F4F0((__int64 *)&src, 40);
  if ( !(unsigned __int8)sub_664DE0(
                           (_DWORD)a1,
                           (unsigned int)&src,
                           (int)v83 + 16,
                           *(unsigned __int8 *)(v83 + 16),
                           0,
                           0,
                           0,
                           0,
                           0) )
    goto LABEL_79;
  sub_65F4F0((__int64 *)&src, 44);
  if ( *(_DWORD *)(v83 + 24) >= 0x80000001 )
    sub_65F4F0((__int64 *)&src, 45);
  sub_35A910((__int64 *)&src);
  sub_65F4F0((__int64 *)&src, 41);
  v41 = v87;
  v42 = 2;
  if ( (_QWORD)v87 )
  {
    v42 = v87 + 1;
    v41 = v87 - 1;
  }
  v43 = src;
  if ( *((_QWORD *)&v87 + 1) < v42 )
  {
    v73 = v41;
    v81 = v42;
    v63 = (void *)qvector_reserve(&src, src, v42, 1);
    v41 = v73;
    v42 = v81;
    src = v63;
    v43 = v63;
  }
  *(_QWORD *)&v87 = v42;
  v43[v41] = 32;
  *((_BYTE *)src + v41 + 1) = 0;
LABEL_15:
  sub_662480(*(_QWORD *)(*a1 + 1824), (__int64 *)&src, a3, 2052);
  v16 = *a3;
  v17 = v83;
  if ( (*(_BYTE *)v83 & 0xF) != 0xA || (v17 = sub_6645A0(a1, a2, v83)) != 0 )
  {
    if ( v9 )
    {
      v18 = sub_65E1F0((__int64)a2);
      if ( (unsigned __int8)v18 > 0x28u || (v19 = 0x10100000001LL, !_bittest64(&v19, v18)) )
      {
        v58 = a2[1];
        v59 = 2;
        v85 = v58;
        if ( v58 )
        {
          v59 = v58 + 1;
          v85 = v58 - 1;
        }
        v60 = *a2;
        if ( a2[2] < v59 )
        {
          v65 = qvector_reserve(a2, v60, v59, 1);
          *a2 = v65;
          v60 = v65;
        }
        a2[1] = v59;
        *(_BYTE *)(v60 + v85) = 32;
        *(_BYTE *)(*a2 + v85 + 1) = 0;
      }
      if ( *v9 )
        sub_65E8C0(a2, v9, 32);
    }
    v20 = sub_65E1F0((__int64)a2);
    if ( (unsigned __int8)v20 <= 0x2Au )
    {
      v21 = 0x40100000001LL;
      if ( _bittest64(&v21, v20) )
        goto LABEL_23;
    }
    v44 = a2[1];
    v45 = 2;
    v46 = v44;
    if ( v44 )
    {
      v45 = v44 + 1;
      v47 = *a2;
      v46 = v44 - 1;
      if ( a2[2] >= (unsigned __int64)(v44 + 1) )
        goto LABEL_57;
    }
    else
    {
      v47 = *a2;
      if ( (unsigned __int64)a2[2] >= 2 )
      {
LABEL_57:
        a2[1] = v45;
        *(_BYTE *)(v47 + v46) = 32;
        *(_BYTE *)(*a2 + v46 + 1) = 0;
LABEL_23:
        sub_65F4F0(a2, 42);
        v84 = v87;
        if ( (_QWORD)v87 )
        {
          v22 = v87 - 1;
          if ( (_QWORD)v87 != 1 )
          {
            v52 = a2[1];
            v53 = v87 - 1;
            if ( v52 )
            {
              --v52;
              v53 = v22 + v52;
              v84 = v87 + v52;
            }
            v54 = *a2;
            if ( a2[2] < v84 )
            {
              v82 = v53;
              v64 = qvector_reserve(a2, v54, v84, 1);
              *a2 = v64;
              v53 = v82;
              v54 = v64;
            }
            a2[1] = v84;
            *(_BYTE *)(v54 + v53) = 0;
            memcpy((void *)(v52 + *a2), src, v22);
          }
        }
        if ( (unsigned __int8)v16 > 0x3Fu )
          sub_65EEB0(a2, v16, 1);
        goto LABEL_27;
      }
    }
    v55 = qvector_reserve(a2, v47, v45, 1);
    *a2 = v55;
    v47 = v55;
    goto LABEL_57;
  }
LABEL_79:
  v17 = 0;
LABEL_27:
  if ( src )
  {
    *(_QWORD *)&v87 = 0;
    qfree(src);
  }
  return v17;
}
