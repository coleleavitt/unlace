__int64 __fastcall sub_61D940(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  __int64 v31; // r13
  unsigned int v32; // ebp
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  __int64 *v39; // rax
  unsigned int *v40; // r13
  __int64 *v41; // rbp
  unsigned __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rdx
  _DWORD *v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  _DWORD *v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rsi
  _DWORD *v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rbp
  __int64 v72; // rdx
  _DWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rdi
  int v78; // edx
  __int64 v79; // rdi
  int v80; // edx
  __int64 v81; // rdi
  int v82; // edx
  __int64 v83; // rdi
  int v84; // edx
  __m128i v85; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v86; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v87; // [rsp+40h] [rbp-98h] BYREF
  __m128i v88; // [rsp+50h] [rbp-88h] BYREF
  __m128i v89; // [rsp+60h] [rbp-78h] BYREF
  __m128i v90; // [rsp+70h] [rbp-68h] BYREF
  __m128i v91; // [rsp+80h] [rbp-58h] BYREF
  __m128i v92[4]; // [rsp+90h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a2 + 120);
  if ( !v8 )
  {
    v23 = *(_QWORD *)(a2 + 96);
    v24 = 0;
    v25 = *(_QWORD *)(v23 + 88);
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) != 0 )
    {
      if ( v26 )
        goto LABEL_20;
    }
    else if ( v26 <= 3 )
    {
      if ( v26 )
        goto LABEL_23;
    }
    else if ( (v25 & 2) != 0 )
    {
      v27 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      v28 = v27[2275];
      if ( !v28 )
      {
        *(_QWORD *)(v23 + 88) = v23 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v23 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_47:
          v8 = *(_QWORD *)(a2 + 120);
          goto LABEL_2;
        }
        goto LABEL_22;
      }
      v29 = v27[274];
      v27[284] += 24LL;
      v26 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v27[275] >= v26 + 24 && v29 )
        v27[274] = v26 + 24;
      else
        v26 = sub_5F8390((__int64)(v27 + 274), 24, 3);
      *(_QWORD *)v26 = v28;
      *(_DWORD *)(v26 + 8) = 0;
      v25 = v26 | 5;
      *(_QWORD *)(v26 + 16) = v23;
      *(_QWORD *)(v23 + 88) = v26 | 5;
      LOBYTE(v26) = v26 & 0xFA | 4;
LABEL_20:
      if ( (v26 & 4) != 0 )
      {
        v30 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v30 )
        {
          v49 = *(_QWORD *)v30;
          v50 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( v30[2] != v50 )
          {
            v30[2] = v50;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 144LL))(v49, v23);
            goto LABEL_47;
          }
        }
      }
LABEL_22:
      v24 = *(_QWORD *)(a2 + 120);
LABEL_23:
      v8 = v24;
      goto LABEL_2;
    }
LABEL_4:
    sub_639C80(&v85, a2, *(unsigned int *)(a2 + 24), a1->m128i_i64[0]);
    return sub_619180(
             (__int64)a1,
             a2,
             v9,
             v10,
             v11,
             v12,
             (__int128)_mm_load_si128(&v85),
             (__int128)_mm_load_si128(&v86));
  }
LABEL_2:
  if ( v8 <= 7 || a2 != *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL) )
    goto LABEL_4;
  v14 = *(_QWORD *)(a2 + 112);
  if ( v14 )
  {
    v15 = (__int64 *)(v14 + 16);
    v16 = 8LL * *(unsigned int *)(v14 + 8);
    v17 = v14 + v16 + 16;
    if ( v16 )
    {
      do
      {
        v18 = *v15;
        sub_639160(&v91, *v15, a1->m128i_i64[0], *(__int64 *)((char *)a1[5].m128i_i64 + 4), 1, a6);
        if ( (unsigned __int8)sub_619180(
                                (__int64)a1,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                (__int128)_mm_load_si128(&v91),
                                (__int128)_mm_load_si128(v92)) )
          return 1;
        ++v15;
      }
      while ( (__int64 *)v17 != v15 );
    }
  }
  if ( sub_7BACE0(a2) )
  {
    v31 = a1->m128i_i64[0];
    v32 = sub_7BA050(a2);
    v33 = sub_7BACE0(a2);
    sub_639BE0(&v87, v33, v32, v31);
    if ( (unsigned __int8)sub_619180(
                            (__int64)a1,
                            v33,
                            v34,
                            v35,
                            v36,
                            v37,
                            (__int128)_mm_load_si128(&v87),
                            (__int128)_mm_load_si128(&v88)) )
      return 1;
  }
  v38 = *(_QWORD *)(a2 + 120);
  if ( v38 )
  {
    if ( v38 <= 7 )
      return sub_618260(a1, a2);
    goto LABEL_28;
  }
  v51 = *(_QWORD *)(a2 + 96);
  v62 = *(_QWORD *)(v51 + 88);
  v63 = v62 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v62 & 1) == 0 )
  {
    if ( v63 <= 3 )
      goto LABEL_88;
    if ( (v62 & 2) == 0 )
      goto LABEL_89;
    v64 = (_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFCLL);
    v65 = v64[2275];
    if ( !v65 )
    {
      *(_QWORD *)(v51 + 88) = v51 & 0xFFFFFFFFFFFFFFFALL | 1;
      v38 = *(_QWORD *)(a2 + 120);
LABEL_86:
      if ( v38 > 7 )
      {
LABEL_28:
        if ( (*(_BYTE *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
        {
          sub_7B7DB0(a2);
          v38 = *(_QWORD *)(a2 + 120);
          v39 = *(__int64 **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          if ( !v39 )
          {
LABEL_32:
            if ( v38 )
            {
              if ( v38 <= 7 )
                return sub_618260(a1, a2);
              goto LABEL_34;
            }
            goto LABEL_88;
          }
        }
        else
        {
          v39 = *(__int64 **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          if ( !v39 )
            goto LABEL_34;
        }
        if ( !(unsigned __int8)sub_61B330(a1->m128i_i64, *v39, (__int64)(v39 + 1)) )
        {
          v38 = *(_QWORD *)(a2 + 120);
          goto LABEL_32;
        }
        return 1;
      }
      if ( v38 )
        return sub_618260(a1, a2);
LABEL_88:
      v51 = *(_QWORD *)(a2 + 96);
      goto LABEL_89;
    }
    v66 = v64[274];
    v64[284] += 24LL;
    v63 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v64[275] >= v63 + 24 && v66 )
      v64[274] = v63 + 24;
    else
      v63 = sub_5F8390((__int64)(v64 + 274), 24, 3);
    *(_QWORD *)v63 = v65;
    v62 = v63 | 5;
    *(_DWORD *)(v63 + 8) = 0;
    *(_QWORD *)(v63 + 16) = v51;
    *(_QWORD *)(v51 + 88) = v63 | 5;
    LOBYTE(v63) = v63 & 0xFA | 4;
LABEL_83:
    if ( (v63 & 4) != 0 )
    {
      v67 = (_DWORD *)(v62 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v67 )
      {
        v77 = *(_QWORD *)v67;
        v78 = *(_DWORD *)(*(_QWORD *)v67 + 12LL);
        if ( v67[2] != v78 )
        {
          v67[2] = v78;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v77 + 144LL))(v77, v51);
        }
      }
    }
    v38 = *(_QWORD *)(a2 + 120);
    goto LABEL_86;
  }
  if ( v63 )
    goto LABEL_83;
LABEL_89:
  v68 = *(_QWORD *)(v51 + 88);
  v69 = v68 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v68 & 1) != 0 )
  {
    if ( !v69 )
      goto LABEL_103;
  }
  else
  {
    if ( v69 <= 3 )
    {
      if ( !v69 )
        goto LABEL_103;
      goto LABEL_102;
    }
    if ( (v68 & 2) == 0 )
    {
LABEL_103:
      v40 = nullptr;
      goto LABEL_52;
    }
    v70 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
    v71 = v70[2275];
    if ( !v71 )
    {
      *(_QWORD *)(v51 + 88) = v51 & 0xFFFFFFFFFFFFFFFALL | 1;
      v38 = *(_QWORD *)(a2 + 120);
      goto LABEL_100;
    }
    v72 = v70[274];
    v70[284] += 24LL;
    v69 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v70[275] >= v69 + 24 && v72 )
      v70[274] = v69 + 24;
    else
      v69 = sub_5F8390((__int64)(v70 + 274), 24, 3);
    *(_QWORD *)v69 = v71;
    v68 = v69 | 5;
    *(_DWORD *)(v69 + 8) = 0;
    *(_QWORD *)(v69 + 16) = v51;
    *(_QWORD *)(v51 + 88) = v69 | 5;
    LOBYTE(v69) = v69 & 0xFA | 4;
  }
  if ( (v69 & 4) != 0 )
  {
    v73 = (_DWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v73 )
    {
      v81 = *(_QWORD *)v73;
      v82 = *(_DWORD *)(*(_QWORD *)v73 + 12LL);
      if ( v73[2] != v82 )
      {
        v73[2] = v82;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v81 + 144LL))(v81, v51);
      }
    }
  }
  v38 = *(_QWORD *)(a2 + 120);
LABEL_100:
  if ( v38 <= 7 )
  {
    if ( v38 )
      return sub_618260(a1, a2);
LABEL_102:
    v51 = *(_QWORD *)(a2 + 96);
    goto LABEL_103;
  }
LABEL_34:
  if ( (*(_BYTE *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v40 = *(unsigned int **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 32);
    goto LABEL_36;
  }
  sub_7B7DB0(a2);
  v38 = *(_QWORD *)(a2 + 120);
  v40 = *(unsigned int **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 32);
  if ( v38 )
  {
    if ( v38 <= 7 )
      return sub_618260(a1, a2);
    goto LABEL_36;
  }
  v51 = *(_QWORD *)(a2 + 96);
LABEL_52:
  v52 = *(_QWORD *)(v51 + 88);
  v53 = v52 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v52 & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_66;
  }
  else
  {
    if ( v53 <= 3 )
    {
      if ( !v53 )
        goto LABEL_66;
      goto LABEL_65;
    }
    if ( (v52 & 2) == 0 )
    {
LABEL_66:
      v41 = nullptr;
      goto LABEL_67;
    }
    v54 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
    v55 = v54[2275];
    if ( !v55 )
    {
      *(_QWORD *)(v51 + 88) = v51 & 0xFFFFFFFFFFFFFFFALL | 1;
      v38 = *(_QWORD *)(a2 + 120);
      goto LABEL_63;
    }
    v56 = v54[274];
    v54[284] += 24LL;
    v53 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v54[275] >= v53 + 24 && v56 )
      v54[274] = v53 + 24;
    else
      v53 = sub_5F8390((__int64)(v54 + 274), 24, 3);
    *(_QWORD *)v53 = v55;
    v52 = v53 | 5;
    *(_DWORD *)(v53 + 8) = 0;
    *(_QWORD *)(v53 + 16) = v51;
    *(_QWORD *)(v51 + 88) = v53 | 5;
    LOBYTE(v53) = v53 & 0xFA | 4;
  }
  if ( (v53 & 4) != 0 )
  {
    v57 = (_DWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v57 )
    {
      v83 = *(_QWORD *)v57;
      v84 = *(_DWORD *)(*(_QWORD *)v57 + 12LL);
      if ( v57[2] != v84 )
      {
        v57[2] = v84;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 144LL))(v83, v51);
      }
    }
  }
  v38 = *(_QWORD *)(a2 + 120);
LABEL_63:
  if ( v38 <= 7 )
  {
    if ( v38 )
      return sub_618260(a1, a2);
LABEL_65:
    v51 = *(_QWORD *)(a2 + 96);
    goto LABEL_66;
  }
LABEL_36:
  if ( (*(_BYTE *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v41 = *(__int64 **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v42 = v38 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_38:
    v43 = *(_QWORD *)(v42 + 16) + 8LL * *(unsigned int *)(v42 + 24);
    goto LABEL_39;
  }
  sub_7B7DB0(a2);
  v38 = *(_QWORD *)(a2 + 120);
  v61 = v38;
  v41 = *(__int64 **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  if ( !v38 )
  {
    v51 = *(_QWORD *)(a2 + 96);
LABEL_67:
    v58 = *(_QWORD *)(v51 + 88);
    v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v58 & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_121;
    }
    else
    {
      if ( v59 <= 3 )
        goto LABEL_121;
      if ( (v58 & 2) == 0 )
      {
        v61 = 0;
        goto LABEL_72;
      }
      v74 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
      v75 = v74[2275];
      if ( !v75 )
      {
        *(_QWORD *)(v51 + 88) = v51 & 0xFFFFFFFFFFFFFFFALL | 1;
        v38 = *(_QWORD *)(a2 + 120);
        goto LABEL_121;
      }
      v76 = v74[274];
      v74[284] += 24LL;
      v59 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v74[275] >= v59 + 24 && v76 )
        v74[274] = v59 + 24;
      else
        v59 = sub_5F8390((__int64)(v74 + 274), 24, 3);
      *(_QWORD *)v59 = v75;
      *(_DWORD *)(v59 + 8) = 0;
      v58 = v59 | 5;
      *(_QWORD *)(v59 + 16) = v51;
      *(_QWORD *)(v51 + 88) = v59 | 5;
      LOBYTE(v59) = v59 & 0xFA | 4;
    }
    if ( (v59 & 4) != 0 )
    {
      v60 = (_DWORD *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v60 )
      {
        v79 = *(_QWORD *)v60;
        v80 = *(_DWORD *)(*(_QWORD *)v60 + 12LL);
        if ( v60[2] != v80 )
        {
          v60[2] = v80;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v79 + 144LL))(v79, v51);
        }
      }
      v61 = *(_QWORD *)(a2 + 120);
      goto LABEL_72;
    }
    v38 = *(_QWORD *)(a2 + 120);
LABEL_121:
    v61 = v38;
  }
LABEL_72:
  v43 = 0;
  if ( v61 > 7 )
  {
    v42 = v61 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v42 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a2);
      v42 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    goto LABEL_38;
  }
LABEL_39:
  if ( (__int64 *)v43 != v41 )
  {
    while ( 1 )
    {
      v44 = *v41;
      sub_639C30(&v89, *v41, *v40, a1->m128i_i64[0]);
      if ( (unsigned __int8)sub_619180(
                              (__int64)a1,
                              v44,
                              v45,
                              v46,
                              v47,
                              v48,
                              (__int128)_mm_load_si128(&v89),
                              (__int128)_mm_load_si128(&v90)) )
        break;
      ++v41;
      ++v40;
      if ( v41 == (__int64 *)v43 )
        return sub_618260(a1, a2);
    }
    return 1;
  }
  return sub_618260(a1, a2);
}

