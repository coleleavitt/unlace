unsigned __int64 __fastcall sub_3E8690(__int64 a1, __int64 a2, __m128 si128)
{
  int v3; // edx
  void *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // esi
  int v15; // edx
  int v16; // edx
  int v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // edx
  __int64 *v22; // r14
  __int64 *v23; // r13
  int v24; // eax
  int v25; // esi
  bool v26; // zf
  int v27; // edx
  int v28; // eax
  int v29; // esi
  int v30; // edx
  int v31; // eax
  int v32; // esi
  int v33; // edx
  int v34; // esi
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // edx
  int v40; // eax
  int v41; // esi
  int v42; // edx
  int v43; // esi
  int v44; // edx
  int v45; // eax
  int v46; // esi
  int v47; // eax
  unsigned __int64 result; // rax
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // esi
  int v53; // esi
  int v54; // edx
  int v55; // esi
  int v56; // edx
  int v57; // esi
  int v58; // edx
  int v59; // esi
  int v60; // edx
  int v61; // esi
  int v62; // edx
  int v63; // esi
  int v64; // edx
  int v65; // esi
  int v66; // edx
  int v67; // esi
  int v68; // edx
  int v69; // esi
  int v70; // edx
  int v71; // esi
  int v72; // edx
  int v73; // esi
  int v74; // edx
  void *v75; // rax
  void *v76; // rax
  int v77; // eax
  int v78; // esi
  int v79; // edx
  int v80; // eax
  int v81; // esi
  int v82; // edx
  int v83; // esi
  int v84; // edx
  int v85; // eax
  int v86; // esi
  int v87; // eax
  int v88; // esi
  int v89; // eax
  int v90; // esi
  int v91; // edx
  int v92; // eax
  int v93; // esi
  int v94; // edx
  int v95; // esi
  int v96; // edx
  int v97; // eax
  int v98; // esi
  int v99; // eax
  int v100; // esi
  int v101; // eax
  int v102; // esi
  __int64 *v103; // [rsp+8h] [rbp-90h]
  __int64 *v104; // [rsp+10h] [rbp-88h]
  __int64 *v105; // [rsp+18h] [rbp-80h]
  __int64 *v106; // [rsp+20h] [rbp-78h]
  __int64 *v107; // [rsp+28h] [rbp-70h]
  __int64 v108; // [rsp+30h] [rbp-68h] BYREF
  __int64 v109; // [rsp+38h] [rbp-60h]
  __int64 *v110; // [rsp+40h] [rbp-58h] BYREF
  __int128 v111; // [rsp+48h] [rbp-50h]
  unsigned __int64 v112; // [rsp+58h] [rbp-40h]

  v112 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 748);
  switch ( v3 )
  {
    case 0:
      v75 = &unk_418520;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v75 = &unk_418AA0;
      goto LABEL_87;
    case 1:
    case 2:
      v5 = &unk_419020;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v5 = &unk_4195A0;
      *(_QWORD *)(a1 + 736) = v5;
      *(_DWORD *)(a1 + 80) = 8;
      if ( v3 == 1 )
      {
        *(_DWORD *)(a1 + 84) = 4;
        *(_QWORD *)(a1 + 88) = 0x2000000010LL;
        v6 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
        LOBYTE(v6) = *(_BYTE *)(a1 + 48) & 0x7F | 0x80;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = 8;
        *(_QWORD *)(a1 + 88) = 0x2000000010LL;
        v6 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
        BYTE1(v6) |= 1u;
      }
      goto LABEL_6;
    case 3:
      v75 = &unk_416F20;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v75 = &unk_4174A0;
      goto LABEL_87;
    case 4:
      v76 = &unk_417A20;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v76 = &unk_417FA0;
      *(_QWORD *)(a1 + 736) = v76;
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_407580);
      v6 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
      *(__m128 *)(a1 + 80) = si128;
      LOBYTE(v6) = v6 | 0x80;
LABEL_6:
      v7 = v6 | 0x80000;
      goto LABEL_7;
    case 5:
      v75 = &unk_416820;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
        v75 = &unk_416BA0;
LABEL_87:
      *(_QWORD *)(a1 + 736) = v75;
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_407570);
      v7 = *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
      *(__m128 *)(a1 + 80) = si128;
      LOBYTE(v7) = v7 | 0x80;
LABEL_7:
      *(_DWORD *)(a1 + 48) = v7;
      sub_3E8600(a1, *(double *)si128.m128_u64);
      v8 = *(_DWORD *)(a1 + 692);
      v9 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((v8 + 31) & 0xFFFFFFE0), _mm_cvtsi32_si128(v8)).m128i_u64[0];
      if ( v9 )
      {
        *(_QWORD *)(a1 + 128) = 0;
        qfree(v9);
        *(_QWORD *)(a1 + 120) = 0;
        *(_QWORD *)(a1 + 136) = 0;
      }
      v10 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 152) = 0;
      if ( v10 )
      {
        *(_QWORD *)(a1 + 168) = 0;
        qfree(v10);
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      v11 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = 0;
      if ( v11 )
      {
        *(_QWORD *)(a1 + 208) = 0;
        qfree(v11);
        *(_QWORD *)(a1 + 200) = 0;
        *(_QWORD *)(a1 + 216) = 0;
      }
      v12 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 232) = 0;
      if ( v12 )
      {
        *(_QWORD *)(a1 + 248) = 0;
        qfree(v12);
        *(_QWORD *)(a1 + 240) = 0;
        *(_QWORD *)(a1 + 256) = 0;
      }
      v13 = *(_QWORD *)(a1 + 280);
      *(_QWORD *)(a1 + 272) = 0;
      if ( v13 )
      {
        *(_QWORD *)(a1 + 288) = 0;
        qfree(v13);
        *(_QWORD *)(a1 + 280) = 0;
        *(_QWORD *)(a1 + 296) = 0;
      }
      v14 = *(_DWORD *)(a1 + 676);
      v15 = *(_DWORD *)(a1 + 692);
      v108 = 0;
      v109 = 0;
      sub_5FC80(&v108, v14, v15 - v14);
      v110 = nullptr;
      v111 = 0;
      sub_60080((__int64 *)(a1 + 104), &v108);
      sub_311F30((__int64 *)(a1 + 120), &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v16 = *(_DWORD *)(a1 + 80);
      v17 = **(_DWORD **)(a1 + 696);
      v108 = 0;
      v109 = 0;
      sub_5FC80(&v108, v17, v16);
      v110 = nullptr;
      v111 = 0;
      sub_60080((__int64 *)(a1 + 104), &v108);
      sub_311F30((__int64 *)(a1 + 120), &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v108 = 0;
      v109 = 0;
      sub_5FC80(&v108, 0, 5);
      v110 = nullptr;
      v111 = 0;
      sub_60080((__int64 *)(a1 + 264), &v108);
      v105 = (__int64 *)(a1 + 280);
      sub_311F30((__int64 *)(a1 + 280), &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v108 = 0;
      v109 = 0;
      v110 = nullptr;
      v111 = 0;
      v110 = (__int64 *)qvector_reserve(&v110, 0, 1, 16);
      *(__m128i *)&v110[2 * v111] = _mm_load_si128((const __m128i *)&xmmword_407240);
      *(_QWORD *)&v111 = v111 + 1;
      sub_60080((__int64 *)(a1 + 264), &v108);
      sub_311F30(v105, &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v18 = *(_DWORD *)(a1 + 352);
      v108 = 0;
      v109 = 0;
      sub_5FC80(&v108, v18, 1);
      v110 = nullptr;
      v111 = 0;
      sub_60080((__int64 *)(a1 + 264), &v108);
      sub_311F30(v105, &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v19 = *(_DWORD *)(a1 + 80);
      v20 = *(_DWORD *)(a1 + 360);
      v21 = 3 * v19;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      {
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v19 + v20 - v21, v21);
        v22 = (__int64 *)(a1 + 184);
        v110 = nullptr;
        v111 = 0;
        sub_60080((__int64 *)(a1 + 184), &v108);
        v23 = (__int64 *)(a1 + 200);
        sub_311F30((__int64 *)(a1 + 200), &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else
      {
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v20, v21);
        v22 = (__int64 *)(a1 + 184);
        v110 = nullptr;
        v111 = 0;
        sub_60080((__int64 *)(a1 + 184), &v108);
        v23 = (__int64 *)(a1 + 200);
        sub_311F30((__int64 *)(a1 + 200), &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      qfree(v108);
      v24 = *(_DWORD *)(a1 + 80);
      v25 = *(_DWORD *)(a1 + 420);
      v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v27 = 8 * v24;
      v108 = 0;
      v109 = 0;
      if ( v26 )
      {
        sub_5FC80(&v108, v25, v27);
        v110 = nullptr;
        v103 = (__int64 *)(a1 + 224);
        v111 = 0;
        sub_60080((__int64 *)(a1 + 224), &v108);
        v104 = (__int64 *)(a1 + 240);
        sub_311F30((__int64 *)(a1 + 240), &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else
      {
        sub_5FC80(&v108, v24 + v25 - v27, v27);
        v110 = nullptr;
        v103 = (__int64 *)(a1 + 224);
        v111 = 0;
        sub_60080((__int64 *)(a1 + 224), &v108);
        v104 = (__int64 *)(a1 + 240);
        sub_311F30((__int64 *)(a1 + 240), &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      qfree(v108);
      v28 = *(_DWORD *)(a1 + 80);
      v29 = *(_DWORD *)(a1 + 452);
      v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v30 = 2 * v28;
      v108 = 0;
      v109 = 0;
      if ( v26 )
      {
        sub_5FC80(&v108, v29, v30);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else
      {
        sub_5FC80(&v108, v28 + v29 - v30, v30);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      qfree(v108);
      v31 = *(_DWORD *)(a1 + 80);
      v32 = *(_DWORD *)(a1 + 472);
      v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
      v33 = 2 * v31;
      v108 = 0;
      v109 = 0;
      if ( v26 )
      {
        sub_5FC80(&v108, v32, v33);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v103, &v108);
        sub_311F30(v104, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else
      {
        sub_5FC80(&v108, v31 + v32 - v33, v33);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v103, &v108);
        sub_311F30(v104, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      qfree(v108);
      v34 = *(_DWORD *)(a1 + 480);
      v35 = *(_DWORD *)(a1 + 80);
      v108 = 0;
      v109 = 0;
      sub_5FC80(&v108, v34, v35);
      v110 = nullptr;
      v111 = 0;
      sub_60080(v22, &v108);
      sub_311F30(v23, &v110);
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v110);
      }
      qfree(v108);
      v36 = *(_DWORD *)(a1 + 748);
      if ( (unsigned int)(v36 - 1) <= 2 )
      {
        v77 = *(_DWORD *)(a1 + 80);
        v78 = *(_DWORD *)(a1 + 372);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v79 = 8 * v77;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v78, v79);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v77 + v78 - v79, v79);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v80 = *(_DWORD *)(a1 + 80);
        v81 = *(_DWORD *)(a1 + 404);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v82 = 4 * v80;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v81, v82);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v80 + v81 - v82, v82);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v83 = *(_DWORD *)(a1 + 468);
        v84 = *(_DWORD *)(a1 + 80);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v83, v84);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v103, &v108);
        sub_311F30(v104, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
        qfree(v108);
        v85 = *(_DWORD *)(a1 + 80);
        v86 = *(_DWORD *)(a1 + 532);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v86, 8 * v85);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v106, &v108);
        sub_311F30(v107, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
        qfree(v108);
        v87 = *(_DWORD *)(a1 + 80);
        v88 = *(_DWORD *)(a1 + 484);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v88, 12 * v87);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else if ( (v36 & 0xFFFFFFFB) != 0 )
      {
        if ( v36 != 5 )
        {
          if ( !under_debugger )
            sub_37E160(0xCE0Eu, (__int64)&v110, 0.0);
LABEL_160:
          BUG();
        }
        v37 = *(_DWORD *)(a1 + 80);
        v38 = *(_DWORD *)(a1 + 372);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v39 = 8 * v37;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v38, v39);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v37 + v38 - v39, v39);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v40 = *(_DWORD *)(a1 + 80);
        v41 = *(_DWORD *)(a1 + 404);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v42 = 4 * v40;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v41, v42);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v40 + v41 - v42, v42);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v43 = *(_DWORD *)(a1 + 468);
        v44 = *(_DWORD *)(a1 + 80);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v43, v44);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v103, &v108);
        sub_311F30(v104, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      else
      {
        v89 = *(_DWORD *)(a1 + 80);
        v90 = *(_DWORD *)(a1 + 372);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v91 = 4 * v89;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v90, v91);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v89 + v90 - v91, v91);
          v110 = nullptr;
          v106 = (__int64 *)(a1 + 144);
          v111 = 0;
          sub_60080((__int64 *)(a1 + 144), &v108);
          v107 = (__int64 *)(a1 + 160);
          sub_311F30((__int64 *)(a1 + 160), &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v92 = *(_DWORD *)(a1 + 80);
        v93 = *(_DWORD *)(a1 + 388);
        v26 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) == 0;
        v94 = 8 * v92;
        v108 = 0;
        v109 = 0;
        if ( v26 )
        {
          sub_5FC80(&v108, v93, v94);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        else
        {
          sub_5FC80(&v108, v92 + v93 - v94, v94);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
        }
        qfree(v108);
        v95 = *(_DWORD *)(a1 + 468);
        v96 = *(_DWORD *)(a1 + 80);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v95, v96);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
        qfree(v108);
        v97 = *(_DWORD *)(a1 + 80);
        v98 = *(_DWORD *)(a1 + 532);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v98, 4 * v97);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v106, &v108);
        sub_311F30(v107, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
        qfree(v108);
        v99 = *(_DWORD *)(a1 + 80);
        v100 = *(_DWORD *)(a1 + 548);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v100, 4 * v99);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
        qfree(v108);
        v101 = *(_DWORD *)(a1 + 80);
        v102 = *(_DWORD *)(a1 + 484);
        v108 = 0;
        v109 = 0;
        sub_5FC80(&v108, v102, 12 * v101);
        v110 = nullptr;
        v111 = 0;
        sub_60080(v22, &v108);
        sub_311F30(v23, &v110);
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree(v110);
        }
      }
      qfree(v108);
      switch ( *(_DWORD *)(a1 + 748) )
      {
        case 0:
        case 3:
        case 4:
          v45 = *(_DWORD *)(a1 + 80);
          v46 = *(_DWORD *)(a1 + 564);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v46, 12 * v45);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          goto LABEL_55;
        case 1:
          v53 = *(_DWORD *)(a1 + 564);
          v54 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v53, v54);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v55 = *(_DWORD *)(a1 + 572);
          v56 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v55, v56);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v57 = *(_DWORD *)(a1 + 580);
          v58 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v57, v58);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v59 = *(_DWORD *)(a1 + 588);
          v60 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v59, v60);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v61 = *(_DWORD *)(a1 + 596);
          v62 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v61, v62);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v63 = *(_DWORD *)(a1 + 604);
          v64 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v63, v64);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v65 = *(_DWORD *)(a1 + 568);
          v66 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v65, v66);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v67 = *(_DWORD *)(a1 + 576);
          v68 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v67, v68);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v69 = *(_DWORD *)(a1 + 584);
          v70 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v69, v70);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v71 = *(_DWORD *)(a1 + 592);
          v72 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v71, v72);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v73 = *(_DWORD *)(a1 + 600);
          v74 = *(_DWORD *)(a1 + 80);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v73, v74);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          goto LABEL_55;
        case 2:
          v49 = *(_DWORD *)(a1 + 80);
          v50 = *(_DWORD *)(a1 + 564);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v50, 4 * v49);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v22, &v108);
          sub_311F30(v23, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          qfree(v108);
          v51 = *(_DWORD *)(a1 + 80);
          v52 = *(_DWORD *)(a1 + 580);
          v108 = 0;
          v109 = 0;
          sub_5FC80(&v108, v52, 8 * v51);
          v110 = nullptr;
          v111 = 0;
          sub_60080(v103, &v108);
          sub_311F30(v104, &v110);
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
LABEL_55:
          qfree(v108);
          goto LABEL_56;
        case 5:
LABEL_56:
          sub_60080((__int64 *)(a1 + 264), v106);
          sub_311F30(v105, (__int64 **)v107);
          sub_60080((__int64 *)(a1 + 264), v22);
          sub_311F30(v105, (__int64 **)v23);
          v47 = *(_DWORD *)(a1 + 64);
          *(_DWORD *)(a1 + 52) = v47;
          *(_DWORD *)(a1 + 56) = v47;
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 472);
          return v112 - __readfsqword(0x28u);
        default:
          if ( !under_debugger )
            sub_37E160(0xCE0Fu, (__int64)&v110, 0.0);
          return result;
      }
      goto LABEL_160;
    default:
      if ( !under_debugger )
        sub_37E160(0xCE0Du, a2, *(double *)si128.m128_u64);
      goto LABEL_160;
  }
}
