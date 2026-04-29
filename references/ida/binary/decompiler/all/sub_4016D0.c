__int64 __fastcall sub_4016D0(__int64 a1, __m128i a2)
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
  __int64 v23; // rcx
  const char *v24; // rsi
  int v25; // r15d
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // r12
  char **v29; // r13
  char *v30; // rax
  int v31; // r12d
  const char *v32; // r15
  int v33; // eax
  const char *v34; // rsi
  int v35; // eax
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // r13
  int v39; // eax
  _DWORD *v40; // r13
  int v41; // eax
  char v42; // al
  const char *v43; // r14
  _QWORD *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r13
  char *s1; // [rsp+0h] [rbp-A8h]
  char *s1b; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+0h] [rbp-A8h]
  int v50; // [rsp+8h] [rbp-A0h]
  char *v51; // [rsp+8h] [rbp-A0h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h]
  char v54[16]; // [rsp+20h] [rbp-88h] BYREF
  char v55[16]; // [rsp+30h] [rbp-78h] BYREF
  int v56[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v57; // [rsp+50h] [rbp-58h] BYREF
  int v58; // [rsp+58h] [rbp-50h]
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 48);
  v59 = __readfsqword(0x28u);
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
              v8 = sub_11A4A0(v4, v55, 13);
              if ( !v8 || **(_BYTE **)v55 != 4 )
                break;
              v23 = *(_QWORD *)(*(_QWORD *)v55 + 8LL);
              if ( *(_DWORD *)v23 == 10 )
              {
                *(_QWORD *)v55 = v23 + 32;
                if ( *(_BYTE *)(v23 + 32) != 4 )
                  break;
                v23 = *(_QWORD *)(v23 + 40);
                if ( *(_DWORD *)v23 != 56 )
                  break;
              }
              else if ( *(_DWORD *)v23 != 56 )
              {
                break;
              }
              if ( *(_BYTE *)(v23 + 32) != 11 )
                break;
              v24 = "__readgs";
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 144LL) )
                v24 = "__readfs";
              s1 = (char *)v23;
              if ( strncmp(*(const char **)(v23 + 40), v24, 8u)
                || !(unsigned __int8)sub_11D940(*(char **)(*((_QWORD *)s1 + 9) + 24LL), &v57, 0)
                || v57
                || !(unsigned __int8)sub_327490(v56) )
              {
                break;
              }
              *(_DWORD *)v4 = 4;
              sub_121540((__int64)&v57, (unsigned __int8 *)(v8 + 32));
              sub_11A5D0((char *)(v4 + 32), (char *)&v57);
              sub_11A960(v4 + 48);
              sub_11A960((__int64)&v57);
              v4 = *(_QWORD *)(a1 + 32);
              ++*(_DWORD *)(a1 + 48);
              if ( *(_DWORD *)v4 != 12 )
                goto LABEL_3;
            }
            v4 = *(_QWORD *)(a1 + 32);
          }
LABEL_3:
          v5 = sub_11E120(v4, 0);
          v6 = *(_QWORD *)(a1 + 32);
          if ( !v5 )
            break;
          if ( (unsigned __int8)sub_3EB310(a1, (_QWORD *)v6) )
            goto LABEL_25;
          v9 = *(_QWORD *)(a1 + 32);
          v10 = *(_QWORD *)(v9 + 72);
          if ( *(_DWORD *)(v10 + 8) == 2 )
          {
            v11 = *(_QWORD *)(v10 + 24);
            if ( *(_BYTE *)(v11 + 80) == 4 )
            {
              v40 = *(_DWORD **)(v11 + 88);
              if ( *v40 == 56 )
              {
                if ( v40 )
                {
                  if ( (unsigned __int8)sub_11E120(*(_QWORD *)(v11 + 88), 0)
                    && ((unsigned __int8)sub_3E4520(*(_QWORD *)(a1 + 40), v9, (__int64)v40, -12, "_mm_cvtsi32_si64", 0)
                     || (unsigned __int8)sub_3E4520(*(_QWORD *)(a1 + 40), v9, (__int64)v40, -13, "_mm_cvtsi32_si128", 1)) )
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
              v36 = sub_3E4930(v12, (__int64)"_KPCR", v9, (__int64)off_4E9300, 4);
            else
              v36 = sub_3E4930(v12, (__int64)"_TEB", v9, (__int64)off_4E92C0, 2);
            goto LABEL_79;
          }
          v41 = *(_DWORD *)(*(_QWORD *)(v12 + 8) + 4LL);
          if ( v41 )
          {
            if ( v41 != 13 || strncmp(*(const char **)(v9 + 40), "__readx18", 9u) )
              goto LABEL_14;
            if ( (unsigned __int8)getinf_flag() )
            {
              v36 = sub_3E4930(v12, (__int64)"_KPCR", v9, (__int64)off_4E9200, 2);
              goto LABEL_79;
            }
          }
          else
          {
            v42 = getinf_flag();
            v43 = *(const char **)(v9 + 40);
            if ( v42 && !strcmp(*(const char **)(v9 + 40), "__readcr8") )
            {
              qfree();
              *(_QWORD *)(v9 + 40) = qstrdup();
              v44 = (_QWORD *)j__qalloc_or_throw();
              v45 = *(_QWORD *)(v9 + 24);
              v46 = (__int64)v44;
              v44[4] = 0xFFFFFFFF00000000LL;
              v44[5] = 0;
              v44[6] = 0xFFFFFFFF00000000LL;
              v44[7] = 0;
              v44[8] = 0xFFFFFFFF00000000LL;
              v44[9] = 0;
              sub_32D4D0(v44, v45);
              sub_11B450(v46, v9);
              *(_DWORD *)v9 = 9;
              *(_BYTE *)(v9 + 32) = 4;
              *(_QWORD *)(v9 + 40) = v46;
              *(_DWORD *)(v9 + 36) = 1;
              *(_DWORD *)(v9 + 68) = *(_DWORD *)(v46 + 68);
              *(_DWORD *)(v46 + 68) = 1;
              v57 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              goto LABEL_25;
            }
            if ( strncmp(v43, "__readgs", 8u) )
              goto LABEL_80;
            if ( (unsigned __int8)getinf_flag() )
            {
              v36 = sub_3E4930(v12, (__int64)"_KPCR", v9, (__int64)off_4E9240, 4);
              goto LABEL_79;
            }
          }
          v36 = sub_3E4930(v12, (__int64)"_TEB", v9, (__int64)off_4E91C0, 2);
LABEL_79:
          if ( v36 )
            goto LABEL_25;
LABEL_80:
          v9 = *(_QWORD *)(a1 + 32);
LABEL_14:
          if ( (unsigned __int8)sub_11E120(v9, "_mm_cvtps_pd")
            && (v13 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL), *(_BYTE *)v13 == 4)
            && (unsigned __int8)sub_11E120(*(_QWORD *)(v13 + 8), "_mm_cvtsi32_si128") )
          {
            sub_121540((__int64)v54, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL) + 24LL));
            *(_DWORD *)(v9 + 4) |= 0x10u;
            *(_DWORD *)v9 = 67;
            sub_11A5D0((char *)(v9 + 32), v54);
            sub_11A960(v9 + 64);
            *(_DWORD *)(v9 + 68) = 8;
            if ( !(unsigned __int8)sub_1291D0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
            {
              if ( !under_debugger )
                sub_37EA20(51115);
              goto LABEL_128;
            }
            sub_11A960((__int64)v54);
            i = *(_DWORD *)(a1 + 48);
          }
          else
          {
            if ( (unsigned __int8)sub_11E120(v9, "_mm_cvtpd_ps") )
            {
              v14 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL);
              if ( *(_BYTE *)v14 == 4 )
              {
                if ( (unsigned __int8)sub_11E120(*(_QWORD *)(v14 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_121540((__int64)v55, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 72LL) + 24LL));
                  *(_DWORD *)(v9 + 4) |= 0x10u;
                  *(_DWORD *)v9 = 67;
                  sub_11A5D0((char *)(v9 + 32), v55);
                  sub_11A960(v9 + 64);
                  *(_DWORD *)(v9 + 68) = 4;
                  if ( (unsigned __int8)sub_1291D0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    sub_11A960((__int64)v55);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_37EA20(51115);
LABEL_128:
                  BUG();
                }
              }
            }
            v15 = *(_QWORD *)(a1 + 32);
            if ( (unsigned __int8)sub_11E120(v15, "_mm_cvtepi32_pd") )
            {
              v16 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 24LL);
              if ( *(_BYTE *)v16 == 4 )
              {
                if ( (unsigned __int8)sub_11E120(*(_QWORD *)(v16 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_121540((__int64)v56, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 72LL) + 24LL));
                  *(_DWORD *)(v15 + 4) |= 0x10u;
                  *(_DWORD *)v15 = 65;
                  sub_11A5D0((char *)(v15 + 32), (char *)v56);
                  sub_11A960(v15 + 64);
                  *(_DWORD *)(v15 + 68) = 8;
                  if ( (unsigned __int8)sub_1291D0(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    sub_11A960((__int64)v56);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_37EA20(51115);
                  goto LABEL_128;
                }
              }
            }
            if ( (unsigned __int8)sub_11E120(v15, "_mm_cvtepi32_ps") )
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 24LL);
              if ( *(_BYTE *)v17 == 4 )
              {
                if ( (unsigned __int8)sub_11E120(*(_QWORD *)(v17 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 72LL) + 24LL));
                  *(_DWORD *)(v15 + 4) |= 0x10u;
                  *(_DWORD *)v15 = 65;
                  sub_11A5D0((char *)(v15 + 32), (char *)&v57);
                  sub_11A960(v15 + 64);
                  *(_DWORD *)(v15 + 68) = 4;
                  if ( !(unsigned __int8)sub_1291D0(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1) )
                  {
                    if ( !under_debugger )
                      sub_37EA20(51115);
                    goto LABEL_128;
                  }
LABEL_110:
                  sub_11A960((__int64)&v57);
                  goto LABEL_25;
                }
              }
            }
            if ( !(unsigned __int8)sub_3EBAE0(a1, *(_QWORD *)(a1 + 32))
              && !(unsigned __int8)sub_3EBCD0(a1, *(_QWORD *)(a1 + 32))
              && !(unsigned __int8)sub_3EBFD0(a1, *(_QWORD *)(a1 + 32)) )
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
          if ( !(unsigned __int8)sub_11E120(*(_QWORD *)(v18 + 40), 0) )
            return 0;
          if ( *(_BYTE *)(v18 + 48) != 4 )
            return 0;
          if ( !(unsigned __int8)sub_11E120(*(_QWORD *)(v18 + 56), 0) )
            return 0;
          v27 = *(_QWORD *)(v18 + 40);
          v28 = *(_QWORD *)(v18 + 56);
          v52 = v27;
          if ( !sub_123660((unsigned __int8 *)(v27 + 64), v28 + 64, 0) )
            return 0;
          v29 = off_4E90C0;
          s1a = *(char **)(v27 + 40);
          v30 = *(char **)(v28 + 40);
          v31 = 0;
          v51 = v30;
          while ( 1 )
          {
            v32 = *v29;
            v33 = strcmp(s1a, *v29);
            v34 = v29[1];
            if ( !v33 )
            {
              s2 = v29[1];
              v35 = strcmp(v51, v34);
              v34 = s2;
              if ( !v35 )
                break;
            }
            if ( !strcmp(s1a, v34) && !strcmp(v51, v32) )
              break;
            ++v31;
            v29 += 3;
            if ( v31 == 3 )
              return 0;
          }
          *(_DWORD *)v18 = 6;
          sub_11B060(v52 + 32);
          sub_11A960(v18 + 48);
          goto LABEL_25;
        }
        if ( !(unsigned __int8)sub_11E120(v18, 0) )
          return 0;
        v19 = *(_QWORD *)(a1 + 32);
        if ( (unsigned int)(*(_DWORD *)v19 - 12) > 1 )
          break;
        if ( !(unsigned __int8)sub_11D940((char *)(v19 + 48), &v57, 1u)
          || v57 != 1
          || !(unsigned __int8)sub_401560(*(_QWORD *)(a1 + 32)) )
        {
          return 0;
        }
        i = *(_DWORD *)(a1 + 48);
      }
      if ( *(_DWORD *)v19 != 10 || ((*(_DWORD *)(v19 + 68) - 4) & 0xFFFFFFFB) != 0 )
        return 0;
      if ( (unsigned __int8)sub_3EB7A0(a1, v19, a2) )
        goto LABEL_25;
      v20 = *(_QWORD *)(a1 + 32);
      v21 = *(_QWORD *)(v20 + 40);
      v22 = *(char **)(v21 + 40);
      if ( strcmp(v22, "_mm_cvtps_pd") )
        break;
      sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL));
      sub_128E00((unsigned __int64)&v57, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 4);
      *(_DWORD *)(v20 + 4) |= 0x10u;
      *(_DWORD *)v20 = 67;
      sub_11A5D0((char *)(v20 + 32), (char *)&v57);
      sub_11A960((__int64)&v57);
      i = *(_DWORD *)(a1 + 48);
    }
    if ( strcmp(v22, "_mm_cvtpd_ps") )
      break;
    sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL));
    sub_128E00((unsigned __int64)&v57, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 8);
    *(_DWORD *)(v20 + 4) |= 0x10u;
    *(_DWORD *)v20 = 67;
    sub_11A5D0((char *)(v20 + 32), (char *)&v57);
    sub_11A960((__int64)&v57);
  }
  v25 = sub_3DFC90(v22, v56, 1);
  v26 = *(_DWORD *)(v20 + 68);
  if ( v25 && v56[0] == v26 )
  {
    v50 = v56[0];
    s1b = *(char **)(v21 + 72);
    sub_121540((__int64)&v57, *((unsigned __int8 **)s1b + 3));
    sub_128E00((unsigned __int64)&v57, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), v50);
    *(_DWORD *)v20 = v25;
    sub_11A5D0((char *)(v20 + 48), (char *)(*((_QWORD *)s1b + 3) + 80LL));
    sub_128E00(v20 + 48, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v21 + 24), 1);
    sub_11A5D0((char *)(v20 + 32), (char *)&v57);
    sub_11A960((__int64)&v57);
    goto LABEL_25;
  }
  if ( v26 != 8 )
  {
    if ( v26 != 4 || strcmp(v22, "_mm_cvtsi32_si128") )
      return 0;
    sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL));
    if ( HIDWORD(v57) != 4 )
    {
      sub_11A960((__int64)&v57);
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
    v37 = *(_QWORD *)(v21 + 72);
    if ( **(_BYTE **)(v37 + 24) == 10 )
    {
      *(_DWORD *)v20 = 4;
      sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(v37 + 24) + 8LL));
      HIDWORD(v57) = 8;
      sub_11A5D0((char *)(v20 + 32), (char *)&v57);
    }
    else
    {
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      *(_DWORD *)v20 = 2;
      sub_11A5D0((char *)(v20 + 48), *(char **)(v37 + 24));
      v39 = *(_DWORD *)(v38 + 52);
      v57 = 0x200000001LL;
      v58 = v39;
      sub_122C80(v20 + 32, (unsigned __int8 *)&v57);
    }
    goto LABEL_110;
  }
LABEL_62:
  if ( strcmp(*(const char **)(v21 + 40), "_mm_cvtsi64_si128") )
    return 0;
  sub_121540((__int64)&v57, *(unsigned __int8 **)(*(_QWORD *)(v21 + 72) + 24LL));
  if ( HIDWORD(v57) == 8 )
  {
LABEL_117:
    *(_DWORD *)v20 = 4;
    sub_11A5D0((char *)(v20 + 32), (char *)&v57);
    sub_11A960((__int64)&v57);
    goto LABEL_25;
  }
  sub_11A960((__int64)&v57);
  return 0;
}
