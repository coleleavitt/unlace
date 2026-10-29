__int64 __fastcall sub_19DBB20(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  char v9; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int16 v23; // ax
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  _QWORD *v31; // rdi
  unsigned int v32; // r12d
  _QWORD *v33; // rdi
  __int16 v34; // ax
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  __int64 *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // r14
  int v48; // eax
  __int64 *v49; // r14
  unsigned int v50; // eax
  __int64 v51; // [rsp+8h] [rbp-2060h]
  __int64 v52; // [rsp+8h] [rbp-2060h]
  __int64 v53; // [rsp+8h] [rbp-2060h]
  __int64 v54; // [rsp+8h] [rbp-2060h]
  size_t v55; // [rsp+10h] [rbp-2058h]
  __int64 v56; // [rsp+10h] [rbp-2058h]
  size_t v57; // [rsp+10h] [rbp-2058h]
  unsigned __int64 v58[2]; // [rsp+18h] [rbp-2050h] BYREF
  int v59; // [rsp+2Ch] [rbp-203Ch] BYREF
  __int64 v60[2]; // [rsp+30h] [rbp-2038h] BYREF
  __int64 v61[3]; // [rsp+40h] [rbp-2028h] BYREF
  void *v62; // [rsp+58h] [rbp-2010h]
  __int64 v63; // [rsp+60h] [rbp-2008h]
  _BYTE v64[24]; // [rsp+68h] [rbp-2000h] BYREF
  _QWORD v65[2]; // [rsp+80h] [rbp-1FE8h] BYREF
  unsigned __int64 v66; // [rsp+90h] [rbp-1FD8h]
  int v67; // [rsp+98h] [rbp-1FD0h]
  unsigned __int8 *v68; // [rsp+A0h] [rbp-1FC8h] BYREF
  char v69; // [rsp+F8h] [rbp-1F70h]
  unsigned int v70; // [rsp+100h] [rbp-1F68h]
  char v71; // [rsp+104h] [rbp-1F64h]

  result = (__int64)a2;
  v58[0] = (unsigned __int64)a2;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    return result;
  v9 = a4;
  v12 = sub_1907C70((__int64)a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
  if ( v12 == 1 )
    return 1;
  v17 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v58[0] = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
  {
    v33 = (_QWORD *)a1[31];
    v61[1] = 0;
    LODWORD(v62) = 0;
    LODWORD(v61[0]) = 1;
    v63 = 0;
    v61[2] = sub_A73320(v33, a3);
    HIDWORD(v60[0]) = sub_EEB7E0(v58[0], a3, *(double *)a7.m128_u64);
    LOWORD(v60[0]) = 2;
    v60[1] = 0;
    sub_1A19220((unsigned int)v65, (_DWORD)a1, (unsigned int)v61, (unsigned int)v60, (unsigned int)v58, 1, 0, 1);
    if ( LODWORD(v65[0]) )
    {
      v51 = sub_1A1D600((unsigned int)v65, (_DWORD)a1, (unsigned int)v61, (unsigned int)v60, (unsigned int)v58, 1, 0);
      sub_1A0BB10(v65);
      return v51;
    }
    sub_1A0BB10(v65);
    v17 = v58[0];
  }
  v18 = v17;
  v19 = sub_19146F0((__int64)a1, (_QWORD *)v17, v13, v14, v15, v16, a7, a8);
  if ( v19 == 1 )
    return 1;
  v58[0] = v19 & 0xFFFFFFFFFFFFFFFELL;
  v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v22 + 16) != 34 && *(_BYTE *)(v22 + 16) != 11 )
  {
    v23 = *(_WORD *)v17 & 0x1FF;
    if ( ((v23 + 472) & 0x1FFu) <= 0x26 )
    {
      if ( ((0x4000401001uLL >> (*(_BYTE *)v17 - 40)) & 1) == 0 )
        goto LABEL_12;
    }
    else if ( v23 != 115 )
    {
      if ( v23 != 9 || (*(_BYTE *)(v17 + 2) & 0x38) != 0 )
        goto LABEL_12;
      v46 = sub_EEB7E0(v17, v17, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v65, a1 + 1, v46, 0xD09u, 0);
      v59 = 0;
      v47 = sub_1587D10((__int64)v65, &v59);
      v60[0] = sub_EEC8C0(v17, (__int64)&v59, *(double *)a7.m128_u64);
      v54 = sub_1587DB0(v47, v60);
      v57 = j__strlen("@");
      v48 = sub_EEB7E0(v17, (__int64)v60, *(double *)a7.m128_u64);
      sub_9EC740((__int64)v61, v48, "@", v57, 0);
      sub_1589170(v54, v61);
      if ( v62 != v64 )
        operator delete(v62);
      sub_15F7200(v65);
      v49 = (__int64 *)a1[92];
      v50 = sub_EEB7E0(v17, (__int64)v61, *(double *)a7.m128_u64);
      v18 = v50;
      v39 = sub_19DB3B0(v49, v50, v17, *(double *)a7.m128_u64);
      if ( v39 == 1 )
        return 1;
LABEL_35:
      v20 = v39 & 0xFFFFFFFFFFFFFFFELL;
      v58[0] = v39 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_14;
    }
    v18 = *(_QWORD *)(v17 + 8);
    if ( !(unsigned __int8)((unsigned __int64)sub_E93D70(*(_QWORD **)(a1[92] + 88), v18) >> 32) )
    {
      v21 = v58[0];
LABEL_12:
      v24 = sub_EEB7E0(v21, v18, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v65, a1 + 1, v24, 0xFAFu, 0);
      v61[0] = *(_QWORD *)(v58[0] + 8);
      sub_162B6D0((__int64)v65, v61);
      sub_15F7200(v65);
      return 1;
    }
    v52 = 1;
    v34 = *(_WORD *)v17 & 0x1FF;
    if ( v34 != 78 )
    {
      if ( v34 == 115 || (v52 = 3, v34 == 40) )
        v52 = 2;
    }
    v35 = sub_EEB7E0(v17, v18, *(double *)a7.m128_u64);
    v36 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)v65, a1 + 1, v35, 0xD09u, 0);
    if ( v69 )
    {
      v36 = v52;
      sub_AE9DF0(&v68, v52, 2u);
    }
    else if ( v71 )
    {
      v40 = sub_168B9E0(v65);
      v44 = v66;
      if ( v66 )
      {
        v56 = v40;
        v44 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v66 + 32LL))(v66);
        v40 = v56;
      }
      v61[0] = v44;
      v45 = sub_1587BC0(v40, v61, v40, v41, v42, v43);
      v36 = v52;
      sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v70 + 8), v52, 2u);
    }
    v60[0] = sub_EEC8C0(v17, v36, *(double *)a7.m128_u64);
    v53 = sub_1587DB0((__int64)v65, v60);
    v55 = j__strlen("@");
    v37 = sub_EEB7E0(v17, (__int64)v60, *(double *)a7.m128_u64);
    sub_9EC740((__int64)v61, v37, "@", v55, 0);
    sub_1589170(v53, v61);
    if ( v62 != v64 )
      operator delete(v62);
    sub_15F7200(v65);
    v38 = (__int64 *)a1[92];
    v18 = (unsigned int)sub_EEB7E0(v17, (__int64)v61, *(double *)a7.m128_u64);
    v39 = (__int64)sub_19D7B40(v38, v18, v17, a7, a8);
    if ( v39 == 1 )
      return 1;
    goto LABEL_35;
  }
LABEL_14:
  if ( v9 )
  {
    if ( (*(_WORD *)v17 & 0x1FF) == 0x1D )
    {
      v25 = *(_QWORD *)(v17 + 16);
      if ( v25 )
      {
        v26 = *(_DWORD *)(v25 + 4);
        if ( v26 > 1 )
        {
          v27 = (int *)(v25 + 20);
          v28 = v25 + 4LL * (v26 - 1) + 24;
          while ( *v27 >= 0 )
          {
            if ( ++v27 == (int *)v28 )
            {
              v29 = sub_EEB7E0(v20, v18, *(double *)a7.m128_u64);
              sub_168B9F0((__int64)v65, a1 + 1, v29, 0x1A21u, 0);
              v18 = (__int64)v61;
              v61[0] = *(_QWORD *)(v58[0] + 8);
              sub_162B6D0((__int64)v65, v61);
              sub_15F7200(v65);
              v20 = v58[0];
              break;
            }
          }
        }
      }
    }
  }
  v30 = sub_EEB7E0(v20, v18, *(double *)a7.m128_u64);
  v31 = (_QWORD *)a1[31];
  v65[1] = 0;
  v67 = 0;
  v32 = v30;
  LODWORD(v65[0]) = 1;
  v66 = sub_A73320(v31, a3);
  v68 = nullptr;
  return sub_1A24E20(a1, v65, v32, v20, 0, 0);
}
