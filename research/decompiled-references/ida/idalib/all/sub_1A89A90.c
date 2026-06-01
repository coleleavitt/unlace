__int64 __fastcall sub_1A89A90(__int64 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, int a5, __m128 a6, __m128 a7)
{
  unsigned int v9; // ebp
  _QWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // al
  __int64 *v25; // rdx
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  void *v35; // rdi
  void **v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  char v40; // al
  __int16 *v41; // rbx
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r14
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // edx
  __int64 *v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  char *v52; // r14
  char *v53; // rbp
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rax
  _QWORD *v56; // r15
  _QWORD *v57; // r13
  _QWORD *v58; // rdi
  void *v59; // rdi
  void **v60; // r15
  void **v61; // r13
  __int64 v62; // rdx
  int v64; // [rsp+8h] [rbp-320h]
  _QWORD *v65; // [rsp+8h] [rbp-320h]
  void *v66; // [rsp+8h] [rbp-320h]
  _QWORD *v67; // [rsp+10h] [rbp-318h]
  void **v68; // [rsp+10h] [rbp-318h]
  unsigned __int64 v69; // [rsp+10h] [rbp-318h]
  _QWORD *v70; // [rsp+18h] [rbp-310h]
  void **v71; // [rsp+18h] [rbp-310h]
  _QWORD *v72; // [rsp+20h] [rbp-308h]
  __int64 v73; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v74; // [rsp+38h] [rbp-2F0h] BYREF
  _DWORD v75[2]; // [rsp+40h] [rbp-2E8h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-2E0h]
  __int64 v77; // [rsp+50h] [rbp-2D8h]
  __int64 v78[18]; // [rsp+60h] [rbp-2C8h] BYREF
  _QWORD v79[2]; // [rsp+F0h] [rbp-238h] BYREF
  int v80; // [rsp+100h] [rbp-228h]
  __int16 v81; // [rsp+104h] [rbp-224h]
  __int64 v82; // [rsp+108h] [rbp-220h]
  void *v83; // [rsp+110h] [rbp-218h]
  __int64 v84; // [rsp+118h] [rbp-210h]
  _BYTE v85[128]; // [rsp+120h] [rbp-208h] BYREF
  __int64 v86; // [rsp+1A0h] [rbp-188h]
  __int64 v87; // [rsp+1A8h] [rbp-180h]
  __int64 v88; // [rsp+1B0h] [rbp-178h]
  __int64 v89; // [rsp+1C0h] [rbp-168h]
  __int64 v90; // [rsp+1C8h] [rbp-160h]
  int v91; // [rsp+1D8h] [rbp-150h]
  char v92; // [rsp+1DCh] [rbp-14Ch]
  void *v93; // [rsp+1E0h] [rbp-148h]
  __int64 v94; // [rsp+1E8h] [rbp-140h]
  _BYTE v95[64]; // [rsp+1F0h] [rbp-138h] BYREF
  __int64 v96; // [rsp+230h] [rbp-F8h]
  __int64 v97; // [rsp+238h] [rbp-F0h]
  void *v98; // [rsp+240h] [rbp-E8h]
  __int64 v99; // [rsp+248h] [rbp-E0h]
  _BYTE v100[96]; // [rsp+250h] [rbp-D8h] BYREF
  __int16 v101; // [rsp+2B0h] [rbp-78h]
  void *ptr; // [rsp+2B8h] [rbp-70h]
  __int64 v103; // [rsp+2C0h] [rbp-68h]
  _BYTE v104[96]; // [rsp+2C8h] [rbp-60h] BYREF

  v9 = a2;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  sub_15F2480(*a1);
  a2 = (unsigned int)a2;
  v14 = (unsigned __int64)sub_1A896A0(a1, a2, a4, a6, a7);
  if ( !a3 )
    goto LABEL_57;
  v73 = 0;
  if ( (*(_WORD *)a3 & 0x1FF) != 0xF5 )
  {
    if ( (*(_DWORD *)a3 & 0x10000) == 0 && ((*(_BYTE *)(a3 + 1) >> 1) & 3) != 1 )
    {
      v46 = sub_EEB7E0(a3, (unsigned int)a2, *(double *)a6.m128_u64);
      v41 = (_WORD *)(&dword_0 + 1);
      sub_168B9F0((__int64)v79, a1, v46, 0x136Eu, 0);
      v78[0] = sub_EEC8C0(a3, (__int64)a1, *(double *)a6.m128_u64);
      sub_1587DB0((__int64)v79, v78);
      sub_15F7200(v79);
      return (__int64)v41;
    }
    v37 = *(_QWORD *)(a3 + 8);
    v73 = v37;
    if ( (v37 & 1) == 0 )
    {
      v38 = v37 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(v38 + 8) & 1) == 0 )
        goto LABEL_54;
    }
    sub_168B9F0((__int64)v79, a1, a2, 0x136Du, 0);
    v66 = (void *)sub_1605D30((__int64)v79, &v73);
    a2 = (__int64)v78;
    v78[0] = sub_EEC8C0(a3, (__int64)&v73, *(double *)a6.m128_u64);
    sub_1587DB0((__int64)v66, v78);
    sub_15F7200(v79);
LABEL_53:
    v38 = v73 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_54:
    v39 = *(_QWORD *)v38;
    if ( (*(_BYTE *)(v39 + 17) & 4) == 0 )
    {
      v40 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v40 != 11 && v40 != 34 )
      {
        sub_168B9F0((__int64)v79, a1, v9, 0x136Fu, 0);
        v50 = sub_1605D30((__int64)v79, &v73);
        v41 = (_WORD *)(&dword_0 + 1);
        v78[0] = sub_EEC8C0(a3, (__int64)&v73, *(double *)a6.m128_u64);
        sub_1587DB0(v50, v78);
        sub_15F7200(v79);
        return (__int64)v41;
      }
    }
LABEL_57:
    if ( v14 != 1 )
    {
      v43 = *a1;
      v44 = 0;
      if ( (v14 & 0xFFFFFFFFFFFFFFFELL) != 0 )
        v44 = (unsigned int)sub_C00A40(v14 & 0xFFFFFFFFFFFFFFFELL, a2, 0, v12, v13);
      v45 = sub_19B4A30(v43, v14 & 0xFFFFFFFFFFFFFFFELL, v44, 0, 0, 0, a6, a7);
      if ( v45 != 1 )
      {
        v41 = (__int16 *)sub_EEE9A0(40, v11, 8u);
        sub_EF2B50(v41, a3, v45 & 0xFFFFFFFFFFFFFFFELL, 0, v9, a5);
        return (__int64)v41;
      }
    }
    return 1;
  }
  v15 = *(_QWORD *)(a3 + 8);
  if ( (v15 & 1) != 0 )
  {
    v47 = 5186;
    v48 = *(_DWORD *)(*(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8) + 24LL);
LABEL_67:
    v49 = a1;
    v41 = (_WORD *)(&dword_0 + 1);
    sub_168B9F0((__int64)v79, v49, v48, v47, 0);
    sub_15F7200(v79);
    return (__int64)v41;
  }
  if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 40 > 6 || *(char *)(v15 + 28) < 0 )
    return 1;
  v16 = *(_QWORD *)(a3 + 8);
  v73 = *(_QWORD *)(v15 + 48);
  if ( !sub_9B48E0(v16) )
  {
    v48 = *(_DWORD *)(v15 + 24);
    v47 = 4300;
    goto LABEL_67;
  }
  v17 = sub_F57E80(*(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v17 || *(_BYTE *)(v17 + 16) != 16 )
    goto LABEL_53;
  v64 = *(_DWORD *)(v15 + 24);
  v18 = sub_A8A250(v11);
  v22 = *(_QWORD *)(v18 + 48);
  if ( v22 )
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v23 = sub_A7AA70((__int64)v11, v18, 0, v19, v20, v21);
  LOWORD(v75[0]) = v75[0] & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v69 = v23;
    sub_EE9B50(26);
    v23 = v69;
  }
  v76 = v23;
  v77 = 0;
  v75[0] &= 0xFFF001FF;
  v75[1] = v64;
  v24 = sub_B62360((__int64)v75);
  v79[0] = 0;
  v79[1] = 0;
  v82 = 0;
  v86 = 0;
  BYTE1(v75[0]) = (v24 << 6) | BYTE1(v75[0]) & 0x3F;
  v88 = 0;
  v92 = 0;
  BYTE2(v75[0]) = BYTE2(v75[0]) & 0xF8 | (v24 >> 2) & 7;
  v87 &= 0xFFFFFFFE00000000LL;
  v89 &= 0xFFFFFFFE00000000LL;
  v80 = v64;
  v93 = v95;
  v81 = 0;
  v98 = v100;
  v83 = v85;
  v101 = 0;
  v84 = 0x400000000LL;
  v99 = 0x400000000LL;
  ptr = v104;
  v103 = 0x400000000LL;
  v90 = 0;
  v91 = 0;
  v94 = 0x800000000LL;
  v96 = 0;
  v97 = 0;
  v73 = 0;
  v25 = (__int64 *)(*(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
    v25 = (__int64 *)v25[4];
  a2 = *v25;
  v26 = sub_1D79BF0(*a1, *v25, (int)v25 + 8, (unsigned int)v75, (unsigned int)&v73, (unsigned int)v79, 0, 0, 0);
  if ( v26 && v26 != 18 )
  {
    a2 = v15;
    sub_1D40760(*a1, v15, v75);
  }
  if ( (v73 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    *(_QWORD *)(v15 + 48) = v73;
    if ( *(_DWORD *)(*a1 + 11320) <= *(_DWORD *)(*a1 + 12596) )
    {
      v27 = (__int64 *)(*(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
        v27 = (__int64 *)v27[4];
      v28 = *v27;
      v78[1] = (__int64)(v27 + 1);
      v78[0] = v28;
      v29 = sub_F6CCB0(v78, a6);
      sub_168B9F0((__int64)v78, a1, v29, 0x19CDu, 0);
      a2 = (__int64)&v74;
      v74 = *(_QWORD *)(v15 + 40);
      sub_15894B0((__int64)v78, &v74);
      sub_15F7200(v78);
    }
    if ( ptr != v104 )
      free(ptr);
    if ( v98 != v100 )
      free(v98);
    if ( v93 != v95 )
      free(v93);
    v72 = v83;
    v65 = (char *)v83 + 32 * (unsigned int)v84;
    if ( v83 != v65 )
    {
      do
      {
        v65 -= 4;
        v30 = v65[1];
        if ( v30 )
        {
          v31 = v65[2];
          if ( v31 )
          {
            if ( v30 < v31 || v30 > v31 + 14848 )
            {
              v32 = *(_QWORD **)(v30 + 528);
              v33 = &v32[8 * (unsigned __int64)*(unsigned int *)(v30 + 536)];
              if ( v32 != v33 )
              {
                do
                {
                  while ( 1 )
                  {
                    v33 -= 8;
                    v34 = (_QWORD *)v33[3];
                    if ( v34 == v33 + 5 )
                      break;
                    v70 = v33;
                    v67 = v32;
                    operator delete(v34);
                    v32 = v67;
                    v33 = v70;
                    if ( v67 == v70 )
                      goto LABEL_36;
                  }
                }
                while ( v32 != v33 );
LABEL_36:
                v33 = *(_QWORD **)(v30 + 528);
              }
              if ( v33 != (_QWORD *)(v30 + 544) )
                free(v33);
              v35 = *(void **)(v30 + 416);
              if ( v35 != (void *)(v30 + 432) )
                free(v35);
              v36 = (void **)(v30 + 384);
              v68 = (void **)(v30 + 64);
              do
              {
                while ( *v36 != v36 + 2 )
                {
                  v71 = v36;
                  operator delete(*v36);
                  v36 = v71 - 4;
                  if ( v71 - 4 == v68 )
                    goto LABEL_44;
                }
                v36 -= 4;
              }
              while ( v68 != v36 );
LABEL_44:
              a2 = 928;
              operator delete((void *)v30, 0x3A0u);
            }
            else
            {
              v51 = *(unsigned int *)(v31 + 14976);
              *(_DWORD *)(v31 + 14976) = v51 + 1;
              *(_QWORD *)(v31 + 8 * v51 + 14848) = v30;
            }
          }
        }
      }
      while ( v72 != v65 );
      v65 = v83;
    }
    v12 = (__int64)v65;
    if ( v65 != (_QWORD *)v85 )
      free(v65);
    goto LABEL_53;
  }
  v41 = (_WORD *)(&dword_0 + 1);
  sub_B88650(v15, 1);
  if ( ptr != v104 )
    free(ptr);
  if ( v98 != v100 )
    free(v98);
  if ( v93 != v95 )
    free(v93);
  v52 = (char *)v83;
  v53 = (char *)v83 + 32 * (unsigned int)v84;
  while ( v52 != v53 )
  {
    v53 -= 32;
    v54 = *((_QWORD *)v53 + 1);
    if ( v54 )
    {
      v55 = *((_QWORD *)v53 + 2);
      if ( v55 )
      {
        if ( v54 < v55 || v54 > v55 + 14848 )
        {
          v56 = *(_QWORD **)(v54 + 528);
          v57 = &v56[8 * (unsigned __int64)*(unsigned int *)(v54 + 536)];
          if ( v56 != v57 )
          {
            do
            {
              while ( 1 )
              {
                v57 -= 8;
                v58 = (_QWORD *)v57[3];
                if ( v58 == v57 + 5 )
                  break;
                operator delete(v58);
                if ( v56 == v57 )
                  goto LABEL_90;
              }
            }
            while ( v56 != v57 );
LABEL_90:
            v57 = *(_QWORD **)(v54 + 528);
          }
          if ( v57 != (_QWORD *)(v54 + 544) )
            free(v57);
          v59 = *(void **)(v54 + 416);
          if ( v59 != (void *)(v54 + 432) )
            free(v59);
          v60 = (void **)(v54 + 384);
          v61 = (void **)(v54 + 64);
          do
          {
            while ( *v60 != v60 + 2 )
            {
              operator delete(*v60);
              v60 -= 4;
              if ( v61 == v60 )
                goto LABEL_98;
            }
            v60 -= 4;
          }
          while ( v60 != v61 );
LABEL_98:
          operator delete((void *)v54, 0x3A0u);
        }
        else
        {
          v62 = *(unsigned int *)(v55 + 14976);
          *(_DWORD *)(v55 + 14976) = v62 + 1;
          *(_QWORD *)(v55 + 8 * v62 + 14848) = v54;
        }
      }
    }
  }
  if ( v83 != v85 )
    free(v83);
  return (__int64)v41;
}
