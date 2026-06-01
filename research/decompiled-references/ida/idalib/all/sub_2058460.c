__int64 __fastcall sub_2058460(char **a1, __int64 a2)
{
  int v3; // r12d
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  __int64 v7; // r14
  bool v8; // al
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  size_t v14; // r12
  __int64 v16; // rdi
  __int64 v17; // r8
  char **v18; // r8
  char *v19; // rdi
  char *v20; // r14
  __int64 *v21; // rax
  char **v22; // r15
  unsigned __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rdi
  int v26; // eax
  __int64 *v27; // rax
  int v28; // eax
  __int64 *v29; // rax
  unsigned __int8 v30; // al
  char *v31; // rdx
  char **v32; // r13
  char *v33; // rax
  char **v34; // r14
  __int16 v35; // si
  void *v36; // rdi
  char **v37; // r13
  char *v38; // rdx
  char **v39; // r12
  _QWORD *v40; // rax
  char **v41; // r13
  char *v42; // rax
  char **v43; // r12
  _QWORD *v44; // rsi
  char *v45; // rdx
  char **v46; // r13
  char *v47; // rax
  char **v48; // r14
  __int64 v49; // rsi
  char **v50; // r13
  char *v51; // rax
  char **v52; // r12
  _QWORD *v53; // rsi
  __int64 v54; // rax
  char *v55; // rdx
  char **v56; // r13
  char *v57; // rax
  char **v58; // r14
  __int64 v59; // rsi
  __int64 v60; // r12
  char *v61; // r13
  __int64 v62; // rax
  __int64 v63; // r12
  char *v64; // r13
  __int64 v65; // rax
  __int64 v66; // r12
  char *v67; // r13
  __int64 v68; // rax
  char **v69; // [rsp+8h] [rbp-E0h]
  void *v70; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v71; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v74[176]; // [rsp+38h] [rbp-B0h] BYREF

  v3 = a2;
  v5 = sub_20C4FC0(*((_QWORD *)*a1 + 1), a2);
  v6 = (unsigned __int8 *)*a1;
  v7 = v5;
  v8 = sub_20510E0(*a1, a2);
  v10 = *v6;
  LOBYTE(v11) = (unsigned __int8)v10 <= 1u;
  LOBYTE(v13) = byte_2CFCCD8 & ((_BYTE)v10 == 6);
  v12 = (unsigned int)v13;
  LOBYTE(v13) = (_BYTE)v10 == 5;
  if ( ((unsigned __int8)byte_2CFCD98 & ((_BYTE)v10 == 5)) != 0 || (LOBYTE(v11) = v8 | v11, (_BYTE)v11) )
  {
    if ( (_DWORD)a2 == 1 )
      goto LABEL_8;
  }
  else
  {
    if ( !(_BYTE)v12 )
      goto LABEL_12;
    if ( (_DWORD)a2 == 1 )
    {
LABEL_26:
      v26 = *(_DWORD *)(v7 + 32);
      BYTE4(v70) = *(_BYTE *)(v7 + 8) == 18;
      LODWORD(v70) = v26;
      v27 = (__int64 *)sub_20CB0D0(v6);
      return sub_2056560(v27, (__int64)v70, (_QWORD *)v6 + 3);
    }
  }
  if ( v6 != (unsigned __int8 *)a1[1] )
    goto LABEL_12;
  LODWORD(v13) = 1;
  while ( 1 )
  {
    v13 = (unsigned int)(v13 + 1);
    if ( v3 == (_DWORD)v13 )
      break;
    v11 = (unsigned int)v13;
    if ( v6 != (unsigned __int8 *)a1[(unsigned int)v13] )
      goto LABEL_12;
  }
LABEL_8:
  if ( !v8 )
  {
    if ( (_BYTE)v10 == 1 )
      return sub_2058290((_QWORD *)v7, v10, v13, v11, v12, v9);
    if ( (unsigned __int8)v10 <= 1u )
      return sub_2057E60((_QWORD *)v7, v10, v13, v11, v12, v9);
    if ( !(_BYTE)v12 )
    {
      if ( ((unsigned __int8)byte_2CFCD98 & ((_BYTE)v10 == 5)) != 0 )
      {
        v28 = *(_DWORD *)(v7 + 32);
        BYTE4(ptr) = *(_BYTE *)(v7 + 8) == 18;
        LODWORD(ptr) = v28;
        v29 = (__int64 *)sub_20CB0D0(v6);
        return sub_20555B0(v29, (__int64)ptr, (__int64)(v6 + 24));
      }
LABEL_12:
      v14 = 0;
      v16 = *((_QWORD *)v6 + 1);
      if ( !sub_2051E40(v16) )
        return v14;
      if ( (_BYTE)v10 == 5 )
      {
        if ( (unsigned __int8)sub_20C2F40(v16, 8) )
        {
          v18 = &a1[a2];
          v19 = *a1;
          v20 = v74;
          ptr = v74;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          if ( a1 == v18 )
          {
            v14 = 0;
          }
          else
          {
            if ( *v19 != 5 )
              return v14;
            v21 = *((__int64 **)v19 + 3);
            v22 = a1 + 1;
            v23 = 16;
            LOBYTE(v24) = (_BYTE)v21;
            if ( *((_DWORD *)v19 + 8) <= 0x40u )
              goto LABEL_19;
LABEL_18:
            v24 = *v21;
            while ( 1 )
            {
LABEL_19:
              if ( v14 + 1 > v23 )
              {
                v69 = v18;
                sub_2236E10(&ptr, v74, v14 + 1, 1);
                v14 = si128.m128i_i64[0];
                v18 = v69;
              }
              *((_BYTE *)ptr + v14) = v24;
              v14 = ++si128.m128i_i64[0];
              if ( v18 == v22 )
                break;
              v25 = (__int64)*v22++;
              if ( *(_BYTE *)v25 != 5 )
                goto LABEL_47;
              v21 = *(__int64 **)(v25 + 24);
              v23 = si128.m128i_u64[1];
              LOBYTE(v24) = (_BYTE)v21;
              if ( *(_DWORD *)(v25 + 32) > 0x40u )
                goto LABEL_18;
            }
            v20 = (char *)ptr;
            v19 = *a1;
          }
          v54 = sub_20CB0D0(v19);
          v14 = sub_2057370(v54, v20, v14);
          goto LABEL_48;
        }
        if ( (unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 16) )
        {
          v37 = &a1[a2];
          v38 = *a1;
          ptr = v74;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          if ( a1 != v37 )
          {
            if ( *v38 != 5 )
              return v14;
            v39 = a1 + 1;
            while ( 1 )
            {
              v40 = *((_QWORD **)v38 + 3);
              if ( *((_DWORD *)v38 + 8) > 0x40u )
                v40 = (_QWORD *)*v40;
              sub_2053F70(&ptr, (__int16)v40);
              if ( v37 == v39 )
                break;
              v38 = *v39++;
              if ( *v38 != 5 )
                goto LABEL_47;
            }
          }
          v60 = si128.m128i_i64[0];
          v61 = (char *)ptr;
          v62 = sub_20CB0D0(*a1);
          v14 = sub_2057340(v62, v61, v60);
LABEL_48:
          v36 = ptr;
          if ( ptr == v74 )
            return v14;
LABEL_49:
          free(v36);
          return v14;
        }
        if ( (unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 32) )
        {
          v41 = &a1[a2];
          ptr = &si128.m128i_u64[1];
          si128.m128i_i64[0] = 0x1000000000LL;
          v42 = *a1;
          if ( a1 != v41 )
          {
            if ( *v42 != 5 )
              return v14;
            v43 = a1 + 1;
            while ( 1 )
            {
              v44 = *((_QWORD **)v42 + 3);
              if ( *((_DWORD *)v42 + 8) > 0x40u )
                v44 = (_QWORD *)*v44;
              sub_9B7040((__int64)&ptr, (int)v44);
              if ( v41 == v43 )
                break;
              v42 = *v43++;
              if ( *v42 != 5 )
                goto LABEL_68;
            }
          }
          v63 = si128.m128i_u32[0];
          v64 = (char *)ptr;
          v65 = sub_20CB0D0(*a1);
          v14 = sub_2057300(v65, v64, v63);
          goto LABEL_69;
        }
        if ( (unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 64) )
        {
          v50 = &a1[a2];
          ptr = &si128.m128i_u64[1];
          si128.m128i_i64[0] = 0x1000000000LL;
          v51 = *a1;
          if ( a1 != v50 )
          {
            if ( *v51 != 5 )
              return v14;
            v52 = a1 + 1;
            while ( 1 )
            {
              v53 = *((_QWORD **)v51 + 3);
              if ( *((_DWORD *)v51 + 8) > 0x40u )
                v53 = (_QWORD *)*v53;
              sub_9B9C90((__int64)&ptr, (__int64)v53);
              if ( v50 == v52 )
                break;
              v51 = *v52++;
              if ( *v51 != 5 )
                goto LABEL_68;
            }
          }
          v66 = si128.m128i_u32[0];
          v67 = (char *)ptr;
          v68 = sub_20CB0D0(*a1);
          v14 = sub_20572C0(v68, v67, v66);
          goto LABEL_69;
        }
      }
      else if ( (_BYTE)v10 == 6 )
      {
        v30 = *(_BYTE *)(v17 + 8);
        if ( v30 <= 1u )
        {
          v31 = *a1;
          v32 = &a1[a2];
          ptr = v74;
          v33 = v31;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          if ( a1 != v32 )
          {
            if ( *v31 != 6 )
              return v14;
            v34 = a1;
            while ( 1 )
            {
              sub_1F6DD40((__int64)&v70, (_QWORD *)v31 + 3, (__int64)v31);
              v35 = -1;
              if ( !sub_9EC640((__int64)&v70, 0xFFFFFFFFFFFFFFFFLL) )
              {
                if ( v71 <= 0x40 )
                  v35 = (__int16)v70;
                else
                  v35 = *(_WORD *)v70;
              }
              sub_2053F70(&ptr, v35);
              if ( v71 > 0x40 && v70 )
                operator delete[](v70);
              if ( v32 == ++v34 )
                break;
              v31 = *v34;
              if ( **v34 != 6 )
              {
LABEL_47:
                v14 = 0;
                goto LABEL_48;
              }
            }
            v33 = *a1;
          }
          v14 = sub_2057290(*((_QWORD *)v33 + 1), (char *)ptr, si128.m128i_i64[0]);
          goto LABEL_48;
        }
        if ( v30 == 2 )
        {
          v55 = *a1;
          v56 = &a1[a2];
          ptr = &si128.m128i_u64[1];
          si128.m128i_i64[0] = 0x1000000000LL;
          v57 = v55;
          if ( a1 != v56 )
          {
            if ( *v55 != 6 )
              return v14;
            v58 = a1;
            while ( 1 )
            {
              sub_1F6DD40((__int64)&v70, (_QWORD *)v55 + 3, (__int64)v55);
              LODWORD(v59) = -1;
              if ( !sub_9EC640((__int64)&v70, 0xFFFFFFFFFFFFFFFFLL) )
              {
                LODWORD(v59) = (_DWORD)v70;
                if ( v71 > 0x40 )
                  v59 = *(_QWORD *)v70;
              }
              sub_9B7040((__int64)&ptr, v59);
              if ( v71 > 0x40 && v70 )
                operator delete[](v70);
              if ( v56 == ++v58 )
                break;
              v55 = *v58;
              if ( **v58 != 6 )
              {
LABEL_68:
                v14 = 0;
                goto LABEL_69;
              }
            }
            v57 = *a1;
          }
          v14 = sub_2057260(*((_QWORD *)v57 + 1), (char *)ptr, si128.m128i_u32[0]);
LABEL_69:
          v36 = ptr;
          if ( ptr == &si128.m128i_u64[1] )
            return v14;
          goto LABEL_49;
        }
        if ( v30 == 3 )
        {
          v45 = *a1;
          v46 = &a1[a2];
          ptr = &si128.m128i_u64[1];
          si128.m128i_i64[0] = 0x1000000000LL;
          v47 = v45;
          if ( a1 != v46 )
          {
            if ( *v45 != 6 )
              return v14;
            v48 = a1 + 1;
            while ( 1 )
            {
              sub_1F6DD40((__int64)&v70, (_QWORD *)v45 + 3, (__int64)v45);
              v49 = -1;
              if ( !sub_9EC640((__int64)&v70, 0xFFFFFFFFFFFFFFFFLL) )
              {
                v49 = (__int64)v70;
                if ( v71 > 0x40 )
                  v49 = *(_QWORD *)v70;
              }
              sub_9B9C90((__int64)&ptr, v49);
              if ( v71 > 0x40 && v70 )
                operator delete[](v70);
              if ( v46 == v48 )
                break;
              v45 = *v48++;
              if ( *v45 != 6 )
                goto LABEL_68;
            }
            v47 = *a1;
          }
          v14 = sub_2057230(*((_QWORD *)v47 + 1), (char *)ptr, si128.m128i_u32[0]);
          goto LABEL_69;
        }
      }
      return 0;
    }
    goto LABEL_26;
  }
  return sub_2056DA0((_QWORD *)v7, v10, v13, v11, v12, v9);
}
