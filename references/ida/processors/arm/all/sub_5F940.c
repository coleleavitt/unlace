__int64 __fastcall sub_5F940(__int64 a1, char a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __m128i *v25; // rbp
  __m128i *v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // r14
  unsigned __int64 v31; // rsi
  __int64 v32; // rbp
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i *v37; // rbx
  __int64 v38; // rax
  __m128i *v39; // rbp
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // r13
  __int64 v43; // rbx
  unsigned __int64 *v44; // rbp
  unsigned __int64 v45; // rdx
  unsigned __int64 *v46; // rbx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 *v49; // rax
  unsigned __int64 *v50; // rsi
  __int64 v51; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rbp
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __m128i *v64; // [rsp+0h] [rbp-228h]
  __int64 v65; // [rsp+8h] [rbp-220h]
  __int64 v66; // [rsp+10h] [rbp-218h]
  __m128i v68; // [rsp+20h] [rbp-208h] BYREF
  __int64 v69; // [rsp+30h] [rbp-1F8h]
  __int64 v70; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v71; // [rsp+48h] [rbp-1E0h] BYREF
  int v72; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD *v73; // [rsp+58h] [rbp-1D0h]
  int *v74; // [rsp+60h] [rbp-1C8h]
  int *v75; // [rsp+68h] [rbp-1C0h]
  __int64 v76; // [rsp+70h] [rbp-1B8h]
  __m128i v77; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+90h] [rbp-198h]
  __int64 v79; // [rsp+98h] [rbp-190h]
  __int64 v80; // [rsp+A0h] [rbp-188h]
  __int64 v81; // [rsp+A8h] [rbp-180h] BYREF
  char v82; // [rsp+D1h] [rbp-157h]
  unsigned __int64 v83; // [rsp+1E8h] [rbp-40h] BYREF

  v83 = __readfsqword(0x28u);
  v70 = a1;
  v72 = 0;
  v73 = 0;
  v74 = &v72;
  v75 = &v72;
  v76 = 0;
  v68 = (__m128i)0xA1uLL;
  v64 = &v68;
  sub_5ED60(&v71, &v68);
  v78 = -1;
  v5 = (unsigned __int64 *)&v81;
  v79 = 0;
  v80 = 0;
  v77 = (__m128i)-1LL;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v83 != v5 );
  v6 = *(unsigned __int64 **)(a1 + 8);
  v7 = -1;
  v66 = a1 + 56;
  v8 = *v6;
  if ( *v6 < v6[1] )
  {
    do
    {
      v11 = v8;
      if ( (int)decode_insn() <= 0 )
        break;
      if ( (_WORD)v79 == 23 && (v81 & 0xFFFFFF000000FF00LL) == 0x8A020000000100LL && v82 == 5 )
        v7 = v78;
      if ( sub_32D40((__int64)&v77) )
      {
        v10 = netnode_altval();
        if ( (unsigned int)sub_37FF0(*(_QWORD *)a1, v10) != 4 )
          break;
        v11 = v10;
        v12 = sub_25D70(*(_QWORD *)a1, v10);
        if ( v7 != -1 && v12 && v8 >= v7 )
        {
          v16 = v7;
          do
          {
            v11 = *(_QWORD *)(a1 + 56);
            v9 = *(_QWORD *)(a1 + 64);
            v17 = (unsigned __int64 *)(v11 + 8 * v9);
            if ( (unsigned __int64 *)v11 == v17 )
              goto LABEL_30;
            v18 = *(unsigned __int64 **)(a1 + 56);
            while ( v16 != *v18 )
            {
              if ( v17 == ++v18 )
                goto LABEL_30;
            }
            if ( v18 == v17 )
            {
LABEL_30:
              if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)++v9 )
              {
                v65 = v16;
                v19 = qvector_reserve(a1 + 56, v11, v9, 8);
                v9 = *(_QWORD *)(a1 + 64);
                v16 = v65;
                *(_QWORD *)(a1 + 56) = v19;
                v17 = (unsigned __int64 *)(v19 + 8 * v9);
              }
              *v17 = v16;
              ++*(_QWORD *)(a1 + 64);
            }
            v16 += 4LL;
          }
          while ( v8 >= v16 );
        }
      }
      if ( (unsigned __int8)sub_27FE0((__int64)&v77, v11, v9) )
      {
        v13 = *(_QWORD *)(a1 + 64);
        v14 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v13 + 1) )
        {
          v15 = qvector_reserve(v66, v14, v13 + 1, 8);
          *(_QWORD *)(a1 + 56) = v15;
          v14 = v15;
          v13 = *(_QWORD *)(a1 + 64);
        }
        *(_QWORD *)(v14 + 8 * v13) = v8;
        ++*(_QWORD *)(a1 + 64);
      }
      if ( !(unsigned __int8)sub_5F0A0(&v70, *(_QWORD *)a1, &v77) )
        break;
      if ( *(_BYTE *)(a1 + 312) )
        break;
      sub_5E510(a1 + 160, *(_QWORD *)a1, (__int64)&v77);
      v8 += WORD1(v79);
    }
    while ( v8 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  if ( (getinf(57) & 0xF) != 1 && !(unsigned __int8)getinf_flag(67, 16, v20, v21, v22, v23, (__int64)&v68, v65, v66) )
  {
    sub_5F760((_QWORD *)a1, (unsigned __int64 *)(a1 + 96), (_QWORD *)(a1 + 112), a1 + 208, v22, v23);
    sub_5F760((_QWORD *)a1, (unsigned __int64 *)(a1 + 104), (_QWORD *)(a1 + 120), a1 + 248, v53, v54);
  }
  v24 = *(_QWORD *)(a1 + 24);
  v25 = *(__m128i **)(a1 + 16);
  v26 = &v25[2 * v24];
  if ( v25 != v26 )
  {
    v27 = (32 * v24) >> 5;
    v28 = -2;
    if ( v27 )
    {
      _BitScanReverse64(&v27, v27);
      v28 = 2LL * (int)v27;
    }
    sub_5C940(*(__m128i **)(a1 + 16), v26, v28, (__int64 (__fastcall *)(__int64, __int64))sub_5DC80, v22, v23);
    sub_5F590(v25, v26, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_5DC80);
    v24 = *(_QWORD *)(a1 + 24);
  }
  v29 = *(_QWORD *)(a1 + 144);
  v69 = v24;
  v68.m128i_i64[0] = a1 + 16;
  *(_QWORD *)(a1 + 48) = 0;
  v30 = 0;
  LOBYTE(v25) = a2 | (v29 == 0);
  if ( (_BYTE)v25 )
  {
LABEL_41:
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - **(_QWORD **)(a1 + 8) == 1 )
    {
LABEL_56:
      sub_5A5E0((__int64 *)(a1 + 16));
      LODWORD(v25) = 1;
      goto LABEL_57;
    }
    v31 = *(_QWORD *)(a1 + 48);
    if ( v30 == v24 )
    {
      v33 = -*(_QWORD *)(a1 + 128);
    }
    else
    {
      do
      {
        sub_5E9B0((_QWORD *)a1, v31, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32 * v30 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v32 = *(_QWORD *)(a1 + 128);
        v68.m128i_i64[1] = v30;
        v33 = -v32;
        v34 = sub_5E700((__int64)v64, v33);
        v30 = v68.m128i_i64[1];
        v31 = v34;
      }
      while ( v68.m128i_i64[1] != v24 );
    }
    sub_5E9B0((_QWORD *)a1, v31, v33);
    v37 = *(__m128i **)(a1 + 16);
    v38 = 2LL * *(_QWORD *)(a1 + 24);
    v39 = &v37[v38];
    if ( v37 != &v37[v38] )
    {
      v40 = (v38 * 16) >> 5;
      v41 = -2;
      if ( v40 )
      {
        _BitScanReverse64(&v40, v40);
        v41 = 2LL * (int)v40;
      }
      sub_5C940(*(__m128i **)(a1 + 16), v39, v41, (__int64 (__fastcall *)(__int64, __int64))sub_5DC90, v35, v36);
      sub_5F590(v37, v39, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_5DC90);
    }
    v42 = *(char **)(a1 + 56);
    v43 = 8LL * *(_QWORD *)(a1 + 64);
    v44 = (unsigned __int64 *)&v42[v43];
    if ( v42 != &v42[v43] )
    {
      if ( v43 >> 3 )
      {
        _BitScanReverse64(&v45, v43 >> 3);
        sub_5DFB0(*(__m128i **)(a1 + 56), v44, 2LL * (int)v45, 0.0, a4, a5);
        if ( v43 > 128 )
        {
          v46 = (unsigned __int64 *)(v42 + 128);
          sub_5DE40(v42, v42 + 128);
          do
          {
            while ( 1 )
            {
              v47 = *v46;
              v48 = *(v46 - 1);
              v49 = v46 - 1;
              if ( *v46 < v48 )
                break;
              v61 = v46++;
              *v61 = v47;
              if ( v44 == v46 )
                goto LABEL_55;
            }
            do
            {
              v49[1] = v48;
              v50 = v49;
              v48 = *--v49;
            }
            while ( v47 < v48 );
            ++v46;
            *v50 = v47;
          }
          while ( v44 != v46 );
          goto LABEL_55;
        }
      }
      else
      {
        sub_5DFB0(*(__m128i **)(a1 + 56), v44, -2, 0.0, a4, a5);
      }
      sub_5DE40(v42, (char *)v44);
    }
LABEL_55:
    v51 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 40) |= 0x10u;
    *(_QWORD *)(a1 + 80) = -v51 - *(_QWORD *)(a1 + 48);
    sub_5A480((_QWORD *)(a1 + 16));
    goto LABEL_56;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) <= 7u )
  {
    v68.m128i_i64[1] = 0;
    v60 = sub_5E700((__int64)v64, -v29);
    v30 = v68.m128i_i64[1];
    *(_QWORD *)(a1 + 48) = v60;
  }
  sub_30140();
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) |= 0x10uLL;
  if ( (unsigned __int8)update_func() && (unsigned __int8)set_frame_size() && (unsigned __int8)update_fpd() )
  {
    v55 = *(_QWORD *)(a1 + 56);
    v56 = *(_QWORD *)(a1 + 64);
    v57 = *(_QWORD *)(a1 + 152);
    v58 = (_QWORD *)(v55 + 8 * v56);
    if ( (_QWORD *)v55 == v58 )
      goto LABEL_68;
    v59 = *(_QWORD **)(a1 + 56);
    while ( v57 != *v59 )
    {
      if ( v58 == ++v59 )
        goto LABEL_68;
    }
    if ( v59 == v58 )
    {
LABEL_68:
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v56 + 1) )
      {
        v62 = qvector_reserve(a1 + 56, v55, v56 + 1, 8);
        v63 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = v62;
        v58 = (_QWORD *)(v62 + 8 * v63);
      }
      *v58 = v57;
      ++*(_QWORD *)(a1 + 64);
    }
    goto LABEL_41;
  }
LABEL_57:
  sub_5E340(v73);
  return (unsigned int)v25;
}
