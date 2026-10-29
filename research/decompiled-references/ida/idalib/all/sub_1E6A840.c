__int64 __fastcall sub_1E6A840(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  int v8; // r13d
  unsigned int v10; // ebp
  bool v11; // bl
  __int64 v12; // rdi
  __int64 v13; // r14
  char v14; // al
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r14
  __int64 v36; // rax
  _QWORD **v37; // r15
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r13
  _QWORD *v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  _QWORD *v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r12
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned __int8 v57; // al
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // [rsp+0h] [rbp-138h] BYREF
  __int64 v64; // [rsp+8h] [rbp-130h] BYREF
  bool v65; // [rsp+17h] [rbp-121h] BYREF
  __int64 v66; // [rsp+18h] [rbp-120h] BYREF
  _QWORD v67[2]; // [rsp+20h] [rbp-118h] BYREF
  _QWORD v68[2]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v69[3]; // [rsp+40h] [rbp-F8h] BYREF
  __m128 v70; // [rsp+70h] [rbp-C8h] BYREF
  __m128 v71; // [rsp+80h] [rbp-B8h]
  __m128 v72; // [rsp+90h] [rbp-A8h] BYREF
  char v73; // [rsp+E8h] [rbp-50h]
  unsigned int v74; // [rsp+F0h] [rbp-48h]
  char v75; // [rsp+F4h] [rbp-44h]

  v8 = a3;
  v10 = a4;
  v11 = (_DWORD)a3 == 4;
  v64 = a2;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE *)(v13 + 16);
  if ( v14 == 13 )
  {
    v15 = (*(_WORD *)(v13 + 18) >> 3) & 0x1FF;
    if ( ((v15 + 76) & 0x1FFu) > 0x13 )
    {
LABEL_3:
      sub_168B9F0((__int64)&v70, (__int64 *)(a1 + 8), v10, 0x1022u, 0);
      if ( v73 )
      {
        sub_1E5E160((unsigned __int8 **)&v72, v11);
      }
      else if ( v75 )
      {
        v52 = sub_168B9E0(&v70);
        v53 = v71.m128_u64[0];
        if ( v71.m128_u64[0] )
          v53 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v71.m128_u64[0] + 32LL))(v71.m128_u64[0]);
        *(_QWORD *)&v69[0] = v53;
        v54 = sub_1587BC0(v52, (__int64 *)v69, v48, v49, v50, v51);
        sub_1E5E160((unsigned __int8 **)(*v54 + 32LL * v74 + 8), v11);
      }
      LOBYTE(v68[0]) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) == 10;
      v16 = sub_1588420((__int64)&v70, (unsigned __int8 *)v68);
      v17 = sub_1605D30(v16, &v64);
      LODWORD(v69[0]) = 0;
      sub_1587D10(v17, (int *)v69);
      sub_15F7200(&v70);
      return 0;
    }
    goto LABEL_13;
  }
  if ( v14 != 47 )
  {
    if ( v14 != 10 )
      goto LABEL_3;
LABEL_44:
    if ( *(_BYTE *)(v12 + 16) != 10 )
      v12 = sub_F63050(v12, a2, a3, a4);
    if ( ((*(_DWORD *)(v12 + 32) >> 1) & 0xFFFFFFu) <= 1 )
      goto LABEL_3;
    if ( !sub_F57F90(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_33;
    goto LABEL_15;
  }
  v19 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v19 + 74) & 1) == 0 && (v19[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
    || *((char *)sub_F60F10(v13, a2, v20, v21, v22, v23) + 76) < 0 )
  {
    v47 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
      goto LABEL_3;
    if ( !sub_F57F90(v47) )
      goto LABEL_33;
LABEL_15:
    v65 = v11;
    v66 = v64;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
      goto LABEL_16;
    *(_QWORD *)&v69[0] = sub_1E5E690(a1, v64, v10, v25, v26, v27, a7, a8);
    v55 = *(_QWORD *)(*(_QWORD *)&v69[0] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v55 + 16) == 10 )
    {
      v56 = (*(_DWORD *)(v55 + 32) >> 1) & 0xFFFFFF;
      if ( v56 > 1 )
      {
        result = sub_A70200(*(_QWORD *)(a1 + 248), !v65, v56);
        v42 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_29;
      }
      sub_168B9F0((__int64)&v70, (__int64 *)(a1 + 8), v10, 0x1022u, 0);
      v59 = sub_15890D0((__int64)&v70, (unsigned __int8 *)&v65);
      LOBYTE(v67[0]) = 1;
    }
    else
    {
      v58 = *(_QWORD *)(*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v58 + 16) != 13 || ((*(_WORD *)(v58 + 18) >> 3) & 0x1FF) != 0x1B4 )
      {
LABEL_16:
        v28 = *(_QWORD *)(a1 + 248);
        v29 = *(_QWORD *)(v28 + 17448);
        v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL);
        if ( v30 == sub_102B790 )
        {
          v31 = 6;
          if ( *(_BYTE *)(v29 + 8) <= 0x3Fu )
            v31 = 6LL - (*(_BYTE *)(*(_QWORD *)(v29 + 208) + 352LL) ^ 1u);
        }
        else
        {
          v57 = v30(*(_QWORD *)(v28 + 17448));
          v28 = *(_QWORD *)(a1 + 248);
          v31 = 6LL - (v57 ^ 1u);
        }
        v67[1] = v31;
        v32 = v67;
        v63 = v28 + 18712;
        v69[0] = _mm_loadh_ps((const double *)&v63);
        v63 = v28 + 18728;
        v69[1] = _mm_loadh_ps((const double *)&v63);
        v63 = v28 + 18744;
        v67[0] = v69;
        v69[2] = _mm_loadh_ps((const double *)&v63);
        v63 = v28 + 18760;
        v70 = _mm_loadh_ps((const double *)&v63);
        v63 = v28 + 18776;
        v71 = _mm_loadh_ps((const double *)&v63);
        v63 = v28 + 18792;
        v72 = _mm_loadh_ps((const double *)&v63);
        v68[0] = &v70;
        v68[1] = v31;
        if ( !v65 )
          v32 = v68;
        v33 = sub_A97D20(v28, *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL));
        v34 = *v32;
        v35 = v33;
        v36 = 8 * v32[1];
        v37 = (_QWORD **)(*v32 + v36);
        v38 = v36 >> 5;
        v39 = v36 >> 3;
        if ( v38 > 0 )
        {
          v40 = v34 + 32 * v38;
          while ( 1 )
          {
            v41 = *(_QWORD **)v34;
            if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(**(_QWORD **)v34 & 0xFFFFFFFFFFFFFFF0LL)) )
              goto LABEL_28;
            v41 = *(_QWORD **)(v34 + 8);
            if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*v41 & 0xFFFFFFFFFFFFFFF0LL)) )
              goto LABEL_28;
            v41 = *(_QWORD **)(v34 + 16);
            if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*v41 & 0xFFFFFFFFFFFFFFF0LL)) )
              goto LABEL_28;
            v41 = *(_QWORD **)(v34 + 24);
            if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*v41 & 0xFFFFFFFFFFFFFFF0LL)) )
              goto LABEL_28;
            v34 += 32;
            if ( v40 == v34 )
            {
              v39 = ((__int64)v37 - v34) >> 3;
              break;
            }
          }
        }
        if ( v39 != 2 )
        {
          if ( v39 != 3 )
          {
            if ( v39 != 1 )
            {
LABEL_59:
              v41 = *v37;
LABEL_28:
              result = *(_QWORD *)(*v41 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
              v42 = result;
              goto LABEL_29;
            }
LABEL_71:
            v41 = *(_QWORD **)v34;
            if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(**(_QWORD **)v34 & 0xFFFFFFFFFFFFFFF0LL)) )
              goto LABEL_28;
            goto LABEL_59;
          }
          v41 = *(_QWORD **)v34;
          if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(**(_QWORD **)v34 & 0xFFFFFFFFFFFFFFF0LL)) )
            goto LABEL_28;
          v34 += 8;
        }
        v41 = *(_QWORD **)v34;
        if ( v35 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(**(_QWORD **)v34 & 0xFFFFFFFFFFFFFFF0LL)) )
          goto LABEL_28;
        v34 += 8;
        goto LABEL_71;
      }
      sub_168B9F0((__int64)&v70, (__int64 *)(a1 + 8), v10, 0x1022u, 0);
      v59 = sub_15890D0((__int64)&v70, (unsigned __int8 *)&v65);
      LOBYTE(v67[0]) = 0;
    }
    v60 = sub_1588420(v59, (unsigned __int8 *)v67);
    v61 = sub_1605D30(v60, &v66);
    LODWORD(v68[0]) = 1;
    v62 = sub_1587D10(v61, (int *)v68);
    sub_1605D30(v62, (__int64 *)v69);
    sub_15F7200(&v70);
    return 0;
  }
  v12 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  a3 = *(unsigned __int8 *)(v24 + 16);
  if ( (_BYTE)a3 != 13 )
  {
    if ( (_BYTE)a3 != 10 )
      goto LABEL_14;
    goto LABEL_44;
  }
  v15 = (*(_WORD *)(v24 + 18) >> 3) & 0x1FF;
LABEL_13:
  if ( v15 == 436 )
    goto LABEL_3;
LABEL_14:
  if ( sub_F57F90(v12) )
    goto LABEL_15;
LABEL_33:
  if ( sub_F57FC0(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL))
    || (unsigned __int8)sub_F57F20(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL))
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    goto LABEL_15;
  }
  v46 = *(_QWORD **)(a1 + 248);
  if ( v8 == 4 )
    result = sub_A704A0(v46, v64, v45, v25, v26);
  else
    result = sub_A70710(v46, v64, v45, v25, v26);
  v42 = result & 0xFFFFFFFFFFFFFFF0LL;
LABEL_29:
  if ( v42 )
  {
    v43 = 0;
    v44 = *(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v44 & 8) != 0 )
      v43 = *(__int64 *)((char *)&qword_18 + (v44 & 0xFFFFFFFFFFFFFFF0LL));
    return sub_A70F20(*(_QWORD *)(a1 + 248), result, v43 | ((unsigned __int8)v64 | (unsigned __int8)v44) & 7);
  }
  return result;
}
