__int64 __fastcall sub_CE6F0(
        __int64 a1,
        char **p_s1,
        __m128i a3,
        double a4,
        __m128i a5,
        double a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r15d
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // al
  __int64 v27; // rax
  __int64 tinfo_pdata; // rax
  char *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 *v34; // rdi
  _DWORD *v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rdi
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // [rsp-8h] [rbp-178h]
  int v51; // [rsp+0h] [rbp-170h]
  __int64 v52; // [rsp+10h] [rbp-160h]
  __int64 v53; // [rsp+10h] [rbp-160h]
  char **v54; // [rsp+18h] [rbp-158h]
  unsigned int v55; // [rsp+18h] [rbp-158h]
  unsigned int v56; // [rsp+18h] [rbp-158h]
  unsigned __int8 v57; // [rsp+23h] [rbp-14Dh]
  int v58; // [rsp+24h] [rbp-14Ch]
  unsigned int v59; // [rsp+24h] [rbp-14Ch]
  __int64 v60; // [rsp+28h] [rbp-148h]
  __int64 v61; // [rsp+38h] [rbp-138h]
  __int64 v62; // [rsp+48h] [rbp-128h]
  __int64 v63; // [rsp+58h] [rbp-118h]
  char **v64; // [rsp+60h] [rbp-110h] BYREF
  __int64 v65; // [rsp+68h] [rbp-108h] BYREF
  char *s1; // [rsp+70h] [rbp-100h] BYREF
  __int128 v67; // [rsp+78h] [rbp-F8h]
  _QWORD v68[6]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-A8h]
  unsigned __int8 v71; // [rsp+D8h] [rbp-98h]
  __int64 v72; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-88h]
  __m128i si128; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v75; // [rsp+100h] [rbp-70h] BYREF
  __int128 v76; // [rsp+108h] [rbp-68h]
  __int64 v77; // [rsp+118h] [rbp-58h]
  __int64 v78; // [rsp+120h] [rbp-50h]
  int v79; // [rsp+128h] [rbp-48h]
  unsigned __int64 v80; // [rsp+138h] [rbp-38h]

  v8 = 1;
  v10 = 0;
  v80 = __readfsqword(0x28u);
  v62 = 8;
  if ( *(int *)(a1 + 64) > 2 )
  {
    while ( 1 )
    {
      v63 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v62);
      v10 |= sub_CE500(v63, a3, a4, a5, a6, (__int64)p_s1, v62, a8);
      if ( !*(_QWORD *)(a1 + 800) )
        goto LABEL_13;
      v11 = *(_QWORD *)(a1 + 1496);
      a3 = 0;
      memset(&v68[1], 0, 32);
      v68[5] = v11;
      p_s1 = (char **)v68;
      v68[0] = off_4DC1D0;
      v69 = 0;
      v71 = 0;
      v70 = 0;
      sub_11F830(v63, v68);
      v15 = v71;
      if ( v71 )
      {
        v22 = *(_DWORD *)(v63 + 24);
        BYTE1(v22) &= ~2u;
        LOBYTE(v22) = v22 | 0x80;
        *(_DWORD *)(v63 + 24) = v22;
        sub_2169A0(a1, &v69);
        p_s1 = (char **)&byte_1;
        sub_66FA0(a1, 1u, (__int64)"recognized CONTAINING_RECORD");
        v10 = v15;
      }
      v16 = *(_QWORD *)(v63 + 48);
      if ( v16 )
      {
        do
        {
          v75 = 0;
          LOBYTE(v76) = 0;
          v72 = (__int64)&off_4DC1F8;
          DWORD1(v76) = 0;
          v17 = *(_QWORD *)(v63 + 64);
          si128 = (__m128i)(unsigned __int64)v63;
          v73 = v17;
          sub_11E900(v16, &v72, v12, v63, v13, v14);
          if ( DWORD1(v76) )
          {
            *(_DWORD *)(v63 + 24) |= 0x80u;
            sub_66FA0(a1, 1u, (__int64)"straighten lvar pairs");
            v10 = 1;
          }
          v18 = (char *)v63;
          p_s1 = (char **)v16;
          v19 = sub_C8120(v63, v16);
          v16 = *(_QWORD *)(v16 + 8);
          v10 |= v19;
        }
        while ( v16 );
        v20 = *(_QWORD *)(v63 + 48);
        if ( v20 )
        {
          if ( *(_BYTE *)(v20 + 64) == 8
            && *(_DWORD *)(*(_QWORD *)(v20 + 72) + 284LL) == 15
            && (unsigned int)*(_QWORD *)(v63 + 352) == 2 )
          {
            v60 = 0;
            v58 = 0;
            v61 = *(_QWORD *)(v63 + 64);
            while ( 1 )
            {
              v23 = *(unsigned int *)(*(_QWORD *)(v63 + 344) + v60);
              if ( (unsigned int)v23 >= *(_DWORD *)(v61 + 64) )
                sub_B7BA0(v18);
              v24 = *(_QWORD *)(*(_QWORD *)(v61 + 528) + 8 * v23);
              v25 = *(_QWORD *)(v24 + 56);
              if ( !v25 || *(_DWORD *)v25 != 43 || *(_BYTE *)(v25 + 48) != 10 )
                break;
              p_s1 = *(char ***)(*(_QWORD *)(v24 + 64) + 1504LL);
              v54 = p_s1;
              if ( v16 )
              {
                v52 = *(_QWORD *)(v24 + 56);
                v26 = sub_1255D0(v16, p_s1, *(_QWORD *)(v25 + 56), 8);
                v25 = v52;
                if ( !v26 )
                  break;
              }
              else
              {
                v16 = *(_QWORD *)(v25 + 56);
              }
              if ( *(_BYTE *)(v25 + 32) != 4 )
                break;
              v27 = *(_QWORD *)(v25 + 40);
              if ( *(_DWORD *)v27 != 2 || !v27 )
                break;
              if ( *(_BYTE *)(v27 + 48) == 4 && (v47 = *(_DWORD **)(v27 + 56), *v47 == 12) && v47 )
              {
                p_s1 = &s1;
                v48 = sub_11C8A0(v47, &s1);
                if ( !v48 )
                  break;
                p_s1 = (char **)&v72;
                if ( !(unsigned __int8)sub_11FD80(v48, &v72, 1) )
                  break;
                if ( v72 != 4 )
                  break;
                p_s1 = v54;
                v18 = s1;
                if ( !(unsigned __int8)sub_1255D0(s1, v54, v16, 9) )
                  break;
                v49 = 1;
              }
              else
              {
                sub_123A40(&v72);
                if ( !(unsigned __int8)sub_126F10(&v72, p_s1, 4294967292LL)
                  || (v18 = (char *)&v72, !(unsigned __int8)sub_1255D0(&v72, p_s1, v16, 9)) )
                {
                  sub_11CDA0(&v72);
                  break;
                }
                sub_11CDA0(&v72);
                v49 = 2;
              }
              v58 |= v49;
              if ( v60 )
                break;
              v60 = 4;
            }
            if ( v58 == 3 )
            {
              v64 = nullptr;
              p_s1 = (char **)&v64;
              v57 = sub_BA670(v61, &v64, 0, 0, (char *)v16, *(_QWORD *)(v61 + 800), 0, 0, nullptr);
              if ( v57 )
              {
                p_s1 = v64;
                a3 = 0;
                s1 = nullptr;
                v67 = 0;
                if ( ((unsigned __int16)v64 & 0x100) != 0 )
                {
                  tinfo_pdata = get_tinfo_pdata();
                  v30 = s1;
                  if ( tinfo_pdata )
                  {
                    if ( (_QWORD)v67 )
                    {
                      p_s1 = (char **)"_LIST_ENTRY";
                      v30 = s1;
                      if ( !strcmp(s1, "_LIST_ENTRY") )
                      {
                        v73 = 0;
                        v72 = -4294967286LL;
                        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                        a3 = 0;
                        v75 = 0;
                        v77 = 0;
                        v78 = 0;
                        v79 = 0;
                        v76 = 0;
                        v33 = j__qalloc_or_throw(24, (__int64)"_LIST_ENTRY", v31, v32);
                        sub_123A40(v33);
                        *(_QWORD *)(v33 + 16) = *(_QWORD *)(v16 + 16);
                        v73 = v33;
                        HIDWORD(v72) = 4;
                        sub_32C540(&v65, *(_QWORD *)(v61 + 1504), &v64);
                        copy_tinfo_t();
                        v34 = &v65;
                        clear_tinfo_t();
                        v35 = (_DWORD *)v75;
                        if ( *((_QWORD *)&v76 + 1) <= 4u )
                        {
                          v34 = &v75;
                          v75 = qvector_reserve((__int64)&v75, v75, 5, 1);
                          v35 = (_DWORD *)v75;
                        }
                        *(_QWORD *)&v76 = 5;
                        *v35 = 1701080931;
                        *(_BYTE *)(v75 + 4) = 0;
                        v36 = *(unsigned int **)(v63 + 344);
                        v55 = v36[1];
                        v59 = *v36;
                        if ( *v36 >= *(_DWORD *)(v61 + 64) )
                          sub_B7BA0(v34);
                        v37 = *(_QWORD *)(*(_QWORD *)(v61 + 528) + 8LL * v59);
                        v38 = *(_QWORD *)(v37 + 56);
                        v65 = 0;
                        v39 = sub_335B10(
                                v61,
                                *(_QWORD *)(v38 + 24),
                                (unsigned int)"RtlpCheckListEntry",
                                (unsigned int)&v65,
                                1,
                                (unsigned int)&v72,
                                0,
                                v50,
                                v51,
                                (unsigned int)&si128.m128i_u32[2],
                                v38,
                                v55);
                        clear_tinfo_t();
                        sub_11D890(v53, v39);
                        if ( v39 )
                        {
                          sub_11CDA0(v39 + 64);
                          sub_11CDA0(v39 + 48);
                          sub_11CDA0(v39 + 32);
                          j__qfree(v39);
                        }
                        v42 = *(_DWORD *)(v37 + 24);
                        BYTE1(v42) &= ~2u;
                        LOBYTE(v42) = v42 | 0x80;
                        *(_DWORD *)(v37 + 24) = v42;
                        sub_6B2C0(v37, v59 + 1, v40, v41);
                        if ( v56 >= *(_DWORD *)(v61 + 64) )
                          sub_B7BA0(v37);
                        v43 = *(_QWORD *)(*(_QWORD *)(v61 + 528) + 8LL * v56);
                        sub_11D5A0(*(_QWORD *)(v43 + 56));
                        v44 = *(_DWORD *)(v43 + 24);
                        BYTE1(v44) &= ~2u;
                        LOBYTE(v44) = v44 | 0x80;
                        *(_DWORD *)(v43 + 24) = v44;
                        sub_6B2C0(v43, v56 + 1, v45, v46);
                        *(_QWORD *)(v63 + 352) = 0;
                        *(_DWORD *)v61 |= 0x400u;
                        cleanup_argloc();
                        if ( v75 )
                        {
                          *(_QWORD *)&v76 = 0;
                          qfree(v75);
                        }
                        clear_tinfo_t();
                        sub_11CDA0(&v72);
                        if ( s1 )
                        {
                          *(_QWORD *)&v67 = 0;
                          qfree((__int64)s1);
                        }
                        clear_tinfo_t();
                        p_s1 = (char **)&byte_1;
                        sub_66FA0(a1, 1u, (__int64)"recognized RtlpCheckListEntry");
                        v10 = v57;
                        goto LABEL_11;
                      }
                    }
                  }
                  if ( v30 )
                  {
                    *(_QWORD *)&v67 = 0;
                    qfree((__int64)v30);
                  }
                }
              }
              clear_tinfo_t();
            }
          }
        }
      }
LABEL_11:
      v68[0] = off_4DC1D0;
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
LABEL_13:
      v21 = *(_DWORD *)(a1 + 64);
      if ( (int)v21 <= (int)(v8 + 2) )
        return v10;
      ++v8;
      v62 += 8;
      if ( v8 >= v21 )
      {
        if ( !under_debugger )
          sub_383060(52719);
        BUG();
      }
    }
  }
  return v10;
}
