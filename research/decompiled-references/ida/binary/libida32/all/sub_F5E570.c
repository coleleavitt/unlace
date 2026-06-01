__int64 __fastcall sub_F5E570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __m128i si128; // xmm2
  __int64 v24; // rax
  __int8 *v25; // rsi
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // r12
  __int64 *i; // r12
  __int64 v33; // rdx
  __m128i v34; // xmm1
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // esi
  __int64 v41; // rdx
  __m128i v42; // xmm3
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  __int64 *v55; // rdi
  __int64 v58; // [rsp+10h] [rbp-448h]
  __int64 v59; // [rsp+18h] [rbp-440h]
  __int64 v60; // [rsp+38h] [rbp-420h] BYREF
  __m128i v61; // [rsp+40h] [rbp-418h] BYREF
  __int64 v62; // [rsp+50h] [rbp-408h]
  __int64 v63; // [rsp+60h] [rbp-3F8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-3F0h]
  __m128i v65; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 *v66; // [rsp+90h] [rbp-3C8h]
  __int64 v67; // [rsp+98h] [rbp-3C0h]
  __int64 *v68; // [rsp+A0h] [rbp-3B8h]
  __int64 v69; // [rsp+A8h] [rbp-3B0h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-3A8h] BYREF
  _QWORD v71[2]; // [rsp+128h] [rbp-330h] BYREF
  int v72; // [rsp+138h] [rbp-320h]
  char v73; // [rsp+13Ch] [rbp-31Ch]
  _QWORD v74[7]; // [rsp+140h] [rbp-318h] BYREF
  _DWORD v75[26]; // [rsp+178h] [rbp-2E0h] BYREF
  __int64 v76; // [rsp+1E0h] [rbp-278h]
  __int16 v77; // [rsp+1E8h] [rbp-270h]
  char v78; // [rsp+1EAh] [rbp-26Eh]
  __int64 *v79; // [rsp+2B0h] [rbp-1A8h]
  __int64 v80; // [rsp+2B8h] [rbp-1A0h]
  int v81; // [rsp+2C0h] [rbp-198h]
  char v82; // [rsp+2C4h] [rbp-194h]
  __int64 v83; // [rsp+2C8h] [rbp-190h] BYREF
  _QWORD v84[2]; // [rsp+2E8h] [rbp-170h] BYREF
  _QWORD v85[34]; // [rsp+2F8h] [rbp-160h] BYREF
  int v86; // [rsp+408h] [rbp-50h]
  __int64 v87; // [rsp+410h] [rbp-48h]

  if ( (*(_BYTE *)(a5 + 82) & 8) != 0 )
    goto LABEL_27;
  v9 = a5 + 72;
  v10 = sub_B4E950(a3 + 72);
  if ( v10 )
    v10 -= 64LL;
  v65.m128i_i64[0] = 0;
  v67 = 0;
  v11 = sub_B4E950(v9);
  v68 = (_QWORD *)(&dword_0 + 1);
  if ( v11 )
    v11 -= 64LL;
  v66 = &v65.m128i_i64[1];
  v65.m128i_i64[1] = (__int64)&v65.m128i_i64[1];
  v12 = &v69;
  do
  {
    *v12 = 0;
    v12 += 2;
  }
  while ( v71 != v12 );
  v71[0] = v74;
  v74[5] = v75;
  v77 = 257;
  v71[1] = 4;
  v72 = 0;
  v73 = 1;
  v74[4] = 0;
  v74[6] = 0x400000000LL;
  v75[24] = 0;
  v76 = 0;
  v78 = 1;
  sub_B4C7F0(v11, v10, (__int64)&v65);
  v15 = (unsigned __int64 *)v65.m128i_i64[1];
  if ( (unsigned __int64 *)v65.m128i_i64[1] == &v65.m128i_u64[1] )
  {
LABEL_9:
    v62 = 0;
    v61 = 0;
  }
  else
  {
    while ( 1 )
    {
      sub_F5D0B0((__m128 *)&v63, *(_QWORD *)(a2 + 40), v11, (__int64)(v15 + 2), v13, v14);
      v16 = *((_QWORD *)&v64 + 1);
      v59 = v64;
      v17 = *((_QWORD *)&v64 + 1) + a6;
      if ( (_QWORD)v64 )
      {
        v58 = *((_QWORD *)&v64 + 1);
        v18 = sub_EBA840(*(_QWORD *)(a2 + 40), *(char **)(a2 + 32), *((__int64 *)&v64 + 1), v64, v13, v14);
        v22 = sub_F5E070(v18 + 9, v59, v19, v59, v20, v21);
        v16 = v58;
        v17 = v58 + v22;
      }
      if ( a4 == v17 )
        break;
      v15 = (unsigned __int64 *)*v15;
      if ( v15 == &v65.m128i_u64[1] )
        goto LABEL_9;
    }
    si128 = _mm_load_si128((const __m128i *)&v63);
    *((_QWORD *)&v64 + 1) = -v16;
    v62 = -v16;
    v61 = si128;
  }
  sub_F58760((__int64)&v65);
  v24 = v62;
  if ( !v62 )
  {
    if ( v61.m128i_i64[1] )
    {
      v63 = 0;
      v64 = 0;
      goto LABEL_18;
    }
LABEL_27:
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v63 = 0;
  v64 = 0;
  if ( !v61.m128i_i64[1] )
    goto LABEL_26;
LABEL_18:
  v25 = &v61.m128i_i8[8];
  v26 = (unsigned __int8)sub_F55760((__int64 *)(a2 + 112), &v61.m128i_i64[1], &v60) == 0;
  v30 = (_QWORD *)v60;
  if ( v26 )
  {
    v36 = *(_DWORD *)(a2 + 120);
    v65.m128i_i64[0] = v60;
    v37 = (unsigned int)(v36 + 1);
    v38 = *(unsigned int *)(a2 + 128);
    v39 = (unsigned int)(4 * v37);
    v40 = 2 * v38;
    if ( (unsigned int)v39 < 3 * (int)v38 )
    {
      if ( (int)v38 - *(_DWORD *)(a2 + 124) - (int)v37 > (unsigned int)v38 >> 3 )
      {
LABEL_33:
        v26 = *v30 == -4096;
        *(_DWORD *)(a2 + 120) = v37;
        if ( !v26 )
          --*(_DWORD *)(a2 + 124);
        v41 = v61.m128i_i64[1];
        v31 = v30 + 1;
        v30[2] = 0x1000000000LL;
        *v30 = v41;
        v30[1] = v30 + 3;
        goto LABEL_36;
      }
      v40 = *(_DWORD *)(a2 + 128);
    }
    sub_F57B00((__int64 **)(a2 + 112), v40, v37, v38, v39, v29);
    sub_F55760((__int64 *)(a2 + 112), &v61.m128i_i64[1], &v65);
    LODWORD(v37) = *(_DWORD *)(a2 + 120) + 1;
    v30 = (_QWORD *)v65.m128i_i64[0];
    goto LABEL_33;
  }
  v31 = (__int64 *)(v60 + 8);
  if ( !*(_DWORD *)(v60 + 16) )
  {
LABEL_36:
    v42 = _mm_load_si128((const __m128i *)a2);
    v66 = *(__int64 **)(a2 + 8);
    v65 = v42;
    v67 = sub_B685F0((__int64)v66);
    v68 = &v70;
    v69 = 0x4000000000LL;
    v79 = &v83;
    v84[0] = v85;
    v84[1] = 0x1000000000LL;
    v80 = 4;
    v81 = 0;
    v82 = 1;
    v85[32] = 0;
    v85[33] = 0;
    v86 = 0;
    v87 = 0;
    sub_F5E490((__int64)&v65, (char *)v61.m128i_i64[1], 0, 1, 0, v43);
    v25 = (__int8 *)v84;
    sub_F5AA90(v31, (__int64)v84);
    sub_F559A0((__int64)&v65);
  }
  for ( i = (__int64 *)*v31; ; i += 2 )
  {
    v33 = *i;
    if ( (*(_BYTE *)(*i + 28) & 0x7F) == 0x24 )
    {
      if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x24 )
        goto LABEL_25;
      continue;
    }
    if ( *(_QWORD *)(v33 + 40) == *(_QWORD *)(a3 + 40) )
    {
      v44 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      v45 = (__int64 *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      v46 = *v45;
      if ( v44 == *v45 )
        goto LABEL_25;
      v47 = sub_A39EA0(*v45, (__int64)v25, v33, v27, v28);
      if ( sub_A39EA0(v44, (__int64)v25, v48, v49, v50) == v47 )
      {
        v51 = *(unsigned __int16 *)(v46 + 22);
        v27 = *(unsigned __int16 *)(v44 + 22);
        v52 = 8 * v51;
        if ( v51 == v27 )
        {
          v53 = (_QWORD *)(v44 + 48);
          v54 = (_QWORD *)(v44 + 48 + v52);
          if ( (_QWORD *)(v44 + 48) == v54 )
            goto LABEL_25;
          v27 = *(_QWORD *)(v44 + 48);
          if ( *(_QWORD *)(v46 + 48) == v27 )
            break;
        }
      }
    }
LABEL_22:
    ;
  }
  v55 = (__int64 *)(v46 + 48);
  while ( 1 )
  {
    ++v53;
    ++v55;
    if ( v54 == v53 )
      break;
    v27 = *v55;
    if ( *v53 != *v55 )
      goto LABEL_22;
  }
LABEL_25:
  *(_QWORD *)&v64 = i[1];
  v24 = v62;
LABEL_26:
  v63 = v24;
  v34 = _mm_load_si128((const __m128i *)&v63);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)&v64 + 1);
  *(__m128i *)a1 = v34;
  return a1;
}

