__int64 __fastcall sub_7C2EB0(__int64 a1, double a2)
{
  __int64 v3; // rax
  __int64 i; // r13
  int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // rdx
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rbp
  __int64 (__fastcall *v30)(); // r11
  __int64 (__fastcall *v31)(__int64, unsigned __int64); // rcx
  __int64 v32; // rcx
  bool v33; // cl
  int v34; // eax
  _DWORD *v36; // rax
  __int64 (__fastcall *v37)(); // rax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // r12
  unsigned int v44; // ebp
  __int64 v45; // rdx
  unsigned int v46; // edx
  __int64 (__fastcall *v47)(); // rax
  __int64 v48; // rax
  __int32 v49; // eax
  int v50; // eax
  __int64 (__fastcall *v51)(); // rax
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rdi
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rsi
  unsigned int *v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // [rsp+20h] [rbp-78h]
  unsigned int v63; // [rsp+20h] [rbp-78h]
  unsigned int v64; // [rsp+20h] [rbp-78h]
  unsigned int v65; // [rsp+20h] [rbp-78h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  _QWORD *v67; // [rsp+30h] [rbp-68h]
  int v68; // [rsp+3Ch] [rbp-5Ch]
  __m128i v69; // [rsp+40h] [rbp-58h] BYREF
  __int64 v70; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 824);
  for ( i = -(__int64)*(unsigned int *)(a1 + 808); v3; v3 = *(_QWORD *)(a1 + 824) )
  {
    v5 = *(_DWORD *)(v3 - 4);
    if ( !v5 )
      break;
    v6 = v5 - 1;
    v7 = *(_DWORD *)(v3 + 4LL * v6);
    *(_DWORD *)(v3 - 4) = v6;
    *(_BYTE *)(*(_QWORD *)(a1 + 816) + v7) = 0;
  }
  v8 = *(_QWORD *)(a1 + 800);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( !(_DWORD)v9 )
      goto LABEL_17;
    v10 = 4 * v9;
    v11 = 0;
    LODWORD(v9) = 0;
    do
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(v8 + v11);
        v17 = *(_QWORD *)(a1 + 792);
        if ( v17 )
        {
          if ( v16 < *(_DWORD *)(v17 - 4) )
            break;
        }
        v11 += 4;
        sub_7C2CC0(a1, v16);
        v8 = *(_QWORD *)(a1 + 800);
        if ( v11 == v10 )
          goto LABEL_16;
      }
      v12 = *(_QWORD *)(v17 + 8LL * v16);
      v13 = -v12;
      if ( v12 > 0 )
        v13 = v12;
      v62 = v13;
      *(_BYTE *)(a1 + 996) |= v13 > 0xFFFFFFFFLL;
      v14 = sub_7C2CC0(a1, v16);
      v8 = *(_QWORD *)(a1 + 800);
      if ( v14 == 1 && v62 )
      {
        i += v62;
        v15 = (unsigned int)v9;
        LODWORD(v9) = v9 + 1;
        *(_DWORD *)(v8 + 4 * v15) = v16;
      }
      v11 += 4;
    }
    while ( v11 != v10 );
LABEL_16:
    if ( v8 )
LABEL_17:
      *(_DWORD *)(v8 - 4) = v9;
  }
  v18 = *(_QWORD *)(a1 + 832);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = (unsigned __int64)&dword_18BFDE8;
  v20 = a1 + 832;
  v67 = (_QWORD *)(a1 + 832);
  sub_7B4F60((_QWORD *)(a1 + 832), (unsigned int *)&dword_18BFDE8);
  if ( i < 0 )
  {
LABEL_41:
    if ( !*(_BYTE *)(a1 + 996) )
    {
      v36 = *(_DWORD **)(a1 + 832);
      if ( *v36 != -2 )
      {
        v37 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 608LL);
        if ( v37 == sub_7C5860 )
        {
          v38 = *(_QWORD *)(a1 + 24);
          v39 = *(_QWORD **)(a1 + 160);
          v40 = v38 + 24;
          if ( v39 )
            v40 = *v39 + 24LL;
        }
        else
        {
          v40 = ((__int64 (__fastcall *)(__int64))v37)(a1);
          v38 = *(_QWORD *)(a1 + 24);
        }
        if ( *(_BYTE *)(v40 + 328) && v38 )
        {
          v49 = *(_DWORD *)(a1 + 12);
          v69.m128i_i32[0] = 2;
          v69.m128i_i64[1] = 0;
          v69.m128i_i32[1] = v49;
          sub_11F1890(v38 + 552, v67, &v69);
          v38 = *(_QWORD *)(a1 + 24);
        }
        v41 = *(_QWORD *)(v38 + 4152);
        if ( v41 )
          *(_DWORD *)(v41 - 4) = 0;
        v42 = *(_QWORD *)(a1 + 832);
        v43 = (_QWORD *)(v38 + 4152);
        v44 = 0;
        if ( v42 )
        {
          while ( v44 < *(_DWORD *)(v42 - 4) )
          {
            v45 = v44++;
            sub_7B4F60(v43, (unsigned int *)(v42 + 4 * v45));
            v42 = *(_QWORD *)(a1 + 832);
            if ( !v42 )
              return 1;
          }
          v57 = *(_DWORD *)(v42 - 4);
          if ( v57 > 1 )
          {
            v58 = v42 + 4LL * (v57 - 2) + 8;
            v59 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3312LL);
            v60 = (unsigned int *)(v42 + 4);
            do
            {
              v61 = *v60++;
              *(_BYTE *)(v59 + (v61 >> 1)) = 1;
            }
            while ( v60 != (unsigned int *)v58 );
          }
        }
        return 1;
      }
      if ( *(v36 - 1) == 1 )
      {
        v69.m128i_i32[0] = 0;
        v56 = *(_QWORD *)(a1 + 24);
        v69.m128i_i64[1] = 0;
        LODWORD(v70) = 0;
        sub_11B4C90(v56, -2, v21, (_DWORD)v22, v23, v24, (__int128)_mm_load_si128(&v69), 0);
        return 0;
      }
    }
    return 0;
  }
  v66 = 0;
  v25 = *(_QWORD *)(a1 + 800);
  v26 = 0;
  v68 = 0;
  while ( 2 )
  {
    if ( v25 )
    {
      while ( 1 )
      {
        if ( v26 >= *(_DWORD *)(v25 - 4) )
          goto LABEL_39;
        v27 = *(_QWORD *)(a1 + 792);
        v28 = *(_DWORD *)(v25 + 4LL * v26);
        if ( v27 )
        {
          v29 = 0;
          if ( v28 < *(_DWORD *)(v27 - 4) )
            v29 = *(_QWORD *)(v27 + 8LL * v28);
        }
        else
        {
          v29 = 0;
        }
        v30 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 528LL);
        if ( v30 != sub_7C5BC0 )
        {
          v19 = v28;
          v63 = *(_DWORD *)(v25 + 4LL * v26);
          v20 = a1;
          v34 = ((__int64 (__fastcall *)(__int64, _QWORD))v30)(a1, v28);
          v28 = v63;
          v33 = v34 != 0;
          LOBYTE(v19) = v34 == 1;
          goto LABEL_34;
        }
        v31 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 536LL);
        v19 = 2 * v28;
        if ( (char *)v31 != (char *)sub_7C55E0 )
        {
          v64 = *(_DWORD *)(v25 + 4LL * v26);
          v20 = a1;
          v34 = v31(a1, v19);
          v28 = v64;
          LOBYTE(v19) = v34 == 1;
          v33 = v34 != 0;
          goto LABEL_34;
        }
        v32 = *(_QWORD *)(a1 + 160);
        if ( !v32 )
        {
          v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v19);
          LOBYTE(v19) = v34 == 1;
          v33 = v34 != 0;
          goto LABEL_34;
        }
        v20 = v28 & 0x7FFFFFFF;
        v19 = *(unsigned int *)(*(_QWORD *)(v32 + 880) + 4 * v20);
        if ( (unsigned int)v19 >= *(_DWORD *)(v32 + 888) )
          break;
LABEL_38:
        ++v26;
        if ( !v25 )
          goto LABEL_39;
      }
      v33 = 1;
      if ( (v19 & 1) != 0 )
      {
        v19 = 0;
        v34 = -1;
      }
      else
      {
        v19 = 1;
        v34 = 1;
      }
LABEL_34:
      if ( !v29 || !v33 || (_BYTE)v19 != v29 < 0 )
      {
LABEL_37:
        v25 = *(_QWORD *)(a1 + 800);
        goto LABEL_38;
      }
      v46 = (v34 != 1) + 2 * v28;
      v47 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
      if ( v47 == sub_7C5680 )
      {
        if ( *(_QWORD *)(a1 + 160) )
        {
          if ( *(_DWORD *)(a1 + 788) )
            goto LABEL_58;
          goto LABEL_72;
        }
        v55 = *(_QWORD *)(a1 + 24);
        v19 = *(unsigned int *)(a1 + 788);
        v23 = *(_QWORD *)(v55 + 3296);
        if ( *(_DWORD *)(v23 + 24LL * (v46 >> 1)) != (_DWORD)v19 )
          goto LABEL_81;
      }
      else
      {
        v65 = v46;
        v20 = a1;
        v50 = ((__int64 (__fastcall *)(__int64, _QWORD))v47)(a1, v46);
        v19 = *(unsigned int *)(a1 + 788);
        v46 = v65;
        if ( (_DWORD)v19 != v50 )
        {
          v51 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v51 != sub_7C5680 )
          {
            v20 = a1;
            v52 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 (__fastcall *)()))v51)(
                    a1,
                    v65,
                    v65,
                    sub_7C5680);
            v19 = *(unsigned int *)(a1 + 788);
            v46 = v65;
            goto LABEL_70;
          }
          if ( *(_QWORD *)(a1 + 160) )
          {
            v52 = 0;
LABEL_70:
            if ( v52 < (unsigned int)v19 )
            {
LABEL_58:
              v20 = a1 + 832;
              v19 = (unsigned __int64)&v69;
              v48 = -v29;
              if ( v29 > 0 )
                v48 = v29;
              v69.m128i_i32[0] = v46 ^ 1;
              i -= v48;
              sub_7B5E20(v67, (unsigned int *)&v69);
              goto LABEL_61;
            }
            goto LABEL_37;
          }
          v55 = *(_QWORD *)(a1 + 24);
LABEL_81:
          v20 = *(_QWORD *)(v55 + 3296);
          v52 = *(_DWORD *)(v20 + 24LL * (v46 >> 1));
          goto LABEL_70;
        }
      }
LABEL_72:
      v22 = *(_DWORD **)(a1 + 832);
      v53 = -v29;
      if ( v29 > 0 )
        v53 = v29;
      if ( *v22 == -2 )
      {
        v21 = v46 ^ 1;
        v66 = v53;
        i -= v53;
        *v22 = v21;
        goto LABEL_61;
      }
      ++v68;
      if ( v66 < v53 )
      {
        v20 = v66;
        v66 = v53;
        *v22 = v46 ^ 1;
        v21 = v53 - v20;
        i -= v53 - v20;
LABEL_61:
        ++v26;
        if ( i < 0 )
          goto LABEL_41;
        v25 = *(_QWORD *)(a1 + 800);
        continue;
      }
      goto LABEL_37;
    }
    break;
  }
LABEL_39:
  if ( (unsigned int)sub_180B130(v20) <= 0x13 )
    return 0;
  if ( (unsigned __int8)sub_186A530(a2) )
  {
    sub_186A4C0(a2);
    sub_180B150(v20, v19);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v54 = std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
    sub_186A500(v54, ")\n");
  }
  else
  {
    sub_180B150(v20, v19);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
  }
  return 0;
}

