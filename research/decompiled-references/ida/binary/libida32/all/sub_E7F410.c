__int64 __fastcall sub_E7F410(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 i; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 j; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r13d
  __int64 v27; // rax
  char *v28; // rax
  _QWORD *v29; // r10
  __int64 v30; // rbp
  unsigned int *v31; // r13
  unsigned int *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v36; // r13
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // r12
  unsigned __int64 *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rbp
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  _DWORD *v53; // rax
  __int64 v54; // rdi
  int v55; // edx
  __int64 v56; // rbp
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  _DWORD *v61; // rax
  __int64 v62; // rdi
  int v63; // edx
  __int64 v64; // [rsp+0h] [rbp-2D8h]
  __int64 v65; // [rsp+8h] [rbp-2D0h]
  __int64 **v66; // [rsp+10h] [rbp-2C8h]
  __int64 v67; // [rsp+20h] [rbp-2B8h]
  __int64 v68; // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v70; // [rsp+40h] [rbp-298h]
  unsigned __int64 v71; // [rsp+48h] [rbp-290h]
  __int64 v72; // [rsp+54h] [rbp-284h] BYREF
  char v73; // [rsp+5Ch] [rbp-27Ch]
  unsigned int *v74; // [rsp+60h] [rbp-278h] BYREF
  unsigned int *v75; // [rsp+68h] [rbp-270h]
  int v76; // [rsp+70h] [rbp-268h]
  int v77; // [rsp+74h] [rbp-264h]
  void *v78; // [rsp+80h] [rbp-258h] BYREF
  __int64 v79; // [rsp+88h] [rbp-250h]
  __int64 v80; // [rsp+90h] [rbp-248h] BYREF
  void *v81; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-230h]
  __int64 v83; // [rsp+B0h] [rbp-228h] BYREF
  void *v84; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-210h]
  char v86; // [rsp+D0h] [rbp-208h] BYREF
  void *v87; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v88; // [rsp+118h] [rbp-1C0h]
  _BYTE v89[64]; // [rsp+120h] [rbp-1B8h] BYREF
  unsigned __int8 *v90; // [rsp+160h] [rbp-178h] BYREF
  __int64 v91; // [rsp+168h] [rbp-170h]
  int v92; // [rsp+170h] [rbp-168h]
  void *v93; // [rsp+178h] [rbp-160h]
  __m128i si128; // [rsp+180h] [rbp-158h]
  _BYTE v95[128]; // [rsp+190h] [rbp-148h] BYREF
  void *ptr; // [rsp+210h] [rbp-C8h]
  __int64 v97; // [rsp+218h] [rbp-C0h]
  _BYTE v98[184]; // [rsp+220h] [rbp-B8h] BYREF

  v4 = 0;
  if ( a3 == a2 )
    return v4;
  v65 = a3;
  sub_E78530((__int64)&v78, a2);
  sub_E78530((__int64)&v81, a3);
  v9 = *(_QWORD *)(a2 + 104);
  if ( a4 == (v9 & 0xFFFFFFFFFFFFFFF8LL) )
  {
LABEL_5:
    v66 = (__int64 **)&v84;
    v84 = &v86;
    v85 = 0x400000000LL;
    v87 = v89;
    v88 = 0x400000000LL;
    if ( !v9 )
    {
      v40 = *(_QWORD *)(a2 + 96);
      v41 = *(_QWORD *)(v40 + 88);
      v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v41 & 1) == 0 )
      {
        v43 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v41 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v41 & 2) == 0 )
            goto LABEL_55;
          v56 = v43[2295];
          v57 = v40 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v56 )
          {
            v58 = v43[294];
            v43[304] += 24LL;
            v59 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v43[295] >= v59 + 24 && v58 )
            {
              v43[294] = v59 + 24;
              v60 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v60 = sub_962430((__int64)(v43 + 294), 24, 24, 3, v7, v8);
              v59 = v60 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v60 = v56;
            v57 = v59 | 4;
            *(_DWORD *)(v60 + 8) = 0;
            *(_QWORD *)(v60 + 16) = v40;
          }
          v42 = v57 & 0xFFFFFFFFFFFFFFFELL;
          v41 = v42 | 1;
          *(_QWORD *)(v40 + 88) = v42 | 1;
        }
      }
      if ( v42 )
      {
        if ( (v42 & 4) != 0 )
        {
          v61 = (_DWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v61 )
          {
            v62 = *(_QWORD *)v61;
            v63 = *(_DWORD *)(*(_QWORD *)v61 + 12LL);
            if ( v61[2] != v63 )
            {
              v61[2] = v63;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 152LL))(v62, v40);
            }
          }
        }
      }
      v9 = *(_QWORD *)(a2 + 104);
    }
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 && *v10 )
    {
      v67 = *v10 + 48LL;
      goto LABEL_9;
    }
LABEL_55:
    v67 = 0;
LABEL_9:
    for ( i = sub_B6AC30(a2 + 48); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_E80DD0(i, v67) )
      {
        v90 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
        v97 = 0x2000000000LL;
        v91 = 0;
        v92 = 0;
        v93 = v95;
        ptr = v98;
        sub_E853B0(&v90, i, v14, v15, v12, v13, v64, v65, (_DWORD)v66);
        v16 = sub_E80C50(&v90);
        if ( ptr != v98 )
          free(ptr);
        if ( v93 != v95 )
          free(v93);
        operator delete();
        v17 = (unsigned int)v85;
        if ( (unsigned int)v85 >= (unsigned __int64)HIDWORD(v85) )
        {
          v38 = v16 | v71 & 0xFFFFFFFF00000000LL;
          v71 = v38;
          if ( HIDWORD(v85) < (unsigned __int64)(unsigned int)v85 + 1 )
          {
            sub_22134E0(v66, v66 + 2, (unsigned int)v85 + 1LL, 16);
            v17 = (unsigned int)v85;
          }
          v39 = (unsigned __int64 *)((char *)v84 + 16 * v17);
          *v39 = i;
          v39[1] = v38;
          LODWORD(v85) = v85 + 1;
        }
        else
        {
          v18 = (char *)v84 + 16 * (unsigned int)v85;
          *(_QWORD *)v18 = i;
          *((_DWORD *)v18 + 2) = v16;
          LODWORD(v85) = v85 + 1;
        }
      }
    }
    v19 = *(_QWORD *)(v65 + 104);
    if ( !v19 )
    {
      v44 = *(_QWORD *)(v65 + 96);
      v45 = *(_QWORD *)(v44 + 88);
      v46 = v45 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v45 & 1) == 0 )
      {
        v47 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v45 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v45 & 2) == 0 )
            goto LABEL_63;
          v48 = v47[2295];
          v49 = v44 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v48 )
          {
            v50 = v47[294];
            v47[304] += 24LL;
            v51 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v47[295] >= v51 + 24 && v50 )
            {
              v47[294] = v51 + 24;
              v52 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v52 = sub_962430((__int64)(v47 + 294), 24, 24, 3, v12, v13);
              v51 = v52 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v52 = v48;
            v49 = v51 | 4;
            *(_DWORD *)(v52 + 8) = 0;
            *(_QWORD *)(v52 + 16) = v44;
          }
          v46 = v49 & 0xFFFFFFFFFFFFFFFELL;
          v45 = v46 | 1;
          *(_QWORD *)(v44 + 88) = v46 | 1;
        }
      }
      if ( v46 )
      {
        if ( (v46 & 4) != 0 )
        {
          v53 = (_DWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v53 )
          {
            v54 = *(_QWORD *)v53;
            v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
            if ( v53[2] != v55 )
            {
              v53[2] = v55;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 152LL))(v54, v44);
            }
          }
        }
      }
      v19 = *(_QWORD *)(v65 + 104);
    }
    v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v20 && *v20 )
    {
      v68 = *v20 + 48LL;
      goto LABEL_22;
    }
LABEL_63:
    v68 = 0;
LABEL_22:
    for ( j = sub_B6AC30(v65 + 48); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_E80DD0(j, v68) )
      {
        v90 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
        v97 = 0x2000000000LL;
        v91 = 0;
        v92 = 0;
        v93 = v95;
        ptr = v98;
        sub_E853B0(&v90, j, v22, v23, v24, v25, v64, v65, (_DWORD)v66);
        v26 = sub_E80C50(&v90);
        if ( ptr != v98 )
          free(ptr);
        if ( v93 != v95 )
          free(v93);
        operator delete();
        v27 = (unsigned int)v88;
        if ( (unsigned int)v88 >= (unsigned __int64)HIDWORD(v88) )
        {
          v36 = v26 | v70 & 0xFFFFFFFF00000000LL;
          v70 = v36;
          if ( HIDWORD(v88) < (unsigned __int64)(unsigned int)v88 + 1 )
          {
            sub_22134E0(&v87, v89, (unsigned int)v88 + 1LL, 16);
            v27 = (unsigned int)v88;
          }
          v37 = (unsigned __int64 *)((char *)v87 + 16 * v27);
          *v37 = j;
          v37[1] = v36;
          LODWORD(v88) = v88 + 1;
        }
        else
        {
          v28 = (char *)v87 + 16 * (unsigned int)v88;
          *(_QWORD *)v28 = j;
          *((_DWORD *)v28 + 2) = v26;
          LODWORD(v88) = v88 + 1;
        }
      }
    }
    sub_E7A630((__int64)&v74, v66, (__int64 **)&v87);
    v30 = v76;
    if ( v77 == 15 || v76 == 15 )
    {
      sub_E7A970(a1, v29, a2, v78, v79, v65, v81, v82);
    }
    else if ( v76 == v77 )
    {
      v31 = v74;
      v32 = v75;
      if ( v76 == 12 )
      {
        if ( (unsigned __int8)sub_E79880(a1, a2, (__int64)v78, v79, (__int64)v81, v82, (__int64)v74, (__int64)v75) )
          goto LABEL_37;
      }
      else if ( v76 == 14 && (unsigned __int8)sub_E7A030(a1, a2, v78, v79, v81, v82, (__int64)v74, (__int64)v75) )
      {
        goto LABEL_37;
      }
      sub_FA3370(&v90, *a1, v31[6], 2335);
      sub_E74340(&v90, a2);
      sub_E74100(&v90, v79 == 0);
      sub_AC84E0(&v90, v78, v79);
      sub_E74100(&v90, v30);
      v33 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v31 + 16LL))(v31);
      v73 = 1;
      v72 = v33;
      sub_AC88D0((__int64 *)&v90, &v72);
      sub_AC6300((__int64)&v90);
      sub_FA3370(&v90, *a1, v32[6], 2517);
      sub_E74100(&v90, v82 == 0);
      sub_AC84E0(&v90, v81, v82);
      sub_E74100(&v90, v30);
      v34 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v32 + 16LL))(v32);
      v73 = 1;
      v72 = v34;
      sub_AC88D0((__int64 *)&v90, &v72);
      sub_AC6300((__int64)&v90);
    }
    else
    {
      sub_E7AAD0(a1, v29, a2, v78, v79, v65, v81, v82);
    }
LABEL_37:
    if ( v87 != v89 )
      free(v87);
    if ( v84 != v66 + 2 )
      free(v84);
    goto LABEL_41;
  }
  if ( !(unsigned __int8)sub_E794A0(
                           a1,
                           (v9 & 0xFFFFFFFFFFFFFFF8LL) + 8,
                           a2,
                           v78,
                           v79,
                           (__int64 *)(a4 + 8),
                           a3,
                           v81,
                           v82) )
  {
    v9 = *(_QWORD *)(a2 + 104);
    goto LABEL_5;
  }
LABEL_41:
  if ( v81 != &v83 )
    operator delete(v81);
  v4 = 1;
  if ( v78 != &v80 )
    operator delete(v78);
  return v4;
}

