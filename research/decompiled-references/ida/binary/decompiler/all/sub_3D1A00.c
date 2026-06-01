__int64 __fastcall sub_3D1A00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __m128i v9; // xmm4
  __m128i v10; // xmm0
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  bool v16; // cc
  void *v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r13
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v57; // [rsp+18h] [rbp-1B8h]
  int v58; // [rsp+24h] [rbp-1ACh]
  int v59; // [rsp+28h] [rbp-1A8h]
  int v60; // [rsp+2Ch] [rbp-1A4h]
  __int64 v61; // [rsp+38h] [rbp-198h]
  __int64 v62; // [rsp+40h] [rbp-190h]
  __int64 v63; // [rsp+48h] [rbp-188h]
  __int64 v64; // [rsp+58h] [rbp-178h]
  __int64 v65; // [rsp+68h] [rbp-168h]
  char v66; // [rsp+7Fh] [rbp-151h] BYREF
  __int64 v67; // [rsp+80h] [rbp-150h] BYREF
  int v68; // [rsp+88h] [rbp-148h]
  int v69; // [rsp+8Ch] [rbp-144h]
  __int64 v70; // [rsp+90h] [rbp-140h] BYREF
  int v71; // [rsp+98h] [rbp-138h]
  int v72; // [rsp+9Ch] [rbp-134h]
  __m128i v73; // [rsp+A0h] [rbp-130h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-120h]
  __int64 (__fastcall ***v75)(); // [rsp+C0h] [rbp-110h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-108h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-100h]
  __int64 *v78; // [rsp+D8h] [rbp-F8h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-F0h]
  __int64 v80; // [rsp+F0h] [rbp-E0h]
  __int64 v81; // [rsp+F8h] [rbp-D8h]
  __int64 (__fastcall **v82)(); // [rsp+100h] [rbp-D0h] BYREF
  int v83; // [rsp+108h] [rbp-C8h]
  unsigned __int64 v84; // [rsp+10Ch] [rbp-C4h]
  __int64 v85; // [rsp+114h] [rbp-BCh]
  __int64 v86; // [rsp+11Ch] [rbp-B4h]
  __m128i v87; // [rsp+128h] [rbp-A8h]
  __int128 v88; // [rsp+138h] [rbp-98h]
  __int64 (__fastcall **v89)(); // [rsp+150h] [rbp-80h] BYREF
  __int128 v90; // [rsp+158h] [rbp-78h]
  __int128 v91; // [rsp+168h] [rbp-68h]
  __int128 v92; // [rsp+178h] [rbp-58h]
  __int64 v93; // [rsp+188h] [rbp-48h]
  __int64 v94; // [rsp+190h] [rbp-40h]
  unsigned __int64 v95; // [rsp+198h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 40);
  v95 = __readfsqword(0x28u);
  v65 = v3;
  if ( v3 )
  {
    v85 = 0;
    v82 = off_4E8410;
    v87 = (__m128i)-1LL;
    v84 = 3;
    v86 = 0x4900000000LL;
    if ( dword_4ED710 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
    {
      v8 = *(_DWORD *)(a3 + 16);
      if ( v8 == *(_DWORD *)(v65 + 72) )
      {
        v47 = qalloc_or_throw();
        *(_DWORD *)(v47 + 8) = *(_DWORD *)(a3 + 8);
        v48 = *(_QWORD *)(a3 + 12);
        v49 = _mm_loadu_si128((const __m128i *)(a3 + 56));
        v50 = _mm_loadu_si128((const __m128i *)(a3 + 40));
        *(_QWORD *)v47 = off_4E8410;
        v51 = *(_QWORD *)(a3 + 20);
        *(_QWORD *)(v47 + 12) = v48;
        *(__m128i *)(v47 + 40) = v50;
        *(_QWORD *)(v47 + 20) = v51;
        v52 = *(_QWORD *)(a3 + 28);
        *(__m128i *)(v47 + 56) = v49;
        *(_QWORD *)(v47 + 28) = v52;
        v53 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = v47;
        if ( v53 )
          qfree();
        if ( *(_QWORD *)(a3 + 48) != *(_QWORD *)(a3 + 56) )
        {
          sub_3C9000((__int64 *)&v89, a3, v65);
          sub_1AC9A0(v91, v91 + *((_QWORD *)&v91 + 1), sub_3C8FB0, &v89);
          v54 = v91;
          *(_DWORD *)(a2 + 68) = HIDWORD(v93);
          if ( v54 )
          {
            *((_QWORD *)&v91 + 1) = 0;
            qfree();
          }
        }
        return 1;
      }
      v64 = *(_QWORD *)(a3 + 56);
      if ( v64 == -1 )
      {
        v88 = -1;
        if ( !(unsigned __int8)sub_3CAF90(a1, &v82, (_DWORD *)a3) )
          return 0;
        v61 = *((_QWORD *)&v88 + 1);
        v64 = v88;
      }
      else
      {
        v9 = _mm_cvtsi32_si128(v8);
        v10 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12));
        v11 = *(_DWORD *)(a3 + 8);
        v85 = *(_QWORD *)(a3 + 20);
        v12 = *(_QWORD *)(a3 + 28);
        v84 = _mm_unpacklo_epi32(v10, v9).m128i_u64[0];
        v86 = v12;
        v13 = *(_QWORD *)(a3 + 64);
        v83 = v11;
        v61 = v13;
        v87 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      }
    }
    else
    {
      v61 = -1;
      v64 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)a3 + 128LL))(a3, NAN);
    }
    if ( *(_QWORD *)(v65 + 8) != v64 )
    {
      if ( *(_QWORD *)(v65 + 24) )
      {
        v18 = (__int64 *)(v65 + 16);
        if ( rangeset_t_find_range() )
        {
          v19 = *(_QWORD *)(v65 + 64);
          v20 = *(_DWORD *)(v19 + 64);
          if ( v20 > 0 )
          {
            v21 = 0;
            v22 = 0;
            v60 = 0;
            v57 = v20;
            v62 = 0x7FFFFFFFFFFFFFFFLL;
            v58 = -1;
            v59 = -1;
            while ( 1 )
            {
              if ( v20 > (int)v21 )
              {
                if ( (unsigned int)v21 >= v20 )
                  sub_3C5320(v18);
                v23 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v21);
                if ( v23 )
                {
                  v24 = *(_QWORD *)(v23 + 32);
                  if ( v24 != -1 )
                  {
                    if ( v24 == v64 )
                    {
                      v25 = 2;
                      v26 = 8;
                    }
                    else
                    {
                      v25 = 0;
                      v26 = v64 - v24;
                    }
                    v18 = &v67;
                    v68 = v22;
                    v67 = v62;
                    v69 = v60;
                    v70 = v26;
                    v71 = v25;
                    v72 = 0;
                    if ( sub_3C8B70((__int64)&v67, (__int64)&v70) )
                    {
                      v59 = v21;
                      v60 = 0;
                      v58 = 0;
                    }
                    else
                    {
                      v28 = v22;
                      v27 = v62;
                    }
                    v62 = v27;
                    v22 = v28;
                  }
                }
              }
              v29 = *(_QWORD *)(v65 + 120);
              if ( v21 < v29 )
              {
                v30 = *(_QWORD *)(*(_QWORD *)(v65 + 112) + 24 * v21 + 8);
                if ( (int)v30 > 0 )
                  break;
              }
LABEL_62:
              if ( v57 == ++v21 )
                goto LABEL_73;
              v19 = *(_QWORD *)(v65 + 64);
              v20 = *(_DWORD *)(v19 + 64);
            }
            v31 = 0;
            v63 = (unsigned int)(v30 - 1);
            while ( 1 )
            {
              HIDWORD(v90) = v21;
              v89 = off_4E8410;
              LODWORD(v91) = v31;
              *(_QWORD *)((char *)&v90 + 4) = 3;
              *(_QWORD *)((char *)&v91 + 4) = 0x4900000000LL;
              v76 = v65;
              v93 = v64;
              v92 = -1;
              v94 = v61;
              v75 = &v89;
              v34 = *(_QWORD *)(v65 + 64);
              v78 = 0;
              v77 = v34;
              v80 = 0x7FFFFFFFFFFFFFFFLL;
              v81 = 0;
              v79 = 0;
              if ( v21 >= v29 || (v35 = (_QWORD *)(*(_QWORD *)(v65 + 112) + 24 * v21), v31 >= v35[1]) )
              {
                v36 = 0;
              }
              else
              {
                v36 = *(_QWORD *)(*v35 + 8 * v31);
                if ( v36 )
                {
                  v37 = _mm_loadl_epi64((const __m128i *)(v34 + 1496));
                  v74 = v65 + 160;
                  v73 = _mm_unpacklo_epi64(v37, (__m128i)v34);
                  sub_1B1AE0(v36, &v78, &v73, 4);
                }
              }
              if ( !(unsigned __int8)sub_3C8BD0((__int64 *)&v75, v36, 0, 0) )
              {
                v38 = v76;
                v39 = sub_3C8680(v76, *((_DWORD *)v75 + 5), *((_DWORD *)v75 + 6));
                if ( v39 )
                {
                  v41 = *(_QWORD *)(v39 + 24);
                }
                else
                {
                  if ( (int)v40 < 0 )
                    goto LABEL_69;
                  v42 = *(_QWORD *)(v38 + 64);
                  if ( (int)v40 >= *(_DWORD *)(v42 + 64) )
                    goto LABEL_69;
                  if ( (unsigned int)v40 >= *(_DWORD *)(v42 + 64) )
                    sub_3C5320(v38);
                  v43 = *(_QWORD *)(*(_QWORD *)(v42 + 528) + 8 * v40);
                  if ( v43 )
                    v41 = *(_QWORD *)(v43 + 32);
                  else
LABEL_69:
                    v41 = *(_QWORD *)(v38 + 8);
                }
                sub_3C8D50((__int64)&v75, v41, 0, 0);
              }
              sub_1AC9A0(v78, (char *)v78 + v79, sub_3C8FB0, &v75);
              if ( (int)v81 > v22 )
                break;
              if ( (int)v81 < v22 )
                goto LABEL_45;
              if ( v22 )
              {
                if ( v62 < v80 )
                  goto LABEL_43;
              }
              else
              {
                v32 = -v62;
                if ( v62 > 0 )
                  v32 = v62;
                v33 = -v80;
                if ( v80 > 0 )
                  v33 = v80;
                if ( v32 > v33 || v32 >= v33 && v62 > v80 )
                {
LABEL_43:
                  v62 = v80;
LABEL_44:
                  v58 = v31;
                  v22 = v81;
                  v59 = v21;
                  v60 = HIDWORD(v81);
                }
              }
LABEL_45:
              v18 = v78;
              if ( v78 )
              {
                *(_QWORD *)&v79 = 0;
                qfree();
              }
              if ( v63 == v31 )
                goto LABEL_62;
              v29 = *(_QWORD *)(v65 + 120);
              ++v31;
            }
            v62 = v80;
            goto LABEL_44;
          }
          v60 = 0;
          v58 = -1;
          v59 = -1;
LABEL_73:
          v44 = qalloc_or_throw();
          *(_QWORD *)v44 = off_4E8410;
          *(_QWORD *)(v44 + 20) = 0;
          *(_QWORD *)(v44 + 12) = 3;
          *(_QWORD *)(v44 + 28) = 0x4900000000LL;
          *(_OWORD *)(v44 + 40) = -1;
          *(_OWORD *)(v44 + 56) = -1;
          v45 = *(_QWORD *)(a2 + 56);
          *(_QWORD *)(a2 + 56) = v44;
          if ( v45 )
            qfree();
          if ( v59 < 0 || !(unsigned __int8)sub_3CAF30(a1, (_DWORD *)v44, v65, v59, v58) )
            return 0;
          v90 = 0;
          v89 = 0;
          sub_3D04F0(a1, (__int64 *)&v89, &v73, &v66, &v75, 0, (_DWORD *)v44);
          if ( !(unsigned __int8)sub_3CA840(a1, v44, v65, v60, &v89) )
          {
            sub_1ACC50(&v89);
            return 0;
          }
          *(_DWORD *)(a2 + 68) = v60;
          sub_1ACC50(&v89);
          return 1;
        }
      }
      *(_DWORD *)a2 = -2;
      *(_QWORD *)(a2 + 8) = v64;
      sub_6AEF0((__int64 *)(a2 + 16));
      return 0;
    }
    v6 = qalloc_or_throw();
    *(_QWORD *)v6 = off_4E8410;
    *(_QWORD *)(v6 + 20) = 0;
    *(_QWORD *)(v6 + 12) = 3;
    *(_QWORD *)(v6 + 28) = 0x4900000000LL;
    *(_OWORD *)(v6 + 40) = -1;
    *(_OWORD *)(v6 + 56) = -1;
    v7 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = v6;
    if ( v7 )
    {
      qfree();
      v6 = *(_QWORD *)(a2 + 56);
    }
    return sub_3CAD40(a1, v6, v65);
  }
  else
  {
    *(_DWORD *)a2 = -1;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    v16 = *(_QWORD *)(a2 + 32) <= 0xDu;
    v17 = *(void **)(a2 + 16);
    *(_QWORD *)(a2 + 8) = v15;
    if ( v16 )
    {
      v46 = qvector_reserve();
      *(_QWORD *)(a2 + 16) = v46;
      v17 = (void *)v46;
    }
    *(_QWORD *)(a2 + 24) = 14;
    qmemcpy(v17, "Invalid model", 13);
    *(_BYTE *)(*(_QWORD *)(a2 + 16) + 13LL) = 0;
    return 0;
  }
}
