__int64 __fastcall sub_B7A590(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  __int64 (*v5)(); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rsi
  char **v15; // rax
  char **v16; // rdx
  _QWORD *v17; // rdi
  unsigned int v18; // ebx
  char v20; // di
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char **v24; // rdx
  char **v25; // rax
  char v26; // dl
  char **v27; // rdx
  __int64 v28; // rax
  char v29; // bl
  __int64 v30; // r12
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 (*v34)(); // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char *v43; // rsi
  char **v44; // rax
  char **v45; // rdx
  unsigned __int64 v46; // rax
  char v47; // dl
  char *v48; // rdi
  char *v49; // rcx
  char *v50; // rax
  char *v51; // rax
  __int64 v52; // rax
  char *v53; // r15
  unsigned __int64 v54; // rdx
  char *v55; // rbx
  void **v56; // [rsp+18h] [rbp-190h] BYREF
  __int64 v57; // [rsp+20h] [rbp-188h]
  char *v58; // [rsp+28h] [rbp-180h]
  char **v59; // [rsp+30h] [rbp-178h]
  __m128 *v60; // [rsp+38h] [rbp-170h]
  char *v61; // [rsp+48h] [rbp-160h] BYREF
  __m128 v62; // [rsp+50h] [rbp-158h] BYREF
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v64; // [rsp+68h] [rbp-140h]
  _BYTE v65[64]; // [rsp+70h] [rbp-138h] BYREF
  void *v66; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-F0h]
  int v68; // [rsp+C0h] [rbp-E8h]
  char v69; // [rsp+C4h] [rbp-E4h]
  char v70; // [rsp+C8h] [rbp-E0h] BYREF
  void *v71; // [rsp+110h] [rbp-98h] BYREF
  __int64 v72; // [rsp+118h] [rbp-90h]
  int v73; // [rsp+120h] [rbp-88h]
  char v74; // [rsp+124h] [rbp-84h]
  char v75; // [rsp+128h] [rbp-80h] BYREF

  v57 = a1;
  v56 = &v66;
  v66 = &v70;
  v71 = &v75;
  ptr = v65;
  v64 = 0x800000000LL;
  v4 = *(_QWORD *)a3;
  v67 = 8;
  v5 = *(__int64 (**)())(v4 + 32);
  v68 = 0;
  v69 = 1;
  v72 = 8;
  v73 = 0;
  v74 = 1;
  v61 = a3;
  if ( v5 == sub_9DD400 )
    v8 = sub_B4CD20((__int64)a3);
  else
    v8 = ((__int64 (__fastcall *)(char *))v5)(a3);
  v61 = (char *)v8;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v6, v7, v9, v10);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 128) + 1LL) & 0x40) == 0 )
  {
    if ( HIDWORD(v67) == v68 )
    {
      v58 = (char *)&v61;
      v62 = _mm_loadh_ps((const double *)&v56);
      if ( !(unsigned __int8)sub_B43950(v57, (__int64)sub_B72690, (__int64)&v62, v11, v12, v13) )
        goto LABEL_10;
    }
    else
    {
      v14 = v61;
      if ( v69 )
      {
        v15 = (char **)v66;
        v16 = (char **)((char *)v66 + 8 * HIDWORD(v67));
        if ( v66 != v16 )
        {
          do
          {
            if ( v61 == *v15 )
              goto LABEL_10;
            ++v15;
          }
          while ( v16 != v15 );
        }
        goto LABEL_20;
      }
      if ( sub_2212830(v56, v61) )
        goto LABEL_10;
    }
  }
  v14 = v61;
LABEL_20:
  v20 = v74;
  if ( !v74 )
    goto LABEL_27;
  v21 = (unsigned __int64)v71;
  v22 = HIDWORD(v72);
  v23 = 8LL * HIDWORD(v72);
  v24 = (char **)((char *)v71 + v23);
  if ( v71 != (char *)v71 + v23 )
  {
    v25 = (char **)v71;
    if ( *(char **)v71 == v14 )
    {
LABEL_90:
      v20 = 0;
LABEL_91:
      v27 = (char **)(v21 + 8LL * HIDWORD(v72));
      goto LABEL_29;
    }
    while ( v24 != ++v25 )
    {
      if ( *v25 == v14 )
        goto LABEL_90;
    }
  }
  if ( HIDWORD(v72) >= (unsigned int)v72 )
  {
LABEL_27:
    v25 = (char **)sub_2212A20(&v71, v14);
    v21 = (unsigned __int64)v71;
    v20 = v26;
    if ( !v74 )
    {
      v27 = (char **)((char *)v71 + 8 * (unsigned int)v72);
      goto LABEL_29;
    }
    goto LABEL_91;
  }
  v22 = (unsigned int)++HIDWORD(v72);
  *v24 = v14;
  v21 = (unsigned __int64)v71;
  v25 = (char **)((char *)v71 + v23);
  v27 = (char **)((char *)v71 + 8 * HIDWORD(v72));
LABEL_29:
  if ( v27 != v25 )
  {
    v21 = (unsigned __int64)(*v25 + 2);
    if ( v21 <= 1 )
    {
      do
        ++v25;
      while ( v27 != v25 && (unsigned __int64)*v25 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  v28 = (unsigned int)v64;
  if ( v20 )
  {
    v21 = HIDWORD(v64);
    v55 = v61;
    if ( (unsigned __int64)(unsigned int)v64 + 1 > HIDWORD(v64) )
    {
      v14 = v65;
      sub_22134E0(&ptr, v65, (unsigned int)v64 + 1LL, 8);
      v28 = (unsigned int)v64;
    }
    *((_QWORD *)ptr + v28) = v55;
    LODWORD(v28) = v64 + 1;
    LODWORD(v64) = v64 + 1;
  }
  v17 = ptr;
  if ( !(_DWORD)v28 )
  {
LABEL_58:
    v18 = 0;
    goto LABEL_11;
  }
  v59 = &v61;
  v60 = &v62;
  while ( 1 )
  {
    v29 = 1;
    v30 = v17[(unsigned int)v28 - 1];
    LODWORD(v64) = v28 - 1;
    v31 = sub_B5ABC0(v30, (__int64)v14, (unsigned int)v28, v21, v22, v23);
    v58 = v65;
    if ( v31 )
      break;
LABEL_57:
    LODWORD(v28) = v64;
    v17 = ptr;
    if ( !(_DWORD)v64 )
      goto LABEL_58;
  }
LABEL_38:
  if ( (*(_BYTE *)(v31 + 68) & 1) != 0 && !*(_QWORD *)(v31 + 40) )
    goto LABEL_56;
  if ( !v29 )
  {
    v14 = (char *)a2;
    if ( !(unsigned __int8)sub_B5AE10(v31, a2) )
      goto LABEL_56;
  }
  if ( *(char *)(v31 + 28) < 0 )
    goto LABEL_56;
  v14 = *(char **)(v31 + 48);
  v32 = sub_A4D710(a2, (__int64)v14);
  v33 = sub_F3F530(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v33 )
  {
LABEL_79:
    if ( *(_BYTE *)(v30 + 73) >> 5 != 2 )
      v29 = 0;
LABEL_56:
    while ( 1 )
    {
      v46 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v31 = v46;
      if ( !v46 )
        goto LABEL_57;
      if ( (*(_BYTE *)(v46 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_38;
    }
  }
  v61 = (char *)v33;
  v34 = *(__int64 (**)())(*(_QWORD *)v33 + 32LL);
  if ( v34 == sub_9DD400 )
    v39 = sub_B4CD20(v33);
  else
    v39 = ((__int64 (__fastcall *)(__int64))v34)(v33);
  v61 = (char *)v39;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v35, v36, v37, v38);
  if ( (*(_BYTE *)(*(_QWORD *)(v39 + 128) + 1LL) & 0x40) != 0 )
    goto LABEL_60;
  if ( HIDWORD(v67) == v68 )
  {
    v62 = _mm_loadh_ps((const double *)&v56);
    if ( !(unsigned __int8)sub_B43950(v57, (__int64)sub_B72690, (__int64)v60, v40, v41, v42) )
      goto LABEL_10;
    v43 = v61;
    goto LABEL_61;
  }
  v43 = v61;
  if ( !v69 )
  {
    if ( sub_2212830(v56, v61) )
      goto LABEL_10;
LABEL_60:
    v43 = v61;
LABEL_61:
    v47 = v74;
    if ( !v74 )
      goto LABEL_84;
    v48 = (char *)v71;
    v23 = HIDWORD(v72);
    v22 = 8LL * HIDWORD(v72);
    v49 = (char *)v71 + v22;
    if ( v71 != (char *)v71 + v22 )
    {
      v50 = (char *)v71;
      if ( *(char **)v71 == v43 )
      {
LABEL_86:
        v47 = 0;
        goto LABEL_69;
      }
      while ( 1 )
      {
        v50 += 8;
        if ( v49 == v50 )
          break;
        if ( *(char **)v50 == v43 )
          goto LABEL_86;
      }
    }
    if ( HIDWORD(v72) < (unsigned int)v72 )
    {
      v23 = (unsigned int)++HIDWORD(v72);
      *(_QWORD *)v49 = v43;
      v48 = (char *)v71;
      v50 = (char *)v71 + v22;
    }
    else
    {
LABEL_84:
      v50 = (char *)sub_2212A20(&v71, v43);
      v48 = (char *)v71;
      if ( !v74 )
      {
        v21 = (unsigned int)v72;
        v14 = (char *)v71 + 8 * (unsigned int)v72;
LABEL_70:
        if ( v14 != v50 && *(_QWORD *)v50 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v51 = v50 + 8;
          do
          {
            v21 = (unsigned __int64)v51;
            if ( v14 == v51 )
              break;
            v51 += 8;
          }
          while ( *(_QWORD *)v21 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v47 )
        {
          v52 = (unsigned int)v64;
          v21 = HIDWORD(v64);
          v53 = v61;
          v54 = (unsigned int)v64 + 1LL;
          if ( v54 > HIDWORD(v64) )
          {
            v14 = v58;
            sub_22134E0(&ptr, v58, v54, 8);
            v52 = (unsigned int)v64;
          }
          *((_QWORD *)ptr + v52) = v53;
          LODWORD(v64) = v64 + 1;
        }
        goto LABEL_79;
      }
    }
LABEL_69:
    v21 = HIDWORD(v72);
    v14 = &v48[8 * HIDWORD(v72)];
    goto LABEL_70;
  }
  v44 = (char **)v66;
  v45 = (char **)((char *)v66 + 8 * HIDWORD(v67));
  if ( v66 == v45 )
    goto LABEL_61;
  while ( v61 != *v44 )
  {
    if ( v45 == ++v44 )
      goto LABEL_61;
  }
LABEL_10:
  v17 = ptr;
  v18 = 1;
LABEL_11:
  if ( v17 != (_QWORD *)v65 )
    free(v17);
  if ( !v74 )
    free(v71);
  if ( !v69 )
    free(v66);
  return v18;
}

