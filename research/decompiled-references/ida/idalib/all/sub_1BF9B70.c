__int64 __fastcall sub_1BF9B70(
        __m128 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  __int64 *v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r14
  char v16; // al
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r12
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  void (__fastcall **v29)(__int64 *, __int64); // rcx
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int8 (__fastcall **v40)(__int64 *, __int64); // rcx
  __int64 (__fastcall *v41)(__int64, void (__fastcall ****)(_QWORD)); // r9
  unsigned __int64 v42; // rax
  char v43; // cl
  __int64 v44; // r13
  __int64 *v45; // r12
  __int64 *v46; // rbx
  unsigned __int64 v47; // rsi
  _QWORD *v48; // rcx
  unsigned __int8 v49; // dl
  int v50; // eax
  __int64 v51; // rax
  _QWORD *v52; // [rsp+0h] [rbp-1FD8h]
  __int64 v53; // [rsp+0h] [rbp-1FD8h]
  __int64 v54; // [rsp+0h] [rbp-1FD8h]
  __int64 v55; // [rsp+0h] [rbp-1FD8h]
  unsigned __int64 v56; // [rsp+20h] [rbp-1FB8h]
  __int64 *v57; // [rsp+20h] [rbp-1FB8h]
  char v58; // [rsp+2Fh] [rbp-1FA9h]
  __int64 v59; // [rsp+30h] [rbp-1FA8h]
  unsigned int v60; // [rsp+38h] [rbp-1FA0h]
  bool v61; // [rsp+3Ch] [rbp-1F9Ch]
  _QWORD *v62; // [rsp+48h] [rbp-1F90h] BYREF
  __int64 *v63; // [rsp+50h] [rbp-1F88h] BYREF
  __int64 v64; // [rsp+58h] [rbp-1F80h] BYREF
  _QWORD v65[4]; // [rsp+60h] [rbp-1F78h] BYREF
  void *v66; // [rsp+80h] [rbp-1F58h] BYREF
  __int64 v67; // [rsp+88h] [rbp-1F50h]
  _BYTE v68[32]; // [rsp+90h] [rbp-1F48h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-1F28h] BYREF
  _BYTE v70[32]; // [rsp+C0h] [rbp-1F18h] BYREF
  __int64 v71[2]; // [rsp+E0h] [rbp-1EF8h] BYREF
  _QWORD v72[338]; // [rsp+F0h] [rbp-1EE8h] BYREF
  int v73; // [rsp+B80h] [rbp-1458h]
  char v74; // [rsp+B84h] [rbp-1454h]
  _QWORD v75[17]; // [rsp+B88h] [rbp-1450h] BYREF
  int v76; // [rsp+C10h] [rbp-13C8h]
  __int64 v77; // [rsp+C18h] [rbp-13C0h]
  __int64 v78; // [rsp+C20h] [rbp-13B8h]
  _QWORD *v79; // [rsp+C28h] [rbp-13B0h]
  __int64 v80; // [rsp+C30h] [rbp-13A8h]
  _QWORD v81[6]; // [rsp+C38h] [rbp-13A0h] BYREF
  _QWORD v82[2]; // [rsp+C68h] [rbp-1370h] BYREF
  unsigned int v83; // [rsp+C78h] [rbp-1360h]
  int v84; // [rsp+C7Ch] [rbp-135Ch]
  __int64 v85; // [rsp+C80h] [rbp-1358h]
  char v86; // [rsp+C88h] [rbp-1350h]
  int v87; // [rsp+C8Ch] [rbp-134Ch]
  int v88; // [rsp+1F90h] [rbp-48h]

  result = (__int64)a3;
  v62 = a3;
  if ( (*(_DWORD *)a3 & 0x10000) != 0 )
    return result;
  v9 = (__int64 *)a4;
  v10 = a2;
  v11 = *(_QWORD *)(a3[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 13 )
  {
    v11 = *(unsigned __int16 *)(v11 + 18);
    LOWORD(v11) = ((unsigned __int16)v11 >> 3) & 0x1FF;
    if ( (unsigned __int16)v11 > 0x1F1u )
    {
      result = sub_1907C70((__int64)a1, (_QWORD *)result, (__m128i)a7, a8, v11, a4, a5, a6);
      if ( result == 1 )
        return result;
      result &= ~1uLL;
      v62 = (_QWORD *)result;
    }
  }
  v12 = 0;
  v13 = sub_19146F0((__int64)a1, (_QWORD *)result, v11, a4, a5, a6, a7, a8);
  v14 = v13;
  if ( v13 > 1 )
    v12 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))*v9)(v9, v12) )
    return v14;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *((_BYTE *)v9 + 8);
  if ( *(_BYTE *)(v15 + 16) != 48 || (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 8) == 0 )
  {
    if ( !v16 )
    {
      v41 = *(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD)))(*v9 + 8);
      if ( v41 == sub_18BC650 )
        *(double *)a7.m128_u64 = (*(double (__fastcall **)(__int64 *, __int64 *, __m128 *, _QWORD, __int64))(*v9 + 80))(
                                   v71,
                                   v9,
                                   a1,
                                   (unsigned int)a2,
                                   v12);
      else
        ((void (__fastcall *)(__int64 *, __int64 *, __m128 *, _QWORD, __int64))v41)(v71, v9, a1, (unsigned int)a2, v12);
      ptr[0] = (void *)sub_EEC8C0((unsigned __int64)v62, (__int64)v9, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)v71, (__int64 *)ptr);
      sub_15F7200(v71);
    }
    return (__int64)v62;
  }
  v65[1] = v9;
  v65[0] = off_2BC7988;
  v65[2] = v62;
  a2 = (unsigned int)a2;
  if ( v16 )
    v17 = sub_1E63330(a1, (unsigned int)a2, v12, 1, 0);
  else
    v17 = sub_1E63C20(a1, (unsigned int)a2, v12, 1, v65);
  if ( v17 )
    return (__int64)v62;
  v66 = v68;
  ptr[0] = v70;
  v67 = 0x400000000LL;
  ptr[1] = (void *)0x400000000LL;
  v20 = sub_F60F10(v15, (unsigned int)a2, (__int64)v70, (__int64)ptr, v18, v19);
  v21 = sub_B9F870((__int64)v20);
  v52 = v22;
  v61 = (__int64)((__int64)v22 - v21) > 8;
  if ( (_QWORD *)v21 == v22 )
  {
    if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x20) != 0 )
      goto LABEL_59;
    goto LABEL_56;
  }
  v60 = a2;
  v23 = (_QWORD *)v21;
  v56 = 0;
  v58 = 1;
  v59 = v12;
  do
  {
    v25 = sub_16C47B0(*v23 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x47 )
    {
      if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x20) == 0 )
        goto LABEL_25;
      v24 = v25;
      v25 = *(_QWORD *)(v25 + 48);
      v71[0] = sub_AED600(v25, a2, v35, v36);
      v28 = sub_C1BEF0((__int64)v71, a2, v26, v27);
      v29 = (void (__fastcall **)(__int64 *, __int64))*v9;
      v64 = v28;
      a2 = v28;
      (*v29)(v9, v28);
    }
    else
    {
      v24 = 0;
      v71[0] = sub_AED600(v25, a2, v35, v36);
      v39 = sub_C1BEF0((__int64)v71, a2, v37, v38);
      v40 = (unsigned __int8 (__fastcall **)(__int64 *, __int64))*v9;
      v64 = v39;
      a2 = v39;
      if ( !(*v40)(v9, v39) )
        goto LABEL_25;
    }
    v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL);
    if ( v30 == sub_B94CE0 )
      v31 = sub_B709C0(v25);
    else
      v31 = v30(v25);
    if ( (*(_QWORD *)(v31 + 168) & 3LL) == 1 )
    {
      if ( !v24 )
      {
        v71[0] = *v23 & 0xFFFFFFFFFFFFFFFBLL;
        a2 = v71[0];
        sub_1743080((__int64)ptr, v71[0]);
      }
    }
    else
    {
      if ( !v24 && (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x20) != 0 )
      {
        if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( v58 )
          {
            v42 = sub_6D5440(&v64);
            v43 = v58;
            if ( v56 != v42 )
              v43 = 0;
            v58 = v43;
          }
        }
        else
        {
          v56 = sub_6D5440(&v64);
        }
      }
      v32 = (unsigned int)v67;
      a2 = HIDWORD(v67);
      v33 = *v23 & 0xFFFFFFFFFFFFFFFBLL;
      v34 = (unsigned int)v67 + 1LL;
      v71[0] = v33;
      if ( v34 > HIDWORD(v67) )
      {
        a2 = (__int64)v68;
        sub_2237220(&v66, v68, v34, 8);
        v32 = (unsigned int)v67;
      }
      *((_QWORD *)v66 + v32) = v33;
      LODWORD(v67) = v67 + 1;
    }
LABEL_25:
    ++v23;
  }
  while ( v52 != v23 );
  v12 = v59;
  v10 = v60;
  if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x20) == 0 )
  {
LABEL_56:
    if ( (_DWORD)v67 )
    {
      if ( (_DWORD)v67 != 1 )
      {
        result = sub_1BDB130((__int64)a1, v10, (unsigned __int64)v62, v9, v12, (__int64)&v66);
        goto LABEL_50;
      }
      v71[0] = *(_QWORD *)v66;
      if ( !(unsigned __int8)sub_1BF92C0((__int64)a1, v10, (unsigned __int64 *)&v62, v9, v12, v61, a7, a8, v71) )
        goto LABEL_63;
      goto LABEL_60;
    }
LABEL_59:
    if ( !(unsigned __int8)sub_1BF9460(a1, v10, (unsigned __int64 *)&v62, v9, v12, v61, a7, a8, (__int64)ptr) )
      goto LABEL_63;
LABEL_60:
    result = 1;
    goto LABEL_50;
  }
  if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_59;
  if ( !v58 )
  {
    result = sub_1BDB130((__int64)a1, v60, (unsigned __int64)v62, v9, v59, (__int64)&v66);
    goto LABEL_50;
  }
  v72[337] = 16;
  v73 = 0;
  v71[0] = (__int64)v72;
  v71[1] = 0x1000000000LL;
  v72[336] = v75;
  v79 = v81;
  v80 = 0x400000000LL;
  v81[4] = v82;
  v74 = 1;
  v75[16] = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v81[5] = 0;
  v82[0] = 0;
  v82[1] = 1;
  v83 = v60;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  if ( v66 != (char *)v66 + 8 * (unsigned int)v67 )
  {
    v44 = v56;
    v45 = (__int64 *)((char *)v66 + 8 * (unsigned int)v67);
    v57 = v9;
    v46 = (__int64 *)v66;
    do
    {
      v47 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
      v48 = (_QWORD *)(*(_QWORD *)(v47 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v47 + 16) & 4) != 0 )
        v48 = (_QWORD *)*v48;
      if ( v48 )
        v48 -= 8;
      v49 = *(_BYTE *)(v47 + 28) & 0x7F;
      if ( (unsigned int)v49 - 53 <= 1 )
      {
        v47 = *(_QWORD *)(v47 + 64);
        v49 = *(_BYTE *)(v47 + 28) & 0x7F;
      }
      if ( v49 == 71 )
        sub_1BEE2D0((__int64)a1, (_QWORD *)v47, *v46, (__int64)v48, (__int64)v62, v44, (__int64)v71, 0, 1);
      else
        sub_1BECF20((__int64)a1, v47, *v46, (unsigned __int64)v62, v44, (__int64)v71, 0, 1, 1, 0);
      ++v46;
    }
    while ( v45 != v46 );
    v12 = v59;
    v10 = v60;
    v9 = v57;
  }
  v50 = sub_1BF27B0((__int64)v71, a1, v10, &v63, *(double *)a7.m128_u64, a8);
  switch ( v50 )
  {
    case 1:
      if ( !(unsigned __int8)sub_1BF9460(a1, v10, (unsigned __int64 *)&v62, v9, v12, v61, a7, a8, (__int64)ptr) )
        break;
LABEL_86:
      v51 = 1;
LABEL_84:
      v55 = v51;
      sub_17A20D0((__int64)v71);
      result = v55;
      goto LABEL_50;
    case 0:
      v64 = *v63 | v63[1] & 3;
      if ( !(unsigned __int8)sub_1BF92C0((__int64)a1, v10, (unsigned __int64 *)&v62, v9, v12, v61, a7, a8, &v64) )
        break;
      goto LABEL_86;
    case 2:
      v51 = sub_1BDB130((__int64)a1, v10, (unsigned __int64)v62, v9, v12, (__int64)&v66);
      goto LABEL_84;
  }
  sub_17A20D0((__int64)v71);
LABEL_63:
  result = sub_1BDB2E0((__int64)a1, v10, v62, v9, a7, a8);
LABEL_50:
  if ( ptr[0] != v70 )
  {
    v53 = result;
    free(ptr[0]);
    result = v53;
  }
  if ( v66 != v68 )
  {
    v54 = result;
    free(v66);
    return v54;
  }
  return result;
}
