__int64 __fastcall sub_3D4400(__int64 *a1, __int64 *a2, __int64 a3, char *a4, void *a5, const __m128i *a6)
{
  char *v7; // rbp
  char fixup; // r14
  __int64 v11; // rax
  int v12; // esi
  void (__fastcall *v13)(__int64 *, const __m128i *, __int64); // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r15d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v24; // eax
  int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int8 (__fastcall *v29)(_QWORD, __int64 *, char *); // rcx
  char *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  char v34; // dl
  __int64 v35; // rax
  int v36; // [rsp+0h] [rbp-1F8h]
  int v37; // [rsp+0h] [rbp-1F8h]
  void *v39; // [rsp+8h] [rbp-1F0h]
  unsigned int v40; // [rsp+8h] [rbp-1F0h]
  void *v41; // [rsp+8h] [rbp-1F0h]
  __int64 v42; // [rsp+10h] [rbp-1E8h]
  __int64 v43; // [rsp+10h] [rbp-1E8h]
  __int64 v44; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-1E8h]
  int v46; // [rsp+18h] [rbp-1E0h]
  int v47; // [rsp+20h] [rbp-1D8h]
  int v48[2]; // [rsp+28h] [rbp-1D0h]
  int v49; // [rsp+28h] [rbp-1D0h]
  unsigned __int64 v50; // [rsp+28h] [rbp-1D0h]
  int v51; // [rsp+30h] [rbp-1C8h]
  _QWORD *v52; // [rsp+30h] [rbp-1C8h]
  const __m128i *v53; // [rsp+38h] [rbp-1C0h]
  int v54; // [rsp+40h] [rbp-1B8h]
  int v55; // [rsp+44h] [rbp-1B4h]
  int v56[2]; // [rsp+48h] [rbp-1B0h]
  int v57; // [rsp+50h] [rbp-1A8h]
  void *ptr; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-198h] BYREF
  int v60[2]; // [rsp+68h] [rbp-190h]
  __int64 *v61; // [rsp+70h] [rbp-188h] BYREF
  char *v62; // [rsp+78h] [rbp-180h]
  __int64 v63[2]; // [rsp+80h] [rbp-178h] BYREF
  int v64[4]; // [rsp+90h] [rbp-168h] BYREF
  int v65[6]; // [rsp+A0h] [rbp-158h] BYREF
  int v66; // [rsp+B8h] [rbp-140h]
  int v67; // [rsp+C0h] [rbp-138h]
  int v68; // [rsp+C8h] [rbp-130h]
  int v69; // [rsp+D0h] [rbp-128h]
  int v70; // [rsp+D8h] [rbp-120h]
  int v71; // [rsp+E0h] [rbp-118h]
  int v72; // [rsp+E8h] [rbp-110h]
  int v73; // [rsp+F0h] [rbp-108h]
  int v74; // [rsp+F8h] [rbp-100h]
  int v75; // [rsp+100h] [rbp-F8h]
  int v76; // [rsp+108h] [rbp-F0h]
  int v77; // [rsp+110h] [rbp-E8h]
  void *v78; // [rsp+118h] [rbp-E0h]
  __int64 v79; // [rsp+120h] [rbp-D8h]
  int v80; // [rsp+128h] [rbp-D0h]
  int v81; // [rsp+130h] [rbp-C8h]
  int v82; // [rsp+138h] [rbp-C0h]
  __int64 v83; // [rsp+140h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+1B8h] [rbp-40h]

  v7 = a4;
  v84 = __readfsqword(0x28u);
  *(_QWORD *)v60 = &a4[(_QWORD)a2];
  v59 = (__int64)a2;
  if ( (unsigned __int8)rangeset_t_has_common(a1 + 160, &v59, 0) )
    return 0;
  fixup = 0;
  if ( (a3 & 0x200) != 0 )
    return 0;
  v11 = a3;
  BYTE1(v11) = BYTE1(a3) | 4;
  v42 = v11;
  *(_QWORD *)v48 = (unsigned int)a3 & 0xF0000000;
  if ( *(_QWORD *)v48 == 3489660928LL )
  {
    *(_OWORD *)((char *)v65 + 2) = -1;
    v27 = (unsigned int)(__int16)a5;
    v65[0] = (int)a5;
    v28 = sub_3E8BE0(a1, v27);
    if ( v28 )
    {
      v29 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, char *))(v28 + 64);
      if ( v29 && !v29(*(_QWORD *)(v28 + 8), a2, v7) )
        return 0;
    }
    else if ( (get_merge_state(a1, v27) & 2) == 0 )
    {
      return 0;
    }
    goto LABEL_6;
  }
  if ( *(_QWORD *)v48 != 1342177280 )
  {
    *(_QWORD *)v65 = a5;
LABEL_6:
    *(_QWORD *)v56 = v7;
    goto LABEL_7;
  }
  v24 = (int)a5;
  if ( (_DWORD)a5 == -1 )
    v24 = sub_631AD0(*a1, 52);
  v25 = (unsigned __int8)v24;
  v65[0] = v24;
  if ( (unsigned __int8)v24 > 0xAu )
  {
    v30 = v7 - 4;
    if ( (unsigned int)(v25 - 12) >= 3 )
      v30 = v7;
    *(_QWORD *)v56 = v30;
  }
  else
  {
    *(_QWORD *)v56 = v7 - 2;
    if ( (v24 & 0xF8) == 0 )
      *(_QWORD *)v56 = &v7[-((unsigned int)(unsigned __int8)v24 - 4 < 3)];
  }
LABEL_7:
  ptr = v7;
  v12 = sub_3CAAA0(a1, a2, v42, v65, (__int64 *)&ptr);
  if ( v12 == -1 || !ptr )
    return 0;
  if ( !v12 )
  {
    ptr = (void *)sub_3C9650(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v42, v65);
    if ( ptr && !(*(_QWORD *)v56 % (unsigned __int64)ptr) )
      goto LABEL_14;
    return 0;
  }
  if ( !v7 )
    v7 = (char *)ptr;
  if ( *(_QWORD *)v48 == 1610612736 )
    ptr = v7;
LABEL_14:
  v13 = (void (__fastcall *)(__int64 *, const __m128i *, __int64))a6[1].m128i_i64[0];
  memset(v64, 0, sizeof(v64));
  *(_OWORD *)v63 = 0;
  if ( v13 )
  {
    v13(v63, a6, 2);
    *(__m128i *)v64 = _mm_loadu_si128(a6 + 1);
  }
  v18 = sub_3D4AC0((int)a1);
  if ( *(_QWORD *)v64 )
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v64)(v63, v63, 3);
  if ( !(_BYTE)v18 )
    return 0;
  rangeset_t_add(
    (_DWORD)a1 + 1280,
    (int)&v59,
    v14,
    v15,
    v16,
    v17,
    v36,
    a5,
    v42,
    (_DWORD)a1 + 1280,
    (int)&v59,
    v48[0],
    a3 & 0x200);
  sub_39ADA0(0x32u, a2, v43, v39, v7);
  rangeset_t_sub(
    v46,
    v47,
    v19,
    v20,
    v21,
    v22,
    v37,
    (int)v39,
    v43,
    v46,
    v47,
    v49,
    v51,
    (int)v65,
    v54,
    (int)v63,
    v57,
    (int)ptr,
    v59,
    v60[0],
    (int)v61,
    (int)v62,
    v63[0],
    v63[1],
    v64[0],
    v64[2],
    v65[0],
    v65[2],
    v65[4],
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  sub_3D0910(a1, (char *)a2, v44, v53);
  if ( v55 != 1 )
  {
    if ( v50 != 1342177280 )
    {
      v52 = ptr;
      goto LABEL_22;
    }
LABEL_38:
    v26 = (unsigned __int64)v7;
    if ( (*(_BYTE *)(a1[4] + 328) & 4) == 0 )
    {
      v32 = a1[2];
      v33 = *(_DWORD *)(v32 + 20);
      if ( *(_DWORD *)(v32 + 16) != v33 )
      {
        v34 = sub_510230(a1, a2);
        v35 = a1[2];
        if ( v34 == 2 )
          v33 = *(_DWORD *)(v35 + 16);
        else
          v33 = *(_DWORD *)(v35 + 20);
      }
      v26 = (unsigned __int64)&v7[v33 / 8 - 1] / (v33 / 8);
    }
    sub_3D3420((__int64)a1, (unsigned __int64)a2, v26, nullptr);
    sub_359AE0(*a1, (unsigned __int64)a2, (unsigned __int64)&v7[(_QWORD)a2]);
    return v18;
  }
  if ( v50 == 1342177280 )
    goto LABEL_38;
LABEL_22:
  sub_3D3420((__int64)a1, (unsigned __int64)a2, (unsigned __int64)v7, v52);
  v45 = (unsigned __int64)&v7[(_QWORD)a2];
  sub_359AE0(*a1, (unsigned __int64)a2, (unsigned __int64)&v7[(_QWORD)a2]);
  if ( v50 == 1610612736 )
  {
    if ( (unsigned __int8)sub_631C90(*a1, 2, 2) || (*(_BYTE *)(a1[4] + 328) & 0x10) != 0 )
      set_abits(a2, &stru_80000);
    sub_3A61A0(a1, (unsigned __int64)a2, (unsigned __int64)a2 + 1, 0x28u);
    v61 = a2;
    v62 = &v7[(_QWORD)a2];
    sub_410BF0(a1, &v61, sub_3BEAF0, a1);
  }
  else
  {
    if ( v50 <= 0x60000000 )
    {
      if ( v50 != 0x20000000 )
      {
        if ( v50 > 0x20000000 )
        {
          if ( v50 != 805306368 )
            return v18;
        }
        else if ( (a3 & 0xE0000000) != 0 )
        {
          return v18;
        }
      }
    }
    else
    {
      if ( v50 == 3489660928 )
      {
        sub_3D5960(a1, a2, 0, HIWORD(v40));
        sub_3A61A0(a1, (unsigned __int64)a2, (unsigned __int64)a2 + 1, 0x28u);
        return v18;
      }
      if ( v50 <= 0xD0000000 )
      {
        if ( v50 != 1879048192 )
          return v18;
      }
      else if ( (~(_DWORD)a3 & 0xE0000000) != 0 )
      {
        return v18;
      }
    }
    if ( a2 )
    {
      v31 = sub_41BA40(a1, (char *)a2 - 1);
      if ( v31 < v45 )
        goto LABEL_56;
LABEL_59:
      if ( (sub_631AD0(*a1, 10) & 0x400000) != 0 && (a3 & 0xF00000) == 0 )
        sub_3CAFD0(a1, a2, (unsigned __int64)ptr, (__int64)v7);
      return v18;
    }
    fixup = get_fixup(0, 0);
    if ( fixup )
    {
      v31 = 0;
      goto LABEL_56;
    }
    v31 = sub_41BA40(a1, 0);
    if ( v31 >= (unsigned __int64)v7 )
      goto LABEL_59;
LABEL_56:
    while ( 1 )
    {
      v41 = (void *)v31;
      if ( (unsigned __int8)sub_41D110(a1, a2, v31, 0, 0) )
        break;
      v31 = sub_41BA40(a1, v41);
      if ( v31 >= v45 )
      {
        if ( fixup )
          return v18;
        goto LABEL_59;
      }
    }
  }
  return v18;
}
