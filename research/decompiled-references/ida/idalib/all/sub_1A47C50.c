bool __fastcall sub_1A47C50(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // dl
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  _DWORD *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rbx
  unsigned __int8 v20; // dl
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  bool result; // al
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 *v34; // rax
  char v35; // cl
  unsigned __int64 v36; // rax
  __int64 v37; // r10
  _QWORD *v38; // rdx
  unsigned int v39; // edi
  __int64 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // rcx
  char v48; // di
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  _QWORD *v51; // rdx
  int v52; // r14d
  unsigned __int64 v53; // rax
  _QWORD *v54; // r10
  __int64 v55; // rdx
  unsigned int v56; // edi
  __int64 *v57; // rsi
  unsigned __int64 v58; // rbx
  __int64 v59; // rsi
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // r8
  _QWORD *v65; // rdx
  unsigned int v66; // r9d
  unsigned int v67; // ecx
  int v68; // r11d
  __int64 v69; // r9
  int i; // edx
  int v71; // r11d
  __int64 *v72; // r10
  unsigned int v73; // esi
  bool v74; // [rsp+8h] [rbp-2B0h]
  __int64 v75; // [rsp+20h] [rbp-298h] BYREF
  __int64 v76; // [rsp+28h] [rbp-290h] BYREF
  unsigned __int64 v77; // [rsp+30h] [rbp-288h] BYREF
  char v78; // [rsp+38h] [rbp-280h]
  __m128 v79; // [rsp+40h] [rbp-278h] BYREF
  __m128i si128; // [rsp+50h] [rbp-268h] BYREF
  __int64 v81; // [rsp+60h] [rbp-258h]
  __int64 v82; // [rsp+70h] [rbp-248h] BYREF
  _QWORD *v83; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v84; // [rsp+80h] [rbp-238h]
  __int64 v85; // [rsp+278h] [rbp-40h] BYREF

  v6 = a1[1].m128i_i64[0];
  v75 = a2;
  si128 = _mm_load_si128(a1);
  v81 = v6;
  v76 = a3;
  do
  {
    v16 = (_DWORD *)si128.m128i_i64[0];
    do
    {
      if ( !v75 )
      {
        v15 = 0;
        goto LABEL_13;
      }
      v28 = (__int64 *)(v75 & 0xFFFFFFFFFFFFFFF8LL);
      v7 = v75 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v75 & 4) != 0 && v28 )
      {
        v75 = v28[1];
        v7 = *v28;
      }
      else
      {
        v75 = 0;
      }
    }
    while ( (*(_WORD *)(v7 + 30) & 0x3FFF & *(_DWORD *)si128.m128i_i64[0]) == 0 );
    if ( *(_BYTE *)si128.m128i_i64[1] )
    {
      v29 = sub_1CB3DC0(v7, 1, 1, v28, a5);
      if ( v29 )
        v7 = v29;
    }
    v8 = *(_BYTE *)(v7 + 28) & 0x7F;
    v9 = v8;
    v10 = (unsigned int)v8 - 53;
    if ( (unsigned int)v10 <= 1 || (v11 = (v8 + 52) & 0x7F, (unsigned __int8)v11 <= 1u) )
    {
      v7 = sub_B72ED0(v7);
      v9 = *(_BYTE *)(v7 + 28) & 0x7F;
    }
    if ( (unsigned int)(v9 - 58) <= 9 )
    {
      v12 = *(_QWORD *)(v7 + 48);
      if ( v12 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
        v14 = v13;
      }
      else
      {
        v13 = sub_A7AA70(*(_QWORD *)(v81 + 248), v7, v11, v10, a5, a6);
        v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v15 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)(v14 + 8) | (unsigned __int8)v13) & 7;
      v16 = (_DWORD *)si128.m128i_i64[0];
      goto LABEL_13;
    }
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    v16 = (_DWORD *)si128.m128i_i64[0];
    v15 = v32;
    v17 = v76;
    if ( !v76 )
      return v15 == 0;
    while ( 1 )
    {
      v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      v19 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) != 0 && v18 )
      {
        v76 = v18[1];
        v19 = *v18;
      }
      else
      {
        v76 = 0;
      }
      if ( (*(_WORD *)(v19 + 30) & 0x3FFF & *v16) != 0 )
        break;
LABEL_13:
      v17 = v76;
      if ( !v76 )
        return v15 == 0;
    }
    if ( *(_BYTE *)si128.m128i_i64[1] )
    {
      v30 = sub_1CB3DC0(v19, 1, 1, v18, a5);
      if ( v30 )
        v19 = v30;
    }
    v20 = *(_BYTE *)(v19 + 28) & 0x7F;
    v21 = v20;
    v22 = (unsigned int)v20 - 53;
    if ( (unsigned int)v22 <= 1 || (v23 = (v20 + 52) & 0x7F, (unsigned __int8)v23 <= 1u) )
    {
      v19 = sub_B72ED0(v19);
      v21 = *(_BYTE *)(v19 + 28) & 0x7F;
    }
    if ( (unsigned int)(v21 - 58) > 9 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    }
    else
    {
      v24 = *(_QWORD *)(v19 + 48);
      if ( v24 )
      {
        v25 = v24 & 0xFFFFFFFFFFFFFFF0LL;
        v26 = v25;
      }
      else
      {
        v25 = sub_A7AA70(*(_QWORD *)(v81 + 248), v19, v23, v22, a5, a6);
        v26 = v25 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v27 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)(v26 + 8) | (unsigned __int8)v25) & 7;
    }
    if ( !v15 )
      return v27 == 0;
    if ( !v27 )
      return 0;
  }
  while ( v27 == v15 );
  v33 = v27;
  v82 = 1;
  v34 = (__int64 *)&v83;
  do
  {
    *v34 = -4096;
    v34 += 2;
  }
  while ( &v85 != v34 );
  v35 = v82;
  v36 = v15;
  while ( 1 )
  {
    v77 = v36;
    v78 = 0;
    v44 = v35 & 1;
    if ( v44 )
    {
      v37 = 64;
      a6 = 31;
      v38 = &v83;
      v39 = ((unsigned __int8)((unsigned int)v36 >> 4) ^ (unsigned __int8)((unsigned int)v36 >> 9)) & 0x1F;
      v40 = (__int64 *)&(&v83)[2
                             * (((unsigned __int8)((unsigned int)v36 >> 4)
                               ^ (unsigned __int8)((unsigned int)v36 >> 9))
                              & 0x1F)];
      a5 = *v40;
      if ( *v40 == v36 )
        goto LABEL_52;
    }
    else
    {
      v45 = v84;
      if ( !v84 )
      {
        v79.m128_u64[0] = 0;
        v46 = ((unsigned int)v82 >> 1) + 1;
LABEL_60:
        v47 = (unsigned int)(3 * v45);
        goto LABEL_61;
      }
      a6 = v84 - 1;
      v38 = v83;
      v39 = a6 & (((unsigned int)v36 >> 4) ^ ((unsigned int)v36 >> 9));
      v40 = &v83[2 * v39];
      a5 = *v40;
      if ( *v40 == v36 )
      {
LABEL_58:
        v37 = 2 * v45;
LABEL_52:
        sub_1A3B070(&v79, v40, &v38[v37], (__int64)&v82, 1);
        goto LABEL_53;
      }
    }
    v71 = 1;
    v72 = nullptr;
    if ( a5 != -4096 )
    {
      while ( 1 )
      {
        if ( !v72 && a5 == -8192 )
          v72 = v40;
        v39 = a6 & (v71 + v39);
        v40 = &v38[2 * v39];
        a5 = *v40;
        if ( *v40 == v36 )
          break;
        if ( a5 == -4096 )
        {
          if ( v72 )
            v40 = v72;
          goto LABEL_93;
        }
        ++v71;
      }
      if ( !(_BYTE)v44 )
      {
        v38 = v83;
        v45 = v84;
        goto LABEL_58;
      }
      v37 = 64;
      v38 = &v83;
      goto LABEL_52;
    }
LABEL_93:
    v79.m128_u64[0] = (unsigned __int64)v40;
    v46 = ((unsigned int)v82 >> 1) + 1;
    if ( !(_BYTE)v44 )
    {
      LODWORD(v45) = v84;
      goto LABEL_60;
    }
    v47 = 96;
    LODWORD(v45) = 32;
LABEL_61:
    if ( 4 * (int)v46 >= (unsigned int)v47 )
    {
      v73 = 2 * v45;
LABEL_100:
      sub_1A47800((__int64)&v82, v73, v46, v47, a5, a6);
      sub_1A3AFA0((__int64)&v82, (__int64 *)&v77, &v79);
      v36 = v77;
      v48 = v78;
      LODWORD(v46) = ((unsigned int)v82 >> 1) + 1;
      goto LABEL_63;
    }
    v48 = 0;
    v47 = (unsigned int)(v45 - HIDWORD(v82) - v46);
    if ( (unsigned int)v47 <= (unsigned int)v45 >> 3 )
    {
      v73 = v45;
      goto LABEL_100;
    }
LABEL_63:
    v49 = v79.m128_u64[0];
    LODWORD(v82) = v82 & 1 | (2 * v46);
    if ( *(_QWORD *)v79.m128_u64[0] != -4096 )
      --HIDWORD(v82);
    *(_QWORD *)v79.m128_u64[0] = v36;
    *(_BYTE *)(v49 + 8) = v48;
    if ( (v82 & 1) != 0 )
    {
      v50 = 64;
      v51 = &v83;
    }
    else
    {
      v51 = v83;
      v50 = 2LL * v84;
    }
    sub_1A3B070(&v79, (__int64 *)v49, &v51[v50], (__int64)&v82, 1);
LABEL_53:
    v36 = sub_1A38E40((__int64)&si128, &v75, 0, v41, v42, v43);
    if ( !v36 )
      break;
    v35 = v82;
  }
  v52 = 0;
  v53 = v33;
  while ( 1 )
  {
    v64 = v82 & 1;
    if ( (v82 & 1) != 0 )
    {
      v54 = &v83;
      v55 = 64;
      v56 = ((unsigned __int8)((unsigned int)v53 >> 4) ^ (unsigned __int8)((unsigned int)v53 >> 9)) & 0x1F;
      v57 = (__int64 *)&(&v83)[2
                             * (((unsigned __int8)((unsigned int)v53 >> 4)
                               ^ (unsigned __int8)((unsigned int)v53 >> 9))
                              & 0x1F)];
      if ( *v57 == v53 )
        goto LABEL_71;
      v69 = 64;
      v68 = 31;
      if ( *v57 != -4096 )
      {
LABEL_88:
        for ( i = 1; ; ++i )
        {
          v56 = v68 & (v56 + i);
          v57 = &v54[2 * v56];
          if ( *v57 == v53 )
            break;
          if ( *v57 == -4096 )
          {
            if ( !v64 )
            {
              v65 = v83;
              v66 = v84;
              goto LABEL_84;
            }
            v69 = 64;
            v54 = &v83;
            goto LABEL_86;
          }
        }
        if ( !v64 )
        {
          v54 = v83;
          v67 = v84;
          goto LABEL_81;
        }
        v55 = 64;
        v54 = &v83;
        goto LABEL_71;
      }
    }
    else
    {
      v65 = v83;
      v66 = v84;
      v54 = v83;
      v67 = v84;
      if ( v84 )
      {
        v68 = v84 - 1;
        v56 = (v84 - 1) & (((unsigned int)v53 >> 4) ^ ((unsigned int)v53 >> 9));
        v57 = &v83[2 * v56];
        if ( *v57 == v53 )
        {
LABEL_81:
          v55 = 2LL * v67;
LABEL_71:
          sub_1A3B070(&v79, v57, &v54[v55], (__int64)&v82, 1);
          v58 = v79.m128_u64[0];
          goto LABEL_72;
        }
        if ( *v57 != -4096 )
          goto LABEL_88;
LABEL_84:
        v54 = v65;
      }
      v69 = 2LL * v66;
    }
LABEL_86:
    sub_1A3B070(&v79, &v54[v69], &v54[v69], (__int64)&v82, 1);
    v58 = v79.m128_u64[0];
LABEL_72:
    if ( (v82 & 1) != 0 )
    {
      v59 = 64;
      v60 = &v83;
    }
    else
    {
      v60 = v83;
      v59 = 2LL * v84;
    }
    sub_1A3B070(&v79, &v60[v59], &v60[v59], (__int64)&v82, 1);
    if ( v79.m128_u64[0] == v58 )
      break;
    if ( !*(_BYTE *)(v58 + 8) )
    {
      *(_BYTE *)(v58 + 8) = 1;
      ++v52;
    }
    v53 = sub_1A38E40((__int64)&si128, &v76, 0, v61, v62, v63);
    if ( !v53 )
    {
      result = (unsigned int)v82 >> 1 == v52;
      goto LABEL_96;
    }
  }
  result = 0;
LABEL_96:
  if ( (v82 & 1) == 0 )
  {
    v74 = result;
    operator delete(v83, 16LL * v84, 8);
    return v74;
  }
  return result;
}
