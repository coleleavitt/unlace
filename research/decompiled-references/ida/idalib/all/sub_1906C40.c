void __fastcall sub_1906C40(__m128 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rax
  __int64 *v8; // r15
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r13
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  bool v17; // r12
  __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // r12d
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __m128 *v32; // r15
  __m128 *v33; // r10
  unsigned __int64 *v34; // r12
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int16 v40; // ax
  __int32 v41; // r10d
  __int64 v42; // r11
  int v43; // ecx
  __int32 v44; // r8d
  __m128 *v45; // r10
  bool v46; // zf
  unsigned __int64 v47; // rax
  int v48; // edx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r13
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __m128i v57; // xmm0
  __m128i v59; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+18h] [rbp-90h] BYREF
  int v61; // [rsp+2Ch] [rbp-7Ch] BYREF
  __m128 v62[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128 v63; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v64; // [rsp+60h] [rbp-48h]
  unsigned __int64 *v65; // [rsp+68h] [rbp-40h]

  v60 = a3;
  v59.m128i_i64[1] = a4;
  *(_BYTE *)(a3 + 29) |= 8u;
  if ( *(char *)(a3 + 28) < 0 )
    return;
  v7 = (__int64 *)sub_B73ED0(a3);
  v8 = v7;
  if ( v7 )
    v9 = ((*v7 >> 1) & 3) + 1;
  else
    v9 = sub_B740B0(v60);
  v10 = sub_18BB0D0((__int64)a1);
  v13 = sub_B79830(v60, a1[15].m128_i64[1]);
  v14 = *(_BYTE *)(v60 + 28) & 0x7F;
  v15 = v14;
  if ( v14 == 40 || v14 == 46 )
  {
    v16 = *(_QWORD *)(v60 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = *(_QWORD *)(v60 + 16) & 4LL;
    if ( (*(_QWORD *)(v60 + 16) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 8);
    v59.m128i_i64[0] = v60;
    if ( v16 )
    {
      v15 = *(_BYTE *)(sub_B8EAA0(v16) + 8) & 0x7F;
      if ( (unsigned __int8)v15 <= 0x12u )
      {
        if ( ((1LL << v15) & 0x40182) != 0 )
        {
LABEL_37:
          v21 = v60;
          if ( (*(_BYTE *)(v60 + 96) & 5) == 1 )
            goto LABEL_13;
          v22 = *(_DWORD *)(a5 + 16);
          v62[0].m128_u64[0] = v60;
          v62[0].m128_i32[2] = 0;
          if ( v22 )
          {
            v12 = *(_QWORD *)a5;
            v23 = (v22 - 1) & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
            v24 = *(_QWORD *)a5 + 16LL * v23;
            v25 = *(_QWORD *)v24;
            if ( v60 == *(_QWORD *)v24 )
            {
LABEL_40:
              sub_17A9350(&v63, (_QWORD *)v24, (_QWORD *)(v12 + 16LL * v22), a5, 1);
              v26 = v63.m128_u64[0];
LABEL_41:
              ++*(_DWORD *)(v26 + 8);
              goto LABEL_13;
            }
            v41 = 1;
            v42 = 0;
            if ( v25 != -4096 )
            {
              while ( 1 )
              {
                if ( !v42 && v25 == -8192 )
                  v42 = v24;
                v23 = (v22 - 1) & (v41 + v23);
                v59.m128i_i32[0] = v41 + 1;
                v24 = v12 + 16LL * v23;
                v25 = *(_QWORD *)v24;
                if ( v60 == *(_QWORD *)v24 )
                  goto LABEL_40;
                if ( v25 == -4096 )
                {
                  if ( v42 )
                    v24 = v42;
                  break;
                }
                v41 = v59.m128i_i32[0];
              }
            }
            v43 = *(_DWORD *)(a5 + 8);
            v63.m128_u64[0] = v24;
            v15 = (unsigned int)(v43 + 1);
            v11 = (unsigned int)(4 * v15);
            if ( (unsigned int)v11 < 3 * v22 )
            {
              v44 = 0;
              v45 = &v63;
              if ( v22 - *(_DWORD *)(a5 + 12) - (unsigned int)v15 > v22 >> 3 )
              {
LABEL_103:
                v46 = *(_QWORD *)v24 == -4096;
                *(_DWORD *)(a5 + 8) = v15;
                if ( !v46 )
                  --*(_DWORD *)(a5 + 12);
                *(_DWORD *)(v24 + 8) = v44;
                *(_QWORD *)v24 = v21;
                sub_17A9350(v45, (_QWORD *)v24, (_QWORD *)(v12 + 16LL * *(unsigned int *)(a5 + 16)), a5, 1);
                v26 = v63.m128_u64[0];
                goto LABEL_41;
              }
              v59.m128i_i64[0] = (__int64)&v63;
              sub_1901070((__int64 *)a5, v22, v60, v15, 0, v12);
LABEL_111:
              sub_18C82B0((__int64 *)a5, (__int64 *)v62, &v63);
              v21 = v62[0].m128_u64[0];
              v44 = v62[0].m128_i32[2];
              v12 = *(_QWORD *)a5;
              LODWORD(v15) = *(_DWORD *)(a5 + 8) + 1;
              v24 = v63.m128_u64[0];
              v45 = (__m128 *)v59.m128i_i64[0];
              goto LABEL_103;
            }
          }
          else
          {
            v63.m128_u64[0] = 0;
          }
          sub_1901070((__int64 *)a5, 2 * v22, v60, v15, v11, v12);
          v59.m128i_i64[0] = (__int64)&v63;
          goto LABEL_111;
        }
      }
      else
      {
        v15 = ((_BYTE)v15 + 94) & 0x7F;
        if ( (unsigned __int8)v15 <= 5u )
          goto LABEL_37;
      }
      v14 = *(_BYTE *)(v59.m128i_i64[0] + 28) & 0x7F;
    }
  }
  if ( v14 == 43 )
    goto LABEL_37;
LABEL_13:
  if ( ((1LL << *(_DWORD *)(a1[288].m128_u64[1] + 640LL * a1[289].m128_u32[0] - 640)) & 0xF6) != 0 && v13 )
  {
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_26;
  }
  v17 = v9 != 0;
  if ( v10 == 3 && v9 )
  {
LABEL_26:
    v17 = 1;
    if ( (*(_BYTE *)(v60 + 28) & 0x7Fu) - 41 > 1 )
      sub_1CB7B10(a1, a2);
    goto LABEL_28;
  }
  if ( v10 != 3 )
  {
LABEL_18:
    v18 = v59.m128i_i64[1];
    goto LABEL_19;
  }
LABEL_28:
  if ( v9 == 2 || !v17 || v9 != 1 && (v9 != 3 || !v13) )
    goto LABEL_18;
  if ( v8 )
  {
    v20 = *((_DWORD *)v8 + 2);
    if ( v20 )
    {
      v61 = *((_DWORD *)v8 + 2);
    }
    else
    {
      v61 = a2;
      *((_DWORD *)v8 + 2) = a2;
    }
  }
  else
  {
    v61 = sub_B73F60(v60);
    v20 = v61;
    if ( !v61 )
    {
      v61 = a2;
      sub_B74430(v60, v9, a2);
    }
  }
  if ( !v13 )
  {
    v31 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v60 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v31 || (*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v31 + 17) & 4) != 0 )
    {
      if ( v20 )
      {
        v32 = (__m128 *)a1[934].m128_u64[0];
        v33 = &v32[5 * a1[934].m128_u32[2]];
        while ( v32 != v33 )
        {
          v34 = (unsigned __int64 *)v32[2].m128_u64[1];
          v35 = v32[2].m128_u64[0];
          v36 = v32[1].m128_u64[0];
          v37 = (__int64)(v32[3].m128_u64[0] - v32[3].m128_u64[1]) >> 4;
          v38 = 32 * (((__int64)(v32[4].m128_u64[1] - (_QWORD)v34) >> 3) - 1) + v37 + ((__int64)(v35 - v36) >> 4);
          v39 = v38 >> 2;
          if ( v38 >> 2 > 0 )
          {
            while ( *(_QWORD *)v36 != v60 )
            {
              v36 += 16LL;
              if ( v35 == v36 )
              {
                v36 = v34[1];
                ++v34;
                v35 = v36 + 512;
              }
              if ( *(_QWORD *)v36 == v60 )
                break;
              v36 += 16LL;
              if ( v36 == v35 )
              {
                v36 = v34[1];
                ++v34;
                v35 = v36 + 512;
              }
              if ( *(_QWORD *)v36 == v60 )
                break;
              v36 += 16LL;
              if ( v35 == v36 )
              {
                v36 = v34[1];
                ++v34;
                v35 = v36 + 512;
              }
              if ( *(_QWORD *)v36 == v60 )
                break;
              v36 += 16LL;
              if ( v35 == v36 )
              {
                v36 = v34[1];
                ++v34;
                v35 = v36 + 512;
              }
              if ( !--v39 )
              {
                v38 = 32 * (((__int64)(v32[4].m128_u64[1] - (_QWORD)v34) >> 3) - 1) + v37 + ((__int64)(v35 - v36) >> 4);
                goto LABEL_75;
              }
            }
            goto LABEL_79;
          }
LABEL_75:
          if ( v38 != 2 )
          {
            if ( v38 != 3 )
            {
              if ( v38 == 1 )
                goto LABEL_97;
              v34 = (unsigned __int64 *)v32[4].m128_u64[1];
              v36 = v32[3].m128_u64[0];
              goto LABEL_79;
            }
            if ( *(_QWORD *)v36 == v60 )
              goto LABEL_79;
            v36 += 16LL;
            if ( v35 == v36 )
            {
              v36 = v34[1];
              ++v34;
              v35 = v36 + 512;
            }
          }
          if ( *(_QWORD *)v36 != v60 )
          {
            v36 += 16LL;
            if ( v35 == v36 )
            {
              v36 = v34[1];
              ++v34;
            }
LABEL_97:
            if ( *(_QWORD *)v36 != v60 )
              goto LABEL_80;
          }
LABEL_79:
          if ( v36 != v32[3].m128_u64[0] )
          {
            v47 = a1[793].m128_u64[0];
            if ( v47 == a1[794].m128_u64[0] - 16 )
            {
              v51 = a1[794].m128_u64[1];
              if ( a1[790].m128_u64[1] - ((__int64)(v51 - a1[790].m128_u64[0]) >> 3) <= 1 )
              {
                sub_160A9F0((__int64)&a1[790], 1u, 0);
                v51 = a1[794].m128_u64[1];
              }
              v52 = operator new(0x200u);
              v53 = *(_DWORD *)(v36 + 8);
              v54 = *(_QWORD *)v36;
              *(_QWORD *)(v51 + 8) = v52;
              v55 = a1[793].m128_u64[0];
              *(_DWORD *)(v55 + 8) = v53;
              *(_QWORD *)v55 = v54;
              v56 = a1[794].m128_u64[1];
              v59.m128i_i64[0] = *(_QWORD *)(v56 + 8);
              v57 = _mm_loadl_epi64(&v59);
              a1[793] = (__m128)_mm_unpacklo_epi64(v57, v57);
              v59.m128i_i64[0] = v56 + 8;
              a1[794] = _mm_loadh_ps((const double *)v59.m128i_i64);
            }
            else
            {
              v48 = *(_DWORD *)(v36 + 8);
              v49 = v47 + 16;
              *(_QWORD *)(v49 - 16) = *(_QWORD *)v36;
              *(_DWORD *)(v49 - 8) = v48;
              a1[793].m128_u64[0] = v49;
            }
            v63.m128_u64[0] = v36;
            v50 = *v34;
            v65 = v34;
            v63.m128_u64[1] = v50;
            v64 = (__int64 *)(v50 + 512);
            sub_18C5E90(v62, v32, (__int64 *)&v63);
            v18 = v59.m128i_i64[1];
            goto LABEL_19;
          }
LABEL_80:
          v32 += 5;
        }
        if ( (*(_BYTE *)(v60 + 28) & 0x7Fu) - 41 > 1 )
          goto LABEL_18;
      }
      v63.m128_u64[0] = v60;
      v63.m128_i32[2] = v61;
      sub_18C98A0(a1 + 790, (__int64 *)&v63);
      goto LABEL_18;
    }
  }
  v63.m128_u64[1] = (unsigned __int64)&v61;
  v63.m128_u64[0] = (unsigned __int64)a1;
  v64 = &v60;
  sub_15F0FC0((__int64)a1, v61, sub_18BB650, (__int64)&v63);
  if ( !v59.m128i_i64[1] )
    goto LABEL_49;
  sub_1E5F5F0(a1);
  v18 = v59.m128i_i64[1];
  v40 = *(_WORD *)v59.m128i_i64[1] & 0x1FF;
  if ( v40 == 71 )
  {
    sub_BF7F60(v59.m128i_i64[1], *(_QWORD *)(v59.m128i_i64[1] + 16));
    v18 = v59.m128i_i64[1];
  }
  else if ( v40 == 46 )
  {
    sub_BF9E20(v59.m128i_i64[1], *(_QWORD *)(v59.m128i_i64[1] + 24));
    v18 = v59.m128i_i64[1];
  }
LABEL_19:
  if ( v18 )
  {
    v19 = *(_WORD *)v18 & 0x1FF;
    if ( v19 == 71 )
    {
      if ( (*(_BYTE *)(v18 + 3) & 6) != 0 )
        return;
LABEL_22:
      if ( v10 != 1 )
      {
LABEL_23:
        if ( v10 != 3 )
          return;
        if ( (unsigned __int8)sub_B7D2B0(v60, a1[15].m128_i64[1]) )
        {
          sub_1902200((__int64)&a1[276], &v59.m128i_i64[1], v27, v28, v29, v30);
          return;
        }
LABEL_47:
        sub_1905DD0(v60, a2, (__int64)a1, nullptr);
        return;
      }
LABEL_45:
      sub_18C4A90((__int64)a1, v60, v18);
      return;
    }
    if ( v19 != 46 )
      goto LABEL_22;
    if ( (*(_BYTE *)(v18 + 3) & 3) == 0 )
    {
      if ( v10 != 1 )
        goto LABEL_23;
      goto LABEL_45;
    }
  }
  else
  {
LABEL_49:
    if ( v10 == 1 )
    {
      v18 = 0;
      goto LABEL_45;
    }
    if ( v10 == 3 )
      goto LABEL_47;
  }
}
