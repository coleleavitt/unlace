__int64 __fastcall sub_A7FBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  bool v9; // zf
  __m128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int8 v46; // al
  __int64 v47; // r8
  __int64 v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r12
  _QWORD *v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // rax
  __int64 *v68; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 v69; // [rsp+Ch] [rbp-5Ch]
  __int64 v70; // [rsp+10h] [rbp-58h] BYREF
  __int64 v71; // [rsp+18h] [rbp-50h] BYREF
  __m128 v72; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v73; // [rsp+30h] [rbp-38h]
  __int64 v74; // [rsp+38h] [rbp-30h]

  v5 = a3;
  v7 = a3;
  v74 = a1;
  v8 = a3;
  v68 = &v70;
  v73 = &v71;
  v9 = *(_BYTE *)(a3 + 16) == 34;
  v71 = a2;
  v10 = _mm_loadh_ps((const double *)&v68);
  v70 = a3;
  v69 = a4;
  v72 = v10;
  if ( v9 )
  {
    if ( !a3 )
      goto LABEL_58;
    goto LABEL_3;
  }
  v8 = sub_A56C00(a3, a2, a3, a4, a5);
  if ( v8 )
  {
LABEL_3:
    v11 = sub_A5E7C0(v8, a2, a3, a4, a5);
    a3 = *(unsigned __int8 *)(v11 + 19);
    LOBYTE(a3) = (unsigned __int8)a3 >> 2;
    if ( !(_BYTE)a3 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) == 13 && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 1;
    }
  }
  if ( *(_BYTE *)(v7 + 16) != 34 )
  {
    v15 = sub_A56C00(v7, a2, a3, a4, a5);
    if ( !v15 )
      goto LABEL_11;
    goto LABEL_37;
  }
  v15 = v7;
  if ( v7 )
  {
LABEL_37:
    v34 = sub_A5E7C0(v15, a2, a3, a4, a5);
    a3 = *(unsigned __int8 *)(v34 + 19);
    LOBYTE(a3) = (unsigned __int8)a3 >> 2;
    if ( !(_BYTE)a3 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v35 + 16) == 13 && ((*(_WORD *)(v35 + 18) >> 3) & 0x1FF) == 0x1EA )
        return 1;
    }
LABEL_11:
    if ( *(_BYTE *)(v7 + 16) == 42 )
      goto LABEL_12;
  }
LABEL_58:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    goto LABEL_15;
  v5 = sub_F63050(v7, a2, a3, a4);
LABEL_12:
  if ( v5 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EB )
      return 1;
  }
LABEL_15:
  v17 = sub_A5E7C0(v71, a2, a3, a4, a5);
  v20 = *(unsigned __int8 *)(v17 + 19);
  LOBYTE(v20) = (unsigned __int8)v20 >> 2;
  if ( !(_BYTE)v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 1;
  }
  v22 = v71;
  if ( *(_BYTE *)(v71 + 16) == 34 )
  {
    v23 = v71;
    if ( !v71 )
      goto LABEL_47;
  }
  else
  {
    v23 = sub_A56C00(v71, a2, v20, v18, v19);
    if ( !v23 )
      goto LABEL_42;
  }
  v24 = sub_A5E7C0(v23, a2, v20, v18, v19);
  v20 = *(unsigned __int8 *)(v24 + 19);
  LOBYTE(v20) = (unsigned __int8)v20 >> 2;
  if ( !(_BYTE)v20 && sub_A56B40(v24) )
    goto LABEL_22;
LABEL_42:
  v36 = v22;
  if ( *(_BYTE *)(v22 + 16) != 34 )
    v36 = sub_A56C00(v22, a2, v20, v18, v19);
  if ( v36 )
  {
    v37 = sub_A5E7C0(v36, a2, v20, v18, v19);
    v20 = *(unsigned __int8 *)(v37 + 19);
    LOBYTE(v20) = (unsigned __int8)v20 >> 2;
    if ( !(_BYTE)v20 && sub_A56B80(v37) )
    {
LABEL_22:
      v25 = v70;
      v26 = v70;
      if ( *(_BYTE *)(v70 + 16) == 34 )
      {
        if ( !v70 )
          goto LABEL_34;
      }
      else
      {
        v26 = sub_A56C00(v70, a2, v20, v18, v19);
        if ( !v26 )
        {
LABEL_29:
          v29 = v25;
          if ( *(_BYTE *)(v25 + 16) != 34 )
            v29 = sub_A56C00(v25, a2, v20, v18, v19);
          if ( v29 )
          {
            v30 = sub_A5E7C0(v29, a2, v20, v18, v19);
            v20 = *(unsigned __int8 *)(v30 + 19);
            LOBYTE(v20) = (unsigned __int8)v20 >> 2;
            if ( !(_BYTE)v20 && sub_A56B80(v30) )
              goto LABEL_26;
          }
LABEL_34:
          if ( !sub_A5EB20(v25, a2, v20, v18, v19) )
          {
            v28 = sub_A5E8D0(v70, a2, v31, v32, v33);
            return (unsigned int)sub_A80090(&v72, v28);
          }
          goto LABEL_26;
        }
      }
      v27 = sub_A5E7C0(v26, a2, v20, v18, v19);
      v20 = *(unsigned __int8 *)(v27 + 19);
      LOBYTE(v20) = (unsigned __int8)v20 >> 2;
      if ( !(_BYTE)v20 && sub_A56B40(v27) )
      {
LABEL_26:
        v28 = 1;
        return (unsigned int)sub_A80090(&v72, v28);
      }
      goto LABEL_29;
    }
  }
LABEL_47:
  if ( sub_A5EB20(v22, a2, v20, v18, v19) )
    goto LABEL_22;
  v38 = *(_QWORD *)(*(_QWORD *)(v71 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = (unsigned int)*(unsigned __int8 *)(v38 + 16) - 35;
  if ( (unsigned int)v39 > 1 )
    v38 = sub_F63050(v38, a2, v39, v18);
  v40 = *(unsigned __int8 *)(v38 + 19);
  LOBYTE(v40) = (unsigned __int8)v40 >> 2;
  if ( !(_BYTE)v40
    || (v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v41 + 16) != 13)
    || ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) != 0x1E9 )
  {
    LOBYTE(v42) = sub_A5E8D0(v70, a2, v40, v18, v19);
    v13 = v42;
    if ( !(_BYTE)v42 )
    {
      v48 = sub_F67A50(v71, a2, v43);
      v50 = sub_F67A50(v70, a2, v49);
      v54 = v50;
      if ( !v48 || !v50 )
        return v13;
      if ( v48 != v50 )
      {
        v55 = (_QWORD *)sub_F62610(v48, a2, v51, v52, v53);
        v59 = (_QWORD *)sub_F62610(v54, a2, v56, v57, v58);
        if ( !(unsigned __int8)sub_A570A0(v55, v59) )
        {
          v63 = (_QWORD *)sub_F62610(v54, v59, v60, v61, v62);
          v67 = (_QWORD *)sub_F62610(v48, v59, v64, v65, v66);
          if ( (unsigned __int8)sub_A570A0(v63, v67) )
            return (unsigned int)sub_A80090(&v72, v69 ^ 1u);
          return v13;
        }
        v28 = v69;
        return (unsigned int)sub_A80090(&v72, v28);
      }
      return 1;
    }
  }
  v44 = v71;
  v45 = v70;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 107LL) & 0x40) == 0 )
  {
    if ( v69 )
    {
      v45 = v71;
      v44 = v70;
    }
    v46 = sub_A7F400(a1, v45, v44, 0, v19);
    return (unsigned int)sub_A80090(&v72, v46);
  }
  v28 = 1;
  if ( !(unsigned __int8)sub_A7F400(a1, v71, v70, 0, v19) )
  {
    v28 = 0;
    if ( !v69 )
      v28 = (unsigned __int8)sub_A7F400(a1, v70, v71, 0, v47);
  }
  return (unsigned int)sub_A80090(&v72, v28);
}
