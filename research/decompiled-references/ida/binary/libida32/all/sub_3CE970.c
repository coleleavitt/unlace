__int64 __fastcall sub_3CE970(__int64 *a1, unsigned int a2, void *a3, unsigned int a4, int a5, const __m128i *a6)
{
  unsigned int v7; // ebp
  char has_common; // al
  char fixup; // r14
  void *v12; // rax
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
  int v23; // ecx
  int v25; // eax
  int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int8 (__fastcall *v30)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  char v36; // dl
  __int64 v37; // rax
  int v38; // [rsp+0h] [rbp-148h]
  int v39; // [rsp+0h] [rbp-148h]
  void *v40; // [rsp+8h] [rbp-140h]
  void *v41; // [rsp+8h] [rbp-140h]
  void *v42; // [rsp+8h] [rbp-140h]
  unsigned int v43; // [rsp+8h] [rbp-140h]
  int v44; // [rsp+10h] [rbp-138h]
  int v45; // [rsp+18h] [rbp-130h]
  int v46[2]; // [rsp+20h] [rbp-128h]
  int v47; // [rsp+20h] [rbp-128h]
  unsigned __int64 v48; // [rsp+20h] [rbp-128h]
  int v49; // [rsp+28h] [rbp-120h]
  const __m128i *v50; // [rsp+28h] [rbp-120h]
  __int64 v51; // [rsp+30h] [rbp-118h]
  unsigned int v52; // [rsp+30h] [rbp-118h]
  unsigned int v53; // [rsp+30h] [rbp-118h]
  unsigned int v54; // [rsp+30h] [rbp-118h]
  int v55; // [rsp+34h] [rbp-114h]
  unsigned int v56; // [rsp+38h] [rbp-110h]
  int v57; // [rsp+40h] [rbp-108h]
  int v58; // [rsp+48h] [rbp-100h]
  unsigned int v59; // [rsp+4Ch] [rbp-FCh] BYREF
  int v60[2]; // [rsp+50h] [rbp-F8h] BYREF
  int v61[2]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v62[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v63[4]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v64[20]; // [rsp+80h] [rbp-C8h] BYREF
  void *v65; // [rsp+98h] [rbp-B0h]
  __int64 v66; // [rsp+A0h] [rbp-A8h]
  int v67; // [rsp+A8h] [rbp-A0h]
  int v68; // [rsp+B0h] [rbp-98h]
  int v69; // [rsp+B8h] [rbp-90h]
  __int64 v70; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v71; // [rsp+108h] [rbp-40h]

  v7 = a4;
  LODWORD(v51) = a5;
  v71 = __readfsqword(0x28u);
  v60[1] = a2 + a4;
  v60[0] = a2;
  has_common = rangeset_t_has_common(a1 + 156, v60, 0);
  if ( has_common || ((unsigned __int16)a3 & 0x200) != 0 )
    return 0;
  fixup = has_common;
  v12 = a3;
  BYTE1(v12) = BYTE1(a3) | 4;
  v40 = v12;
  *(_QWORD *)v46 = (unsigned int)a3 & 0xF0000000;
  if ( *(_QWORD *)v46 == 3489660928LL )
  {
    *(_OWORD *)&v64[2] = -1;
    v28 = (unsigned int)(__int16)v51;
    *(_DWORD *)v64 = v51;
    v29 = sub_3E2960(a1, v28);
    if ( v29 )
    {
      v30 = *(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v29 + 64);
      if ( v30 && !v30(*(_QWORD *)(v29 + 8), a2, v7) )
        return 0;
    }
    else if ( (get_merge_state(a1, v28) & 2) == 0 )
    {
      return 0;
    }
    goto LABEL_6;
  }
  if ( *(_QWORD *)v46 != 1342177280 )
  {
    *(_DWORD *)v64 = v51;
LABEL_6:
    v56 = v7;
    goto LABEL_7;
  }
  v25 = v51;
  if ( (_DWORD)v51 == -1 )
    v25 = sub_614FB0(*a1, 52);
  v26 = (unsigned __int8)v25;
  *(_DWORD *)v64 = v25;
  if ( (unsigned __int8)v25 > 0xAu )
  {
    v31 = v7 - 4;
    if ( (unsigned int)(v26 - 12) >= 3 )
      v31 = v7;
    v56 = v31;
  }
  else
  {
    v56 = v7 - 2;
    if ( (v25 & 0xF8) == 0 )
      v56 = (__PAIR64__(v7, (unsigned int)(unsigned __int8)v25 - 4) - 3) >> 32;
  }
LABEL_7:
  v59 = v7;
  HIDWORD(v51) = sub_3C57B0(a1, a2, (__int64)v40, v64, (int *)&v59);
  if ( HIDWORD(v51) == -1 || !v59 )
    return 0;
  if ( !HIDWORD(v51) )
  {
    v59 = sub_3C4370(a1, 0xFFFFFFFF, (__int64)v40, v64);
    if ( v59 && !(v56 % v59) )
      goto LABEL_14;
    return 0;
  }
  if ( !v7 )
    v7 = v59;
  if ( *(_QWORD *)v46 == 1610612736 )
    v59 = v7;
LABEL_14:
  v13 = (void (__fastcall *)(__int64 *, const __m128i *, __int64))a6[1].m128i_i64[0];
  memset(v63, 0, sizeof(v63));
  *(_OWORD *)v62 = 0;
  if ( v13 )
  {
    v13(v62, a6, 2);
    *(__m128i *)v63 = _mm_loadu_si128(a6 + 1);
  }
  v18 = sub_3CEFB0((int)a1);
  if ( *(_QWORD *)v63 )
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v63)(v62, v62, 3);
  if ( !(_BYTE)v18 )
    return 0;
  rangeset_t_add(
    (_DWORD)a1 + 1248,
    (int)v60,
    v14,
    v15,
    v16,
    v17,
    v38,
    v40,
    (__int64)(a1 + 156),
    (int)v60,
    v46[0],
    (int)v64,
    v51);
  sub_396090(0x32u, a2, v41, v52, v7);
  rangeset_t_sub(
    v44,
    v45,
    v19,
    v20,
    v21,
    v22,
    v39,
    (int)v41,
    v44,
    v45,
    v47,
    v49,
    v52,
    (int)v62,
    v57,
    v58,
    v60[0],
    v61[0],
    v62[0],
    v62[1],
    v63[0],
    v63[2],
    *(int *)v64,
    *(int *)&v64[8],
    *(int *)&v64[16],
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  sub_3CAFA0(a1, a2, (__int64)v42, v50);
  if ( v55 != 1 )
  {
    v23 = v59;
    if ( v48 != 1342177280 )
      goto LABEL_21;
LABEL_41:
    v27 = v7;
    if ( (*(_BYTE *)(a1[4] + 328) & 4) == 0 )
    {
      v34 = a1[2];
      v35 = *(_DWORD *)(v34 + 20);
      if ( *(_DWORD *)(v34 + 16) != v35 )
      {
        v36 = sub_4F8910(a1, a2);
        v37 = a1[2];
        if ( v36 == 2 )
          v35 = *(_DWORD *)(v37 + 16);
        else
          v35 = *(_DWORD *)(v37 + 20);
      }
      v27 = (v7 + v35 / 8 - 1) / (v35 / 8);
    }
    sub_3CD9C0((__int64)a1, a2, v27, 0);
    sub_356720(*a1, a2, a2 + v7);
    return v18;
  }
  v23 = 0;
  if ( v48 == 1342177280 )
    goto LABEL_41;
LABEL_21:
  sub_3CD9C0((__int64)a1, a2, v7, v23);
  v43 = a2 + v7;
  sub_356720(*a1, a2, a2 + v7);
  if ( v48 == 1610612736 )
  {
    if ( (unsigned __int8)sub_615160(*a1, 2, 2) || (*(_BYTE *)(a1[4] + 328) & 0x10) != 0 )
      set_abits(a2, 0x80000);
    sub_3A1A90(a1, a2, a2 + 1, 0x28u);
    v61[0] = a2;
    v61[1] = a2 + v7;
    sub_3FD940(a1, v61, sub_3B9C70, a1);
  }
  else
  {
    if ( v48 <= 0x60000000 )
    {
      if ( v48 != 0x20000000 )
      {
        if ( v48 > 0x20000000 )
        {
          if ( v48 != 805306368 )
            return v18;
        }
        else if ( ((unsigned int)a3 & 0xE0000000) != 0 )
        {
          return v18;
        }
      }
    }
    else
    {
      if ( v48 == 3489660928 )
      {
        sub_3CFDE0(a1, a2, 0, HIWORD(v53));
        sub_3A1A90(a1, a2, a2 + 1, 0x28u);
        return v18;
      }
      if ( v48 <= 0xD0000000 )
      {
        if ( v48 != 1879048192 )
          return v18;
      }
      else if ( (~(_DWORD)a3 & 0xE0000000) != 0 )
      {
        return v18;
      }
    }
    if ( a2 )
    {
      v32 = (unsigned int)sub_4087C0(a1, a2 - 1);
      if ( (unsigned int)v32 < v43 )
        goto LABEL_55;
LABEL_58:
      if ( (sub_614FB0(*a1, 10) & 0x400000) != 0 && ((unsigned int)a3 & 0xF00000) == 0 )
        sub_3C5CB0(a1, a2, v59, v7);
      return v18;
    }
    fixup = get_fixup(0, 0);
    if ( fixup )
    {
      v32 = 0;
      goto LABEL_55;
    }
    v33 = sub_4087C0(a1, 0);
    v32 = v33;
    if ( v33 >= v7 )
      goto LABEL_58;
LABEL_55:
    while ( 1 )
    {
      v54 = v32;
      if ( (unsigned __int8)sub_409D00(a1, a2, v32, 0, 0) )
        break;
      v32 = (unsigned int)sub_4087C0(a1, v54);
      if ( (unsigned int)v32 >= v43 )
      {
        if ( fixup )
          return v18;
        goto LABEL_58;
      }
    }
  }
  return v18;
}

