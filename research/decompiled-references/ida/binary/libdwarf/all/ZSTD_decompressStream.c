__int64 __fastcall ZSTD_decompressStream(__int64 a1, const __m128i *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *p_dest; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  const __m128i *v15; // r12
  char *v16; // rbx
  unsigned __int64 v17; // rcx
  const __m128i *v18; // rbp
  char *v19; // rdi
  _QWORD *v20; // r12
  __int64 v21; // r13
  __m128i v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rax
  size_t v29; // r15
  size_t v30; // r13
  size_t v31; // rbp
  char *v32; // rbp
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbp
  __int64 SrcSizeToDecompress; // rax
  __int64 v36; // rdi
  size_t v37; // r15
  size_t v38; // rbp
  unsigned __int64 FrameHeader_advanced; // r13
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned int v47; // esi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rbp
  size_t v50; // r15
  bool v51; // cf
  void *v52; // rax
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  char *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  void (__fastcall *v60)(__int64); // rax
  __int64 (__fastcall *v61)(__int64, size_t); // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  __int64 v65; // r13
  __int64 v66; // r14
  __int64 v67; // r8
  int v68; // eax
  char *v69; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+0h] [rbp-B8h]
  size_t v71; // [rsp+0h] [rbp-B8h]
  char *v72; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+10h] [rbp-A8h]
  __int64 v75; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+18h] [rbp-A0h]
  char *v77; // [rsp+28h] [rbp-90h]
  unsigned __int64 v78; // [rsp+30h] [rbp-88h]
  char *v79; // [rsp+38h] [rbp-80h]
  _QWORD *v80; // [rsp+40h] [rbp-78h]
  void *dest; // [rsp+58h] [rbp-60h] BYREF
  __m128i v82; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-40h]

  v3 = -72;
  v7 = a3[1];
  v8 = *a3;
  v83 = __readfsqword(0x28u);
  v9 = a2->m128i_i64[0];
  v10 = a3[2];
  v11 = a2[1].m128i_u64[0];
  v76 = v7;
  v74 = v10;
  v77 = (char *)(a2->m128i_i64[0] + v11);
  p_dest = (char *)a2->m128i_i64[1];
  dest = (void *)(v9 + v11);
  if ( v10 > v7 )
    return v3;
  if ( v11 > (unsigned __int64)p_dest )
    return -70;
  v13 = *(unsigned int *)(a1 + 30236);
  if ( *(_DWORD *)(a1 + 30320) == 1 )
  {
    if ( (_DWORD)v13 )
    {
      LOBYTE(v3) = *(_QWORD *)(a1 + 30344) == v11;
      LOBYTE(v11) = *(_QWORD *)(a1 + 30328) == v9;
      if ( ((unsigned __int8)v11 & (unsigned __int8)v3) == 0 || *(char **)(a1 + 30336) != p_dest )
        return -104;
    }
  }
  v80 = a3;
  v14 = a1;
  v72 = &p_dest[v9];
  v15 = a2;
  v16 = (char *)(v8 + v74);
  v17 = (unsigned __int64)&v82;
  v79 = (char *)(v8 + v74);
  v69 = (char *)(v76 + v8);
  while ( 2 )
  {
    switch ( v13 )
    {
      case 0LL:
        *(_DWORD *)(v14 + 30236) = 1;
        *(_QWORD *)(v14 + 30296) = 0;
        *(_QWORD *)(v14 + 30288) = 0;
        *(_QWORD *)(v14 + 30256) = 0;
        *(_QWORD *)(v14 + 30304) = 0;
        *(_DWORD *)(v14 + 30312) = 0;
        *(__m128i *)(v14 + 30328) = _mm_loadu_si128(v15);
        *(_QWORD *)(v14 + 30344) = v15[1].m128i_i64[0];
        goto LABEL_46;
      case 1LL:
LABEL_46:
        FrameHeader_advanced = ZSTD_getFrameHeader_advanced();
        if ( *(_DWORD *)(v14 + 30224) && *(_QWORD *)(v14 + 30216) && *(_QWORD *)(v14 + 30192) )
          sub_61AC0(v14);
        if ( FrameHeader_advanced > 0xFFFFFFFFFFFFFF88LL )
          return FrameHeader_advanced;
        if ( FrameHeader_advanced )
        {
          v40 = *(_QWORD *)(v14 + 30304);
          if ( FrameHeader_advanced - v40 > v69 - v16 )
          {
            v64 = FrameHeader_advanced;
            v65 = v14;
            v66 = v14 + 95940;
            if ( v69 != v16 )
            {
              v73 = v64;
              v71 = v69 - v16;
              memcpy((void *)(v66 + v40), v16, v71);
              v64 = v73;
              *(_QWORD *)(v65 + 30304) += v71;
            }
            v70 = v64;
            v80[2] = v80[1];
            v44 = ZSTD_getFrameHeader_advanced();
            if ( v44 > 0xFFFFFFFFFFFFFF88LL )
              return v44;
            v67 = v70;
            if ( (unsigned __int64)(*(_DWORD *)(v65 + 30104) == 0 ? 4 : 0) + 2 >= v70 )
              v67 = *(_DWORD *)(v65 + 30104) == 0 ? 6LL : 2LL;
            return 3LL - *(_QWORD *)(v65 + 30304) + v67;
          }
          p_dest = v16;
          memcpy((void *)(v14 + 95940 + v40), v16, FrameHeader_advanced - v40);
          v17 = FrameHeader_advanced - v40;
          *(_QWORD *)(v14 + 30304) = FrameHeader_advanced;
          v13 = *(unsigned int *)(v14 + 30236);
          v16 += FrameHeader_advanced - v40;
          continue;
        }
        v41 = *(_QWORD *)(v14 + 29928);
        if ( v41 == -1 )
          goto LABEL_107;
        if ( *(_DWORD *)(v14 + 29948) == 1 )
          goto LABEL_64;
        if ( v41 > v72 - (_BYTE *)dest )
        {
          if ( *(_DWORD *)(v14 + 30320) != 1 )
            goto LABEL_64;
LABEL_63:
          if ( v72 - (_BYTE *)dest < v41 )
            return -70;
LABEL_64:
          v42 = sub_619A0(v14);
          v44 = ZSTD_decompressBegin_usingDDict(v14, v42, v43);
          if ( v44 > 0xFFFFFFFFFFFFFF88LL )
            return v44;
          if ( !*(_DWORD *)(v14 + 30104) && (*(_DWORD *)(v14 + 95940) & 0xFFFFFFF0) == 0x184D2A50 )
          {
            v58 = *(unsigned int *)((char *)&dword_176C8 + v14);
            *(_DWORD *)(v14 + 29996) = 7;
            *(_QWORD *)(v14 + 29920) = v58;
          }
          else
          {
            v44 = sub_623B0(v14, v14 + 95940, *(_QWORD *)(v14 + 30304));
            if ( v44 > 0xFFFFFFFFFFFFFF88LL )
              return v44;
            *(_QWORD *)(v14 + 29920) = 3;
            *(_DWORD *)(v14 + 29996) = 2;
          }
          v45 = *(_QWORD *)(v14 + 29936);
          v46 = 1024;
          if ( v45 >= 0x400 )
            v46 = *(_QWORD *)(v14 + 29936);
          *(_QWORD *)(v14 + 29936) = v46;
          if ( v46 > *(_QWORD *)(v14 + 30264) )
            return -16;
          v47 = *(_DWORD *)(v14 + 30232);
          v48 = *(unsigned int *)(v14 + 29944);
          if ( v47 )
          {
            if ( (unsigned int)v48 > v47 )
              v48 = *(unsigned int *)(v14 + 30232);
            *(_DWORD *)(v14 + 29944) = v48;
          }
          v49 = 4;
          if ( (unsigned int)v48 >= 4 )
            v49 = v48;
          v50 = v49;
          if ( !*(_DWORD *)(v14 + 30320) )
          {
            v51 = v45 < (unsigned __int64)&loc_20000;
            v52 = &loc_20000;
            v53 = *(_QWORD *)(v14 + 29928);
            if ( v51 )
              v52 = (void *)v46;
            if ( v48 > (unsigned __int64)v52 )
              v48 = (unsigned __int64)v52;
            v3 = v46 + 2 * v48 + 64;
            if ( v3 <= v53 )
              v53 = v46 + 2 * v48 + 64;
            FrameHeader_advanced = v53;
            v50 = v49 + v53;
          }
          v54 = *(_QWORD *)(v14 + 30248);
          v55 = *(_QWORD *)(v14 + 30280);
          v17 = 3 * v50;
          p_dest = (char *)(v54 + v55);
          if ( v54 + v55 >= 3 * v50 )
          {
            v17 = *(_QWORD *)(v14 + 95960) + 1LL;
            *(_QWORD *)(v14 + 95960) = v17;
            if ( v49 <= v54 && FrameHeader_advanced <= v55 && v17 <= 0x7F )
            {
              *(_DWORD *)(v14 + 30236) = 2;
              goto LABEL_27;
            }
LABEL_89:
            v56 = *(_QWORD *)(v14 + 30168);
            if ( v56 )
            {
              if ( v56 - (__int64)&loc_176E8 < v50 )
                return -64;
              v57 = *(char **)(v14 + 30240);
            }
            else
            {
              p_dest = *(char **)(v14 + 30240);
              v59 = *(_QWORD *)(v14 + 30144);
              if ( p_dest )
              {
                v60 = *(void (__fastcall **)(__int64))(v14 + 30136);
                if ( v60 )
                  v60(v59);
                else
                  free(*(void **)(v14 + 30240));
                v59 = *(_QWORD *)(v14 + 30144);
              }
              v61 = *(__int64 (__fastcall **)(__int64, size_t))(v14 + 30128);
              *(_QWORD *)(v14 + 30248) = 0;
              *(_QWORD *)(v14 + 30280) = 0;
              if ( v61 )
              {
                p_dest = (char *)v50;
                v57 = (char *)v61(v59, v50);
              }
              else
              {
                v57 = (char *)malloc(v50);
              }
              *(_QWORD *)(v14 + 30240) = v57;
              if ( !v57 )
                return -64;
            }
            *(_QWORD *)(v14 + 30248) = v49;
            *(_QWORD *)(v14 + 30272) = &v57[v49];
            *(_QWORD *)(v14 + 30280) = FrameHeader_advanced;
            goto LABEL_93;
          }
          *(_QWORD *)(v14 + 95960) = 0;
          if ( v49 > v54 || FrameHeader_advanced > v55 )
            goto LABEL_89;
LABEL_93:
          *(_DWORD *)(v14 + 30236) = 2;
LABEL_27:
          v34 = *(_QWORD *)(v14 + 29920);
          v11 = v69 - v16;
          if ( (unsigned int)(*(_DWORD *)(v14 + 29996) - 3) > 1 || *(_DWORD *)(v14 + 29992) )
          {
            if ( !v34 )
            {
              v18 = v15;
              v19 = (char *)dest;
              v20 = v80;
              v21 = v14;
              *(_DWORD *)(v14 + 30236) = 0;
              goto LABEL_8;
            }
          }
          else
          {
            if ( v34 > v11 )
              v34 = v69 - v16;
            if ( !v34 )
              v34 = 1;
          }
          if ( v11 >= v34 )
          {
            p_dest = (char *)&dest;
            FrameHeader_advanced = sub_62EB0(v14, &dest);
            if ( FrameHeader_advanced > 0xFFFFFFFFFFFFFF88LL )
              return FrameHeader_advanced;
            v16 += v34;
            v13 = *(unsigned int *)(v14 + 30236);
          }
          else
          {
            if ( v16 == v69 )
              goto LABEL_126;
            *(_DWORD *)(v14 + 30236) = 3;
LABEL_36:
            SrcSizeToDecompress = ZSTD_nextSrcSizeToDecompress(v14, p_dest, v11, v17, v3);
            v36 = *(_QWORD *)(v14 + 30256);
            v3 = SrcSizeToDecompress;
            v37 = SrcSizeToDecompress - v36;
            if ( *(_DWORD *)(v14 + 29996) == 7 )
            {
              v38 = v69 - v16;
              if ( v69 - v16 > v37 )
                v38 = SrcSizeToDecompress - v36;
              if ( v38 )
              {
                v16 += v38;
                *(_QWORD *)(v14 + 30256) = v38 + v36;
              }
            }
            else
            {
              if ( *(_QWORD *)(v14 + 30248) - v36 < v37 )
                return -20;
              v38 = v69 - v16;
              if ( v69 - v16 > v37 )
                v38 = SrcSizeToDecompress - v36;
              if ( v38 )
              {
                p_dest = v16;
                v78 = SrcSizeToDecompress;
                memcpy((void *)(*(_QWORD *)(v14 + 30240) + v36), v16, v38);
                v3 = v78;
                v16 += v38;
                *(_QWORD *)(v14 + 30256) += v38;
              }
            }
            if ( v37 > v38 )
            {
LABEL_126:
              v18 = v15;
              v21 = v14;
              v20 = v80;
              v19 = (char *)dest;
              goto LABEL_8;
            }
            *(_QWORD *)(v14 + 30256) = 0;
            p_dest = (char *)&dest;
            FrameHeader_advanced = sub_62EB0(v14, &dest);
            if ( FrameHeader_advanced > 0xFFFFFFFFFFFFFF88LL )
              return FrameHeader_advanced;
            v13 = *(unsigned int *)(v14 + 30236);
            if ( (unsigned int)v13 > 4 )
              return -1;
          }
          continue;
        }
        sub_621C0(&v82, v79, v76 - v74, *(_DWORD *)(v14 + 30104));
        if ( v76 - v74 < v82.m128i_i64[1] )
        {
LABEL_107:
          if ( *(_DWORD *)(v14 + 30320) != 1 )
            goto LABEL_64;
          if ( *(_DWORD *)(v14 + 29948) == 1 )
            goto LABEL_64;
          v41 = *(_QWORD *)(v14 + 29928);
          if ( v41 == -1 )
            goto LABEL_64;
          goto LABEL_63;
        }
        v75 = v82.m128i_i64[1];
        v18 = v15;
        v20 = v80;
        v62 = sub_619A0(v14);
        p_dest = (char *)dest;
        v21 = v14;
        v63 = ZSTD_decompress_usingDDict(v14, dest, v72 - (_BYTE *)dest, v79, v75, v62);
        v3 = v63;
        if ( v63 > 0xFFFFFFFFFFFFFF88LL )
          return v3;
        v19 = (char *)dest;
        v16 = &v79[v75];
        if ( dest )
          v19 = (char *)dest + v63;
        dest = v19;
        *(_QWORD *)(v14 + 29920) = 0;
        *(_DWORD *)(v14 + 30236) = 0;
LABEL_8:
        v20[2] = &v16[-*v20];
        v22 = _mm_loadu_si128(v18);
        v18[1].m128i_i64[0] = (__int64)&v19[-v18->m128i_i64[0]];
        *(__m128i *)(v21 + 30328) = v22;
        *(_QWORD *)(v21 + 30344) = v18[1].m128i_i64[0];
        if ( v77 == v19 && v79 == v16 )
        {
          v68 = *(_DWORD *)(v21 + 30316) + 1;
          *(_DWORD *)(v21 + 30316) = v68;
          if ( v68 <= 15 )
            goto LABEL_11;
          v3 = -80;
          if ( v72 != v19 )
          {
            v3 = -82;
            if ( v69 != v16 )
              goto LABEL_11;
          }
        }
        else
        {
          *(_DWORD *)(v21 + 30316) = 0;
LABEL_11:
          v23 = ZSTD_nextSrcSizeToDecompress(v21, p_dest, v11, v17, v3);
          v3 = v23;
          if ( v23 )
          {
            return 3LL * ((unsigned int)ZSTD_nextInputType(v21, p_dest, v24, v25, v23) == 2)
                 + v23
                 - *(_QWORD *)(v21 + 30256);
          }
          else
          {
            v26 = *(_DWORD *)(v21 + 30312);
            if ( *(_QWORD *)(v21 + 30296) == *(_QWORD *)(v21 + 30288) )
            {
              if ( v26 )
              {
                v27 = v20[2];
                if ( v27 < v20[1] )
                {
                  v20[2] = v27 + 1;
                }
                else
                {
                  *(_DWORD *)(v21 + 30236) = 2;
                  return 1;
                }
              }
            }
            else
            {
              v3 = 1;
              if ( !v26 )
              {
                --v20[2];
                *(_DWORD *)(v21 + 30312) = 1;
              }
            }
          }
        }
        return v3;
      case 2LL:
        goto LABEL_27;
      case 3LL:
        goto LABEL_36;
      case 4LL:
        p_dest = *(char **)(v14 + 30288);
        v19 = (char *)dest;
        v29 = *(_QWORD *)(v14 + 30296) - (_QWORD)p_dest;
        v30 = v72 - (_BYTE *)dest;
        v31 = v29;
        if ( v72 - (_BYTE *)dest <= v29 )
          v31 = v72 - (_BYTE *)dest;
        if ( v31 )
        {
          memcpy(dest, &p_dest[*(_QWORD *)(v14 + 30272)], v31);
          v19 = (char *)dest;
          p_dest = *(char **)(v14 + 30288);
        }
        if ( v19 )
          v19 += v31;
        v32 = &p_dest[v31];
        *(_QWORD *)(v14 + 30288) = v32;
        dest = v19;
        if ( v30 < v29 )
        {
          v18 = v15;
          v21 = v14;
          v20 = v80;
          goto LABEL_8;
        }
        *(_DWORD *)(v14 + 30236) = 2;
        v33 = *(_QWORD *)(v14 + 30280);
        if ( v33 < *(_QWORD *)(v14 + 29928) && v33 < (unsigned __int64)&v32[*(unsigned int *)(v14 + 29944)] )
        {
          *(_QWORD *)(v14 + 30296) = 0;
          *(_QWORD *)(v14 + 30288) = 0;
        }
        goto LABEL_27;
      default:
        return -1;
    }
  }
}

