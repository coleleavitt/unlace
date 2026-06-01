__int64 __fastcall sub_178ACC0(unsigned __int64 a1, __int64 a2, __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 *v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // r15
  bool v12; // al
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  _QWORD *v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  char v39; // cl
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // edx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rbp
  unsigned int v58; // esi
  __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // [rsp-10h] [rbp-A0h]
  __int64 v62; // [rsp-8h] [rbp-98h]
  __int64 *v63; // [rsp+0h] [rbp-90h]
  __m128i v64; // [rsp+8h] [rbp-88h] BYREF
  unsigned __int64 v65; // [rsp+18h] [rbp-78h]
  __int64 v66; // [rsp+20h] [rbp-70h]
  __m128 *v67; // [rsp+28h] [rbp-68h]
  __m128i *v68; // [rsp+30h] [rbp-60h]
  __m128i v69; // [rsp+38h] [rbp-58h] BYREF
  __int64 v70; // [rsp+48h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 544);
  if ( v3 )
    v3 -= 72;
  v4 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v4 )
    BUG();
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(v5 + 8 * v4 - 8);
  if ( *(_DWORD *)(v6 + 272) )
    return 0;
  v9 = *(__int64 **)(v3 + 120);
  v10 = a2;
  v63 = &v9[(unsigned int)sub_B76070(v3, a2, v4, v5)];
  if ( v63 != v9 )
  {
    v66 = v6 + 192;
    v67 = (__m128 *)&v70;
    v68 = &v69;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v9 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          break;
LABEL_23:
        if ( v63 == ++v9 )
          return 1;
      }
      v12 = sub_B8C090((_BYTE *)*v9);
      v13 = *(_QWORD *)(v11 + 48);
      v64.m128i_i8[0] = v12;
      v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43;
      if ( (unsigned int)v15 <= 1
        || (v46 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v46 <= 1)
        && (v47 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), v65 = v13,
                                                           v14 = sub_F63050(v47, a2, v13, v46),
                                                           v13 = v65,
                                                           v14) )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v14 + 32);
          if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
            v16 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43;
            if ( (unsigned int)v16 <= 1 )
              break;
            v17 = sub_F63050(v14, a2, v16, v15);
            v13 = *(_QWORD *)(v17 + 32);
            if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
              goto LABEL_13;
          }
        }
      }
LABEL_13:
      v19 = sub_190BDA0(a1, v11, v13, 1, v10, 0, v62, v63);
      v22 = 8 * (v64.m128i_i8[0] & 1u);
      *(_BYTE *)(v11 + 29) = (8 * (v64.m128i_i8[0] & 1)) | *(_BYTE *)(v11 + 29) & 0xF7;
      if ( v19 == 1 )
        return 0;
      v23 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( sub_F63270(*(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL), v11, v22, v18, v20, v21)
        || (v30 = *(_QWORD *)(v11 + 48),
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) == 44) )
      {
        v24 = *(_QWORD *)(v23 + 8);
        v64.m128i_i64[0] = sub_1E70650(a1, v24, 0, 0, 0);
        v25 = sub_EEB7E0(v23, v24, *(double *)a3.m128i_i64);
        v26 = v64.m128i_i64[0];
        v27 = *(_QWORD **)(a1 + 248);
        LODWORD(v65) = v25;
        v64.m128i_i64[0] = (__int64)sub_A81910(v27, v64.m128i_i64[0], v25);
        v28 = sub_EEC8C0(v23, v26, *(double *)a3.m128i_i64);
        v29 = sub_16B28E0(
                a1,
                v65,
                0x91u,
                (__int64 *)v64.m128i_i64[0],
                v23,
                ((unsigned __int64)(unsigned int)v65 << 32) | (unsigned int)v65,
                *(double *)a3.m128i_i64,
                v28,
                v61,
                v62);
        v30 = *(_QWORD *)(v11 + 48);
        v23 = v29 & 0xFFFFFFFFFFFFFFFELL;
      }
      v31 = *(_QWORD *)(v11 + 40);
      v32 = 0;
      v64.m128i_i64[0] = v30;
      v33 = *(_QWORD **)(a1 + 248);
      if ( (v31 & 7) == 0 )
        v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      v65 = v32;
      v34 = sub_A81910(v33, v30, v10);
      v35 = sub_B731A0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), v10, v10, v65, v64.m128i_i64[0], (__int64)v34, 0);
      *(_BYTE *)(v35 + 29) |= 2u;
      v64.m128i_i64[0] = v35;
      sub_17ED4C0(a1, v35, v23, 1);
      v36 = sub_17A2530(a1, v64.m128i_i64[0], 0);
      v37 = sub_1C36280(a1, v36, v10, v10);
      if ( v37 == 1 )
        return 0;
      v39 = *(_BYTE *)(v6 + 192);
      v69.m128i_i64[0] = v11;
      v69.m128i_i64[1] = v37 & 0xFFFFFFFFFFFFFFFELL;
      v40 = v39 & 1;
      if ( v40 )
      {
        v41 = v6 + 200;
        v38 = 3;
        LODWORD(v42) = ((unsigned __int8)((unsigned int)v11 >> 9) ^ (unsigned __int8)((unsigned int)v11 >> 4)) & 3;
        a2 = v6
           + 200
           + 16LL * (((unsigned __int8)((unsigned int)v11 >> 9) ^ (unsigned __int8)((unsigned int)v11 >> 4)) & 3);
        v43 = *(_QWORD *)a2;
        if ( v11 == *(_QWORD *)a2 )
          goto LABEL_21;
      }
      else
      {
        v45 = *(unsigned int *)(v6 + 208);
        if ( !(_DWORD)v45 )
        {
          v70 = 0;
          v48 = *(_DWORD *)(v6 + 192);
          v49 = (v48 >> 1) + 1;
          goto LABEL_34;
        }
        v38 = (unsigned int)(v45 - 1);
        v41 = *(_QWORD *)(v6 + 200);
        LODWORD(v42) = v38 & (((unsigned int)v11 >> 4) ^ ((unsigned int)v11 >> 9));
        a2 = v41 + 16LL * (unsigned int)v42;
        v43 = *(_QWORD *)a2;
        if ( v11 == *(_QWORD *)a2 )
        {
LABEL_27:
          v44 = 16 * v45;
          goto LABEL_22;
        }
      }
      v56 = 1;
      v57 = 0;
      if ( v43 != -4096 )
      {
        while ( 1 )
        {
          if ( v43 == -8192 && !v57 )
            v57 = a2;
          v42 = (unsigned int)v38 & ((_DWORD)v42 + v56);
          a2 = v41 + 16 * v42;
          v43 = *(_QWORD *)a2;
          if ( v11 == *(_QWORD *)a2 )
            break;
          if ( v43 == -4096 )
          {
            if ( v57 )
              a2 = v57;
            goto LABEL_45;
          }
          ++v56;
        }
        if ( !(_BYTE)v40 )
        {
          v41 = *(_QWORD *)(v6 + 200);
          v45 = *(unsigned int *)(v6 + 208);
          goto LABEL_27;
        }
        v41 = v6 + 200;
LABEL_21:
        v44 = 64;
LABEL_22:
        sub_17841B0(v67, (_QWORD *)a2, (_QWORD *)(v44 + v41), v66, 1);
        goto LABEL_23;
      }
LABEL_45:
      v70 = a2;
      v48 = *(_DWORD *)(v6 + 192);
      v49 = (v48 >> 1) + 1;
      if ( !(_BYTE)v40 )
      {
        v45 = *(unsigned int *)(v6 + 208);
LABEL_34:
        v50 = (unsigned int)(4 * v49);
        if ( 3 * (int)v45 <= (unsigned int)v50 )
          goto LABEL_47;
        goto LABEL_35;
      }
      v50 = (unsigned int)(4 * v49);
      v45 = 4;
      if ( (unsigned int)v50 >= 0xC )
      {
LABEL_47:
        v58 = 2 * v45;
LABEL_48:
        v59 = v66;
        sub_178A7E0(v66, v58, v49, v50, v38, v45);
        sub_1784220(v59, v68->m128i_i64, v67);
        v11 = v69.m128i_i64[0];
        v48 = *(_DWORD *)(v6 + 192);
        goto LABEL_36;
      }
LABEL_35:
      v49 = (unsigned int)(v45 - *(_DWORD *)(v6 + 196) - v49);
      v50 = (unsigned int)v45 >> 3;
      if ( (unsigned int)v49 <= (unsigned int)v50 )
      {
        v58 = v45;
        goto LABEL_48;
      }
LABEL_36:
      *(_DWORD *)(v6 + 192) = (2 * (v48 >> 1) + 2) | v48 & 1;
      a2 = v70;
      if ( *(_QWORD *)v70 != -4096 )
        --*(_DWORD *)(v6 + 196);
      *(_QWORD *)a2 = v11;
      *(_DWORD *)(a2 + 8) = 0;
      if ( (*(_BYTE *)(v6 + 192) & 1) != 0 )
      {
        v51 = v6 + 200;
        v52 = 64;
      }
      else
      {
        v51 = *(_QWORD *)(v6 + 200);
        v52 = 16LL * *(unsigned int *)(v6 + 208);
      }
      sub_17841B0(v67, (_QWORD *)a2, (_QWORD *)(v52 + v51), v66, 1);
      v53 = *(_DWORD *)(v6 + 272);
      *(_DWORD *)(v70 + 8) = v53;
      v54 = *(unsigned int *)(v6 + 276);
      v55 = v53;
      if ( v53 >= v54 )
      {
        v60 = v53 + 1LL;
        a3 = _mm_load_si128(&v69);
        if ( v54 < v55 + 1 )
        {
          a2 = v6 + 280;
          v64 = a3;
          sub_2237220(v6 + 264, v6 + 280, v60, 16);
          a3 = _mm_load_si128(&v64);
        }
        ++v9;
        *(__m128i *)(*(_QWORD *)(v6 + 264) + 16LL * (unsigned int)(*(_DWORD *)(v6 + 272))++) = a3;
        if ( v63 == v9 )
          return 1;
      }
      else
      {
        ++v9;
        *(__m128i *)(*(_QWORD *)(v6 + 264) + 16LL * v53) = _mm_load_si128(&v69);
        *(_DWORD *)(v6 + 272) = v53 + 1;
        if ( v63 == v9 )
          return 1;
      }
    }
  }
  return 1;
}
