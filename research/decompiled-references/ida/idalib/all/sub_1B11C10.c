unsigned __int64 __fastcall sub_1B11C10(
        __int64 *a1,
        unsigned __int64 a2,
        int a3,
        unsigned int a4,
        char *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v13; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  _BYTE *v23; // rdx
  unsigned int v24; // eax
  __int64 *v25; // rsi
  __int64 v26; // r12
  _BYTE *v28; // rdi
  unsigned __int64 *v29; // r13
  unsigned __int64 *v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _DWORD *v33; // rbx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // [rsp-8h] [rbp-1D0h]
  char v63; // [rsp+10h] [rbp-1B8h]
  int v64[2]; // [rsp+30h] [rbp-198h]
  __int64 v65; // [rsp+38h] [rbp-190h]
  __int64 v66; // [rsp+48h] [rbp-180h] BYREF
  void *v67; // [rsp+50h] [rbp-178h] BYREF
  unsigned int v68; // [rsp+58h] [rbp-170h]
  char v69; // [rsp+5Ch] [rbp-16Ch]
  void *v70[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v71; // [rsp+70h] [rbp-158h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h] BYREF
  __int64 v73; // [rsp+88h] [rbp-140h]
  _BYTE v74[32]; // [rsp+90h] [rbp-138h] BYREF
  __int64 v75[2]; // [rsp+B0h] [rbp-118h] BYREF
  unsigned int v76; // [rsp+C0h] [rbp-108h] BYREF
  char v77; // [rsp+C4h] [rbp-104h]
  void *v78; // [rsp+C8h] [rbp-100h] BYREF
  unsigned int v79; // [rsp+D0h] [rbp-F8h]
  char v80; // [rsp+D4h] [rbp-F4h]
  __int64 (__fastcall **v81)(); // [rsp+100h] [rbp-C8h] BYREF
  __int16 v82; // [rsp+108h] [rbp-C0h]
  char v83; // [rsp+10Ah] [rbp-BEh]

  v13 = a2;
  v19 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v47 = sub_1907C70(*a1, (_QWORD *)a2, (__m128i)a7, a8, v15, v16, v17, v18);
    if ( v47 == 1 )
      return 1;
    a2 = v47 & 0xFFFFFFFFFFFFFFFELL;
    v52 = sub_19146F0(*a1, (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFELL), v48, v49, v50, v51, a7, a8);
    if ( v52 == 1 )
      return 1;
    v13 = v52 & 0xFFFFFFFFFFFFFFFELL;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = (*(_DWORD *)v13 >> 14) & 4;
  v23 = *(_BYTE **)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v23[16] != 42 )
  {
    if ( (_BYTE)v22 )
      return sub_C0BAF0(v19, v19[2384], v13, a3, a4, v18, a5, a6, a9, a10);
    goto LABEL_5;
  }
  if ( !(_BYTE)v22 )
  {
    v55 = sub_F68450(v21, a2, (__int64)v23, v16, v17);
    a2 = 0;
    if ( sub_F62670(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v56, v57, v58, v59) )
    {
LABEL_5:
      v24 = sub_C00A40(v13, a2, (__int64)v23, v16, v17);
      v25 = a1;
      v26 = 1;
      sub_168B9F0((__int64)&v81, v25, v24, 0x11CFu, 0);
      v75[0] = sub_EEC8C0(v13, (__int64)v25, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v81, v75);
      sub_15F7200(&v81);
      return v26;
    }
  }
  v28 = v74;
  v29 = (unsigned __int64 *)&a5[8 * a6];
  ptr = v74;
  v73 = 0x400000000LL;
  if ( a5 == (char *)v29 )
  {
    v46 = 0;
    goto LABEL_47;
  }
  *(_QWORD *)v64 = v13;
  v30 = (unsigned __int64 *)a5;
  v63 = 0;
  do
  {
    while ( 1 )
    {
      v33 = (_DWORD *)*v30;
      v34 = *(_QWORD *)(*(_QWORD *)(*v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v34 + 16) != 13 || ((*(_WORD *)(v34 + 18) >> 3) & 0x1FFu) <= 0x1F1 )
        break;
      a2 = *v30;
      v43 = sub_1907C70(*a1, (_QWORD *)*v30, (__m128i)a7, a8, (__int64)v23, v16, v17, v18);
      if ( v43 != 1 )
      {
        a2 = v43 & 0xFFFFFFFFFFFFFFFELL;
        v44 = sub_19146F0(*a1, (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFELL), (__int64)v23, v16, v17, v18, a7, a8);
        if ( v44 != 1 )
        {
          v33 = (_DWORD *)(v44 & 0xFFFFFFFFFFFFFFFELL);
          break;
        }
      }
LABEL_37:
      v63 = 1;
LABEL_38:
      if ( v29 == ++v30 )
        goto LABEL_39;
    }
    if ( (*v33 & 0x10000) != 0 )
      goto LABEL_10;
    v35 = sub_C00A40((unsigned __int64)v33, a2, (__int64)v23, v16, v17);
    v36 = *a1;
    v82 = 256;
    a2 = v35;
    v81 = off_2C66CF8;
    v83 = 0;
    v37 = sub_1BF9B70(v36, v35, v33, &v81);
    if ( v37 == 1 )
    {
      v54 = sub_C00A40((unsigned __int64)v33, a2, v38, v39, v17);
      sub_168B9F0((__int64)&v81, a1, v54, 0x1215u, 0);
      a2 = (unsigned __int64)v75;
      v75[0] = sub_EEC8C0((unsigned __int64)v33, (__int64)a1, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v81, v75);
      sub_15F7200(&v81);
      v63 = 1;
      goto LABEL_38;
    }
    v40 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFFELL);
    v75[1] = 0;
    v33 = v40;
    LOWORD(v75[0]) = 0;
    v76 = 0;
    v77 &= ~1u;
    if ( (*v40 & 0x20000) != 0 )
      goto LABEL_10;
    a2 = (unsigned __int64)v75;
    if ( (unsigned __int8)sub_C3F220((unsigned __int64)v40, (__int64)v75, (__int64)v19, 0, 0, v18) )
    {
      v68 = v79;
      if ( v79 > 0x40 )
      {
        a2 = (unsigned __int64)&v78;
        sub_2205510(&v67);
      }
      else
      {
        v67 = v78;
      }
      v69 = v80;
      if ( (unsigned __int8)sub_1AF0130((__int64 *)&v67) )
      {
        if ( v68 > 0x40 && v67 )
          operator delete[](v67);
        goto LABEL_25;
      }
      v45 = sub_C00A40((unsigned __int64)v33, a2, v41, v42, v17);
      sub_168B9F0((__int64)&v81, a1, v45, 0x1206u, 0);
      sub_C1DEB0(v70, (int)&v67, 10, 1u, 0, 1u, 0);
      v65 = sub_1682AF0((__int64)&v81, (__int64)v70);
      v66 = sub_EEC8C0((unsigned __int64)v33, (__int64)v70, *(double *)a7.m128_u64);
      sub_1587DB0(v65, &v66);
      a2 = v60;
      if ( v70[0] != &v71 )
        operator delete(v70[0]);
      sub_15F7200(&v81);
      if ( v68 > 0x40 && v67 )
        operator delete[](v67);
      if ( v76 > 1 )
        sub_A4F8E0((int *)&v76);
      goto LABEL_37;
    }
LABEL_25:
    if ( v76 > 1 )
      sub_A4F8E0((int *)&v76);
LABEL_10:
    v31 = (unsigned int)v73;
    v16 = HIDWORD(v73);
    v32 = (unsigned int)v73 + 1LL;
    if ( v32 > HIDWORD(v73) )
    {
      a2 = (unsigned __int64)v74;
      sub_2237220(&ptr, v74, v32, 8);
      v31 = (unsigned int)v73;
    }
    v23 = ptr;
    ++v30;
    *((_QWORD *)ptr + v31) = v33;
    LODWORD(v73) = v73 + 1;
  }
  while ( v29 != v30 );
LABEL_39:
  v13 = *(_QWORD *)v64;
  v26 = 1;
  v28 = ptr;
  v46 = (unsigned int)v73;
  if ( !v63 )
  {
LABEL_47:
    v53 = sub_C0BAF0(v19, v19[2439], v13, a3, a4, v18, v28, v46, a9, a10);
    v28 = ptr;
    v26 = v53;
  }
  if ( v28 != v74 )
    free(v28);
  return v26;
}
