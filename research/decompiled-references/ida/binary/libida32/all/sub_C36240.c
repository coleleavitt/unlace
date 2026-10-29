__int64 __fastcall sub_C36240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // r14d
  int v17; // esi
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rax
  const __m128i *v36; // r13
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rax
  __int32 v41; // edx
  __int64 v42; // rbp
  __int64 v43; // rax
  __int16 v44; // dx
  __int64 v45; // rax
  __int64 v46; // r9
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm1
  __int16 v51; // dx
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v61; // [rsp+8h] [rbp-100h]
  __int64 v62; // [rsp+10h] [rbp-F8h]
  unsigned int v63; // [rsp+10h] [rbp-F8h]
  __int64 v65; // [rsp+18h] [rbp-F0h]
  __int64 v66; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v67; // [rsp+20h] [rbp-E8h]
  __int64 v68; // [rsp+28h] [rbp-E0h]
  _BYTE v69[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+38h] [rbp-D0h]
  __m128i v71; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B8h]
  __int32 v73; // [rsp+58h] [rbp-B0h]
  __int64 v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __int64 v77; // [rsp+78h] [rbp-90h]
  _BYTE v78[64]; // [rsp+80h] [rbp-88h] BYREF
  __int16 v79; // [rsp+C0h] [rbp-48h]

  v6 = (const __m128i *)a4;
  v7 = a5;
  v8 = a1;
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 59 > 2 )
  {
    v59 = sub_B5ABC0(a3, a2, a3, a4, a5, a6);
    v9 = v59;
    if ( !v59 )
    {
      v16 = 0;
      v17 = 0;
      goto LABEL_11;
    }
    v9 = 0;
    v11 = *(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v11 )
    {
      v16 = 1;
      v17 = 0;
      goto LABEL_11;
    }
    goto LABEL_4;
  }
  v9 = a3;
  v10 = sub_B5ABC0(a3, a2, a3, a4, a5, a6);
  if ( !v10 )
  {
    v9 = a3;
    v16 = 0;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v11 )
  {
    v9 = a3;
    v12 = 0;
LABEL_9:
    v16 = v12 + 1;
    v17 = 0;
    if ( !v9 )
      goto LABEL_11;
LABEL_10:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v11, v12, v13, v14);
    v17 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 16LL);
    goto LABEL_11;
  }
LABEL_4:
  v12 = 0;
  do
  {
    if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 > 2 )
    {
      do
      {
        v15 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v15;
        if ( !v15 )
          goto LABEL_9;
      }
      while ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 49 > 2 );
    }
    ++v12;
    v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( v11 );
  v16 = v12 + 1;
  v17 = 0;
  if ( v9 )
    goto LABEL_10;
LABEL_11:
  v71.m128i_i8[4] &= ~1u;
  v71.m128i_i32[0] = 0;
  sub_A2BAC0((__int64)&v71.m128i_i64[1], v17, v16);
  v71.m128i_i32[0] = 10;
  sub_A2BFE0(v7, (__int64)&v71);
  if ( v71.m128i_i32[0] > 1u )
    sub_A2BBA0(v71.m128i_i32);
  v18 = a3;
  result = 0;
  if ( *(char *)(a3 + 28) >= 0 )
  {
    v61 = sub_EBA840(*(_QWORD *)(a1 + 16), a3);
    if ( v9 )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v20, v21, v22, v23);
      v28 = *(_QWORD *)(v9 + 128);
      v29 = (*(_BYTE *)(v28 + 24) & 1) != 0 ? sub_B72C40(v28) : *(_QWORD *)(v28 + 24);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v24, v25, v26, v27);
      v34 = *(_QWORD *)(v9 + 128);
      v62 = (*(_BYTE *)(v34 + 24) & 1) != 0 ? sub_B72C40(v34) : *(_QWORD *)(v34 + 24);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v30, v31, v32, v33);
      v18 = v62;
      v68 = v62 + 24LL * *(unsigned int *)(*(_QWORD *)(v9 + 128) + 16LL);
      if ( v68 != v29 )
      {
        v63 = 0;
        v35 = v7;
        v36 = v6;
        v67 = v9;
        v37 = v35;
        v38 = v8;
        while ( 1 )
        {
          v39 = *(_QWORD *)(**(_QWORD **)(v29 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v39 + 8) & 0xF) != 0 )
            v39 = sub_F411C0(**(_QWORD **)(v29 + 16));
          v40 = sub_F3F530(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL));
          v41 = v36[3].m128i_i32[2];
          v42 = v40;
          v43 = v36[1].m128i_i64[0];
          v71 = _mm_loadu_si128(v36);
          v72 = v43;
          v73 = v36[1].m128i_i32[2];
          v74 = v36[2].m128i_i64[0];
          v75 = v36[2].m128i_i64[1];
          ptr = v78;
          v77 = 0x800000000LL;
          if ( v41 )
            sub_C020D0((__int64 *)&ptr, v36[3].m128i_i64);
          v44 = v36[8].m128i_i16[0];
          LOBYTE(v44) = v44 & 3;
          v79 = v44 | v79 & 0xFC;
          if ( !(unsigned __int8)sub_C04040(v38, a2, (__int64)&v71, v67, v42, v61) )
            goto LABEL_56;
          v18 = a2;
          if ( !(unsigned __int8)sub_C36240(v38, a2, v42, &v71, *(_QWORD *)(v37 + 8) + 56LL * v63) )
            goto LABEL_56;
          if ( ptr == v78 )
          {
            v29 += 24;
            ++v63;
            if ( v29 == v68 )
            {
LABEL_29:
              v45 = v37;
              v8 = v38;
              v6 = v36;
              v7 = v45;
              break;
            }
          }
          else
          {
            free(ptr);
            v29 += 24;
            ++v63;
            if ( v68 == v29 )
              goto LABEL_29;
          }
        }
      }
    }
    v47 = sub_B5ABC0(a3, v18, v20, v21, v22, v23);
    if ( v47 )
    {
LABEL_31:
      if ( ((*(_BYTE *)(v47 + 68) & 1) == 0 || *(_QWORD *)(v47 + 40))
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
      {
        v49 = v6[1].m128i_i64[0];
        v50 = _mm_loadu_si128(v6);
        ptr = v78;
        v72 = v49;
        LODWORD(v49) = v6[1].m128i_i32[2];
        v71 = v50;
        v73 = v49;
        v74 = v6[2].m128i_i64[0];
        v75 = v6[2].m128i_i64[1];
        v77 = 0x800000000LL;
        if ( v6[3].m128i_i32[2] )
          sub_C020D0((__int64 *)&ptr, v6[3].m128i_i64);
        v51 = v6[8].m128i_i16[0];
        LOBYTE(v51) = v51 & 3;
        v79 = v51 | v79 & 0xFC;
        if ( (unsigned __int8)sub_BF10D0(v8, a2, (__int64)&v71, v47, v61, v46) )
        {
          v52 = *(_QWORD *)(v47 + 48);
          *(_WORD *)v69 = *(_WORD *)v69 & 0xFE00 | 0x36;
          if ( unk_2CAD564 )
          {
            v65 = v52;
            sub_EC5E10(54);
            v52 = v65;
          }
          *(_WORD *)&v69[1] &= 0xF801u;
          v70 = v52;
          v53 = sub_B3F3F0((__int64)v69);
          v56 = (unsigned int)(v53 << 6);
          v69[1] = ((_BYTE)v53 << 6) | v69[1] & 0x3F;
          v69[2] = v69[2] & 0xF8 | ((unsigned __int8)v53 >> 2) & 7;
          v57 = v47;
          if ( *(char *)(v47 + 29) < 0 )
            v57 = sub_B4E9E0(v47);
          v58 = *(unsigned int *)(v57 + 68);
          if ( (v58 & 0xFFFFFFF0) == 0 )
          {
            v66 = v57;
            sub_B5AD70(v57, a2, v58, v56, v54, v55);
            LODWORD(v58) = *(_DWORD *)(v66 + 68);
          }
          if ( (unsigned __int8)sub_C2BC60(
                                  *(_QWORD *)(v7 + 8) + 56LL * (((unsigned int)v58 >> 4) + *(_DWORD *)(v7 + 16) - 1),
                                  v8,
                                  &v71,
                                  (__int64)v69) )
          {
            if ( ptr != v78 )
              free(ptr);
            goto LABEL_36;
          }
        }
LABEL_56:
        if ( ptr != v78 )
          free(ptr);
        return 0;
      }
LABEL_36:
      while ( 1 )
      {
        v48 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v47 = v48;
        if ( !v48 )
          break;
        if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_31;
      }
    }
    return 1;
  }
  return result;
}

