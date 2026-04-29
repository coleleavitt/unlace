unsigned __int64 __fastcall sub_33B6B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rbp
  __int64 v4; // rdi
  int v5; // esi
  int v6; // edx
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rdx
  unsigned int v10; // esi
  int v11; // r12d
  __int64 v12; // rax
  char v13; // r14
  unsigned int v14; // edx
  const __m128i *v15; // rbp
  unsigned int v16; // eax
  const __m128i *v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rdx
  const __m128i *v25; // rax
  __int8 v26; // dl
  __int8 v27; // dl
  unsigned int v28; // eax
  const __m128i *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-450h] BYREF
  __int64 v34; // [rsp+10h] [rbp-448h] BYREF
  const __m128i *v35; // [rsp+18h] [rbp-440h] BYREF
  int v36; // [rsp+20h] [rbp-438h] BYREF
  __int64 v37; // [rsp+24h] [rbp-434h] BYREF
  unsigned __int64 v38; // [rsp+428h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 840);
  v38 = __readfsqword(0x28u);
  v3 = (__int64 *)(v1 + 32);
  sub_33B300(
    (__int64 *)(v1 + 32),
    "memcmp;strcasecmp;strcmp;stricmp;strncasecmp;strncmp;strnicmp;wcscmp;wcsncmp;wmemcmp");
  v4 = *(_QWORD *)(a1 + 848);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 848) = 0;
    *(_QWORD *)(a1 + 864) = 0;
  }
  if ( (unsigned __int8)read_config2("hexrays", 1, &off_4B8480, 27, 0, 0, 0, a1) )
  {
    v5 = *(_DWORD *)(a1 + 724);
    v6 = *(_DWORD *)(a1 + 604);
    v7 = v6 & 0xFFEFFFFF;
    v8 = v6 | 0x100000;
    if ( (*(_BYTE *)(a1 + 1417) & 1) != 0 )
      v7 = v8;
    *(_DWORD *)(a1 + 604) = v7;
    if ( v5 > 64 )
    {
      if ( ((v5 - 96) & 0xFFFFFFDF) == 0 )
        goto LABEL_9;
    }
    else if ( v5 <= 3 )
    {
      if ( (unsigned int)(v5 - 1) <= 1 )
      {
LABEL_9:
        v10 = *(_DWORD *)(a1 + 656);
        if ( v10 > 0x100 )
        {
          sub_2B0270((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v10, 256);
          *(_DWORD *)(a1 + 656) = 256;
        }
        goto LABEL_11;
      }
    }
    else
    {
      v9 = 0x1000100000001011LL;
      if ( _bittest64(&v9, (unsigned int)(v5 - 4)) )
        goto LABEL_9;
    }
    sub_2B0270((__int64)"PSEUDOCODE_DOCKPOS = 0x%X\nValue is wrong, fallback to DP_RIGHT", v5);
    *(_DWORD *)(a1 + 724) = 4;
    goto LABEL_9;
  }
LABEL_11:
  if ( *(_QWORD *)(a1 + 856) > 1u )
    sub_33B300(v3, *(const char **)(a1 + 848));
  v11 = *(_DWORD *)(a1 + 604);
  netnode_check(&v33, "$ hexrays", 0, 0);
  if ( netnode_valobj(v33, &v34, 8) > 0 )
    *(_DWORD *)(a1 + 1420) = v34;
  v12 = netnode_supval(v33, 0, &v36, 1024, 83);
  if ( v12 > 0 )
  {
    v13 = v36;
    v14 = *(_DWORD *)(a1 + 604) & 0xFFEFFFFF;
    *(_DWORD *)(a1 + 604) = v14;
    if ( v13 <= 76 )
    {
      if ( (unsigned __int64)v12 <= 0x60 )
      {
        v22 = (unsigned int)(v36 + 4);
        *(_QWORD *)(a1 + 568) = v22;
        if ( (unsigned __int64)v12 > 4 )
        {
          v23 = v12 - 4;
          v24 = a1 + 576;
          if ( v23 >= 8 )
          {
            *(_QWORD *)(a1 + 576) = v37;
            *(_QWORD *)(v24 + v23 - 8) = *(const __m128i **)((char *)&v35 + v23 + 4);
            qmemcpy(
              (void *)((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL),
              (char *)&v37 - (v24 - ((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL)),
              8LL * ((v23 + (_DWORD)v24 - (((_DWORD)a1 + 584) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v23 & 4) != 0 )
          {
            *(_DWORD *)(a1 + 576) = v37;
            *(_DWORD *)(v24 + v23 - 4) = *(int *)((char *)&v36 + v23);
          }
          else if ( v23 )
          {
            *(_BYTE *)(a1 + 576) = v37;
            if ( (v23 & 2) != 0 )
              *(_WORD *)(v24 + v23 - 2) = *(_WORD *)((char *)&v36 + v23 + 2);
          }
          v14 = *(_DWORD *)(a1 + 604);
        }
        v18 = *(_DWORD *)(a1 + 656);
        v19 = v18;
        if ( v22 <= 0xC7 )
        {
          if ( v22 <= 0x48 )
            *(_DWORD *)(a1 + 640) = 0;
          *(_BYTE *)(a1 + 712) = 2;
          *(_QWORD *)(a1 + 568) = 200;
        }
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_37DDE0(51480);
      goto LABEL_80;
    }
    if ( v13 <= 79 )
    {
      if ( !under_debugger )
        sub_37DDE0(51481);
      goto LABEL_80;
    }
    v15 = (const __m128i *)((char *)&v36 + v12);
    v35 = (const __m128i *)((char *)&v36 + 1);
    *(_DWORD *)(a1 + 576) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 580) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 584) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 588) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 592) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 596) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 600) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 604) = unpack_dd(&v35);
    v16 = unpack_dd(&v35);
    v17 = v35;
    if ( __CFADD__(v35, v16)
      || v15 < (const __m128i *)&v35->m128i_i8[v16]
      || (v35 = (const __m128i *)((char *)v35 + v16), !v17) )
    {
      if ( !under_debugger )
        sub_37DDE0(51697);
      goto LABEL_80;
    }
    if ( v16 != 32 )
      goto LABEL_22;
    *(__m128i *)(a1 + 608) = _mm_loadu_si128(v17);
    *(__m128i *)(a1 + 624) = _mm_loadu_si128(v17 + 1);
    if ( v13 <= 88 )
    {
      *(_BYTE *)(a1 + 615) |= 2u;
      *(_DWORD *)(a1 + 640) = unpack_dd(&v35);
      *(_DWORD *)(a1 + 644) = unpack_dd(&v35);
      if ( v13 <= 85 )
      {
        v31 = unpack_ds(&v35, v15, 1);
        qfree(v31);
        v32 = unpack_ds(&v35, v15, 1);
        qfree(v32);
LABEL_22:
        if ( v13 == 80 )
          goto LABEL_25;
        *(_DWORD *)(a1 + 652) = unpack_dd(&v35);
        if ( v13 <= 82 )
        {
          unpack_dd(&v35);
          if ( v13 == 82 )
          {
            v30 = unpack_dd(&v35);
            v18 = *(_DWORD *)(a1 + 656);
            *(_DWORD *)(a1 + 648) = v30;
            v19 = v18;
            goto LABEL_26;
          }
          goto LABEL_25;
        }
        *(_DWORD *)(a1 + 648) = unpack_dd(&v35);
        if ( v13 == 83 )
          goto LABEL_25;
        v25 = v35;
        v26 = 0;
        if ( v35 < v15 )
        {
          v26 = v35->m128i_i8[0];
          v25 = (const __m128i *)&v35->m128i_i8[1];
        }
        v35 = v25;
        *(_BYTE *)(a1 + 712) = v26;
        if ( v13 == 84 )
        {
LABEL_25:
          v18 = *(_DWORD *)(a1 + 656);
          v19 = v18;
LABEL_26:
          *(_QWORD *)(a1 + 568) = 200;
          v14 = *(_DWORD *)(a1 + 604);
LABEL_27:
          v20 = v14;
          BYTE1(v14) &= ~0x10u;
          BYTE1(v20) |= 0x10u;
          if ( (v11 & 0x1000) != 0 )
            v14 = v20;
          *(_DWORD *)(a1 + 604) = v14;
          if ( v19 > 0x100 )
          {
            sub_2B0270((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v18, 256);
            *(_DWORD *)(a1 + 656) = 256;
          }
          *(_BYTE *)(a1 + 720) = (unsigned int)reg_int_op("UseExternalGraph", 0, 0, 0) != 0;
          return v38 - __readfsqword(0x28u);
        }
        goto LABEL_58;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 640) = unpack_dd(&v35);
      *(_DWORD *)(a1 + 644) = unpack_dd(&v35);
    }
    *(_DWORD *)(a1 + 652) = unpack_dd(&v35);
    *(_DWORD *)(a1 + 648) = unpack_dd(&v35);
    if ( v35 >= v15 )
    {
      *(_BYTE *)(a1 + 712) = 0;
    }
    else
    {
      v27 = v35->m128i_i8[0];
      v35 = (const __m128i *)((char *)v35 + 1);
      *(_BYTE *)(a1 + 712) = v27;
    }
LABEL_58:
    v19 = unpack_dd(&v35);
    *(_DWORD *)(a1 + 656) = v19;
    v18 = v19;
    if ( v13 <= 86 )
      goto LABEL_26;
    v28 = unpack_dd(&v35);
    v29 = v35;
    if ( !__CFADD__(v35, v28) && v15 >= (const __m128i *)&v35->m128i_i8[v28] )
    {
      v35 = (const __m128i *)((char *)v35 + v28);
      if ( v29 )
      {
        if ( v28 == 32 )
        {
          *(__m128i *)(a1 + 728) = _mm_loadu_si128(v29);
          *(__m128i *)(a1 + 744) = _mm_loadu_si128(v29 + 1);
        }
        if ( v13 != 87 )
          *(_DWORD *)(a1 + 760) = unpack_dd(&v35);
        goto LABEL_25;
      }
    }
    if ( !under_debugger )
      sub_37DDE0(52684);
LABEL_80:
    BUG();
  }
  return v38 - __readfsqword(0x28u);
}
