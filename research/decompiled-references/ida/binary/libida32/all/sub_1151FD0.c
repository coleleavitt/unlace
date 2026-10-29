void __fastcall sub_1151FD0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // r15
  char *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  void *v17; // rax
  size_t v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rax
  bool v21; // zf
  _BYTE *v22; // r14
  signed __int64 v23; // rdx
  signed __int64 v24; // r12
  unsigned int v25; // eax
  int v26; // eax
  size_t v27; // rax
  unsigned int v28; // eax
  char v29; // al
  char v30; // r14
  char v31; // r12
  char v32; // r12
  _BYTE *v33; // rsi
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  char *v36; // r15
  char *v37; // rdx
  char *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rbp
  char *v41; // r12
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  __m128i *v44; // r15
  __int64 *v45; // r15
  _QWORD *v46; // rax
  __int64 *v47; // rdi
  void **v48; // r12
  void **v49; // rbp
  void **v50; // r12
  void **v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rcx
  _BYTE *v54; // rdi
  void **v55; // rbx
  int v56; // eax
  __int64 v57; // rax
  _BYTE *v58; // rsi
  __m128i *v59; // r15
  char *v60; // rdx
  _QWORD *v61; // rdi
  void **v62; // rdi
  int v63; // eax
  void *v65; // [rsp+10h] [rbp-488h]
  unsigned int v66; // [rsp+10h] [rbp-488h]
  __int64 v67; // [rsp+10h] [rbp-488h]
  void *v68; // [rsp+10h] [rbp-488h]
  int v69; // [rsp+10h] [rbp-488h]
  char *v70; // [rsp+18h] [rbp-480h] BYREF
  size_t v71; // [rsp+20h] [rbp-478h]
  _QWORD *v72; // [rsp+28h] [rbp-470h]
  void **p_ptr; // [rsp+30h] [rbp-468h]
  int v74; // [rsp+38h] [rbp-460h]
  char v75; // [rsp+3Ch] [rbp-45Ch]
  char v76; // [rsp+3Dh] [rbp-45Bh]
  char v77; // [rsp+3Eh] [rbp-45Ah]
  char v78; // [rsp+3Fh] [rbp-459h]
  _BYTE *v79; // [rsp+40h] [rbp-458h]
  void *v80; // [rsp+48h] [rbp-450h]
  void *v81[2]; // [rsp+50h] [rbp-448h] BYREF
  _BYTE v82[16]; // [rsp+60h] [rbp-438h] BYREF
  void *ptr; // [rsp+80h] [rbp-418h] BYREF
  __int64 v85; // [rsp+88h] [rbp-410h]
  char v86; // [rsp+90h] [rbp-408h] BYREF
  void *v87[2]; // [rsp+270h] [rbp-228h] BYREF
  _QWORD v88[2]; // [rsp+280h] [rbp-218h] BYREF
  __int16 v89; // [rsp+290h] [rbp-208h]

  v87[0] = (void *)0x79500000797LL;
  v7 = sub_2193060(a2, v87, 2);
  v8 = *(_QWORD *)(a2 + 8);
  v88[0] = 0x79500000797LL;
  v9 = (char *)(v8 + 8LL * (unsigned int)v7);
  v10 = (char *)(v8 + 8 * HIDWORD(v7));
  v70 = v10;
  *(__m128 *)v87 = _mm_loadh_ps((const double *)&v70);
  if ( v9 == v10 )
    goto LABEL_6;
  while ( 1 )
  {
    v11 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned __int8)sub_2195AD0(*(_QWORD *)v9, 1943) || (unsigned __int8)sub_2195AD0(v11, 1941) )
        break;
    }
    v9 += 8;
    v87[0] = v9;
    if ( v10 == v9 )
      goto LABEL_6;
  }
  v70 = v10;
  v88[0] = 0x79500000797LL;
  *(__m128 *)v87 = _mm_loadh_ps((const double *)&v70);
  if ( v10 == v9 )
  {
LABEL_6:
    sub_10B8890(a3, (__int64)"-fvisibility=hidden");
    sub_10B8890(a3, (__int64)"-fapply-global-visibility-to-externs");
  }
  else
  {
    while ( 2 )
    {
      v12 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 16LL) )
        v12 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      v13 = v9 + 8;
      *(_BYTE *)(v12 + 44) |= 1u;
      v87[0] = v13;
      if ( v13 != v10 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
          {
            if ( (unsigned __int8)sub_2195AD0(*(_QWORD *)v13, 1943) || (unsigned __int8)sub_2195AD0(v14, 1941) )
              break;
          }
          v13 += 8;
          v87[0] = v13;
          if ( v10 == v13 )
          {
            if ( !a4 )
              goto LABEL_8;
            goto LABEL_19;
          }
        }
        v9 = (char *)v87[0];
        if ( v10 != v87[0] )
          continue;
      }
      break;
    }
  }
  if ( !a4 )
  {
LABEL_8:
    if ( sub_10B8FF0(a2, 0xBF0u) )
      return;
  }
LABEL_19:
  if ( (unsigned __int8)sub_2193B10(a2, 3091, 3018, 1) )
  {
    v15 = sub_2193E80(a2, 2323, &byte_22CD811, 0);
    v17 = (void *)sub_1005B00(a1 + 16, v15, v16);
    v19 = (unsigned int)sub_228CEA0(v17, v18);
    v20 = sub_228CDC0(v19);
    v21 = *(_BYTE *)(a1 + 4880) == 0;
    v22 = (_BYTE *)v20;
    v24 = v23;
    v72 = (_QWORD *)(a1 + 3808);
    if ( v21 )
      sub_1151BC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800));
    v25 = sub_2220DF0(v22, v24);
    v26 = sub_2221120(a1 + 4192, v22, v24, v25);
    if ( v26 == -1 )
      sub_114A8D0((__int64 **)v87, (__int64 *)(*(_QWORD *)(a1 + 4192) + 8LL * *(unsigned int *)(a1 + 4200)), 1);
    else
      sub_114A8D0((__int64 **)v87, (__int64 *)(*(_QWORD *)(a1 + 4192) + 8LL * v26), 1);
    v65 = v87[0];
    sub_114A8D0((__int64 **)v87, (__int64 *)(*(_QWORD *)(a1 + 4192) + 8LL * *(unsigned int *)(a1 + 4200)), 1);
    if ( v65 == v87[0] )
    {
      v71 = j__strlen(&byte_22CD811);
      v70 = (char *)&byte_22CD811;
    }
    else
    {
      v27 = *(_QWORD *)(*(_QWORD *)v65 + 16LL);
      v70 = *(char **)(*(_QWORD *)v65 + 8LL);
      v71 = v27;
    }
    v28 = sub_1198880(*(_QWORD *)(a1 + 8), a2);
    if ( v28 < 4 )
      v28 = 4;
    v66 = 100 * v28;
    if ( !*(_BYTE *)(a1 + 4880) )
      sub_1151BC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800));
    if ( (unsigned __int8)sub_1149610((__int64 **)(a1 + 3808), v22, v24, (__int64)v70, v71, v66) )
    {
      v29 = sub_228CFC0((unsigned int)v19);
      v74 = 1;
      if ( (v29 & 0x40) != 0 )
        v74 = (unsigned __int8)sub_2193B10(a2, 2969, 2764, 0);
      v30 = 1;
      if ( !sub_10B8FF0(a2, 0xB6u) )
      {
        v30 = 0;
        if ( (_DWORD)v19 )
          v30 = (sub_228CFC0((unsigned int)v19) & 0x30) != 48;
      }
      v78 = sub_10B8FF0(a2, 0xB9u) != 0;
      v77 = sub_10B8FF0(a2, 0xC4u) != 0;
      v76 = sub_10B8FF0(a2, 0xB8u) != 0;
      v75 = sub_10B8FF0(a2, 0xBAu) != 0;
      v31 = 0;
      if ( (unsigned __int8)sub_2193B10(a2, 826, 1165, 1) )
      {
        sub_11088B0((__int64)v87, a1, a2);
        v32 = (char)v87[0];
        sub_11493D0(v87);
        v31 = v32 & 1;
      }
      v21 = *(_BYTE *)(a1 + 4880) == 0;
      p_ptr = &ptr;
      ptr = &v86;
      v85 = 0xC00000000LL;
      if ( v21 )
        sub_1151BC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800));
      v33 = *(_BYTE **)(a1 + 4264);
      if ( v33 )
      {
        v34 = (__int64)&v33[*(_QWORD *)(a1 + 4272)];
        v87[0] = v88;
        sub_1148360(v87, v33, v34);
      }
      else
      {
        LOBYTE(v88[0]) = 0;
        v87[1] = nullptr;
        v87[0] = v88;
      }
      if ( HIDWORD(v85) <= (unsigned int)v85 )
      {
        v80 = p_ptr + 2;
        v57 = sub_22136C0(p_ptr, p_ptr + 2, 0, 40, v81);
        v58 = v87[0];
        v59 = (__m128i *)v57;
        v60 = (char *)v87[0] + (unsigned __int64)v87[1];
        v61 = (_QWORD *)(v57 + 40LL * (unsigned int)v85);
        v79 = v61;
        *v61 = v61 + 2;
        sub_1148360(v61, v58, (__int64)v60);
        v62 = p_ptr;
        v79[32] = 1;
        sub_114D730((__int64)v62, v59);
        v63 = (int)v81[0];
        if ( ptr != v80 )
        {
          v79 = v81[0];
          free(ptr);
          v63 = (int)v79;
        }
        ptr = v59;
        HIDWORD(v85) = v63;
        LODWORD(v85) = v85 + 1;
      }
      else
      {
        v35 = v87[0];
        v36 = (char *)ptr + 40 * (unsigned int)v85;
        v37 = (char *)v87[0] + (unsigned __int64)v87[1];
        *(_QWORD *)v36 = v36 + 16;
        sub_1148360(v36, v35, (__int64)v37);
        LODWORD(v85) = v85 + 1;
        v36[32] = 1;
      }
      if ( v87[0] != v88 )
        operator delete(v87[0]);
      if ( !*(_BYTE *)(a1 + 4880) )
        sub_1151BC0((__int64)v72, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800));
      sub_114D920(v87, v72, v70, v71, v74, v30, v78, v77, v76, v75, v66, v31, 0);
      v38 = (char *)v87[0];
      v39 = (unsigned int)v85;
      v40 = 40LL * LODWORD(v87[1]);
      v41 = (char *)v87[0] + v40;
      v42 = 0xCCCCCCCCCCCCCCCDLL * (v40 >> 3);
      v43 = v42 + (unsigned int)v85;
      if ( v43 > HIDWORD(v85) )
      {
        v68 = p_ptr + 2;
        v44 = (__m128i *)sub_22136C0(p_ptr, p_ptr + 2, v43, 40, v81);
        sub_114D730((__int64)p_ptr, v44);
        v56 = (int)v81[0];
        if ( ptr != v68 )
        {
          v69 = (int)v81[0];
          free(ptr);
          v56 = v69;
        }
        ptr = v44;
        v39 = (unsigned int)v85;
        HIDWORD(v85) = v56;
      }
      else
      {
        v44 = (__m128i *)ptr;
      }
      v45 = &v44->m128i_i64[5 * v39];
      if ( v38 != v41 )
      {
        do
        {
          v46 = v45 + 2;
          v47 = v45;
          v38 += 40;
          v45 += 5;
          *(v45 - 5) = (__int64)v46;
          sub_11482A0(v47, *((_BYTE **)v38 - 5), *((_QWORD *)v38 - 5) + *((_QWORD *)v38 - 4));
          *((_BYTE *)v45 - 8) = *(v38 - 8);
        }
        while ( v41 != v38 );
        LODWORD(v39) = v85;
      }
      v48 = (void **)v87[0];
      LODWORD(v85) = v39 + v42;
      v49 = (void **)((char *)v87[0] + 40 * LODWORD(v87[1]));
      if ( v87[0] != v49 )
      {
        do
        {
          while ( 1 )
          {
            v49 -= 5;
            if ( *v49 == v49 + 2 )
              break;
            operator delete(*v49);
            if ( v48 == v49 )
              goto LABEL_54;
          }
        }
        while ( v48 != v49 );
LABEL_54:
        v49 = (void **)v87[0];
      }
      if ( v49 != v88 )
        free(v49);
      v50 = (void **)ptr;
      v51 = (void **)((char *)ptr + 40 * (unsigned int)v85);
      if ( ptr != v51 )
      {
        do
        {
          while ( 1 )
          {
            v81[0] = v82;
            sub_11482A0(v81, *v50, (__int64)v50[1] + (_QWORD)*v50);
            if ( *((_BYTE *)v50 + 32) )
              sub_10B8890(a3, (__int64)"-mlink-builtin-bitcode");
            else
              sub_10B8890(a3, (__int64)"-mlink-bitcode-file");
            v87[0] = v81;
            v89 = 260;
            v52 = sub_10B6980(a2, (__int64)v87);
            v53 = *(unsigned int *)(a3 + 8);
            if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              v67 = v52;
              sub_22134E0(a3, a3 + 16, v53 + 1, 8);
              v53 = *(unsigned int *)(a3 + 8);
              v52 = v67;
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v53) = v52;
            v54 = v81[0];
            ++*(_DWORD *)(a3 + 8);
            if ( v54 == v82 )
              break;
            operator delete(v54);
            v50 += 5;
            if ( v51 == v50 )
              goto LABEL_64;
          }
          v50 += 5;
        }
        while ( v51 != v50 );
LABEL_64:
        v55 = (void **)ptr;
        v51 = (void **)((char *)ptr + 40 * (unsigned int)v85);
        if ( ptr != v51 )
        {
          do
          {
            while ( 1 )
            {
              v51 -= 5;
              if ( *v51 == v51 + 2 )
                break;
              operator delete(*v51);
              if ( v51 == v55 )
                goto LABEL_67;
            }
          }
          while ( v51 != v55 );
LABEL_67:
          v51 = (void **)ptr;
        }
      }
      if ( v51 != p_ptr + 2 )
        free(v51);
    }
  }
}

