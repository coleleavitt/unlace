__int64 __fastcall sub_1A2A70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // r15
  int v12; // r13d
  void *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rcx
  void *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r14
  unsigned int v20; // r9d
  __int64 v21; // rcx
  int *v22; // r13
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  int v26; // r13d
  int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  size_t v31; // rsi
  char *v32; // r12
  size_t v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rdi
  unsigned int v46; // ebx
  bool v48; // zf
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  __m128i si128; // xmm1
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // r12
  int v58; // esi
  int v59; // esi
  __int64 v60; // rsi
  __int64 v61; // rsi
  __m128i v62; // xmm0
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v66; // rax
  unsigned __int64 tinfo_size; // rax
  __int64 v68; // rsi
  __int64 v69; // [rsp+8h] [rbp-1B0h]
  __int64 v70; // [rsp+8h] [rbp-1B0h]
  size_t n[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v72; // [rsp+20h] [rbp-198h]
  unsigned int v73; // [rsp+28h] [rbp-190h]
  int v74; // [rsp+2Ch] [rbp-18Ch]
  __int64 v75; // [rsp+30h] [rbp-188h]
  __int64 v76; // [rsp+38h] [rbp-180h]
  _QWORD *v77; // [rsp+40h] [rbp-178h]
  char *v78; // [rsp+48h] [rbp-170h]
  __int64 v79; // [rsp+50h] [rbp-168h] BYREF
  __int128 v80; // [rsp+58h] [rbp-160h]
  __int64 v81[16]; // [rsp+70h] [rbp-148h] BYREF
  __m128i *v82; // [rsp+F0h] [rbp-C8h] BYREF
  int v83; // [rsp+F8h] [rbp-C0h]
  __m128i v84; // [rsp+100h] [rbp-B8h]
  __int64 v85; // [rsp+110h] [rbp-A8h]
  int v86; // [rsp+118h] [rbp-A0h]
  char *v87; // [rsp+120h] [rbp-98h]
  __int64 v88; // [rsp+128h] [rbp-90h]
  int v89; // [rsp+130h] [rbp-88h]
  __m128i v90; // [rsp+138h] [rbp-80h]
  __int64 v91; // [rsp+148h] [rbp-70h]
  void *v92; // [rsp+150h] [rbp-68h]
  __int128 v93; // [rsp+158h] [rbp-60h]
  __int64 v94; // [rsp+168h] [rbp-50h]
  unsigned __int64 v95; // [rsp+178h] [rbp-40h]

  v6 = (__int64)a1;
  v7 = a1[2];
  v95 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 280);
  sub_139B90(v8, (__int64)a2, a3, a4, a5, a6);
  sub_1A0DE0((__int64)v81, v8, a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
  if ( *(_BYTE *)(v8 + 320) )
  {
    v10 = a1[28];
    v11 = a1 + 18;
    if ( v10 == -1 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1[1] + 112LL) + 80LL);
      v10 = (int)((v12 + sub_F2D80(v8) - 1) & -v12);
    }
  }
  else
  {
    v10 = a1[44];
    v11 = a1 + 34;
  }
  v13 = sub_1A1040(v81, a1[2] + 96LL, 0xFFFFFFFF, v10, *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL), *(char *)(v9 + 12));
  v14 = *((_DWORD *)v11 + 10);
  v69 = (__int64)v13;
  v15 = *(char *)(v9 + 12);
  if ( v14 == -1 )
  {
    v16 = -1;
  }
  else
  {
    v16 = v11[4];
    if ( v16 != -1 )
      v16 += (int)(v14 * v15);
  }
  v17 = sub_1A1040(v81, a1[2] + 96LL, v14, v16, *(_DWORD *)(a1[2] + 24LL) - v14, v15);
  v18 = *((_DWORD *)v11 + 16);
  v19 = (__int64)v17;
  v20 = *(char *)(v9 + 13);
  if ( v18 == -1 )
  {
    v21 = -1;
  }
  else
  {
    v21 = v11[7];
    if ( v21 != -1 )
      v21 += (int)(v18 * v20);
  }
  v22 = (int *)sub_1A1040(v81, a1[2] + 120LL, v18, v21, *(_DWORD *)(a1[2] + 48LL) - v18, v20);
  if ( v19 )
  {
    sub_19CFB0((__int64)a1, v19, (__int64)v22);
    sub_1A00C0(v81, 1);
    if ( *(_DWORD *)(v19 + 48) == -1 )
      v23 = sub_1A1110(v19, v8, *(int *)(v19 + 52));
    else
      v23 = sub_1A1170(v19, v8);
    v24 = v23;
  }
  else
  {
    sub_19CFB0((__int64)a1, 0, (__int64)v22);
    sub_1A00C0(v81, 1);
    v24 = 0;
  }
  if ( v22 )
  {
    if ( v22[12] == -1 )
      v25 = sub_1A1110((__int64)v22, v8, v22[13]);
    else
      v25 = sub_1A1170((__int64)v22, v8);
    v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  if ( v69 )
  {
    v27 = *(_DWORD *)(v69 + 48) == -1 ? sub_1A1110(v69, v8, *(int *)(v69 + 52)) : sub_1A1170(v69, v8);
    v73 = v27 * *(char *)(v9 + 12);
    if ( v27 )
    {
      v28 = a1[2];
      v29 = *(_QWORD *)(v28 + 24);
      if ( v29 - v24 > (int)(*(_QWORD *)(v28 + 48) - v26) )
      {
        tinfo_size = get_tinfo_size(0, a1[57], 0);
        v68 = a1[2];
        if ( !(v73 % tinfo_size) )
        {
          v26 = *(_DWORD *)(v68 + 48);
LABEL_24:
          if ( !a1[16] )
            goto LABEL_25;
LABEL_48:
          v32 = (char *)&unk_4DBD60;
          goto LABEL_31;
        }
        v29 = *(_DWORD *)(v68 + 24);
      }
      v24 = v29;
      goto LABEL_24;
    }
  }
  if ( v24 <= *((_DWORD *)v11 + 10) && v26 <= *((_DWORD *)v11 + 16) )
  {
    v46 = 0;
    goto LABEL_43;
  }
  v48 = a1[16] == 0;
  v73 = 0;
  if ( !v48 )
    goto LABEL_48;
LABEL_25:
  if ( !*(_BYTE *)(v8 + 320) )
  {
    if ( !under_debugger )
      sub_383060(51389);
LABEL_73:
    BUG();
  }
  sub_19C2D0((__int64)a1, v9);
  if ( v11[10] == -1 )
    v11[10] = *(_QWORD *)(v8 + 144);
  v30 = a1[16];
  if ( a1[17] < (unsigned __int64)(v30 + 1) )
  {
    n[0] = a1[17];
    v49 = qvector_reserve(a1 + 15, 0, v30 + 1, 128);
    v32 = (char *)&unk_4DBD60;
    v50 = a1[16];
    v51 = a1[17];
    a1[17] = n[0];
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
    v72 = v51;
    v53 = a1[15];
    v54 = v50 - 1;
    if ( v54 >= 0 )
    {
      v75 = v49;
      v74 = v26;
      v76 = v8;
      v55 = v49;
      v77 = a1;
      v56 = v53;
      v78 = (char *)&unk_4DBD60;
      v57 = v54;
      do
      {
        *(_QWORD *)v55 = *(_QWORD *)v56;
        v58 = *(_DWORD *)(v56 + 8);
        *(__m128i *)(v55 + 16) = si128;
        *(_DWORD *)(v55 + 8) = v58;
        *(_QWORD *)(v55 + 32) = *(_QWORD *)(v56 + 32);
        v59 = *(_DWORD *)(v56 + 40);
        *(_QWORD *)(v55 + 48) = off_4DBD70;
        *(_DWORD *)(v55 + 40) = v59;
        *(_QWORD *)(v55 + 56) = *(_QWORD *)(v56 + 56);
        *(_DWORD *)(v55 + 64) = *(_DWORD *)(v56 + 64);
        v60 = *(_QWORD *)(v56 + 88);
        *(__m128i *)(v55 + 72) = _mm_loadu_si128((const __m128i *)(v56 + 72));
        *(_QWORD *)(v55 + 88) = v60;
        v61 = *(_QWORD *)(v56 + 96);
        v62 = _mm_loadu_si128((const __m128i *)(v56 + 104));
        *(_QWORD *)(v56 + 96) = 0;
        *(_QWORD *)(v55 + 96) = v61;
        *(__m128i *)(v55 + 104) = v62;
        v63 = *(_QWORD *)(v56 + 120);
        *(_QWORD *)(v56 + 112) = 0;
        *(_QWORD *)(v55 + 120) = v63;
        v64 = *(_QWORD *)(v56 + 96);
        if ( v64 )
        {
          *(_QWORD *)(v56 + 104) = 0;
          *(__m128i *)n = si128;
          qfree(v64);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v56 += 128;
        v55 += 128;
      }
      while ( v57-- != 0 );
      v6 = (__int64)v77;
      v26 = v74;
      v49 = v75;
      v8 = v76;
      v32 = v78;
      v53 = v77[15];
    }
    n[0] = v49;
    qfree(v53);
    v31 = n[0];
    v66 = v72;
    v30 = *(_QWORD *)(v6 + 128);
    *(_QWORD *)(v6 + 120) = n[0];
    *(_QWORD *)(v6 + 136) = v66;
  }
  else
  {
    v31 = a1[15];
    v32 = (char *)&unk_4DBD60;
  }
  v33 = v31 + (v30 << 7);
  *(_DWORD *)(v33 + 8) = 0;
  *(_QWORD *)v33 = 0;
  *(_QWORD *)(v33 + 32) = -1;
  *(_DWORD *)(v33 + 40) = -1;
  *(_OWORD *)(v33 + 72) = -1;
  *(_QWORD *)(v33 + 48) = v32 + 16;
  *(_QWORD *)(v33 + 56) = -1;
  *(_DWORD *)(v33 + 64) = -1;
  *(_QWORD *)(v33 + 88) = -1;
  *(_QWORD *)(v33 + 96) = 0;
  *(_QWORD *)(v33 + 120) = 0;
  *(__m128i *)(v33 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)off_4DBD90,
                             (__m128i)(unsigned __int64)(v32 + 16));
  *(_OWORD *)(v33 + 104) = 0;
  ++*(_QWORD *)(v6 + 128);
  *(_DWORD *)(v33 + 8) |= 0x20u;
  v34 = *(_QWORD *)(v6 + 8);
  n[0] = v33;
  v35 = get_tinfo_size(0, *(_QWORD *)(v34 + 248), 0);
  v36 = sub_138140((_QWORD *)v8, v35, 0);
  *(_QWORD *)(n[0] + 72) = v36;
  if ( v36 == -1 )
  {
    if ( !under_debugger )
      sub_383060(52217);
    goto LABEL_73;
  }
LABEL_31:
  v37 = *(_QWORD *)(v6 + 120);
  v38 = *(_QWORD *)(v37 + 32);
  v82 = *(__m128i **)v37;
  v39 = *(_DWORD *)(v37 + 8);
  v85 = v38;
  LODWORD(v38) = *(_DWORD *)(v37 + 40);
  v87 = v32 + 16;
  v40 = *(_QWORD *)(v37 + 56);
  v84 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)(v32 + 16));
  v41 = _mm_loadu_si128((const __m128i *)(v37 + 72));
  v88 = v40;
  LODWORD(v40) = *(_DWORD *)(v37 + 64);
  v90 = v41;
  v89 = v40;
  v42 = *(_QWORD *)(v37 + 88);
  v93 = 0;
  v43 = *(_QWORD *)(v37 + 104);
  v83 = v39;
  v86 = v38;
  v91 = v42;
  v92 = nullptr;
  if ( v43 )
  {
    v70 = v37;
    n[0] = 8 * v43;
    v92 = (void *)qalloc_or_throw(8 * v43);
    *((_QWORD *)&v93 + 1) = v43;
    memcpy(v92, *(const void **)(v70 + 96), n[0]);
    *(_QWORD *)&v93 = v43;
    v37 = v70;
    LOBYTE(v39) = v83;
  }
  v94 = *(_QWORD *)(v37 + 120);
  if ( (v39 & 2) != 0 )
  {
    if ( !under_debugger )
      sub_383060(51390);
    goto LABEL_73;
  }
  v86 = v24;
  v89 = v26;
  v83 = v39 & 0x20 | 8;
  v90.m128i_i64[1] = v11[10] + v73;
  v82 = sub_D21A0(v8);
  v94 = 0;
  v79 = 0;
  v80 = 0;
  v79 = qvector_reserve(&v79, 0, 1, 8);
  *(_QWORD *)(v79 + 8 * v80) = &v82;
  *(_QWORD *)&v80 = v80 + 1;
  sub_1A2060(v6, &v79);
  sub_19B550((__int64)&v82, *(_QWORD *)(v94 + 24), v94, (int)"va_end", 26);
  v44 = *(_QWORD *)(v6 + 400);
  *(_DWORD *)(v6 + 312) = v24;
  *(_DWORD *)(v6 + 336) = v26;
  if ( v44 )
  {
    *(_QWORD *)(v6 + 408) = 0;
    qfree(v44);
    *(_QWORD *)(v6 + 400) = 0;
    *(_QWORD *)(v6 + 416) = 0;
  }
  v45 = *(_QWORD *)(v6 + 424);
  if ( v45 )
  {
    *(_QWORD *)(v6 + 432) = 0;
    qfree(v45);
    *(_QWORD *)(v6 + 424) = 0;
    *(_QWORD *)(v6 + 440) = 0;
  }
  clear_tinfo_t(v6 + 448);
  clear_tinfo_t(v6 + 456);
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92);
  }
  v46 = 1;
LABEL_43:
  sub_19FFD0((__int64)v81);
  return v46;
}
