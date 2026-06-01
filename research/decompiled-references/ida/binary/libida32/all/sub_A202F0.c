void __fastcall sub_A202F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  char v7; // al
  bool v8; // zf
  char v9; // dl
  char v10; // al
  char v11; // dl
  char v12; // al
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // rdi
  int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  char v23; // al
  char v24; // dl
  bool v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  unsigned __int64 v30; // rsi
  __int64 v31; // r13
  void *v32; // rdi
  void *v33; // rdi
  unsigned __int64 v34; // rcx
  char *i; // rsi
  size_t v36; // rax
  __m128i *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 m128i_i64; // rdx
  void *v41; // rcx
  _BYTE *v42; // rsi
  __int64 v43; // rdx
  _BYTE *v44; // rsi
  __int64 v45; // rdx
  _BYTE *v46; // rsi
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // [rsp+28h] [rbp-140h]
  __int64 v51; // [rsp+38h] [rbp-130h]
  void *v52[2]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v53[16]; // [rsp+50h] [rbp-118h] BYREF
  void *v54[2]; // [rsp+60h] [rbp-108h] BYREF
  __m128i v55; // [rsp+70h] [rbp-F8h] BYREF
  void *v56; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-C8h]
  void *v59; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-B0h]
  _BYTE v61[16]; // [rsp+C0h] [rbp-A8h] BYREF
  char v62; // [rsp+D0h] [rbp-98h]
  void *v63; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-88h]
  _BYTE v65[16]; // [rsp+E8h] [rbp-80h] BYREF
  char v66; // [rsp+F8h] [rbp-70h]
  void *v67; // [rsp+100h] [rbp-68h] BYREF
  __int64 v68; // [rsp+108h] [rbp-60h]
  _BYTE v69[16]; // [rsp+110h] [rbp-58h] BYREF
  char v70; // [rsp+120h] [rbp-48h]

  v49 = a2[1];
  if ( *a2 != v49 )
  {
    v6 = *a2;
    while ( 1 )
    {
      v61[0] = 0;
      v62 &= 0xF0u;
      v59 = v61;
      v65[0] = 0;
      v63 = v65;
      v69[0] = 0;
      v7 = v66 & 0xF8;
      v70 &= 0x80u;
      v8 = *(_BYTE *)(v6 + 9) == 0;
      v60 = 0;
      v64 = 0;
      v66 &= 0xF8u;
      v67 = v69;
      v68 = 0;
      if ( !v8 )
        v66 = (2 * (*(_BYTE *)(v6 + 8) & 3)) | v7 | 1;
      v9 = *(_BYTE *)(v6 + 4);
      if ( !*(_BYTE *)(v6 + 5) )
        v9 = 0;
      v10 = (2 * (v9 & 1)) | *(_BYTE *)(v6 + 5) & 1 | v70 & 0xFC;
      v11 = *(_BYTE *)(v6 + 6);
      v12 = v10 & 0xF3;
      if ( !*(_BYTE *)(v6 + 7) )
        v11 = 0;
      v70 = (8 * (v11 & 1)) | (4 * (*(_BYTE *)(v6 + 7) & 1)) | v12;
      v13 = *(_BYTE **)(v6 + 24);
      v14 = *(_QWORD *)(v6 + 32);
      v56 = &v57;
      sub_A1D0B0(&v56, v13, (__int64)&v13[v14]);
      sub_9CAB60((__int64)&v67, (__int64)&v56);
      if ( v56 != &v57 )
        operator delete(v56);
      v15 = 0;
      if ( *(_BYTE *)(v6 + 16) )
        v15 = (*(_DWORD *)(v6 + 12) + 1) & 7;
      v16 = *(_QWORD *)(a3 + 160);
      v17 = *(_QWORD *)(a3 + 152);
      v18 = *(_DWORD *)v6;
      v70 = v70 & 0x8F | (16 * (v15 & 7));
      v19 = 0xEEEEEEEEEEEEEEEFLL * ((v16 - v17) >> 3);
      if ( v18 < (int)v19 )
        goto LABEL_14;
      v30 = v18 + 1;
      if ( v30 > v19 )
        break;
      if ( v30 >= v19 )
        goto LABEL_14;
      v51 = v17 + 120 * v30;
      if ( v16 == v51 )
        goto LABEL_14;
      v31 = v17 + 120 * v30;
      do
      {
        while ( 1 )
        {
          v32 = *(void **)(v31 + 80);
          if ( v32 != (void *)(v31 + 96) )
            operator delete(v32);
          v33 = *(void **)(v31 + 40);
          if ( v33 != (void *)(v31 + 56) )
            operator delete(v33);
          if ( *(_QWORD *)v31 == v31 + 16 )
            break;
          operator delete(*(void **)v31);
          v31 += 120;
          if ( v16 == v31 )
          {
            v18 = *(_DWORD *)v6;
            *(_QWORD *)(a3 + 160) = v51;
            goto LABEL_62;
          }
        }
        v31 += 120;
      }
      while ( v16 != v31 );
      v18 = *(_DWORD *)v6;
      *(_QWORD *)(a3 + 160) = v51;
LABEL_62:
      if ( v18 != -1 )
      {
LABEL_15:
        v20 = v18;
        if ( v18 < 0 )
        {
          v34 = -(__int64)v18;
          for ( i = (char *)&v57 + 5; ; --i )
          {
            *(i - 1) = v34 % 0xA + 48;
            if ( v34 <= 9 )
              break;
            v34 /= 0xAu;
          }
          *(i - 2) = 45;
          v52[0] = v53;
          sub_A1CFF0(v52, i - 2, (__int64)&v57 + 5);
          v36 = j__strlen("invalid parameter position ");
          v37 = (__m128i *)sub_978080(v52, 0, 0, "invalid parameter position ", v36);
          v54[0] = &v55;
          m128i_i64 = (__int64)v37[1].m128i_i64;
          if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
          {
            v55 = _mm_loadu_si128(v37 + 1);
          }
          else
          {
            v54[0] = (void *)v37->m128i_i64[0];
            v55.m128i_i64[0] = v37[1].m128i_i64[0];
          }
          v41 = (void *)v37->m128i_i64[1];
          v37[1].m128i_i8[0] = 0;
          v54[1] = v41;
          v37->m128i_i64[0] = m128i_i64;
          v37->m128i_i64[1] = 0;
          v56 = v54;
          LOWORD(v58) = 260;
          sub_A1D5F0(a1, 0, m128i_i64, (__int64)v41, v38, v39, (char)v54);
          if ( v54[0] != &v55 )
            operator delete(v54[0]);
          if ( v52[0] != v53 )
            operator delete(v52[0]);
        }
        else
        {
          v21 = *(_QWORD *)(a3 + 152);
          v22 = v21 + 120 * v20;
          v23 = v62;
          if ( (v62 & 1) != 0 )
          {
            *(_BYTE *)(v22 + 32) |= 1u;
            if ( !*(_QWORD *)(v22 + 8) )
              sub_9CAB60(v21 + 120 * v20, (__int64)&v59);
            v23 = v62;
          }
          if ( (v23 & 2) != 0 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( !*(_QWORD *)(v22 + 8) )
              sub_9CAB60(v22, (__int64)&v59);
          }
          if ( (*(_BYTE *)(v22 + 32) & 4) == 0 )
          {
            if ( (v62 & 4) != 0 )
            {
              v24 = 1;
              v25 = (v62 & 8) != 0;
            }
            else
            {
              v24 = 0;
              v25 = 0;
            }
            *(_BYTE *)(v22 + 32) = (4 * v24) | *(_BYTE *)(v22 + 32) & 0xF3 | (8 * v25);
          }
          if ( !*(_QWORD *)(v22 + 48) )
            sub_9CAB60(v22 + 40, (__int64)&v63);
          v26 = *(_BYTE *)(v22 + 72);
          if ( (v26 & 1) == 0 && (v66 & 1) != 0 )
            *(_BYTE *)(v22 + 72) = v66 & 6 | v26 & 0xF8 | 1;
          if ( !*(_QWORD *)(v22 + 88) )
            sub_9CAB60(v22 + 80, (__int64)&v67);
          v27 = *(_BYTE *)(v22 + 112);
          if ( (v27 & 1) == 0 && (v70 & 1) != 0 )
          {
            v28 = v27 | 1;
            *(_BYTE *)(v22 + 112) = v28;
            v27 = v70 & 2 | v28 & 0xFD;
            *(_BYTE *)(v22 + 112) = v27;
          }
          if ( (v27 & 4) == 0 && (v70 & 4) != 0 )
          {
            v29 = *(_BYTE *)(v22 + 112) | 4;
            *(_BYTE *)(v22 + 112) = v29;
            v27 = v70 & 8 | v29 & 0xF7;
            *(_BYTE *)(v22 + 112) = v27;
          }
          if ( (v27 & 0x70) == 0 )
            *(_BYTE *)(v22 + 112) = v70 & 0x70 | *(_BYTE *)(v22 + 112) & 0x8F;
        }
        goto LABEL_42;
      }
LABEL_63:
      if ( *(_BYTE *)(a4 + 120) )
      {
        sub_9CAB60(a4, (__int64)&v59);
        *(_BYTE *)(a4 + 32) = v62 & 0xF | *(_BYTE *)(a4 + 32) & 0xF0;
        sub_9CAB60(a4 + 40, (__int64)&v63);
        *(_BYTE *)(a4 + 72) = v66 & 7 | *(_BYTE *)(a4 + 72) & 0xF8;
        sub_9CAB60(a4 + 80, (__int64)&v67);
        *(_BYTE *)(a4 + 112) = v70 & 0x7F | *(_BYTE *)(a4 + 112) & 0x80;
      }
      else
      {
        v42 = v59;
        v43 = v60;
        *(_QWORD *)a4 = a4 + 16;
        sub_A1CFF0((_QWORD *)a4, v42, (__int64)&v42[v43]);
        v44 = v63;
        v45 = v64;
        *(_BYTE *)(a4 + 32) = v62 & 0xF | *(_BYTE *)(a4 + 32) & 0xF0;
        *(_QWORD *)(a4 + 40) = a4 + 56;
        sub_A1CFF0((_QWORD *)(a4 + 40), v44, (__int64)&v44[v45]);
        v46 = v67;
        v47 = v68;
        *(_BYTE *)(a4 + 72) = v66 & 7 | *(_BYTE *)(a4 + 72) & 0xF8;
        *(_QWORD *)(a4 + 80) = a4 + 96;
        sub_A1CFF0((_QWORD *)(a4 + 80), v46, (__int64)&v46[v47]);
        v48 = *(_BYTE *)(a4 + 112);
        *(_BYTE *)(a4 + 120) = 1;
        *(_BYTE *)(a4 + 112) = v70 & 0x7F | v48 & 0x80;
      }
LABEL_42:
      if ( v67 != v69 )
        operator delete(v67);
      if ( v63 != v65 )
        operator delete(v63);
      if ( v59 == v61 )
      {
        v6 += 40;
        if ( v49 == v6 )
          return;
      }
      else
      {
        operator delete(v59);
        v6 += 40;
        if ( v49 == v6 )
          return;
      }
    }
    sub_A1EB00((__int64 *)(a3 + 152), v30 - v19);
    v18 = *(_DWORD *)v6;
LABEL_14:
    if ( v18 != -1 )
      goto LABEL_15;
    goto LABEL_63;
  }
}

