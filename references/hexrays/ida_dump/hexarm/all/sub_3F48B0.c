__int64 __fastcall sub_3F48B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  int v24; // r13d
  __int64 v25; // rcx
  int v26; // r12d
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v36; // [rsp+1Ch] [rbp-12Ch] BYREF
  _QWORD v37[2]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v38; // [rsp+30h] [rbp-118h] BYREF
  __int64 v39; // [rsp+38h] [rbp-110h]
  __int128 v40; // [rsp+40h] [rbp-108h]
  __int64 v41; // [rsp+50h] [rbp-F8h]
  __int128 v42; // [rsp+58h] [rbp-F0h]
  __m128i v43; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+80h] [rbp-C8h]
  int v45; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v46)(); // [rsp+90h] [rbp-B8h]
  __int64 v47; // [rsp+98h] [rbp-B0h]
  int v48; // [rsp+A0h] [rbp-A8h]
  __int64 v49; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-90h]
  __int64 v51; // [rsp+C8h] [rbp-80h]
  __int64 v52; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-68h]
  __int64 v55; // [rsp+F0h] [rbp-58h]
  __int128 v56; // [rsp+F8h] [rbp-50h]
  char v57; // [rsp+108h] [rbp-40h]
  unsigned __int64 v58; // [rsp+118h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 800);
  v58 = __readfsqword(0x28u);
  sub_1D2430(v3);
  sub_1511B0(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  sub_3F4830(a1);
  v4 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v4 + 604) & 8) != 0 )
  {
    sub_CF9B0(0x7D5u, 0, 0, 0, 1, 0, 0);
    v4 = *(_QWORD *)(a1 + 800);
    if ( *(_BYTE *)(v4 + 137) != 12 )
      goto LABEL_3;
  }
  else if ( *(_BYTE *)(v4 + 137) != 12 )
  {
    goto LABEL_3;
  }
  if ( !sub_33F4D0(v4) )
    return (unsigned int)-2;
LABEL_3:
  *(_QWORD *)(*(_QWORD *)(a1 + 832) + 720LL) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1352LL);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 840) = a2;
  v6 = *(_QWORD **)(v5 + 920);
  if ( (*(_BYTE *)(v5 + 112) & 0x10) != 0 )
  {
    if ( sub_CF9B0(0xBC2u, &v49, a1 + 864, *(_QWORD *)(v5 + 40)) != 1 )
      return (unsigned int)-13;
    v7 = *(_QWORD *)(a1 + 832);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 168LL);
    if ( v9 == sub_3EA010 )
      v10 = sub_3EA010(v7, (unsigned __int16)v49);
    else
      v10 = v9(v7, (unsigned __int16)v49);
    *(_DWORD *)(v8 + 1184) = v10;
    v5 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 872) = *(_DWORD *)(v5 + 1184);
  }
  v49 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 16;
  v50 = 0;
  v54 = 0;
  v56 = 0;
  if ( (unsigned __int8)get_tinfo_details(*(_QWORD *)(v5 + 328), 12, &v49) && (v51 & 0xC0) != 0 )
    *(_BYTE *)(a1 + 876) = 1;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 840);
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
  v37[0] = off_4E4010;
  v37[1] = v6 + 8;
  if ( (unsigned __int8)sub_1CF000((__int64)v37, &v36, v11, v12) )
  {
    v22 = *(_QWORD **)(a1 + 8);
    sub_3F2210((__int64)v6, v22);
    if ( v13 == 8 )
    {
      if ( !v6 )
        sub_3EAEE0(0.0, (__int64)v6, (__int64)v22);
      if ( (v6[20] || v6[21]) && v6[14] && (unsigned __int8)sub_3ED9D0(*(_QWORD *)(a1 + 832)) )
      {
        v40 = 0;
        v38 = 0;
        v39 = 0;
        v42 = 0;
        v41 = 0;
        v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4D6450, (__m128i)(unsigned __int64)off_4D6430);
        sub_CF9B0(0x7D4u, &v38, 64);
        v23 = v6[20];
        v44 = -1;
        v24 = v40;
        v25 = v6[21];
        v47 = -1;
        v26 = v42;
        v27 = _mm_load_si128(&v35);
        v46 = off_4D6430;
        v43 = v27;
        v45 = v40 - (int)v23 / 8;
        v48 = v42 - (int)v25 / 16;
        if ( (v48 | v45) < 0 )
          goto LABEL_34;
        v28 = *(_QWORD *)(a1 + 8);
        v29 = _mm_loadu_si128((const __m128i *)(v28 + 88));
        v30 = sub_1CF810(v28, _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_i64[0]);
        v31 = v26;
        v32 = *(_QWORD *)(a1 + 8);
        v44 = v30 - (v6[18] + 8 * v24);
        v33 = *(_QWORD *)(v32 + 928);
        v47 = v30 - (v6[19] + 16 * v31);
        if ( !v33 )
        {
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 + 1504) + 312LL))(
                  *(_QWORD *)(v32 + 1504),
                  v32);
          *(_QWORD *)(v32 + 928) = v34;
          v33 = v34;
        }
        if ( !(unsigned __int8)sub_199160(v33, (__int64)&v43) )
        {
LABEL_34:
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree(v41);
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39);
          }
          v14 = -13;
          goto LABEL_11;
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
      }
    }
  }
  v14 = v36;
  v6[22] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
LABEL_11:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  cleanup_argloc(&v53);
  clear_tinfo_t(&v52);
  v15 = v49;
  if ( v49 )
  {
    v16 = v50;
    if ( (_QWORD)v50 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t(v18 + 8);
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc(v18);
        v15 = v49;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v15);
  }
  return v14;
}
