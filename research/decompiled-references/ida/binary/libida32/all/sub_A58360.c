__int64 __fastcall sub_A58360(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rdi
  int v7; // eax
  _QWORD *v9; // rdi
  char v10; // al
  char v11; // al
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 *v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // r13
  __int64 v51; // r12
  __int64 (__fastcall **v52)(__int64); // rbp
  __int64 (__fastcall **v53)(__int64); // r15
  __int64 (__fastcall *v54)(__int64); // rax
  _QWORD *v55; // rdi
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 (__fastcall *v58)(__int64); // rax
  _QWORD *v59; // rdi
  __int64 *i; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // [rsp+0h] [rbp-D8h]
  __int64 v69; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v70[2]; // [rsp+10h] [rbp-C8h] BYREF
  double v71[4]; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v72; // [rsp+40h] [rbp-98h] BYREF
  __m128 v73; // [rsp+50h] [rbp-88h]
  __m128 v74; // [rsp+60h] [rbp-78h]
  __int64 (__fastcall *v75)(__int64); // [rsp+70h] [rbp-68h] BYREF
  __int64 v76; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall *v77)(__int64); // [rsp+80h] [rbp-58h]
  __int64 v78; // [rsp+88h] [rbp-50h]
  __int64 (__fastcall *v79)(__int64 *); // [rsp+90h] [rbp-48h]
  __int64 v80; // [rsp+98h] [rbp-40h]

  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v5 - 40 > 6 )
  {
    if ( (unsigned int)v5 - 34 > 5 )
    {
      if ( ((v5 + 118) & 0x7Fu) <= 1 || v5 == 16 )
        return 1;
      if ( v5 == 15 || v5 == 17 || (LOBYTE(v2) = v5 == 83, ((v5 + 102) & 0x7Fu) <= 1) )
      {
        v19 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v19 = (_QWORD *)*v19;
        return (unsigned int)sub_B6A440(v19) ^ 1;
      }
      return v2;
    }
    if ( (unsigned int)sub_B53B90(a2) == 1 )
      return 0;
    v9 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      goto LABEL_37;
LABEL_14:
    v2 = sub_B6A440(v9);
    if ( !(_BYTE)v2 )
      goto LABEL_15;
    return 0;
  }
  if ( ((v5 + 85) & 0x7D) == 0 )
    return 0;
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = *(_QWORD *)(v6 + 8);
  v7 = *(_BYTE *)(sub_B6AD60(v6) + 8) & 0x7F;
  if ( v7 && v7 != 24 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
      return 0;
    v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v18 = *(_QWORD *)v18;
    if ( ((*(_BYTE *)(v18 + 8) + 70) & 0x7Fu) > 3 )
      return 0;
  }
  if ( (*(_BYTE *)(a2 + 96) & 7) == 5 || sub_B4FEA0(a2) || (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2A )
    return 0;
  v9 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
    goto LABEL_14;
LABEL_37:
  v2 = sub_B6A440(*v9);
  if ( (_BYTE)v2 )
    return 0;
LABEL_15:
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = sub_B68690(a2);
    v21 = *(_QWORD *)v20;
    v22 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 8);
    if ( *(_QWORD *)v20 >= v22 )
    {
      if ( v21 != v22 )
      {
        while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 401 )
        {
          v22 += 8LL;
          if ( v21 == v22 )
            goto LABEL_53;
        }
        return 0;
      }
    }
    else
    {
      v23 = *(_QWORD *)v20;
      while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 401 )
      {
        v23 += 8;
        if ( v22 == v23 )
          goto LABEL_53;
      }
      if ( v22 != v23 )
        return 0;
    }
LABEL_53:
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v24 = sub_B68690(a2);
      v25 = *(_QWORD *)v24;
      v26 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8);
      if ( *(_QWORD *)v24 >= v26 )
      {
        if ( v25 != v26 )
        {
          while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 411 )
          {
            v26 += 8LL;
            if ( v25 == v26 )
              goto LABEL_58;
          }
          return 1;
        }
      }
      else
      {
        v27 = *(_QWORD *)v24;
        while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 411 )
        {
          v27 += 8;
          if ( v26 == v27 )
            goto LABEL_58;
        }
        if ( v26 != v27 )
          return 1;
      }
LABEL_58:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v28 = sub_B68690(a2);
        v29 = *(_QWORD *)v28;
        v30 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
        if ( *(_QWORD *)v28 >= v30 )
        {
          if ( v29 != v30 )
          {
            while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 390 )
            {
              v30 += 8LL;
              if ( v29 == v30 )
                goto LABEL_16;
            }
            return 1;
          }
        }
        else
        {
          v31 = *(_QWORD *)v28;
          while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 390 )
          {
            v31 += 8;
            if ( v30 == v31 )
              goto LABEL_16;
          }
          if ( v30 != v31 )
            return 1;
        }
      }
    }
  }
LABEL_16:
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v10 = *(_BYTE *)(a2 + 83);
    if ( ((v10 & 8) != 0 || (*(_BYTE *)(a2 + 128) & 1) == 0 && !*(_QWORD *)(a2 + 128)) && (v10 & 0x40) == 0 )
      return (unsigned int)sub_B5BD10(a2);
    v11 = *(_BYTE *)(a2 + 29) & 1;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 96LL) & 0x10) != 0 )
    {
      if ( !v11 )
      {
LABEL_22:
        if ( ((1LL << *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL)) & 0x665) == 0
          || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
        {
          goto LABEL_29;
        }
        v12 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
        if ( (v12 & 4) != 0 )
          v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
          v13 -= 64LL;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2)
          || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v14, v15, v16, v17),
              (*(_BYTE *)(*(_QWORD *)(v13 + 128) + 1LL) & 4) == 0)
          && (sub_6E4DB0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v62, v63, v64, v65),
              !*(_DWORD *)(*(_QWORD *)(v13 + 128) + 20LL))
          || (v66 = sub_EB8510(a1, v13)) == 0
          || (v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66),
              (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) != v67) )
        {
LABEL_29:
          LOBYTE(v2) = (int)sub_A58280(a1, (_BYTE *)a2) > 2;
          return v2;
        }
        return 1;
      }
      v32 = sub_B68690(a2);
      v33 = *(_QWORD *)v32;
      v34 = *(_QWORD *)v32 + 8LL * *(unsigned int *)(v32 + 8);
      if ( *(_QWORD *)v32 >= v34 )
      {
        if ( v33 != v34 )
        {
          while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 353 )
          {
            v34 += 8LL;
            if ( v33 == v34 )
              goto LABEL_69;
          }
          return 1;
        }
      }
      else
      {
        v35 = *(_QWORD *)v32;
        while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 353 )
        {
          v35 += 8;
          if ( v34 == v35 )
            goto LABEL_69;
        }
        if ( v34 != v35 )
          return 1;
      }
LABEL_69:
      v11 = *(_BYTE *)(a2 + 29) & 1;
    }
    if ( v11 )
    {
      v36 = sub_B68690(a2);
      v37 = *(_QWORD *)v36;
      v38 = *(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 8);
      if ( *(_QWORD *)v36 >= v38 )
      {
        if ( v37 != v38 )
        {
          while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 183 )
          {
            v38 += 8LL;
            if ( v37 == v38 )
              goto LABEL_75;
          }
          return 1;
        }
      }
      else
      {
        v39 = *(_QWORD *)v36;
        while ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 183 )
        {
          v39 += 8;
          if ( v38 == v39 )
            goto LABEL_75;
        }
        if ( v38 != v39 )
          return 1;
      }
LABEL_75:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v40 = sub_B68690(a2);
        v41 = *(__int64 **)v40;
        v42 = *(_QWORD *)v40 + 8LL * *(unsigned int *)(v40 + 8);
        if ( *(_QWORD *)v40 >= v42 )
        {
          if ( v41 != (__int64 *)v42 )
          {
            if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) == 200 )
              return 1;
            for ( i = (__int64 *)(v42 + 8); v41 != i; ++i )
            {
              v61 = *i;
              if ( *(_WORD *)(v61 + 36) == 200 )
                return 1;
            }
          }
        }
        else
        {
          v43 = *(__int64 **)v40;
          while ( *(_WORD *)(*v43 + 36) != 200 )
          {
            if ( (__int64 *)v42 == ++v43 )
              goto LABEL_22;
          }
          if ( (__int64 *)v42 != v43 )
            return 1;
        }
      }
    }
    goto LABEL_22;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2320) + 64LL) )
  {
    v44 = (unsigned __int64)sub_AE2550(a2) >> 32;
    if ( (_BYTE)v44 )
      return (unsigned int)v44;
  }
  v45 = sub_B685F0(a2);
  if ( ((unsigned int)sub_B503C0(a2, v45) || (unsigned __int8)sub_A3FC00(a1, a2, v46, v47, v48))
    && !(unsigned __int8)sub_B69AC0(a2) )
  {
    v49 = sub_A582F0(a1, (_BYTE *)a2);
    if ( v49 <= 2 )
    {
      if ( v49 == 1 )
        return v2;
      if ( !(unsigned int)sub_B50050(a2, a1) && !(unsigned __int8)sub_B58650(a2) )
      {
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2E )
          return v2;
        sub_A3AEE0(v70, a2);
        v50 = v70[0] + 8LL * v70[1];
        v69 = v50;
        v72 = _mm_loadh_ps(v71);
        v68 = *(_QWORD *)&v71[0] + 8LL * *(_QWORD *)&v71[1];
        v51 = *(_QWORD *)&v71[2] + 8LL * *(_QWORD *)&v71[3];
        v73 = _mm_loadh_ps((const double *)&v69);
        v69 = v51;
        v74 = _mm_loadh_ps((const double *)&v69);
        while ( v51 != v73.m128_u64[0]
             || __PAIR128__(v68, v50) != *(_OWORD *)&v72
             || __PAIR128__(v51, v68) != *(_OWORD *)&v74
             || v50 != v73.m128_u64[1] )
        {
          v52 = &v75;
          v76 = 0;
          v75 = sub_A322D0;
          v53 = &v75;
          v77 = sub_A322F0;
          v78 = 0;
          v79 = sub_A32310;
          v80 = 0;
          while ( 1 )
          {
            v54 = *v53;
            v55 = (unsigned __int64 *)((char *)v72.m128_u64 + (_QWORD)v53[1]);
            if ( ((unsigned __int8)*v53 & 1) != 0 )
              v54 = *(__int64 (__fastcall **)(__int64))((char *)v54 + *v55 - 1);
            v56 = (_QWORD *)v54((__int64)v55);
            if ( v56 )
              break;
            v53 += 2;
          }
          v57 = sub_B770E0(*v56);
          if ( v57 )
          {
            v2 = sub_A58360(a1, v57);
            if ( (_BYTE)v2 )
              return v2;
          }
          v76 = 0;
          v75 = sub_A32240;
          v77 = sub_A32270;
          v78 = 0;
          v79 = sub_A322A0;
          v80 = 0;
          while ( 1 )
          {
            v58 = *v52;
            v59 = (unsigned __int64 *)((char *)v72.m128_u64 + (_QWORD)v52[1]);
            if ( ((unsigned __int8)*v52 & 1) != 0 )
              v58 = *(__int64 (__fastcall **)(__int64))((char *)v58 + *v59 - 1);
            if ( (unsigned __int8)v58((__int64)v59) )
              break;
            v52 += 2;
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return v2;
}

