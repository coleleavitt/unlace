__int64 __fastcall sub_87E700(__int64 *a1, const __m128i *a2, double a3, __m128 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r9
  __int64 *v11; // rbp
  void *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r14d
  __int64 v27; // rax
  _BYTE *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  void **v37; // r13
  char v38; // r14
  unsigned __int64 i; // rdx
  void *v40; // r8
  __int64 v41; // rdi
  char v42; // al
  char v43; // al
  __int64 v44; // rax
  _BYTE *v45; // rdx
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdi
  char v54; // al
  __m128 v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r13
  __int64 v62; // r12
  void *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // [rsp+8h] [rbp-B0h]
  __int64 v66; // [rsp+10h] [rbp-A8h]
  void *v67; // [rsp+18h] [rbp-A0h]
  void *v68; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+28h] [rbp-90h]
  char v70; // [rsp+2Ch] [rbp-8Ch]
  __m128 v71; // [rsp+30h] [rbp-88h] BYREF
  void *v72[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v73; // [rsp+50h] [rbp-68h]

  v5 = a2[1].m128i_i64[1];
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 13 )
  {
    if ( (((*(_WORD *)(v6 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      goto LABEL_3;
    goto LABEL_12;
  }
  if ( v7 != 46 )
  {
    if ( v7 != 10 )
      goto LABEL_3;
    goto LABEL_12;
  }
  v36 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL));
  if ( ((*(_BYTE *)(v36 + 74) & 1) != 0 || *(_QWORD *)(v36 + 128) > 7u) && *(char *)(sub_B14A40(v6) + 76) >= 0 )
  {
LABEL_12:
    v5 = a2[1].m128i_i64[0];
    goto LABEL_3;
  }
  v5 = a2[1].m128i_i64[1];
LABEL_3:
  v9 = sub_B08600(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v9 )
  {
    v11 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v12 = (void *)sub_AC7B80(a2);
    if ( v11 )
    {
      v13 = *v11;
      if ( !*v11 )
      {
        v57 = v11[1];
        v58 = *(_DWORD *)(v57 + 14976);
        if ( v58 )
        {
          v59 = (unsigned int)(v58 - 1);
          *(_DWORD *)(v57 + 14976) = v59;
          v13 = *(_QWORD *)(v57 + 8 * v59 + 14848);
          v60 = *(unsigned int *)(v13 + 536);
          *(_BYTE *)v13 = 0;
          v61 = *(_QWORD *)(v13 + 528);
          *(_DWORD *)(v13 + 424) = 0;
          v62 = v61 + (v60 << 6);
          while ( v61 != v62 )
          {
            while ( 1 )
            {
              v62 -= 64;
              v63 = *(void **)(v62 + 24);
              if ( v63 == (void *)(v62 + 40) )
                break;
              operator delete(v63, *(_QWORD *)(v62 + 40) + 1LL);
              if ( v61 == v62 )
                goto LABEL_106;
            }
          }
LABEL_106:
          *(_DWORD *)(v13 + 536) = 0;
        }
        else
        {
          v13 = operator new(0x3A0u);
          *(_BYTE *)v13 = 0;
          *(_QWORD *)(v13 + 96) = v13 + 112;
          *(_QWORD *)(v13 + 128) = v13 + 144;
          *(_QWORD *)(v13 + 160) = v13 + 176;
          *(_QWORD *)(v13 + 192) = v13 + 208;
          *(_QWORD *)(v13 + 224) = v13 + 240;
          *(_QWORD *)(v13 + 256) = v13 + 272;
          *(_QWORD *)(v13 + 288) = v13 + 304;
          *(_QWORD *)(v13 + 320) = v13 + 336;
          *(_QWORD *)(v13 + 352) = v13 + 368;
          *(_QWORD *)(v13 + 384) = v13 + 400;
          *(_QWORD *)(v13 + 104) = 0;
          *(_BYTE *)(v13 + 112) = 0;
          *(_QWORD *)(v13 + 136) = 0;
          *(_BYTE *)(v13 + 144) = 0;
          *(_QWORD *)(v13 + 168) = 0;
          *(_BYTE *)(v13 + 176) = 0;
          *(_QWORD *)(v13 + 200) = 0;
          *(_BYTE *)(v13 + 208) = 0;
          *(_QWORD *)(v13 + 232) = 0;
          *(_BYTE *)(v13 + 240) = 0;
          *(_QWORD *)(v13 + 264) = 0;
          *(_BYTE *)(v13 + 272) = 0;
          *(_QWORD *)(v13 + 296) = 0;
          *(_BYTE *)(v13 + 304) = 0;
          *(_QWORD *)(v13 + 328) = 0;
          *(_BYTE *)(v13 + 336) = 0;
          *(_QWORD *)(v13 + 360) = 0;
          *(_BYTE *)(v13 + 368) = 0;
          *(_QWORD *)(v13 + 392) = 0;
          *(_BYTE *)(v13 + 400) = 0;
          *(_QWORD *)(v13 + 416) = v13 + 432;
          *(_QWORD *)(v13 + 424) = 0x800000000LL;
          *(_QWORD *)(v13 + 528) = v13 + 544;
          *(_QWORD *)(v13 + 536) = 0x600000000LL;
        }
        *v11 = v13;
      }
      v72[0] = v12;
      LOBYTE(v72[1]) = 1;
      v14 = *(unsigned int *)(v13 + 424);
      if ( *(unsigned int *)(v13 + 428) < (unsigned __int64)(v14 + 1) )
      {
        sub_25D6060(v13 + 416, v13 + 432, v14 + 1, 12);
        v14 = *(unsigned int *)(v13 + 424);
      }
      v15 = *(_QWORD *)(v13 + 416) + 12 * v14;
      *(void **)v15 = v72[0];
      *(_DWORD *)(v15 + 8) = v72[1];
      ++*(_DWORD *)(v13 + 424);
    }
    return 0;
  }
  v17 = a2[1].m128i_i64[1];
  v70 = 0;
  v69 = 1;
  v68 = nullptr;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( v19 == 46 )
    {
      v35 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v35 + 74) & 1) == 0 && *(_QWORD *)(v35 + 128) <= 7u || *(char *)(sub_B14A40(v18) + 76) < 0 )
      {
        v17 = a2[1].m128i_i64[1];
        goto LABEL_15;
      }
    }
    else if ( v19 != 10 )
    {
      goto LABEL_15;
    }
    goto LABEL_38;
  }
  if ( (((*(_WORD *)(v18 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
LABEL_38:
    v17 = a2[1].m128i_i64[0];
LABEL_15:
  v20 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 56 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1
     || (v20 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL))) == 0) )
  {
    v37 = (void **)&v71;
    v38 = 1;
    v71 = (__m128)_mm_loadu_si128(a2 + 1);
    for ( i = _mm_movehl_ps(a4, v71).m128_u64[0]; ; i = a2[1].m128i_u64[1] )
    {
      v40 = *v37;
      v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v42 = *(_BYTE *)(v41 + 16);
      if ( v42 == 13 )
        break;
      if ( v42 != 46 )
      {
        if ( v42 != 10 )
          goto LABEL_50;
        goto LABEL_80;
      }
      v67 = *v37;
      v56 = sub_B14A40(v41);
      v40 = v67;
      if ( (*(_BYTE *)(v56 + 74) & 1) != 0 || *(_QWORD *)(v56 + 128) > 7u )
      {
        v64 = sub_B14A40(v41);
        v40 = v67;
        if ( *(char *)(v64 + 76) >= 0 )
          goto LABEL_80;
      }
      i = a2[1].m128i_u64[1];
LABEL_50:
      if ( v40 == (void *)i )
      {
        v55 = _mm_loadh_ps((const double *)a1 + 1);
        v73 = *((_BYTE *)a1 + 16);
        *(__m128 *)v72 = v55;
        v43 = sub_871080((__int64)v72, (__int64)v40, (__int64 *)v73, v8, (int)v40, v10) ^ 1;
      }
      else
      {
        v43 = sub_87D880((__int64)v40, (__int64)&v68, *a1, v8, (__int64)v40, v10) ^ 1;
      }
      if ( v43 )
      {
        v44 = *a1;
        if ( !*(_DWORD *)(*a1 + 48) )
          goto LABEL_31;
        v45 = *(_BYTE **)(v44 + 24);
        if ( *(_BYTE *)(v44 + 962) )
        {
          *v45 = 1;
        }
        else
        {
          v46 = *(_BYTE *)(v44 + 963);
          *v45 |= v46;
          if ( !v46 )
            goto LABEL_31;
        }
        v38 = 0;
      }
      if ( ++v37 == v72 )
      {
        v9 = 0;
        if ( v38 )
        {
          LODWORD(v72[1]) = v69;
          if ( v69 > 0x40 )
            sub_2585B30(v72);
          else
            v72[0] = v68;
          v51 = a2->m128i_i64[1];
          v52 = a1[1];
          v53 = *a1;
          BYTE4(v72[1]) = v70;
          v9 = sub_835AB0(v53, (__int64)a2, v52, v51, (__int64)v72);
          if ( LODWORD(v72[1]) > 0x40 )
          {
            if ( v72[0] )
              operator delete[](v72[0]);
          }
        }
        goto LABEL_31;
      }
    }
    if ( (((*(_WORD *)(v41 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      goto LABEL_50;
LABEL_80:
    i = a2[1].m128i_u64[0];
    goto LABEL_50;
  }
  v21 = a2[1].m128i_u64[1];
  BYTE4(v72[0]) &= ~1u;
  LODWORD(v72[0]) = 0;
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(_BYTE *)(v22 + 16);
  if ( v23 == 13 )
  {
    if ( (((*(_WORD *)(v22 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      goto LABEL_18;
    goto LABEL_40;
  }
  if ( v23 != 46 )
  {
    if ( v23 != 10 )
      goto LABEL_18;
    goto LABEL_40;
  }
  v49 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL));
  if ( ((*(_BYTE *)(v49 + 74) & 1) != 0 || *(_QWORD *)(v49 + 128) > 7u) && *(char *)(sub_B14A40(v22) + 76) >= 0 )
  {
LABEL_40:
    v21 = a2[1].m128i_u64[0];
    goto LABEL_18;
  }
  v21 = a2[1].m128i_u64[1];
LABEL_18:
  v26 = sub_856400((__int64)v72, *a1, v21);
  if ( !(_BYTE)v26 )
  {
    v27 = *a1;
    if ( !*(_DWORD *)(*a1 + 48) )
      goto LABEL_29;
    v28 = *(_BYTE **)(v27 + 24);
    if ( *(_BYTE *)(v27 + 962) )
    {
      *v28 = 1;
    }
    else
    {
      v54 = *(_BYTE *)(v27 + 963);
      *v28 |= v54;
      if ( !v54 )
        goto LABEL_29;
    }
  }
  v29 = a2[1].m128i_i64[1];
  v30 = *a1;
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v32 = *(_BYTE *)(v31 + 16);
  if ( v32 == 13 )
  {
    if ( (((*(_WORD *)(v31 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v32 == 46 )
  {
    v66 = *a1;
    v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v47 = sub_B14A40(v65);
    v31 = v65;
    v30 = v66;
    if ( (*(_BYTE *)(v47 + 74) & 1) != 0 || *(_QWORD *)(v47 + 128) > 7u )
    {
      v48 = sub_B14A40(v65);
      v30 = v66;
      if ( *(char *)(v48 + 76) >= 0 )
      {
        v29 = a2[1].m128i_i64[1];
        goto LABEL_25;
      }
    }
LABEL_24:
    v29 = a2[1].m128i_i64[0];
    goto LABEL_25;
  }
  if ( v32 != 10 )
    goto LABEL_24;
LABEL_25:
  if ( (unsigned __int8)sub_87D880(v29, (__int64)&v68, v30, v31, v24, v25) )
  {
    if ( !(_BYTE)v26 )
      goto LABEL_29;
    sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)v72);
    if ( v70 )
    {
      v50 = (__int64)v68;
      if ( v69 <= 0x40 )
      {
LABEL_77:
        v9 = v26;
        sub_82AA80(*a1, (__int64)a2, a1[1], *(_QWORD *)(v20 + 32), v50);
        goto LABEL_29;
      }
    }
    else if ( v69 <= 0x40 )
    {
      v50 = 0;
      if ( v69 )
        v50 = (__int64)((_QWORD)v68 << (64 - (unsigned __int8)v69)) >> (64 - (unsigned __int8)v69);
      goto LABEL_77;
    }
    v50 = *(_QWORD *)v68;
    goto LABEL_77;
  }
  v33 = *a1;
  if ( *(_DWORD *)(*a1 + 48) )
  {
    v34 = *(_BYTE **)(v33 + 24);
    if ( *(_BYTE *)(v33 + 962) )
      *v34 = 1;
    else
      *v34 |= *(_BYTE *)(v33 + 963);
  }
LABEL_29:
  if ( LODWORD(v72[0]) > 1 )
    sub_69F740((__int64)v72);
LABEL_31:
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  return v9;
}

