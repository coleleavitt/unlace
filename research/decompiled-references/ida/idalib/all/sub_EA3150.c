__int64 __fastcall sub_EA3150(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 i; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 j; // rbx
  unsigned int v20; // r13d
  __int64 v21; // rax
  char *v22; // rax
  _QWORD *v23; // r10
  __int64 v24; // rbp
  unsigned int *v25; // r13
  unsigned int *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  _DWORD *v47; // rax
  __int64 v48; // rdi
  int v49; // edx
  __int64 v50; // rbp
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // rdi
  int v57; // edx
  __int64 v59; // [rsp+20h] [rbp-2B8h]
  __int64 v60; // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v62; // [rsp+40h] [rbp-298h]
  unsigned __int64 v63; // [rsp+48h] [rbp-290h]
  __int64 v64; // [rsp+54h] [rbp-284h] BYREF
  char v65; // [rsp+5Ch] [rbp-27Ch]
  unsigned int *v66; // [rsp+60h] [rbp-278h] BYREF
  unsigned int *v67; // [rsp+68h] [rbp-270h]
  int v68; // [rsp+70h] [rbp-268h]
  int v69; // [rsp+74h] [rbp-264h]
  void *v70; // [rsp+80h] [rbp-258h] BYREF
  __int64 v71; // [rsp+88h] [rbp-250h]
  __int64 v72; // [rsp+90h] [rbp-248h] BYREF
  void *v73; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-230h]
  __int64 v75; // [rsp+B0h] [rbp-228h] BYREF
  void *v76; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-210h]
  _BYTE v78[64]; // [rsp+D0h] [rbp-208h] BYREF
  void *v79; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v80; // [rsp+118h] [rbp-1C0h]
  _BYTE v81[64]; // [rsp+120h] [rbp-1B8h] BYREF
  unsigned __int8 *v82; // [rsp+160h] [rbp-178h] BYREF
  __int64 v83; // [rsp+168h] [rbp-170h]
  unsigned int v84; // [rsp+170h] [rbp-168h]
  void *v85; // [rsp+178h] [rbp-160h]
  __m128i si128; // [rsp+180h] [rbp-158h]
  _BYTE v87[128]; // [rsp+190h] [rbp-148h] BYREF
  void *ptr; // [rsp+210h] [rbp-C8h]
  __int64 v89; // [rsp+218h] [rbp-C0h]
  _BYTE v90[184]; // [rsp+220h] [rbp-B8h] BYREF

  v4 = 0;
  if ( a3 == a2 )
    return v4;
  sub_E9C270((__int64)&v70, a2);
  sub_E9C270((__int64)&v73, a3);
  v9 = *(_QWORD *)(a2 + 104);
  if ( a4 == (v9 & 0xFFFFFFFFFFFFFFF8LL) )
  {
LABEL_5:
    v76 = v78;
    v77 = 0x400000000LL;
    v79 = v81;
    v80 = 0x400000000LL;
    if ( !v9 )
    {
      v34 = *(_QWORD *)(a2 + 96);
      v35 = *(_QWORD *)(v34 + 88);
      v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v35 & 1) == 0 )
      {
        v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v35 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v35 & 2) == 0 )
            goto LABEL_55;
          v50 = v37[2295];
          v51 = v34 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v50 )
          {
            v52 = v37[294];
            v37[304] += 24LL;
            v53 = (v52 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v37[295] >= v53 + 24 && v52 )
            {
              v37[294] = v53 + 24;
              v54 = (v52 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v54 = sub_986170((__int64)(v37 + 294), 24, 24, 3, v7, v8);
              v53 = v54 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v54 = v50;
            v51 = v53 | 4;
            *(_DWORD *)(v54 + 8) = 0;
            *(_QWORD *)(v54 + 16) = v34;
          }
          v36 = v51 & 0xFFFFFFFFFFFFFFFELL;
          v35 = v36 | 1;
          *(_QWORD *)(v34 + 88) = v36 | 1;
        }
      }
      if ( v36 )
      {
        if ( (v36 & 4) != 0 )
        {
          v55 = (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v55 )
          {
            v56 = *(_QWORD *)v55;
            v57 = *(_DWORD *)(*(_QWORD *)v55 + 12LL);
            if ( v55[2] != v57 )
            {
              v55[2] = v57;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 152LL))(v56, v34);
            }
          }
        }
      }
      v9 = *(_QWORD *)(a2 + 104);
    }
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 && *v10 )
    {
      v59 = *v10 + 48LL;
      goto LABEL_9;
    }
LABEL_55:
    v59 = 0;
LABEL_9:
    for ( i = sub_B8E970(a2 + 48); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_EA4B10(i, v59) )
      {
        v82 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v89 = 0x2000000000LL;
        v83 = 0;
        v84 = 0;
        v85 = v87;
        ptr = v90;
        sub_EA90F0(&v82, i);
        v14 = sub_EA4990(&v82);
        if ( ptr != v90 )
          free(ptr);
        if ( v85 != v87 )
          free(v85);
        operator delete(v82, 16LL * v84, 8);
        v15 = (unsigned int)v77;
        if ( (unsigned int)v77 >= (unsigned __int64)HIDWORD(v77) )
        {
          v32 = v14 | v63 & 0xFFFFFFFF00000000LL;
          v63 = v32;
          if ( HIDWORD(v77) < (unsigned __int64)(unsigned int)v77 + 1 )
          {
            sub_2237220(&v76, v78, (unsigned int)v77 + 1LL, 16);
            v15 = (unsigned int)v77;
          }
          v33 = (unsigned __int64 *)((char *)v76 + 16 * v15);
          *v33 = i;
          v33[1] = v32;
          LODWORD(v77) = v77 + 1;
        }
        else
        {
          v16 = (char *)v76 + 16 * (unsigned int)v77;
          *(_QWORD *)v16 = i;
          *((_DWORD *)v16 + 2) = v14;
          LODWORD(v77) = v77 + 1;
        }
      }
    }
    v17 = *(_QWORD *)(a3 + 104);
    if ( !v17 )
    {
      v38 = *(_QWORD *)(a3 + 96);
      v39 = *(_QWORD *)(v38 + 88);
      v40 = v39 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v39 & 1) == 0 )
      {
        v41 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v39 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v39 & 2) == 0 )
            goto LABEL_63;
          v42 = v41[2295];
          v43 = v38 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v42 )
          {
            v44 = v41[294];
            v41[304] += 24LL;
            v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v41[295] >= v45 + 24 && v44 )
            {
              v41[294] = v45 + 24;
              v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v46 = sub_986170((__int64)(v41 + 294), 24, 24, 3, v12, v13);
              v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v46 = v42;
            v43 = v45 | 4;
            *(_DWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 16) = v38;
          }
          v40 = v43 & 0xFFFFFFFFFFFFFFFELL;
          v39 = v40 | 1;
          *(_QWORD *)(v38 + 88) = v40 | 1;
        }
      }
      if ( v40 )
      {
        if ( (v40 & 4) != 0 )
        {
          v47 = (_DWORD *)(v39 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v47 )
          {
            v48 = *(_QWORD *)v47;
            v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
            if ( v47[2] != v49 )
            {
              v47[2] = v49;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 152LL))(v48, v38);
            }
          }
        }
      }
      v17 = *(_QWORD *)(a3 + 104);
    }
    v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v18 && *v18 )
    {
      v60 = *v18 + 48LL;
      goto LABEL_22;
    }
LABEL_63:
    v60 = 0;
LABEL_22:
    for ( j = sub_B8E970(a3 + 48); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_EA4B10(j, v60) )
      {
        v82 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v89 = 0x2000000000LL;
        v83 = 0;
        v84 = 0;
        v85 = v87;
        ptr = v90;
        sub_EA90F0(&v82, j);
        v20 = sub_EA4990(&v82);
        if ( ptr != v90 )
          free(ptr);
        if ( v85 != v87 )
          free(v85);
        operator delete(v82, 16LL * v84, 8);
        v21 = (unsigned int)v80;
        if ( (unsigned int)v80 >= (unsigned __int64)HIDWORD(v80) )
        {
          v30 = v20 | v62 & 0xFFFFFFFF00000000LL;
          v62 = v30;
          if ( HIDWORD(v80) < (unsigned __int64)(unsigned int)v80 + 1 )
          {
            sub_2237220(&v79, v81, (unsigned int)v80 + 1LL, 16);
            v21 = (unsigned int)v80;
          }
          v31 = (unsigned __int64 *)((char *)v79 + 16 * v21);
          *v31 = j;
          v31[1] = v30;
          LODWORD(v80) = v80 + 1;
        }
        else
        {
          v22 = (char *)v79 + 16 * (unsigned int)v80;
          *(_QWORD *)v22 = j;
          *((_DWORD *)v22 + 2) = v20;
          LODWORD(v80) = v80 + 1;
        }
      }
    }
    sub_E9E370((__int64)&v66, (__int64 **)&v76, (__int64 **)&v79);
    v24 = v68;
    if ( v69 == 15 || v68 == 15 )
    {
      sub_E9E6B0(a1, v23, a2, v70, v71, a3, v73, v74);
    }
    else if ( v68 == v69 )
    {
      v25 = v66;
      v26 = v67;
      if ( v68 == 12 )
      {
        if ( (unsigned __int8)sub_E9D5C0(a1, a2, (__int64)v70, v71, (__int64)v73, v74, (__int64)v66, (__int64)v67) )
          goto LABEL_37;
      }
      else if ( v68 == 14 && (unsigned __int8)sub_E9DD70(a1, a2, v70, v71, v73, v74, (__int64)v66, (__int64)v67) )
      {
        goto LABEL_37;
      }
      sub_FC70B0(&v82, *a1, v25[6], 2335);
      sub_E98080(&v82, a2);
      sub_E97E40(&v82, v71 == 0);
      sub_AEC220(&v82, v70, v71);
      sub_E97E40(&v82, v24);
      v27 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v25 + 16LL))(v25);
      v65 = 1;
      v64 = v27;
      sub_AEC610((__int64 *)&v82, &v64);
      sub_AEA040((__int64)&v82);
      sub_FC70B0(&v82, *a1, v26[6], 2517);
      sub_E97E40(&v82, v74 == 0);
      sub_AEC220(&v82, v73, v74);
      sub_E97E40(&v82, v24);
      v28 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v26 + 16LL))(v26);
      v65 = 1;
      v64 = v28;
      sub_AEC610((__int64 *)&v82, &v64);
      sub_AEA040((__int64)&v82);
    }
    else
    {
      sub_E9E810(a1, v23, a2, v70, v71, a3, v73, v74);
    }
LABEL_37:
    if ( v79 != v81 )
      free(v79);
    if ( v76 != v78 )
      free(v76);
    goto LABEL_41;
  }
  if ( !(unsigned __int8)sub_E9D1E0(
                           a1,
                           (v9 & 0xFFFFFFFFFFFFFFF8LL) + 8,
                           a2,
                           v70,
                           v71,
                           (__int64 *)(a4 + 8),
                           a3,
                           v73,
                           v74) )
  {
    v9 = *(_QWORD *)(a2 + 104);
    goto LABEL_5;
  }
LABEL_41:
  if ( v73 != &v75 )
    operator delete(v73);
  v4 = 1;
  if ( v70 != &v72 )
    operator delete(v70);
  return v4;
}
