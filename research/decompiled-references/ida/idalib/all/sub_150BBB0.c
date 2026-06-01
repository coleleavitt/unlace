__int64 __fastcall sub_150BBB0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r15
  const __m128i *v3; // r14
  char v4; // r13
  __int16 v5; // ax
  const __m128i *v6; // r15
  __int64 v7; // r14
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int32 v16; // ebx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int16 v20; // ax
  int *m128i_i32; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int16 v25; // dx
  __int32 v26; // eax
  unsigned int *v27; // rdx
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 result; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // eax
  unsigned __int8 *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int32 v45; // ebx
  __int64 *v46; // rdi
  __int64 v47; // rax
  const __m128i *v48; // r14
  __int64 *v49; // rdi
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdx
  unsigned __int8 *v56; // r15
  __int64 v57; // r14
  int *v58; // r12
  __int64 v59; // rbx
  void *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int32 v64; // ebx
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int16 v67; // ax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  unsigned int v71; // eax
  unsigned __int32 v72; // [rsp+Ch] [rbp-DCh]
  char *v73; // [rsp+10h] [rbp-D8h]
  signed __int64 v74; // [rsp+18h] [rbp-D0h]
  const __m128i *v75; // [rsp+20h] [rbp-C8h]
  __int64 v76; // [rsp+20h] [rbp-C8h]
  __int64 v77; // [rsp+28h] [rbp-C0h]
  __int64 *v78; // [rsp+38h] [rbp-B0h]
  __m128i v79; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-98h]
  void *v81; // [rsp+60h] [rbp-88h] BYREF
  __int64 v82; // [rsp+68h] [rbp-80h]
  __int64 v83; // [rsp+70h] [rbp-78h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v74 = 0;
  v72 = a1[1].m128i_u32[0];
  v5 = a1[2].m128i_i16[0];
  v73 = (char *)&byte_22F0C30;
  if ( v5 == 62 )
  {
LABEL_28:
    if ( *(_DWORD *)(*(_QWORD *)(v3->m128i_i64[1] + 56) + 64LL) > 0x3Bu && !v4 )
      goto LABEL_71;
    return 0;
  }
  v6 = a1;
  v7 = a2;
  v8 = &v83;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = _mm_loadu_si128(v6 + 1);
      v23 = v6[2].m128i_i64[0];
      v79 = v22;
      v80 = v23;
      if ( v5 != 5 )
      {
        v12 = sub_15037C0(v6);
        v24 = v6->m128i_i64[1];
        if ( *(_DWORD *)(*(_QWORD *)(v24 + 56) + 64LL) > 0x3Bu && v12 != 6 )
          goto LABEL_21;
        goto LABEL_32;
      }
      v9 = v6->m128i_i64[1];
      v10 = *(_QWORD *)(v9 + 56);
      sub_13D35F0((__int64)&v81, (__int64)&v79, *(_QWORD *)(v9 + 88), v10, nullptr);
      v11 = sub_FFC7C0(55, (__int64)v81, v82, v10);
      if ( v81 != v8 )
        operator delete(v81);
      v12 = sub_15037C0(v6);
      if ( ((v11 - 11) & 0xFFFFFFFD) == 0 || (unsigned int)(v11 - 7) <= 1 )
      {
        v13 = *(unsigned int *)(v7 + 112);
        if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 116) )
        {
          sub_2237220(v7 + 104, v7 + 120, v13 + 1, 4);
          v13 = *(unsigned int *)(v7 + 112);
        }
        *(_DWORD *)(*(_QWORD *)(v7 + 104) + 4 * v13) = v11;
        v14 = *(unsigned int *)(v7 + 160);
        v15 = *(unsigned int *)(v7 + 164);
        ++*(_DWORD *)(v7 + 112);
        v16 = v6[1].m128i_i32[0];
        if ( v14 + 1 > v15 )
        {
          sub_2237220(v7 + 152, v7 + 168, v14 + 1, 4);
          v14 = *(unsigned int *)(v7 + 160);
        }
        *(_DWORD *)(*(_QWORD *)(v7 + 152) + 4 * v14) = v16;
        ++*(_DWORD *)(v7 + 160);
        v17 = v6->m128i_i64[1];
        v18 = *(_QWORD *)(v17 + 2944);
        if ( *(unsigned int *)(v17 + 2912) > v18 )
        {
          v19 = v6[1].m128i_u32[0];
          v20 = *(_WORD *)(*(_QWORD *)(v17 + 2904) + 24 * v18 + 16);
          if ( v20 != 66 )
            goto LABEL_13;
          goto LABEL_15;
        }
        v39 = sub_14180A0(v17, 1u);
        v17 = v6->m128i_i64[1];
        if ( *(_WORD *)(v39 + 16) != 66 )
        {
          v40 = *(_QWORD *)(v17 + 2944);
          if ( v40 < *(unsigned int *)(v17 + 2912) )
          {
            v19 = v6[1].m128i_u32[0];
            v20 = *(_WORD *)(*(_QWORD *)(v17 + 2904) + 24 * v40 + 16);
          }
          else
          {
            v41 = sub_14180A0(v17, 1u);
            v17 = v6->m128i_i64[1];
            v19 = v6[1].m128i_u32[0];
            v20 = *(_WORD *)(v41 + 16);
          }
LABEL_13:
          if ( v20 == 62 || *(_DWORD *)(*(_QWORD *)(v17 + 56) + 64LL) <= 0x33u )
          {
LABEL_15:
            v6[2].m128i_i32[2] = v19;
            m128i_i32 = v6[1].m128i_i32;
            sub_14634E0((__int64 *)v17, v6[1].m128i_i32);
            v5 = v6[2].m128i_i16[0];
            goto LABEL_16;
          }
          sub_1564820(&v81, v6, v19, 1814);
          sub_1503D30((unsigned __int8 **)&v81, (__int64)"map type modifier");
          sub_AEA040((__int64)&v81);
          v17 = v6->m128i_i64[1];
        }
        LODWORD(v19) = v6[1].m128i_i32[0];
        goto LABEL_15;
      }
      if ( v11 != 9 )
        break;
      v42 = *(unsigned int *)(v7 + 112);
      if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 116) )
      {
        sub_2237220(v7 + 104, v7 + 120, v42 + 1, 4);
        v42 = *(unsigned int *)(v7 + 112);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 104) + 4 * v42) = 9;
      v43 = *(unsigned int *)(v7 + 160);
      v44 = *(unsigned int *)(v7 + 164);
      ++*(_DWORD *)(v7 + 112);
      v45 = v6[1].m128i_i32[0];
      if ( v43 + 1 > v44 )
      {
        sub_2237220(v7 + 152, v7 + 168, v43 + 1, 4);
        v43 = *(unsigned int *)(v7 + 160);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 152) + 4 * v43) = v45;
      m128i_i32 = v6[1].m128i_i32;
      ++*(_DWORD *)(v7 + 160);
      v46 = (__int64 *)v6->m128i_i64[1];
      v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
      sub_14634E0(v46, v6[1].m128i_i32);
      result = sub_150B9F0(v6, v7, v22);
      if ( (_BYTE)result )
        return result;
      v5 = v6[2].m128i_i16[0];
      if ( ((v5 - 62) & 0xFFFB) != 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 64LL) <= 0x33u )
          goto LABEL_17;
        sub_1564820(&v81, v6, *(unsigned int *)(*(_QWORD *)(v7 + 152) + 4LL * *(unsigned int *)(v7 + 160) - 4), 1814);
        sub_1503D30((unsigned __int8 **)&v81, (__int64)"map type modifier");
        sub_AEA040((__int64)&v81);
        v5 = v6[2].m128i_i16[0];
      }
LABEL_16:
      if ( v5 != 66 )
        goto LABEL_17;
LABEL_26:
      v28 = (__int64 *)v6->m128i_i64[1];
      v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
      sub_14634E0(v28, m128i_i32);
      v5 = v6[2].m128i_i16[0];
      if ( v5 == 62 )
      {
LABEL_27:
        v29 = v7;
        v3 = v6;
        v2 = v29;
        goto LABEL_28;
      }
    }
    v24 = v6->m128i_i64[1];
    if ( *(_DWORD *)(*(_QWORD *)(v24 + 56) + 64LL) <= 0x3Bu || v12 == 6 )
      break;
LABEL_21:
    if ( v4 )
    {
      m128i_i32 = v6[1].m128i_i32;
      sub_1564840(&v81, v6, &v6[1], 1815);
      sub_AEA040((__int64)&v81);
      sub_1564820(&v81, v6, v72, 2055);
      sub_AEC220((unsigned __int8 **)&v81, v73, v74);
      sub_AEA040((__int64)&v81);
      v26 = v6[1].m128i_i32[0];
    }
    else
    {
      *(_DWORD *)(v7 + 96) = v12;
      v25 = v6[2].m128i_i16[0];
      v26 = v6[1].m128i_i32[0];
      v72 = v26;
      if ( (unsigned __int16)(v25 - 7) <= 0xCu || v25 == 1 )
        BUG();
      m128i_i32 = v6[1].m128i_i32;
      v27 = *(unsigned int **)(v6[1].m128i_i64[1] + 16);
      v74 = *v27;
      v73 = (char *)(v27 + 4);
    }
    v6[2].m128i_i32[2] = v26;
    v4 = 1;
    sub_14634E0((__int64 *)v6->m128i_i64[1], m128i_i32);
    v5 = v6[2].m128i_i16[0];
    if ( v5 == 66 )
      goto LABEL_26;
LABEL_17:
    if ( v5 == 62 )
      goto LABEL_27;
  }
  if ( v11 == 12 )
  {
    v61 = *(unsigned int *)(v7 + 112);
    if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 116) )
    {
      sub_2237220(v7 + 104, v7 + 120, v61 + 1, 4);
      v61 = *(unsigned int *)(v7 + 112);
    }
    *(_DWORD *)(*(_QWORD *)(v7 + 104) + 4 * v61) = 12;
    v62 = *(unsigned int *)(v7 + 160);
    v63 = *(unsigned int *)(v7 + 164);
    ++*(_DWORD *)(v7 + 112);
    v64 = v6[1].m128i_i32[0];
    if ( v62 + 1 > v63 )
    {
      sub_2237220(v7 + 152, v7 + 168, v62 + 1, 4);
      v62 = *(unsigned int *)(v7 + 160);
    }
    *(_DWORD *)(*(_QWORD *)(v7 + 152) + 4 * v62) = v64;
    ++*(_DWORD *)(v7 + 160);
    v65 = v6->m128i_i64[1];
    v66 = *(_QWORD *)(v65 + 2944);
    if ( v66 >= *(unsigned int *)(v65 + 2912) )
    {
      v68 = sub_14180A0(v65, 1u);
      v65 = v6->m128i_i64[1];
      if ( *(_WORD *)(v68 + 16) != 66 )
      {
        v69 = *(_QWORD *)(v65 + 2944);
        if ( v69 < *(unsigned int *)(v65 + 2912) )
          v67 = *(_WORD *)(*(_QWORD *)(v65 + 2904) + 24 * v69 + 16);
        else
          v67 = *(_WORD *)(sub_14180A0(v65, 1u) + 16);
LABEL_82:
        if ( v67 != 62 )
        {
          sub_1564820(&v81, v6, v6[1].m128i_u32[0], 1814);
          sub_1503D30((unsigned __int8 **)&v81, (__int64)"map type modifier");
          sub_AEA040((__int64)&v81);
        }
        v65 = v6->m128i_i64[1];
      }
    }
    else
    {
      v67 = *(_WORD *)(*(_QWORD *)(v65 + 2904) + 24 * v66 + 16);
      if ( v67 != 66 )
        goto LABEL_82;
    }
    m128i_i32 = v6[1].m128i_i32;
    if ( *(_DWORD *)(*(_QWORD *)(v65 + 56) + 64LL) <= 0x3Bu )
    {
      sub_1564840(&v81, v6, &v6[1], 1827);
      v70 = 0;
      v71 = *(_DWORD *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 64LL);
      if ( v71 > 0x32 )
        v70 = (v71 != 51) + 1LL;
      sub_1503AF0((unsigned __int8 **)&v81, v70);
      sub_AE9DF0((unsigned __int8 **)&v81, *(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 68LL) & 1, 3u);
      sub_15038B0((unsigned __int8 **)&v81);
      sub_AEA040((__int64)&v81);
      v65 = v6->m128i_i64[1];
    }
    v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
    sub_14634E0((__int64 *)v65, v6[1].m128i_i32);
    v5 = v6[2].m128i_i16[0];
    goto LABEL_16;
  }
LABEL_32:
  if ( v6[2].m128i_i16[0] == 66 )
  {
    m128i_i32 = v6[1].m128i_i32;
    sub_1564840(&v81, v6, &v6[1], 1811);
    sub_AEA040((__int64)&v81);
    goto LABEL_26;
  }
  v31 = *(_QWORD *)(v24 + 2944);
  if ( v31 < *(unsigned int *)(v24 + 2912) )
  {
    if ( *(_WORD *)(*(_QWORD *)(v24 + 2904) + 24 * v31 + 16) == 62 )
      goto LABEL_54;
    goto LABEL_35;
  }
  if ( *(_WORD *)(sub_14180A0(v24, 1u) + 16) != 62 )
  {
LABEL_35:
    m128i_i32 = v6[1].m128i_i32;
    sub_1564840(&v81, v6, &v6[1], 1827);
    v32 = 0;
    v33 = *(_DWORD *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 64LL);
    if ( v33 > 0x32 )
      v32 = (v33 != 51) + 1LL;
    sub_1503AF0((unsigned __int8 **)&v81, v32);
    v34 = (unsigned __int8 *)v81;
    v35 = *(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 68LL) & 1;
    if ( !v81 )
    {
      v50 = v82;
      v51 = *(_DWORD *)(v82 + 14976);
      if ( v51 )
      {
        v52 = (unsigned int)(v51 - 1);
        *(_DWORD *)(v82 + 14976) = v52;
        v34 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
        v53 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v54 = *((_QWORD *)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v55 = v54 + (v53 << 6);
        if ( v54 != v55 )
        {
          v75 = v6;
          v56 = v34;
          v77 = v7;
          v57 = v35;
          v78 = v8;
          v58 = m128i_i32;
          v59 = v55;
          do
          {
            while ( 1 )
            {
              v59 -= 64;
              v60 = *(void **)(v59 + 24);
              if ( v60 == (void *)(v59 + 40) )
                break;
              operator delete(v60);
              if ( v54 == v59 )
                goto LABEL_64;
            }
          }
          while ( v54 != v59 );
LABEL_64:
          m128i_i32 = v58;
          v35 = v57;
          v34 = v56;
          v7 = v77;
          v6 = v75;
          v8 = v78;
        }
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v76 = *(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 68LL) & 1;
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
        v35 = v76;
      }
      v81 = v34;
    }
    v34[*v34 + 1] = 3;
    v36 = v81;
    v37 = *(unsigned __int8 *)v81;
    *(_BYTE *)v81 = v37 + 1;
    v36[v37 + 2] = v35;
    sub_1503AF0((unsigned __int8 **)&v81, *(_DWORD *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 64LL) > 0x3Bu);
    sub_AEA040((__int64)&v81);
    v38 = (__int64 *)v6->m128i_i64[1];
    v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
    sub_14634E0(v38, m128i_i32);
    v5 = v6[2].m128i_i16[0];
    goto LABEL_16;
  }
LABEL_54:
  v47 = v7;
  v48 = v6;
  v2 = v47;
  if ( *(_DWORD *)(*(_QWORD *)(v48->m128i_i64[1] + 56) + 64LL) <= 0x3Bu || v4 )
    return 0;
  if ( v48[2].m128i_i16[0] != 62 )
  {
    sub_1564840(&v81, v48, &v48[1], 1826);
    sub_AEA040((__int64)&v81);
    v49 = (__int64 *)v48->m128i_i64[1];
    v48[2].m128i_i32[2] = v48[1].m128i_i32[0];
    sub_14634E0(v49, v48[1].m128i_i32);
    return 0;
  }
LABEL_71:
  *(_DWORD *)(v2 + 96) = 6;
  return 0;
}
