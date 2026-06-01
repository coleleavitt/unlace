__int64 __fastcall sub_7F4CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r13
  unsigned int v12; // r13d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rbx
  __int32 *v38; // r13
  bool v39; // r14
  unsigned __int64 v40; // rcx
  __int64 *v41; // r8
  bool v42; // dl
  __int64 v43; // rdx
  __int32 v44; // r15d
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  const __m128i *v48; // r15
  __int64 v49; // rdx
  __int64 *v50; // r8
  __int64 v51; // rsi
  __m128i *v52; // rdx
  _DWORD *v53; // rdx
  __int64 v54; // rdi
  int v55; // eax
  char *v56; // r15
  __int64 v57; // [rsp+38h] [rbp-B0h]
  __int64 v58; // [rsp+40h] [rbp-A8h]
  __int64 *v59; // [rsp+40h] [rbp-A8h]
  __int64 *v60; // [rsp+48h] [rbp-A0h]
  __m128i v61; // [rsp+50h] [rbp-98h] BYREF
  __m128i v62; // [rsp+60h] [rbp-88h] BYREF
  __int64 v63; // [rsp+70h] [rbp-78h]
  __int64 v64[2]; // [rsp+80h] [rbp-68h] BYREF
  __int32 v65; // [rsp+90h] [rbp-58h]

  v8 = *(_QWORD *)(a2 + 112);
  if ( v8 )
  {
    v9 = (__int64 *)(v8 + 16);
    v10 = 8LL * *(unsigned int *)(v8 + 8);
    v11 = v8 + v10 + 16;
    if ( v10 )
    {
      while ( (unsigned __int8)sub_7F4BB0((__int64 *)a1, *v9) )
      {
        if ( (__int64 *)v11 == ++v9 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  v14 = *(_QWORD *)(a2 + 120);
  v15 = v14;
  if ( v14 )
  {
    if ( v14 <= 7 )
      goto LABEL_17;
    goto LABEL_10;
  }
  v23 = *(_QWORD *)(a2 + 96);
  v24 = *(_QWORD *)(v23 + 88);
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v24 & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_33;
    goto LABEL_28;
  }
  if ( v25 <= 3 )
  {
LABEL_33:
    v15 = v14;
    if ( v14 <= 7 )
    {
      if ( v14 )
        goto LABEL_17;
LABEL_35:
      v23 = *(_QWORD *)(a2 + 96);
      goto LABEL_36;
    }
LABEL_10:
    v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v16 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a2);
      v14 = *(_QWORD *)(a2 + 120);
      v15 = v14;
      v17 = *(__int64 **)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v17 )
        goto LABEL_14;
    }
    else
    {
      v17 = *(__int64 **)(v16 + 8);
      if ( !v17 )
        goto LABEL_16;
    }
    if ( !(unsigned __int8)sub_7EEDC0(a1, *v17, (__int64)(v17 + 1)) )
      return 0;
    v14 = *(_QWORD *)(a2 + 120);
    v15 = v14;
LABEL_14:
    if ( v14 )
      goto LABEL_15;
    goto LABEL_35;
  }
  if ( (v24 & 2) != 0 )
  {
    v34 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    v35 = v34[2275];
    if ( !v35 )
    {
      *(_QWORD *)(v23 + 88) = v23 & 0xFFFFFFFFFFFFFFFALL | 1;
LABEL_32:
      v14 = *(_QWORD *)(a2 + 120);
      goto LABEL_33;
    }
    v36 = v34[274];
    v34[284] += 24LL;
    v25 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v34[275] >= v25 + 24 && v36 )
      v34[274] = v25 + 24;
    else
      v25 = sub_7DAE50((__int64)(v34 + 274), 24, 3);
    *(_QWORD *)v25 = v35;
    *(_DWORD *)(v25 + 8) = 0;
    v24 = v25 | 5;
    *(_QWORD *)(v25 + 16) = v23;
    *(_QWORD *)(v23 + 88) = v25 | 5;
    LOBYTE(v25) = v25 & 0xFA | 4;
LABEL_28:
    if ( (v25 & 4) != 0 )
    {
      v26 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v26 )
      {
        v27 = *(_QWORD *)v26;
        v28 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
        if ( v26[2] != v28 )
        {
          v26[2] = v28;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v23);
        }
      }
    }
    goto LABEL_32;
  }
LABEL_36:
  v29 = *(_QWORD *)(v23 + 88);
  v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v29 & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_17;
LABEL_68:
    if ( (v30 & 4) != 0 )
    {
      v53 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v53 )
      {
        v54 = *(_QWORD *)v53;
        v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
        if ( v53[2] != v55 )
        {
          v53[2] = v55;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 144LL))(v54, v23);
LABEL_72:
          v15 = *(_QWORD *)(a2 + 120);
          goto LABEL_15;
        }
      }
    }
    goto LABEL_74;
  }
  if ( v30 <= 3 )
  {
    if ( !v30 )
      goto LABEL_17;
    goto LABEL_75;
  }
  if ( (v29 & 2) == 0 )
    goto LABEL_17;
  v31 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
  v32 = v31[2275];
  if ( v32 )
  {
    v33 = v31[274];
    v31[284] += 24LL;
    v30 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v31[275] >= v30 + 24 && v33 )
      v31[274] = v30 + 24;
    else
      v30 = sub_7DAE50((__int64)(v31 + 274), 24, 3);
    *(_QWORD *)v30 = v32;
    *(_DWORD *)(v30 + 8) = 0;
    v29 = v30 | 5;
    *(_QWORD *)(v30 + 16) = v23;
    *(_QWORD *)(v23 + 88) = v30 | 5;
    LOBYTE(v30) = v30 & 0xFA | 4;
    goto LABEL_68;
  }
  *(_QWORD *)(v23 + 88) = v23 & 0xFFFFFFFFFFFFFFFALL | 1;
  if ( (v23 & 0xFFFFFFFFFFFFFFFALL) == 0 )
    goto LABEL_72;
LABEL_74:
  v14 = *(_QWORD *)(a2 + 120);
LABEL_75:
  v15 = v14;
LABEL_15:
  if ( v15 <= 7 )
    goto LABEL_17;
LABEL_16:
  v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL) )
    goto LABEL_17;
  if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a2);
    v15 = *(_QWORD *)(a2 + 120);
    v37 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 32) + 4LL * *(unsigned int *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    if ( v15 )
    {
      if ( v15 <= 7 )
        goto LABEL_17;
    }
    else
    {
      sub_7DAFB0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v15 = *(_QWORD *)(a2 + 120);
      if ( v15 <= 7 )
      {
        v38 = nullptr;
        if ( v15 )
          goto LABEL_17;
        goto LABEL_78;
      }
    }
  }
  else
  {
    v37 = *(_QWORD *)(v18 + 32) + 4LL * *(unsigned int *)(v18 + 24);
  }
  if ( (*(_BYTE *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v38 = *(__int32 **)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 32);
    v39 = v37 == (_QWORD)v38;
    goto LABEL_57;
  }
  sub_7B7DB0(a2);
  v15 = *(_QWORD *)(a2 + 120);
  v38 = *(__int32 **)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 32);
  if ( v15 )
  {
    v39 = v38 == (__int32 *)v37;
    if ( v15 <= 7 )
      goto LABEL_17;
    goto LABEL_57;
  }
LABEL_78:
  sub_7DAFB0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
  v15 = *(_QWORD *)(a2 + 120);
  v39 = v37 == (_QWORD)v38;
  if ( v15 <= 7 )
  {
    if ( v15 )
      goto LABEL_17;
    v57 = 0;
LABEL_81:
    sub_7DAFB0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
    v15 = *(_QWORD *)(a2 + 120);
    goto LABEL_82;
  }
LABEL_57:
  if ( (*(_BYTE *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v57 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    goto LABEL_59;
  }
  sub_7B7DB0(a2);
  v15 = *(_QWORD *)(a2 + 120);
  v57 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 24);
  if ( !v15 )
    goto LABEL_81;
LABEL_82:
  if ( v15 <= 7 )
  {
    v41 = nullptr;
    v42 = v39 || v57 == 0;
    goto LABEL_62;
  }
LABEL_59:
  v40 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v40 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a2);
    v40 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v41 = *(__int64 **)(v40 + 16);
  v42 = v39 || v57 == (_QWORD)v41;
LABEL_62:
  if ( !v42 )
  {
    do
    {
      v43 = *v41;
      v44 = *v38;
      v60 = v41;
      v61.m128i_i32[0] = 1043;
      v45 = *(_QWORD *)a1;
      v62.m128i_i32[0] = v44;
      v61.m128i_i64[1] = v43;
      v58 = v43;
      sub_7DE380(
        a1,
        v45 + 24,
        v43,
        v63,
        (__int64)v41,
        a6,
        (__int128)_mm_load_si128(&v61),
        (__int128)_mm_load_si128(&v62),
        v63);
      v46 = *(unsigned int *)(a1 + 20);
      v65 = v44;
      LODWORD(v64[0]) = 1043;
      v47 = *(_QWORD *)(a1 + 8);
      v48 = (const __m128i *)v64;
      v64[1] = v58;
      v49 = *(unsigned int *)(a1 + 16);
      v50 = v60;
      v51 = v49 + 1;
      if ( v46 >= v49 + 1 )
        goto LABEL_64;
      if ( (unsigned __int64)v64 < v47 )
      {
        v59 = v60;
      }
      else
      {
        v59 = v60;
        if ( (unsigned __int64)v64 < v47 + 40 * v49 )
        {
          v56 = (char *)v64 - v47;
          sub_25D6060(a1 + 8, a1 + 24, v51, 40);
          v47 = *(_QWORD *)(a1 + 8);
          v49 = *(unsigned int *)(a1 + 16);
          v50 = v60;
          v48 = (const __m128i *)&v56[v47];
          goto LABEL_64;
        }
      }
      sub_25D6060(a1 + 8, a1 + 24, v51, 40);
      v47 = *(_QWORD *)(a1 + 8);
      v49 = *(unsigned int *)(a1 + 16);
      v50 = v59;
LABEL_64:
      ++v38;
      v41 = v50 + 1;
      v52 = (__m128i *)(v47 + 40 * v49);
      *v52 = _mm_loadu_si128(v48);
      v52[1] = _mm_loadu_si128(v48 + 1);
      v52[2].m128i_i64[0] = v48[2].m128i_i64[0];
    }
    while ( v38 != (__int32 *)v37 && v41 != (__int64 *)v57 );
  }
LABEL_17:
  v12 = sub_7E1600((__int64 *)a1, a2 + 48);
  if ( !(_BYTE)v12 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_79A2B0(a2);
    v21 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v19 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v21 != v19 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)a1;
        v64[0] = *v19;
        if ( !(unsigned __int8)sub_7F2380(a1, v64[0], v64[0], v64, (__int64 *)a1, v22) )
          break;
        if ( (__int64 *)v21 == ++v19 )
          return v12;
      }
      return 0;
    }
  }
  return v12;
}

