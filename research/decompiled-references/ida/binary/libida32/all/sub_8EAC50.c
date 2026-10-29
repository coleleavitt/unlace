__int64 __fastcall sub_8EAC50(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __m128i *a4,
        unsigned __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v8; // r12
  __m128i *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int8 *v14; // rdx
  unsigned int v15; // esi
  int v16; // edi
  __int8 *v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r13
  int v20; // ebx
  char v21; // cl
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  char v37; // cl
  __int64 v38; // rax
  int v39; // edx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  bool v42; // cf
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int8 *v50; // rdx
  unsigned int v51; // esi
  __int64 v52; // rax
  void *v53; // rsi
  __int64 v54; // r8
  unsigned __int64 v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rax
  size_t v58; // r15
  __int64 v59; // rdi
  __int64 v60; // r10
  __int64 i; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 j; // rax
  __int64 v65; // r9
  int v66; // eax
  unsigned __int64 v67; // rax
  __m128i v68; // xmm2
  __m128i v69; // xmm3
  __m128i v70; // xmm4
  __m128i v71; // xmm5
  __int64 v72; // rax
  __int64 v73; // [rsp+8h] [rbp-100h]
  __m128i *v74; // [rsp+10h] [rbp-F8h]
  int v75; // [rsp+10h] [rbp-F8h]
  int v77; // [rsp+20h] [rbp-E8h]
  unsigned int v78; // [rsp+24h] [rbp-E4h]
  _BYTE *v79; // [rsp+28h] [rbp-E0h]
  unsigned int desta; // [rsp+38h] [rbp-D0h]
  void *dest; // [rsp+38h] [rbp-D0h]
  __int64 v82; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v83; // [rsp+60h] [rbp-A8h]
  const __m128i *v84; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v85; // [rsp+78h] [rbp-90h]
  unsigned __int64 v86; // [rsp+88h] [rbp-80h]
  unsigned __int64 v87; // [rsp+90h] [rbp-78h]
  unsigned __int64 v88; // [rsp+98h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-68h] BYREF
  void *v90; // [rsp+A8h] [rbp-60h]
  __int64 v91; // [rsp+B0h] [rbp-58h] BYREF
  int v92; // [rsp+B8h] [rbp-50h]
  __int64 v93; // [rsp+BCh] [rbp-4Ch] BYREF
  int v94; // [rsp+C4h] [rbp-44h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-40h]

  v79 = a2;
  v95 = __readfsqword(0x28u);
  v73 = -60;
  if ( *(_DWORD *)a1 )
  {
    v8 = a3;
    if ( *(_DWORD *)a1 == 1 && (a6 & 1) != 0 )
    {
      v75 = a6;
      v35 = sub_8E5330(a2, a3, (_DWORD *)(a1 + 232), *(_QWORD *)(a1 + 760) - 1LL, *(_DWORD *)(a1 + 664));
      v73 = v35;
      if ( v35 > 0xFFFFFFFFFFFFFF88LL )
        return v73;
      v8 -= v35;
      a6 = v75;
      *(_DWORD *)a1 = 2;
      v79 = (char *)a2 + v35;
    }
    else
    {
      v73 = 0;
    }
    if ( a5 )
    {
      v11 = *(__m128i **)(a1 + 3216);
      v12 = *(unsigned int *)(a1 + 3240);
      if ( !*(_DWORD *)(a1 + 3352) && a4 == v11 )
      {
        v15 = *(_DWORD *)(a1 + 3240);
        v13 = *(_QWORD *)(a1 + 3232);
        v12 = *(unsigned int *)(a1 + 3244);
        v16 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 3224);
        *(_DWORD *)(a1 + 3244) = v12;
        v14 = &v11->m128i_i8[-v13];
        *(_QWORD *)(a1 + 3232) = v13;
        v15 = (unsigned int)v14;
        *(_DWORD *)(a1 + 3240) = (_DWORD)v14;
        *(_QWORD *)(a1 + 3224) = (char *)a4 - v14;
        v16 = 0;
        if ( (unsigned int)((_DWORD)v14 - v12) <= 7 )
        {
          *(_DWORD *)(a1 + 3244) = (_DWORD)v14;
          v12 = (unsigned int)v14;
        }
      }
      v17 = &a4->m128i_i8[a5];
      *(_QWORD *)(a1 + 3216) = (char *)a4 + a5;
      if ( (unsigned __int64)a4->m128i_u64 + a5 > v13 + v12 && (unsigned __int64)a4 < v13 + (unsigned __int64)v15 )
      {
        v18 = (_DWORD)v17 - v13;
        if ( (__int64)&v17[-v13] > v15 )
          v18 = v15;
        *(_DWORD *)(a1 + 3244) = v18;
      }
      if ( !v16 )
      {
        *(_DWORD *)(a1 + 3352) = 0;
        *(_DWORD *)(a1 + 3260) = v15;
      }
      if ( *(_DWORD *)(a1 + 328) == 1 )
      {
        v47 = *(__m128i **)(a1 + 1032);
        v48 = *(unsigned int *)(a1 + 1056);
        if ( a4 == v47 )
        {
          v51 = *(_DWORD *)(a1 + 1056);
          v49 = *(_QWORD *)(a1 + 1048);
          v48 = *(unsigned int *)(a1 + 1060);
        }
        else
        {
          v49 = *(_QWORD *)(a1 + 1040);
          *(_DWORD *)(a1 + 1060) = v48;
          v50 = &v47->m128i_i8[-v49];
          *(_QWORD *)(a1 + 1048) = v49;
          v51 = (unsigned int)v50;
          *(_DWORD *)(a1 + 1056) = (_DWORD)v50;
          *(_QWORD *)(a1 + 1040) = (char *)a4 - v50;
          if ( (unsigned int)((_DWORD)v50 - v48) <= 7 )
          {
            *(_DWORD *)(a1 + 1060) = (_DWORD)v50;
            v48 = (unsigned int)v50;
          }
        }
        *(_QWORD *)(a1 + 1032) = v17;
        if ( (unsigned __int64)v17 > v49 + v48 && (unsigned __int64)a4 < v49 + (unsigned __int64)v51 )
        {
          if ( (__int64)&v17[-v49] <= v51 )
            v51 = (_DWORD)v17 - v49;
          *(_DWORD *)(a1 + 1060) = v51;
        }
      }
      if ( !a6 )
      {
        sub_8E65A0(a1 + 3216, (_QWORD *)(a1 + 680), a1 + 232, (int)a4, (int)v17);
        v24 = sub_8E7F50(a1, v79, v8, a4, a5, 0);
LABEL_82:
        if ( v24 > 0xFFFFFFFFFFFFFF88LL )
          return v24;
        v73 += v24;
        v40 = *(_QWORD *)(a1 + 760);
        v41 = *(_QWORD *)(a1 + 768) + a5;
        *(_QWORD *)(a1 + 768) = v41;
        *(_QWORD *)(a1 + 776) += v73;
        if ( v40 )
        {
          v42 = v40 < v41 + 1;
          v43 = -72;
          if ( !v42 )
            return v73;
          return v43;
        }
        return v73;
      }
      v19 = *(_QWORD *)(a1 + 752);
      v20 = *(_DWORD *)(a1 + 236);
      if ( *(_DWORD *)(a1 + 268) )
        sub_8DF9B0(a1 + 784, a4->m128i_i8, a5);
      v21 = v20;
      v22 = (unsigned __int64)v79;
      v23 = a5;
      v77 = 1 << v21;
      while ( 1 )
      {
        v78 = a7 & (v19 >= v23);
        if ( v8 <= 5 )
          return -70;
        if ( v19 > v23 )
          v19 = v23;
        v74 = (__m128i *)((char *)a4 + v19);
        sub_8E65A0(a1 + 3216, (_QWORD *)(a1 + 680), a1 + 232, (int)a4, (_DWORD)a4 + v19);
        v27 = *(_QWORD *)(a1 + 3224);
        v28 = *(_DWORD *)(a1 + 3256);
        if ( v28 + v77 < (unsigned int)((_DWORD)a4 + v19 - v27) || v28 != *(_DWORD *)(a1 + 3240) )
        {
          *(_DWORD *)(a1 + 3256) = 0;
          *(_QWORD *)(a1 + 3464) = 0;
        }
        v29 = (_DWORD)a4 - v27;
        v30 = v77;
        if ( a1 != -3256 )
          v30 = *(_DWORD *)(a1 + 3256) + v77;
        v31 = *(_DWORD *)(a1 + 3244);
        if ( v29 > v30 )
        {
          v32 = v29 - v77;
          if ( v32 > v31 )
          {
            *(_DWORD *)(a1 + 3244) = v32;
            v31 = v32;
          }
          if ( *(_DWORD *)(a1 + 3240) < v31 )
            *(_DWORD *)(a1 + 3240) = v31;
          if ( a1 != -3256 )
            *(_DWORD *)(a1 + 3256) = 0;
          if ( a1 != -3464 )
            *(_QWORD *)(a1 + 3464) = 0;
        }
        if ( *(_DWORD *)(a1 + 3260) < v31 )
          *(_DWORD *)(a1 + 3260) = v31;
        if ( *(_QWORD *)(a1 + 288) )
          break;
        if ( *(_DWORD *)(a1 + 372) == 1 )
        {
          v24 = sub_8E5DC0(a1, a4, v19);
          if ( v24 > 0xFFFFFFFFFFFFFF88LL )
            return v24;
          if ( v24 == 1 )
          {
            v38 = *(_QWORD *)(a1 + 3200);
            if ( *(_DWORD *)(v38 + 5604) == 2 )
              *(_DWORD *)(v38 + 5604) = 1;
            if ( *(_DWORD *)(a1 + 912) )
              return -106;
            if ( v19 + 3 > v8 )
              return -70;
LABEL_27:
            v25 = v78 + 8 * v19;
            *(_WORD *)v22 = v25;
            *(_BYTE *)(v22 + 2) = BYTE2(v25);
            memcpy((void *)(v22 + 3), a4, v19);
            v26 = v19 + 3;
LABEL_28:
            if ( v26 > 0xFFFFFFFFFFFFFF88LL )
              return v26;
            goto LABEL_29;
          }
          v45 = *(_QWORD *)(a1 + 960) - *(_QWORD *)(a1 + 952);
          v90 = nullptr;
          v84 = (const __m128i *)(a1 + 952);
          v89 = a1 + 4144;
          if ( (unsigned int)(v45 >> 3) > 4 )
          {
            desta = v45 >> 3;
            sub_8EAAF0(&v89, 0, desta, a1, (const __m128i *)(a1 + 952));
            *(_DWORD *)(v89 + 4LL * (_QWORD)v90) = desta;
            v52 = *(_QWORD *)(a1 + 3200);
            v53 = v90;
            dest = v90;
            v91 = *(_QWORD *)(v52 + 5616);
            v92 = *(_DWORD *)(v52 + 5624);
            v93 = *(_QWORD *)(v52 + 5616);
            LODWORD(v52) = *(_DWORD *)(v52 + 5624);
            *(_OWORD *)(a1 + 4096) = 0;
            v94 = v52;
            *(_OWORD *)(a1 + 4112) = 0;
            *(_OWORD *)(a1 + 4064) = 0;
            *(_OWORD *)(a1 + 4080) = 0;
            *(_OWORD *)(a1 + 4128) = 0;
            if ( v53 )
            {
              sub_8E51D0((__m128i *)(a1 + 3984), v84, 0, *(unsigned int *)(a1 + 4144));
              v85 = v19;
              v54 = 0;
              v83 = 0;
              v55 = 0;
              v86 = v23;
              v87 = v22;
              v88 = v8;
              do
              {
                v56 = *(_QWORD *)(a1 + 3984);
                v57 = (*(_QWORD *)(a1 + 3992) - v56) >> 3;
                v58 = v57;
                if ( v57 )
                {
                  v59 = *(unsigned int *)(a1 + 4060);
                  v60 = 0;
                  for ( i = 0; ; i = v62 )
                  {
                    v60 += *(unsigned __int16 *)(v56 + 8 * i + 4);
                    if ( v59 == i && *(_DWORD *)(a1 + 4056) == 1 )
                    {
                      v62 = i + 1;
                      v60 += 0x10000;
                      if ( v57 == i + 1 )
                      {
LABEL_112:
                        v63 = 0;
                        for ( j = 0; ; j = v65 )
                        {
                          v63 += *(unsigned __int16 *)(v56 + 8 * j + 6) + 3LL;
                          if ( v59 == j && *(_DWORD *)(a1 + 4056) == 2 )
                          {
                            v63 += 0x10000;
                            v65 = j + 1;
                            if ( i == j )
                            {
LABEL_118:
                              v58 = v60 + v63;
                              v82 = v60 + v63 + v54;
                              goto LABEL_119;
                            }
                          }
                          else
                          {
                            v65 = j + 1;
                            if ( i == j )
                              goto LABEL_118;
                          }
                        }
                      }
                    }
                    else
                    {
                      v62 = i + 1;
                      if ( v57 == i + 1 )
                        goto LABEL_112;
                    }
                  }
                }
                v82 = v54;
LABEL_119:
                if ( dest == (void *)v55 )
                {
                  v66 = v78;
                  v58 = v85 - v54;
                }
                else
                {
                  sub_8E51D0(
                    (__m128i *)(a1 + 4064),
                    v84,
                    *(unsigned int *)(a1 + 4 * v55 + 4144),
                    *(unsigned int *)(a1 + 4 * v55 + 4148));
                  v66 = 0;
                }
                v67 = sub_8E8520(a1, a1 + 3984, &v91, (int *)&v93, v22, v8, a4, v58, v66, 1);
                if ( v67 > 0xFFFFFFFFFFFFFF88LL )
                  return v67;
                a4 = (__m128i *)((char *)a4 + v58);
                v68 = _mm_loadu_si128((const __m128i *)(a1 + 4080));
                v22 += v67;
                v69 = _mm_loadu_si128((const __m128i *)(a1 + 4096));
                v8 -= v67;
                v83 += v67;
                ++v55;
                v70 = _mm_loadu_si128((const __m128i *)(a1 + 4112));
                *(__m128i *)(a1 + 3984) = _mm_loadu_si128((const __m128i *)(a1 + 4064));
                v71 = _mm_loadu_si128((const __m128i *)(a1 + 4128));
                *(__m128i *)(a1 + 4000) = v68;
                v54 = v82;
                *(__m128i *)(a1 + 4016) = v69;
                *(__m128i *)(a1 + 4032) = v70;
                *(__m128i *)(a1 + 4048) = v71;
              }
              while ( v55 <= (unsigned __int64)dest );
              v72 = *(_QWORD *)(a1 + 3200);
              v23 = v86;
              v22 = v87;
              v19 = v85;
              v8 = v88;
              v26 = v83;
              *(_QWORD *)(v72 + 5616) = v91;
              *(_DWORD *)(v72 + 5624) = v92;
              goto LABEL_28;
            }
          }
          else
          {
            v46 = *(_QWORD *)(a1 + 3200);
            v91 = *(_QWORD *)(v46 + 5616);
            v92 = *(_DWORD *)(v46 + 5624);
            v93 = *(_QWORD *)(v46 + 5616);
            LODWORD(v46) = *(_DWORD *)(v46 + 5624);
            *(_OWORD *)(a1 + 4096) = 0;
            v94 = v46;
            *(_OWORD *)(a1 + 4112) = 0;
            *(_OWORD *)(a1 + 4064) = 0;
            *(_OWORD *)(a1 + 4080) = 0;
            *(_OWORD *)(a1 + 4128) = 0;
          }
          v26 = sub_8E8520(a1, (__int64)v84, &v91, (int *)&v93, v22, v8, a4, v19, v78, 0);
          goto LABEL_28;
        }
        v24 = sub_8E7F50(a1, (_BYTE *)(v22 + 3), v8 - 3, a4, v19, 1);
        if ( v24 > 0xFFFFFFFFFFFFFF88LL )
          return v24;
        if ( !v24 )
        {
          if ( v19 + 3 > v8 )
            return -70;
          goto LABEL_27;
        }
        v39 = v78 + 8 * v24 + 4;
        if ( v24 == 1 )
          v39 = v78 + 8 * v19 + 2;
        *(_WORD *)v22 = v39;
        v26 = v24 + 3;
        *(_BYTE *)(v22 + 2) = BYTE2(v39);
LABEL_29:
        v22 += v26;
        v8 -= v26;
        a4 = v74;
        *(_DWORD *)(a1 + 944) = 0;
        v23 -= v19;
        if ( !v23 )
        {
          if ( (unsigned __int64)v79 < v22 && (a7 & 1) != 0 )
            *(_DWORD *)a1 = 3;
          v24 = v22 - (_QWORD)v79;
          goto LABEL_82;
        }
      }
      v24 = sub_8E5DC0(a1, a4, v19);
      if ( v24 > 0xFFFFFFFFFFFFFF88LL )
        return v24;
      if ( !v24 )
      {
        if ( !*(_DWORD *)(a1 + 944)
          && *(_QWORD *)(a1 + 960) - *(_QWORD *)(a1 + 952) <= 0x1Fu
          && *(_QWORD *)(a1 + 976) - *(_QWORD *)(a1 + 968) <= 9u
          && (unsigned int)sub_8E5710(a4->m128i_i8, v19) )
        {
          v26 = 4;
          v33 = v78 + 8 * v19 + 2;
          *(_BYTE *)(v22 + 3) = a4->m128i_i8[0];
          *(_WORD *)v22 = v33;
          *(_BYTE *)(v22 + 2) = BYTE2(v33);
          v34 = *(_QWORD *)(a1 + 3200);
          goto LABEL_90;
        }
        v26 = sub_8F19F0(a1, v22, v8, a4, v19, v78);
        if ( v26 != -70 )
        {
          v36 = *(_DWORD *)(a1 + 260);
          v37 = v36 - 1;
          if ( v36 <= 7 )
            v37 = 6;
          if ( v26 > 0xFFFFFFFFFFFFFF88LL )
            return v26;
          if ( v26 && v26 < v19 + 1 - (v19 >> v37) )
          {
            v34 = *(_QWORD *)(a1 + 3208);
            *(_QWORD *)(a1 + 3208) = *(_QWORD *)(a1 + 3200);
            *(_QWORD *)(a1 + 3200) = v34;
LABEL_90:
            if ( *(_DWORD *)(v34 + 5604) == 2 )
              *(_DWORD *)(v34 + 5604) = 1;
            goto LABEL_29;
          }
        }
      }
      if ( v19 + 3 > v8 )
        return -70;
      v44 = v78 + 8 * v19;
      *(_WORD *)v22 = v44;
      *(_BYTE *)(v22 + 2) = BYTE2(v44);
      memcpy((void *)(v22 + 3), a4, v19);
      v26 = v19 + 3;
      if ( v19 + 3 > 0xFFFFFFFFFFFFFF88LL )
        return v26;
      v34 = *(_QWORD *)(a1 + 3200);
      goto LABEL_90;
    }
  }
  return v73;
}

