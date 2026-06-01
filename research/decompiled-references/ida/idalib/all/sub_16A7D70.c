__int64 __fastcall sub_16A7D70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  _QWORD *v8; // rbx
  unsigned int v9; // r12d
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 *v14; // rdx
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 *v19; // r15
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rsi
  int v44; // r14d
  __int64 *v45; // r15
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // [rsp+20h] [rbp-78h]
  __int64 v61; // [rsp+28h] [rbp-70h]
  char v63; // [rsp+39h] [rbp-5Fh]
  char v64; // [rsp+3Ah] [rbp-5Eh]
  char v65; // [rsp+3Bh] [rbp-5Dh]
  int v66; // [rsp+3Ch] [rbp-5Ch]
  __int64 v67; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v68; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v70[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = *(_QWORD **)(a1 + 248);
  v64 = a4;
  v65 = a5;
  if ( (_BYTE)a4 != 1 )
  {
    if ( (_BYTE)a5 )
    {
      v9 = 0;
      if ( (*(_BYTE *)(v8[290] + 2LL) & 4) == 0 )
        return v9;
    }
  }
  v9 = 1;
  v63 = 1;
  v11 = 0x40600000800LL;
  v12 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v67 = v12;
  v60 = v12;
  v13 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v68 = v13;
  v61 = v13;
  while ( 1 )
  {
    v14 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      v15 = 1;
      v68 = sub_F68450(*v14, v12, (__int64)v14, a4, a5);
      goto LABEL_7;
    }
    if ( (unsigned __int8)sub_ABFC30(v8, &v67, (__int64 *)&v68, 1) )
    {
      v15 = 1;
      goto LABEL_7;
    }
    v43 = v67;
    v44 = 1;
    v45 = (__int64 *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
    v46 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( (v46 & 0xF7) != 0x22 )
    {
      if ( v46 == 33 )
      {
        v44 = 2;
      }
      else if ( v46 == 11 )
      {
        v44 = 3;
      }
      else
      {
        if ( (unsigned int)v46 - 2 > 1 && v46 != 5 )
          return 0;
        v44 = 4;
      }
    }
    v66 = 1;
    v47 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( (v47 & 0xF7) != 0x22 )
    {
      if ( v47 == 33 )
      {
        v66 = 2;
      }
      else if ( v47 == 11 )
      {
        v66 = 3;
      }
      else
      {
        if ( (unsigned int)v47 - 2 > 1 && v47 != 5 )
          return 0;
        v66 = 4;
      }
    }
    v48 = sub_A72040(v8, v67);
    v52 = v48 ? *(_QWORD *)(v48 + 32) : sub_F68450(*v45, v43, v49, v50, v51);
    v53 = v68;
    v67 = v52;
    v54 = v68;
    v55 = sub_A72040(v8, v68);
    v59 = v55 ? *(_QWORD *)(v55 + 32) : sub_F68450(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL), v54, v56, v57, v58);
    v68 = v59;
    v15 = (v66 != v44) + 2;
LABEL_7:
    while ( 1 )
    {
      sub_A72280(v8, &v67, (__int64 *)&v68, 1);
      v18 = v67;
      v19 = (__int64 *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( (unsigned __int8)v20 > 0x2Au
        || _bittest64(&v11, v20)
        || (unsigned int)(unsigned __int8)v20 - 2 > 1 && (_BYTE)v20 != 5 )
      {
        break;
      }
      v30 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( (unsigned __int8)v30 > 0x2Au )
        break;
      if ( _bittest64(&v11, v30) )
      {
        v15 = 3;
      }
      else
      {
        if ( (unsigned int)(unsigned __int8)v30 - 2 > 1 && (_BYTE)v30 != 5 )
          break;
        if ( v15 != 3 )
          v15 = 2;
      }
      v31 = sub_A72040(v8, v67);
      if ( v31 )
        v35 = *(_QWORD *)(v31 + 32);
      else
        v35 = sub_F68450(*v19, v18, v32, v33, v34);
      v36 = v68;
      v67 = v35;
      v37 = v68;
      v38 = sub_A72040(v8, v68);
      if ( v38 )
        v42 = *(_QWORD *)(v38 + 32);
      else
        v42 = sub_F68450(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), v37, v39, v40, v41);
      v68 = v42 & 0xFFFFFFFFFFFFFFF8LL | *(_DWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL] & 7 | v42 & 7 | v68 & 7;
    }
    v21 = *(_QWORD **)(a1 + 248);
    v69 = 0;
    if ( v15 > (int)v9 )
      v9 = v15;
    v70[0] = 0;
    sub_A725A0(v21, v67, (__int64 *)&v69, v16, v17);
    v12 = v68;
    sub_A725A0(*(_QWORD **)(a1 + 248), v68, (__int64 *)v70, v22, v23);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 35 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 35 <= 1 )
    {
      v69 &= ~1uLL;
    }
    if ( v64 )
    {
      v24 = v69 & 7;
      v25 = v70[0] & 7;
      if ( v25 != v24 )
        break;
    }
LABEL_18:
    if ( !v65 )
      goto LABEL_27;
    a4 = v70[0];
    v27 = (v69 >> 6) & 7;
    v28 = (v70[0] >> 6) & 7;
    if ( (_DWORD)v28 == (_DWORD)v27 )
      goto LABEL_27;
    if ( (_DWORD)v27 == 3 || (_DWORD)v28 == 3 )
      return v9;
    if ( !(_DWORD)v27 || !(_DWORD)v28 )
    {
LABEL_27:
      if ( v63 )
      {
        if ( (v70[0] & 1) != 0 )
          goto LABEL_34;
        if ( a6 )
          *a6 = v60;
        if ( a7 )
          *a7 = v61;
      }
LABEL_33:
      v63 = 0;
      goto LABEL_34;
    }
    a4 = v70[0] & 1;
    if ( (v70[0] & 1) == 0 )
      return v9;
    if ( !v63 )
      goto LABEL_33;
LABEL_34:
    v8 = *(_QWORD **)(a1 + 248);
    v60 = v67;
    v61 = v68;
    v13 = v68;
  }
  v26 = v24 & ~v25;
  if ( a8 )
    *a8 = v26;
  if ( !v26 )
  {
    if ( !v63 )
      return v9;
    goto LABEL_18;
  }
  if ( a6 )
    *a6 = v60;
  if ( a7 )
    *a7 = v61;
  return v9;
}
