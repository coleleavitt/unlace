__int64 __fastcall sub_1F4ADC0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // r14d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // r14
  int v22; // r12d
  __int64 v23; // r9
  __int64 v24; // r12
  char v25; // dl
  __int64 v26; // r8
  int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rdi
  _QWORD *v31; // rbp
  int v32; // eax
  __int64 v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rcx
  _QWORD *v40; // rdi
  __int64 v41; // rcx
  _QWORD *v42; // rsi
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 *v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // esi
  int v49; // r10d
  __int64 v50; // r11
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // edi
  unsigned __int64 v55; // rdx
  __int64 *v56; // rbp
  _QWORD *v57; // rax
  int v58; // eax
  int v59; // esi
  __int64 v60; // rdi
  unsigned int v61; // r14d
  int v62; // r10d
  int v63; // r11d
  __int64 v64; // [rsp+0h] [rbp-78h] BYREF
  __int64 v65; // [rsp+8h] [rbp-70h]
  __m128 v66; // [rsp+10h] [rbp-68h] BYREF
  __m128i v67[5]; // [rsp+20h] [rbp-58h] BYREF

  sub_1F4ACC0((__int64)v67, a1, (_BYTE *)a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  result = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) << 7) | *(_DWORD *)(a2 + 76) & 0x7F;
  *(_DWORD *)(a2 + 76) = result;
  if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
    return result;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v12 = *a1;
  v13 = v7;
  v14 = *(_DWORD *)(*a1 + 13056);
  v15 = *a1 + 13040;
  if ( !v14 )
    goto LABEL_13;
  v11 = v14 - 1;
  v16 = *(_QWORD *)(v12 + 13040);
  v17 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
  v18 = v11 & v17;
  result = v16 + 16LL * ((unsigned int)v11 & v17);
  v19 = *(_QWORD *)result;
  if ( v13 != *(_QWORD *)result )
  {
    v49 = 1;
    v50 = 0;
    if ( v19 != -4096 )
    {
      while ( 1 )
      {
        if ( v19 == -8192 && !v50 )
          v50 = result;
        v18 = v11 & (v49 + v18);
        LODWORD(v64) = v49 + 1;
        result = v16 + 16LL * v18;
        v19 = *(_QWORD *)result;
        if ( v13 == *(_QWORD *)result )
          goto LABEL_4;
        if ( v19 == -4096 )
          break;
        v49 = v64;
      }
      if ( v50 )
        result = v50;
    }
    v8 = (unsigned int)(*(_DWORD *)(v12 + 13048) + 1);
    v9 = 3 * v14;
    v10 = (unsigned int)(4 * v8);
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      v51 = v14 - *(_DWORD *)(v12 + 13052) - (unsigned int)v8;
      v16 = v14 >> 3;
      if ( (unsigned int)v51 > (unsigned int)v16 )
      {
LABEL_46:
        v35 = *(_QWORD *)result;
        goto LABEL_15;
      }
      sub_1F36780(v15, v14, v8, v51, v16, v11);
      v58 = *(_DWORD *)(v12 + 13056);
      if ( v58 )
      {
        v59 = v58 - 1;
        v60 = *(_QWORD *)(v12 + 13040);
        v61 = (v58 - 1) & v17;
        LODWORD(v8) = *(_DWORD *)(v12 + 13048) + 1;
        result = v60 + 16LL * v61;
        v35 = *(_QWORD *)result;
        if ( v13 == *(_QWORD *)result )
        {
LABEL_15:
          *(_DWORD *)(v12 + 13048) = v8;
          if ( v35 != -4096 )
            --*(_DWORD *)(v12 + 13052);
          goto LABEL_17;
        }
        v11 = 1;
        v16 = 0;
        if ( v35 != -4096 )
        {
          while ( 1 )
          {
            if ( v35 == -8192 && !v16 )
              v16 = result;
            v61 = v59 & (v11 + v61);
            result = v60 + 16LL * v61;
            v35 = *(_QWORD *)result;
            if ( v13 == *(_QWORD *)result )
              goto LABEL_15;
            if ( v35 == -4096 )
            {
              if ( !v16 )
                goto LABEL_57;
              v35 = *(_QWORD *)v16;
              result = v16;
              goto LABEL_15;
            }
            v11 = (unsigned int)(v11 + 1);
          }
        }
        goto LABEL_57;
      }
      goto LABEL_101;
    }
LABEL_13:
    sub_1F36780(v15, 2 * v14, v8, v9, v10, v11);
    v32 = *(_DWORD *)(v12 + 13056);
    if ( v32 )
    {
      v16 = (unsigned int)(v32 - 1);
      v33 = *(_QWORD *)(v12 + 13040);
      v34 = v16 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      LODWORD(v8) = *(_DWORD *)(v12 + 13048) + 1;
      result = v33 + 16LL * v34;
      v35 = *(_QWORD *)result;
      if ( v13 == *(_QWORD *)result )
        goto LABEL_15;
      if ( v35 != -4096 )
      {
        v11 = v33 + 16LL * ((unsigned int)v16 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4)));
        v63 = 1;
        result = 0;
        while ( 1 )
        {
          if ( !result && v35 == -8192 )
            result = v11;
          v34 = v16 & (v63 + v34);
          v11 = v33 + 16LL * v34;
          v35 = *(_QWORD *)v11;
          if ( v13 == *(_QWORD *)v11 )
          {
            result = v33 + 16LL * v34;
            goto LABEL_15;
          }
          if ( v35 == -4096 )
            break;
          ++v63;
        }
        if ( result )
          goto LABEL_46;
        result = v33 + 16LL * v34;
      }
LABEL_57:
      *(_DWORD *)(v12 + 13048) = v8;
LABEL_17:
      *(_QWORD *)result = v13;
      v21 = (__int64 *)(result + 8);
      *(_QWORD *)(result + 8) = 0;
      goto LABEL_18;
    }
LABEL_101:
    ++*(_DWORD *)(v12 + 13048);
    BUG();
  }
LABEL_4:
  v20 = *(_QWORD *)(result + 8);
  v21 = (__int64 *)(result + 8);
  if ( v20 )
    goto LABEL_5;
LABEL_18:
  v20 = v13;
  v36 = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( *(char *)(v20 + 29) >= 0 && (*(_BYTE *)(v20 + 74) & 1) != 0 )
      {
        *v21 = v20;
        v12 = *a1;
        goto LABEL_5;
      }
      v37 = *(_QWORD *)(v20 + 96);
      if ( (v37 & 3) != 0 )
        break;
      result = v37 & 0xFFFFFFFFFFFFFFFCLL;
      v20 = result;
      if ( result )
        goto LABEL_23;
      v20 = 0;
LABEL_24:
      if ( v20 == v36 || !v20 )
        goto LABEL_26;
    }
    v38 = *(_QWORD *)(v20 + 104);
    v39 = *(_QWORD *)(v38 + 96);
    result = v39 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v39 & 1) == 0 )
    {
      v40 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v39 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v41 = v39 & 2;
        v42 = v40;
        if ( !(_DWORD)v41 )
        {
LABEL_31:
          v36 = v20;
          v20 = (__int64)v42;
LABEL_23:
          if ( v13 == v20 )
            goto LABEL_26;
          goto LABEL_24;
        }
        v43 = *(_QWORD *)(v20 + 104);
        v64 = v20;
        v44 = sub_6E2500(v40, v43, v20, v41, v16, v11);
        v20 = v64;
        result = v44 & 0xFFFFFFFFFFFFFFFELL;
        v39 = result | 1;
        *(_QWORD *)(v38 + 96) = result | 1;
      }
    }
    v45 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    v42 = (_QWORD *)v45;
    if ( result )
    {
      if ( (result & 4) != 0 )
      {
        v42 = nullptr;
        if ( v45 )
        {
          v46 = *(__int64 **)v45;
          result = *(unsigned int *)(*(_QWORD *)v45 + 12LL);
          if ( *(_DWORD *)(v45 + 8) != (_DWORD)result )
          {
            *(_DWORD *)(v45 + 8) = result;
            v47 = *v46;
            v65 = v20;
            v64 = v45;
            result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v47 + 152))(v46, v38);
            v20 = v65;
            v45 = v64;
          }
          v42 = *(_QWORD **)(v45 + 16);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_26:
  v20 = *v21;
  if ( !*v21 )
  {
    *v21 = a2;
    return result;
  }
  v12 = *a1;
LABEL_5:
  v64 = v20 + 64;
  v66 = _mm_loadh_ps((const double *)&v64);
  sub_1F3B1C0(v67, v12 + 12992, (__int64 *)&v66, &v66.m128_u64[1], v16, v11);
  *(_BYTE *)(a2 + 74) = *(_BYTE *)(a2 + 74) & 0xBE | 0x40;
  sub_1EFE8D0(*a1, *v21, a2);
  v22 = sub_B78F30(*v21);
  result = sub_B78F30(a2);
  if ( v22 != (_DWORD)result )
  {
    v24 = *a1;
    v25 = *(_BYTE *)(*a1 + 12128) & 1;
    if ( v25 )
    {
      v26 = v24 + 12136;
      v27 = 1;
    }
    else
    {
      v48 = *(_DWORD *)(v24 + 12144);
      v26 = *(_QWORD *)(v24 + 12136);
      if ( !v48 )
      {
        v67[0].m128i_i64[0] = 0;
        v52 = *(_DWORD *)(v24 + 12128);
        v53 = (v52 >> 1) + 1;
        goto LABEL_48;
      }
      v27 = v48 - 1;
    }
    v28 = v27 & (((unsigned int)*v21 >> 9) ^ ((unsigned int)*v21 >> 4));
    v29 = v26 + 40LL * v28;
    v30 = *(_QWORD *)v29;
    if ( *v21 == *(_QWORD *)v29 )
    {
LABEL_10:
      result = *(unsigned int *)(v29 + 16);
      v31 = (_QWORD *)(v29 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(v29 + 20) )
      {
        sub_2237220(v29 + 8, v29 + 24, result + 1, 8);
        result = *(unsigned int *)(v29 + 16);
      }
LABEL_12:
      *(_QWORD *)(*v31 + 8 * result) = a2;
      ++*((_DWORD *)v31 + 2);
      return result;
    }
    v62 = 1;
    v23 = 0;
    if ( v30 != -4096 )
    {
      while ( 1 )
      {
        if ( !v23 && v30 == -8192 )
          v23 = v29;
        v28 = v27 & (v62 + v28);
        v29 = v26 + 40LL * v28;
        v30 = *(_QWORD *)v29;
        if ( *v21 == *(_QWORD *)v29 )
          goto LABEL_10;
        if ( v30 == -4096 )
        {
          if ( v23 )
            v29 = v23;
          break;
        }
        ++v62;
      }
    }
    v67[0].m128i_i64[0] = v29;
    v54 = 6;
    v48 = 2;
    v52 = *(_DWORD *)(v24 + 12128);
    v53 = (v52 >> 1) + 1;
    if ( v25 )
    {
LABEL_49:
      v55 = (unsigned int)(4 * v53);
      if ( (unsigned int)v55 >= v54 )
      {
        v48 *= 2;
      }
      else
      {
        v55 = v48 - *(_DWORD *)(v24 + 12132) - (unsigned int)v53;
        v53 = v48 >> 3;
        if ( (unsigned int)v55 > (unsigned int)v53 )
        {
LABEL_51:
          *(_DWORD *)(v24 + 12128) = (2 * (v52 >> 1) + 2) | v52 & 1;
          v56 = (__int64 *)v67[0].m128i_i64[0];
          if ( *(_QWORD *)v67[0].m128i_i64[0] != -4096 )
            --*(_DWORD *)(v24 + 12132);
          *v56 = *v21;
          v57 = v56 + 3;
          v31 = v56 + 1;
          *v31 = v57;
          v31[1] = 0x200000000LL;
          result = 0;
          goto LABEL_12;
        }
      }
      sub_1F3CDB0(v24 + 12128, v48, v55, v53, v26, v23);
      sub_1F20EB0(v24 + 12128, v21, v67);
      v52 = *(_DWORD *)(v24 + 12128);
      goto LABEL_51;
    }
    v48 = *(_DWORD *)(v24 + 12144);
LABEL_48:
    v54 = 3 * v48;
    goto LABEL_49;
  }
  return result;
}
