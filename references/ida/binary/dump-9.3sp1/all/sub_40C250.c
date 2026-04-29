__int64 __fastcall sub_40C250(__int64 a1, __m128i a2)
{
  int v2; // eax
  int i; // eax
  __int64 v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r13
  char *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r12
  char **v40; // r13
  char *v41; // rax
  int v42; // r12d
  const char *v43; // r15
  int v44; // eax
  const char *v45; // rsi
  int v46; // eax
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // rax
  _BYTE *v50; // rdx
  __int64 v51; // r13
  int v52; // eax
  _DWORD *v53; // r13
  int v54; // eax
  char v55; // al
  const char *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rsi
  __int64 v69; // r13
  char *s1; // [rsp+0h] [rbp-A8h]
  char *s1b; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+0h] [rbp-A8h]
  int v73; // [rsp+8h] [rbp-A0h]
  char *v74; // [rsp+8h] [rbp-A0h]
  __int64 v75; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h]
  char v77[16]; // [rsp+20h] [rbp-88h] BYREF
  char v78[16]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v79[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v80; // [rsp+50h] [rbp-58h] BYREF
  int v81; // [rsp+58h] [rbp-50h]
  unsigned __int64 v82; // [rsp+68h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 48);
  v82 = __readfsqword(0x28u);
  for ( i = v2 - 1; ; i = *(_DWORD *)(a1 + 48) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 48) = i + 1;
          if ( *(_DWORD *)v4 == 12 )
          {
            while ( 1 )
            {
              v8 = sub_11C8E0(v4, v78, 13);
              if ( !v8 || **(_BYTE **)v78 != 4 )
                break;
              v25 = *(_QWORD *)(*(_QWORD *)v78 + 8LL);
              if ( *(_DWORD *)v25 == 10 )
              {
                *(_QWORD *)v78 = v25 + 32;
                if ( *(_BYTE *)(v25 + 32) != 4 )
                  break;
                v25 = *(_QWORD *)(v25 + 40);
                if ( *(_DWORD *)v25 != 56 )
                  break;
              }
              else if ( *(_DWORD *)v25 != 56 )
              {
                break;
              }
              if ( *(_BYTE *)(v25 + 32) != 11 )
                break;
              v26 = "__readgs";
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 144LL) )
                v26 = "__readfs";
              s1 = (char *)v25;
              if ( strncmp(*(const char **)(v25 + 40), v26, 8u)
                || !(unsigned __int8)sub_11FD80(*(char **)(*((_QWORD *)s1 + 9) + 24LL), &v80, 0)
                || v80
                || !(unsigned __int8)sub_32A8E0(v79, v8) )
              {
                break;
              }
              *(_DWORD *)v4 = 4;
              sub_123A40((__int64)&v80, (unsigned __int8 *)(v8 + 32), v27, v28);
              sub_11CA10((char *)(v4 + 32), (char *)&v80);
              sub_11CDA0(v4 + 48);
              sub_11CDA0((__int64)&v80);
              v4 = *(_QWORD *)(a1 + 32);
              ++*(_DWORD *)(a1 + 48);
              if ( *(_DWORD *)v4 != 12 )
                goto LABEL_3;
            }
            v4 = *(_QWORD *)(a1 + 32);
          }
LABEL_3:
          v5 = sub_120560(v4, nullptr);
          v6 = *(_QWORD *)(a1 + 32);
          if ( !v5 )
            break;
          if ( (unsigned __int8)sub_3F5EE0(a1, (_QWORD *)v6) )
            goto LABEL_25;
          v9 = *(_QWORD *)(a1 + 32);
          v10 = *(_QWORD *)(v9 + 72);
          if ( *(_DWORD *)(v10 + 8) == 2 )
          {
            v11 = *(_QWORD *)(v10 + 24);
            if ( *(_BYTE *)(v11 + 80) == 4 )
            {
              v53 = *(_DWORD **)(v11 + 88);
              if ( *v53 == 56 )
              {
                if ( v53 )
                {
                  if ( (unsigned __int8)sub_120560(*(_QWORD *)(v11 + 88), nullptr)
                    && ((unsigned __int8)sub_3EF160(*(_QWORD *)(a1 + 40), v9, (__int64)v53, -12, "_mm_cvtsi32_si64", 0)
                     || (unsigned __int8)sub_3EF160(*(_QWORD *)(a1 + 40), v9, (__int64)v53, -13, "_mm_cvtsi32_si128", 1)) )
                  {
                    goto LABEL_25;
                  }
                  v9 = *(_QWORD *)(a1 + 32);
                }
              }
            }
          }
          v12 = *(_QWORD *)(a1 + 40);
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 112) + 80LL) != 8 || !*(_BYTE *)(v12 + 144) )
          {
            if ( strncmp(*(const char **)(v9 + 40), "__readfs", 8u) )
              goto LABEL_14;
            if ( (unsigned __int8)getinf_flag() )
              v47 = sub_3EF570(v12, (__int64)"_KPCR", v9, (__int64)off_4EA280, 4, *(double *)a2.m128i_i64);
            else
              v47 = sub_3EF570(v12, (__int64)"_TEB", v9, (__int64)off_4EA240, 2, *(double *)a2.m128i_i64);
            goto LABEL_79;
          }
          v54 = *(_DWORD *)(*(_QWORD *)(v12 + 8) + 4LL);
          if ( v54 )
          {
            if ( v54 != 13 || strncmp(*(const char **)(v9 + 40), "__readx18", 9u) )
              goto LABEL_14;
            if ( (unsigned __int8)getinf_flag() )
            {
              v47 = sub_3EF570(v12, (__int64)"_KPCR", v9, (__int64)off_4EA180, 2, *(double *)a2.m128i_i64);
              goto LABEL_79;
            }
          }
          else
          {
            v55 = getinf_flag();
            v56 = *(const char **)(v9 + 40);
            if ( v55 && !strcmp(*(const char **)(v9 + 40), "__readcr8") )
            {
              qfree((__int64)v56);
              *(_QWORD *)(v9 + 40) = qstrdup();
              v67 = (_QWORD *)j__qalloc_or_throw(80, (__int64)"__readcr8", v65, v66);
              v68 = *(_QWORD *)(v9 + 24);
              v69 = (__int64)v67;
              v67[4] = 0xFFFFFFFF00000000LL;
              v67[5] = 0;
              v67[6] = 0xFFFFFFFF00000000LL;
              v67[7] = 0;
              v67[8] = 0xFFFFFFFF00000000LL;
              v67[9] = 0;
              sub_330970((__int64)v67, v68);
              sub_11D890(v69, v9);
              *(_DWORD *)v9 = 9;
              *(_BYTE *)(v9 + 32) = 4;
              *(_QWORD *)(v9 + 40) = v69;
              *(_DWORD *)(v9 + 36) = 1;
              *(_DWORD *)(v9 + 68) = *(_DWORD *)(v69 + 68);
              *(_DWORD *)(v69 + 68) = 1;
              v80 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              goto LABEL_25;
            }
            if ( strncmp(v56, "__readgs", 8u) )
              goto LABEL_80;
            if ( (unsigned __int8)getinf_flag() )
            {
              v47 = sub_3EF570(v12, (__int64)"_KPCR", v9, (__int64)off_4EA1C0, 4, *(double *)a2.m128i_i64);
              goto LABEL_79;
            }
          }
          v47 = sub_3EF570(v12, (__int64)"_TEB", v9, (__int64)off_4EA140, 2, *(double *)a2.m128i_i64);
LABEL_79:
          if ( v47 )
            goto LABEL_25;
LABEL_80:
          v9 = *(_QWORD *)(a1 + 32);
LABEL_14:
          if ( (unsigned __int8)sub_120560(v9, "_mm_cvtps_pd")
            && (v13 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL), *(_BYTE *)v13 == 4)
            && (unsigned __int8)sub_120560(*(_QWORD *)(v13 + 8), "_mm_cvtsi32_si128") )
          {
            sub_123A40((__int64)v77, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL) + 24LL), v63, v64);
            *(_DWORD *)(v9 + 4) |= 0x10u;
            *(_DWORD *)v9 = 67;
            sub_11CA10((char *)(v9 + 32), v77);
            sub_11CDA0(v9 + 64);
            *(_DWORD *)(v9 + 68) = 8;
            if ( !(unsigned __int8)sub_12B6F0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
            {
              if ( !under_debugger )
                sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
              goto LABEL_128;
            }
            sub_11CDA0((__int64)v77);
            i = *(_DWORD *)(a1 + 48);
          }
          else
          {
            if ( (unsigned __int8)sub_120560(v9, "_mm_cvtpd_ps") )
            {
              v14 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL);
              if ( *(_BYTE *)v14 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v14 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)v78,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 72LL) + 24LL),
                    v59,
                    v60);
                  *(_DWORD *)(v9 + 4) |= 0x10u;
                  *(_DWORD *)v9 = 67;
                  sub_11CA10((char *)(v9 + 32), v78);
                  sub_11CDA0(v9 + 64);
                  *(_DWORD *)(v9 + 68) = 4;
                  if ( (unsigned __int8)sub_12B6F0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    sub_11CDA0((__int64)v78);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
LABEL_128:
                  BUG();
                }
              }
            }
            v15 = *(_QWORD *)(a1 + 32);
            if ( (unsigned __int8)sub_120560(v15, "_mm_cvtepi32_pd") )
            {
              v16 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 24LL);
              if ( *(_BYTE *)v16 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v16 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)v79,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 72LL) + 24LL),
                    v57,
                    v58);
                  *(_DWORD *)(v15 + 4) |= 0x10u;
                  *(_DWORD *)v15 = 65;
                  sub_11CA10((char *)(v15 + 32), (char *)v79);
                  sub_11CDA0(v15 + 64);
                  *(_DWORD *)(v15 + 68) = 8;
                  if ( (unsigned __int8)sub_12B6F0(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    sub_11CDA0((__int64)v79);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
                  goto LABEL_128;
                }
              }
            }
            if ( (unsigned __int8)sub_120560(v15, "_mm_cvtepi32_ps") )
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 24LL);
              if ( *(_BYTE *)v17 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v17 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)&v80,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 72LL) + 24LL),
                    v61,
                    v62);
                  *(_DWORD *)(v15 + 4) |= 0x10u;
                  *(_DWORD *)v15 = 65;
                  sub_11CA10((char *)(v15 + 32), (char *)&v80);
                  sub_11CDA0(v15 + 64);
                  *(_DWORD *)(v15 + 68) = 4;
                  if ( !(unsigned __int8)sub_12B6F0(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
                    goto LABEL_128;
                  }
LABEL_110:
                  sub_11CDA0((__int64)&v80);
                  goto LABEL_25;
                }
              }
            }
            if ( !(unsigned __int8)sub_3F66B0(a1, *(_QWORD *)(a1 + 32))
              && !(unsigned __int8)sub_3F68A0(a1, *(_QWORD *)(a1 + 32))
              && !(unsigned __int8)sub_3F6BA0(a1, *(_QWORD *)(a1 + 32)) )
            {
              return 0;
            }
LABEL_25:
            i = *(_DWORD *)(a1 + 48);
          }
        }
        if ( *(_BYTE *)(v6 + 32) != 4 )
          return 0;
        v18 = *(_QWORD *)(v6 + 40);
        if ( *(_DWORD *)v18 == 19 )
        {
          if ( *(_BYTE *)(v18 + 32) != 4 )
            return 0;
          if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v18 + 40), nullptr) )
            return 0;
          if ( *(_BYTE *)(v18 + 48) != 4 )
            return 0;
          if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v18 + 56), nullptr) )
            return 0;
          v38 = *(_QWORD *)(v18 + 40);
          v39 = *(_QWORD *)(v18 + 56);
          v75 = v38;
          if ( !sub_125B60((unsigned __int8 *)(v38 + 64), v39 + 64, 0) )
            return 0;
          v40 = off_4EA040;
          s1a = *(char **)(v38 + 40);
          v41 = *(char **)(v39 + 40);
          v42 = 0;
          v74 = v41;
          while ( 1 )
          {
            v43 = *v40;
            v44 = strcmp(s1a, *v40);
            v45 = v40[1];
            if ( !v44 )
            {
              s2 = v40[1];
              v46 = strcmp(v74, v45);
              v45 = s2;
              if ( !v46 )
                break;
            }
            if ( !strcmp(s1a, v45) && !strcmp(v74, v43) )
              break;
            ++v42;
            v40 += 3;
            if ( v42 == 3 )
              return 0;
          }
          *(_DWORD *)v18 = 6;
          sub_11D4A0(v75 + 32);
          sub_11CDA0(v18 + 48);
          goto LABEL_25;
        }
        if ( !(unsigned __int8)sub_120560(v18, nullptr) )
          return 0;
        v19 = *(_QWORD *)(a1 + 32);
        if ( (unsigned int)(*(_DWORD *)v19 - 12) > 1 )
          break;
        if ( !(unsigned __int8)sub_11FD80((char *)(v19 + 48), &v80, 1u)
          || v80 != 1
          || !(unsigned __int8)sub_40C0E0(*(_QWORD *)(a1 + 32)) )
        {
          return 0;
        }
        i = *(_DWORD *)(a1 + 48);
      }
      if ( *(_DWORD *)v19 != 10 || ((*(_DWORD *)(v19 + 68) - 4) & 0xFFFFFFFB) != 0 )
        return 0;
      if ( (unsigned __int8)sub_3F6370(a1, v19, a2) )
        goto LABEL_25;
      v20 = *(_QWORD *)(a1 + 32);
      v21 = *(_QWORD *)(v20 + 40);
      v22 = *(char **)(v21 + 40);
      if ( strcmp(v22, "_mm_cvtps_pd") )
        break;
      sub_123A40((__int64)&v80, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL), v23, v24);
      sub_12B320((__int64)&v80, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 4);
      *(_DWORD *)(v20 + 4) |= 0x10u;
      *(_DWORD *)v20 = 67;
      sub_11CA10((char *)(v20 + 32), (char *)&v80);
      sub_11CDA0((__int64)&v80);
      i = *(_DWORD *)(a1 + 48);
    }
    if ( strcmp(v22, "_mm_cvtpd_ps") )
      break;
    sub_123A40((__int64)&v80, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL), v29, v30);
    sub_12B320((__int64)&v80, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 8);
    *(_DWORD *)(v20 + 4) |= 0x10u;
    *(_DWORD *)v20 = 67;
    sub_11CA10((char *)(v20 + 32), (char *)&v80);
    sub_11CDA0((__int64)&v80);
  }
  v32 = sub_3EA900(v22, (int *)v79, 1);
  v33 = *(_DWORD *)(v20 + 68);
  if ( v32 && LODWORD(v79[0]) == v33 )
  {
    v73 = v79[0];
    s1b = *(char **)(v21 + 72);
    sub_123A40((__int64)&v80, *((unsigned __int8 **)s1b + 3), v31, LODWORD(v79[0]));
    sub_12B320((__int64)&v80, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), v73);
    *(_DWORD *)v20 = v32;
    sub_11CA10((char *)(v20 + 48), (char *)(*((_QWORD *)s1b + 3) + 80LL));
    sub_12B320(v20 + 48, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 1);
    sub_11CA10((char *)(v20 + 32), (char *)&v80);
    sub_11CDA0((__int64)&v80);
    goto LABEL_25;
  }
  if ( v33 != 8 )
  {
    if ( v33 != 4 || strcmp(v22, "_mm_cvtsi32_si128") )
      return 0;
    sub_123A40((__int64)&v80, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL), v34, v35);
    if ( HIDWORD(v80) != 4 )
    {
      sub_11CDA0((__int64)&v80);
      v20 = *(_QWORD *)(a1 + 32);
      v21 = *(_QWORD *)(v20 + 40);
      if ( *(_DWORD *)(v20 + 68) != 8 )
        return 0;
      goto LABEL_62;
    }
    goto LABEL_117;
  }
  if ( !strcmp(v22, "_mm_loadl_epi64") )
  {
    v49 = *(_QWORD *)(v21 + 72);
    v50 = *(_BYTE **)(v49 + 24);
    if ( *v50 == 10 )
    {
      *(_DWORD *)v20 = 4;
      sub_123A40((__int64)&v80, *(unsigned __int8 **)(*(_QWORD *)(v49 + 24) + 8LL), (__int64)v50, v48);
      HIDWORD(v80) = 8;
      sub_11CA10((char *)(v20 + 32), (char *)&v80);
    }
    else
    {
      v51 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      *(_DWORD *)v20 = 2;
      sub_11CA10((char *)(v20 + 48), *(char **)(v49 + 24));
      v52 = *(_DWORD *)(v51 + 52);
      v80 = 0x200000001LL;
      v81 = v52;
      sub_125180(v20 + 32, (unsigned __int8 *)&v80);
    }
    goto LABEL_110;
  }
LABEL_62:
  if ( strcmp(*(const char **)(v21 + 40), "_mm_cvtsi64_si128") )
    return 0;
  sub_123A40((__int64)&v80, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL), v36, v37);
  if ( HIDWORD(v80) == 8 )
  {
LABEL_117:
    *(_DWORD *)v20 = 4;
    sub_11CA10((char *)(v20 + 32), (char *)&v80);
    sub_11CDA0((__int64)&v80);
    goto LABEL_25;
  }
  sub_11CDA0((__int64)&v80);
  return 0;
}
