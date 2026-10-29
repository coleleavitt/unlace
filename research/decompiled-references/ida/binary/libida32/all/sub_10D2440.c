__int64 __fastcall sub_10D2440(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // r12
  const char **v10; // rax
  size_t v11; // rsi
  const char *v12; // r13
  __int64 v13; // rax
  size_t v14; // rbp
  const char **v15; // rax
  const char *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r8d
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // rbx
  char *v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  size_t v36; // r15
  __int64 v37; // r14
  void *v38; // r13
  char *v39; // rsi
  __int64 v40; // rbx
  int v41; // r13d
  void *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r12
  void *v48; // rbx
  void *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rbp
  char *v52; // rax
  __int64 v53; // rdi
  signed __int64 v55; // rbx
  __int64 v56; // rax
  void *v57; // r15
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rax
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-1E0h]
  __int64 *v68; // [rsp+10h] [rbp-1D8h]
  unsigned int v69; // [rsp+18h] [rbp-1D0h]
  __int64 v70; // [rsp+20h] [rbp-1C8h]
  __int64 *v72; // [rsp+38h] [rbp-1B0h]
  _QWORD *v74; // [rsp+48h] [rbp-1A0h]
  __int64 v76; // [rsp+50h] [rbp-198h]
  __int64 v78; // [rsp+88h] [rbp-160h] BYREF
  _QWORD v79[4]; // [rsp+90h] [rbp-158h] BYREF
  void *v80; // [rsp+B0h] [rbp-138h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-130h]
  __int64 *v82; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-110h]
  _BYTE v84[32]; // [rsp+E0h] [rbp-108h] BYREF
  void *ptr; // [rsp+100h] [rbp-E8h] BYREF
  signed __int64 v86; // [rsp+108h] [rbp-E0h]
  _BYTE v87[32]; // [rsp+110h] [rbp-D8h] BYREF
  void *v88; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+138h] [rbp-B0h]
  _BYTE v90[32]; // [rsp+140h] [rbp-A8h] BYREF
  void *v91; // [rsp+160h] [rbp-88h] BYREF
  __int64 v92; // [rsp+168h] [rbp-80h]
  _BYTE v93[16]; // [rsp+170h] [rbp-78h] BYREF
  __int16 v94; // [rsp+180h] [rbp-68h]

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 80);
  v70 = v5;
  sub_220FAE0(v79);
  v80 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D70);
  v79[0] = &off_2BC1238;
  v79[2] = "Building universal build actions";
  v88 = v90;
  v89 = 0x400000000LL;
  v6 = v5;
  v7 = *(_QWORD **)(v5 + 8);
  v8 = &v7[*(unsigned int *)(v6 + 16)];
  if ( v8 == v7 )
    goto LABEL_28;
  while ( !*v7 )
  {
    if ( v8 == ++v7 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    v9 = *v7;
    if ( !(unsigned __int8)sub_2195AD0(*v7, 129) )
      goto LABEL_16;
    v10 = *(const char ***)(v9 + 48);
    v11 = 0;
    v12 = *v10;
    if ( *v10 )
      v11 = strlen(*v10);
    if ( !(unsigned int)sub_11C6760(v12, v11) )
    {
      sub_FA3370((__int64)&v91, *a1, 0, 371);
      sub_21922B0(&ptr, v9, v70);
      sub_AC84E0((unsigned __int8 **)&v91, ptr, v86);
      if ( ptr != v87 )
        operator delete(ptr);
      sub_AC6300((__int64)&v91);
LABEL_16:
      v22 = v7 + 1;
      if ( v8 == v7 + 1 )
        goto LABEL_27;
      goto LABEL_17;
    }
    v13 = *(_QWORD *)(v9 + 16);
    if ( !v13 )
      v13 = v9;
    v14 = 0;
    *(_BYTE *)(v13 + 44) |= 1u;
    v15 = *(const char ***)(v9 + 48);
    v16 = *v15;
    if ( *v15 )
      v14 = j__strlen(*v15);
    v17 = sub_2220DF0(v16, v14);
    v18 = (unsigned int)sub_2220F70(&v80, v16, v14, v17);
    v21 = (__int64 *)((char *)v80 + 8 * v18);
    if ( *v21 )
    {
      if ( *v21 != -8 )
      {
        sub_A21ED0((__int64 **)&v91, v21, 0);
        goto LABEL_16;
      }
      --si128.m128i_i32[2];
    }
    v69 = v18;
    v23 = sub_220C370(v14 + 9, 8, v18, v19, v18, v20);
    v24 = v69;
    v25 = (_QWORD *)v23;
    if ( v14 )
    {
      v74 = (_QWORD *)v23;
      memcpy((void *)(v23 + 8), v16, v14);
      v25 = v74;
      v24 = v69;
    }
    *((_BYTE *)v25 + v14 + 8) = 0;
    *v25 = v14;
    *v21 = (__int64)v25;
    ++si128.m128i_i32[1];
    v26 = sub_2221390(&v80, v24);
    sub_A21ED0((__int64 **)&v91, (__int64 *)v80 + v26, 0);
    v27 = **(_QWORD **)(v9 + 48);
    v28 = (unsigned int)v89;
    v29 = (unsigned int)v89 + 1LL;
    if ( v29 > HIDWORD(v89) )
    {
      sub_22134E0(&v88, v90, v29, 8);
      v28 = (unsigned int)v89;
    }
    *((_QWORD *)v88 + v28) = v27;
    v22 = v7 + 1;
    LODWORD(v89) = v89 + 1;
    if ( v8 == v7 + 1 )
      goto LABEL_27;
LABEL_17:
    if ( !v7[1] )
      break;
LABEL_4:
    v7 = v22;
  }
  while ( v8 != ++v22 )
  {
    if ( *v22 )
      goto LABEL_4;
  }
LABEL_27:
  v4 = a2;
LABEL_28:
  if ( !(_DWORD)v89 )
  {
    v64 = (void *)sub_1108EA0(a3);
    v94 = 261;
    v91 = v64;
    v92 = v65;
    v66 = sub_10B6980(v70, (__int64)&v91);
    sub_10B8890((__int64)&v88, v66);
  }
  v82 = (__int64 *)v84;
  v83 = 0x300000000LL;
  sub_10CFA20((__int64)a1, v4, v70, a4, (__int64)&v82);
  v72 = &v82[(unsigned int)v83];
  if ( v82 != v72 )
  {
    v68 = v82;
    v76 = v4 + 112;
    while ( 1 )
    {
      v30 = *v68;
      v31 = v89;
      if ( (unsigned int)v89 > 1 )
      {
        if ( !(unsigned __int8)sub_12A8E40(*(unsigned int *)(v30 + 12)) )
        {
          sub_FA3370((__int64)&v91, *a1, 0, 391);
          v63 = sub_12A8B80(*(unsigned int *)(v30 + 12));
          sub_10B4AF0((unsigned __int8 **)&v91, v63);
          sub_AC6300((__int64)&v91);
        }
        v31 = v89;
      }
      ptr = v87;
      v86 = 0x300000000LL;
      if ( v31 )
      {
        v32 = 0;
        v67 = 8LL * (unsigned int)(v31 - 1) + 8;
        do
        {
          while ( 1 )
          {
            v36 = 0;
            v37 = *(_QWORD *)((char *)v88 + v32);
            if ( v37 )
              v36 = strlen(*(const char **)((char *)v88 + v32));
            v38 = (void *)operator new(0x68u);
            sub_10AF1F0((__int64)v38, v30, v37, v36);
            v91 = v38;
            v39 = *(char **)(v4 + 96);
            if ( v39 == *(char **)(v4 + 104) )
            {
              sub_10C6F70(v4 + 88, v39, &v91);
            }
            else
            {
              v91 = nullptr;
              v33 = v39 + 8;
              *((_QWORD *)v33 - 1) = v38;
              *(_QWORD *)(v4 + 96) = v33;
            }
            if ( v91 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v91 + 8LL))(v91);
            v34 = (unsigned int)v86 + 1LL;
            if ( v34 > HIDWORD(v86) )
              break;
            v32 += 8;
            *((_QWORD *)ptr + (unsigned int)v86) = v38;
            v35 = v86 + 1;
            LODWORD(v86) = v86 + 1;
            if ( v67 == v32 )
              goto LABEL_45;
          }
          v32 += 8;
          sub_22134E0(&ptr, v87, v34, 8);
          *((_QWORD *)ptr + (unsigned int)v86) = v38;
          v35 = v86 + 1;
          LODWORD(v86) = v86 + 1;
        }
        while ( v32 != v67 );
LABEL_45:
        v40 = v35;
        if ( v35 == 1 )
        {
          v40 = 1;
          goto LABEL_78;
        }
      }
      else
      {
        v40 = 0;
      }
      v41 = *(_DWORD *)(v30 + 12);
      if ( v41 != 67 )
      {
        v42 = (void *)operator new(0x58u);
        sub_10AEBC0((__int64)v42, (__int64)&ptr, v41);
        v91 = v42;
        sub_10C7210(v4 + 88, (__int64 *)&v91);
        if ( v91 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v91 + 8LL))(v91);
        v43 = *(unsigned int *)(v4 + 120);
        if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 124) )
        {
          sub_22134E0(v76, v4 + 128, v43 + 1, 8);
          v43 = *(unsigned int *)(v4 + 120);
        }
        *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * v43) = v42;
        ++*(_DWORD *)(v4 + 120);
        goto LABEL_52;
      }
LABEL_78:
      v55 = 8 * v40;
      v56 = *(unsigned int *)(v4 + 120);
      v57 = ptr;
      v58 = (v55 >> 3) + v56;
      if ( v58 > *(unsigned int *)(v4 + 124) )
      {
        sub_22134E0(v76, v4 + 128, v58, 8);
        v56 = *(unsigned int *)(v4 + 120);
      }
      if ( v55 )
      {
        memcpy((void *)(*(_QWORD *)(v4 + 112) + 8 * v56), v57, v55);
        LODWORD(v56) = *(_DWORD *)(v4 + 120);
      }
      *(_DWORD *)(v4 + 120) = (v55 >> 3) + v56;
LABEL_52:
      v44 = sub_10B8FF0(v70, 0x24u);
      v45 = v44;
      if ( v44 && !(unsigned __int8)sub_2195AD0(v44, 1982) && !(unsigned __int8)sub_2195AD0(v45, 2073)
        || (unsigned __int8)sub_10B7CF0(v70) )
      {
        v46 = *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8LL * *(unsigned int *)(v4 + 120) - 8);
        if ( (unsigned int)(*(_DWORD *)(v46 + 8) - 7) <= 2 )
        {
          if ( *(_DWORD *)(v30 + 12) == 60 )
            goto LABEL_92;
          goto LABEL_57;
        }
        v59 = *(_QWORD **)(v46 + 16);
        v60 = &v59[*(unsigned int *)(v46 + 24)];
        if ( v60 != sub_10B5130(v59, (__int64)v60) )
        {
          if ( *(_DWORD *)(v30 + 12) == 60 )
          {
LABEL_92:
            v61 = *(unsigned int *)(v4 + 120);
            v91 = v93;
            v92 = 0x300000000LL;
            sub_10B8770((__int64)&v91, *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * v61 - 8));
            --*(_DWORD *)(v4 + 120);
            v62 = operator new(0x58u);
            sub_10AEC80(v62, (__int64)&v91, 61);
            v78 = v62;
            sub_10C7210(v4 + 88, &v78);
            if ( v78 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
            sub_10B8770(v76, v62);
            if ( v91 != v93 )
              free(v91);
          }
LABEL_57:
          if ( sub_10B8FF0(v70, 0xD31u) )
          {
            v47 = *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 120))-- - 8);
            v48 = (void *)operator new(0x58u);
            sub_10AF530((__int64)v48, v47, 67);
            v91 = v48;
            sub_10C7210(v4 + 88, (__int64 *)&v91);
            if ( v91 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v91 + 8LL))(v91);
            sub_10B8770(v76, (__int64)v48);
          }
        }
      }
      if ( ptr == v87 )
      {
        if ( v72 == ++v68 )
        {
LABEL_63:
          v72 = v82;
          break;
        }
      }
      else
      {
        free(ptr);
        if ( v72 == ++v68 )
          goto LABEL_63;
      }
    }
  }
  if ( v72 != (__int64 *)v84 )
    free(v72);
  if ( v88 != v90 )
    free(v88);
  v49 = v80;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v50 = 0;
    v51 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v52 = (char *)v80;
    do
    {
      v53 = *(_QWORD *)&v52[v50];
      if ( v53 && v53 != -8 )
      {
        operator delete();
        v52 = (char *)v80;
      }
      v50 += 8;
    }
    while ( v51 != v50 );
    v49 = v52;
  }
  free(v49);
  v79[0] = &off_2BC1238;
  return sub_220FB60(v79);
}

