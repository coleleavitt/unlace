__int64 __fastcall sub_10A110(__int64 a1, const __m128i *a2, _QWORD *a3)
{
  __int64 v3; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  const __m128i *v15; // r12
  char *v16; // rbx
  const __m128i *v17; // rbp
  char *v18; // rdi
  _QWORD *v19; // r12
  __int64 v20; // r13
  __m128i v21; // xmm1
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v26; // rsi
  size_t v27; // r15
  unsigned __int64 v28; // r13
  size_t v29; // rbp
  size_t v30; // rbp
  size_t v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // r8
  size_t v37; // r15
  size_t v38; // rbp
  _DWORD *v39; // rcx
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned int v49; // esi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbp
  size_t v52; // r15
  bool v53; // cf
  void *v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  char *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  void (__fastcall *v63)(__int64); // rax
  __int64 (__fastcall *v64)(__int64, size_t); // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r8
  __int64 v68; // r13
  _DWORD *v69; // r14
  __int64 v70; // r8
  int v71; // eax
  char *v72; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+0h] [rbp-B8h]
  size_t v74; // [rsp+0h] [rbp-B8h]
  __int64 v75; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v76; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v77; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v79; // [rsp+18h] [rbp-A0h]
  char *v80; // [rsp+28h] [rbp-90h]
  unsigned __int64 v81; // [rsp+30h] [rbp-88h]
  char *v82; // [rsp+38h] [rbp-80h]
  _QWORD *v83; // [rsp+40h] [rbp-78h]
  void *dest; // [rsp+58h] [rbp-60h] BYREF
  __m128i v85; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+78h] [rbp-40h]

  v3 = -72;
  v7 = a3[1];
  v8 = *a3;
  v86 = __readfsqword(0x28u);
  v9 = a2->m128i_i64[0];
  v10 = a3[2];
  v11 = a2[1].m128i_u64[0];
  v79 = v7;
  v77 = v10;
  v80 = (char *)(a2->m128i_i64[0] + v11);
  v12 = a2->m128i_u64[1];
  dest = (void *)(v9 + v11);
  if ( v10 > v7 )
    return v3;
  if ( v11 > v12 )
    return -70;
  v13 = *(unsigned int *)(a1 + 30236);
  if ( *(_DWORD *)(a1 + 30320) == 1
    && (_DWORD)v13
    && (*(_QWORD *)(a1 + 30328) != v9 || *(_QWORD *)(a1 + 30344) != v11 || *(_QWORD *)(a1 + 30336) != v12) )
  {
    return -104;
  }
  v83 = a3;
  v14 = a1;
  v75 = v12 + v9;
  v15 = a2;
  v16 = (char *)(v8 + v77);
  v82 = (char *)(v8 + v77);
  v72 = (char *)(v79 + v8);
  while ( 2 )
  {
    switch ( v13 )
    {
      case 0LL:
        *(_DWORD *)(v14 + 30236) = 1;
        v41 = 0;
        *(_QWORD *)(v14 + 30296) = 0;
        *(_QWORD *)(v14 + 30288) = 0;
        *(_QWORD *)(v14 + 30256) = 0;
        *(_QWORD *)(v14 + 30304) = 0;
        *(_DWORD *)(v14 + 30312) = 0;
        *(__m128i *)(v14 + 30328) = _mm_loadu_si128(v15);
        *(_QWORD *)(v14 + 30344) = v15[1].m128i_i64[0];
        goto LABEL_47;
      case 1LL:
        v41 = *(_QWORD *)(v14 + 30304);
LABEL_47:
        v42 = v14 + 29928;
        v40 = sub_108920(v14 + 29928, (_DWORD *)(v14 + 95940), v41, *(_DWORD *)(v14 + 30104));
        if ( *(_DWORD *)(v14 + 30224) && *(_QWORD *)(v14 + 30216) && *(_QWORD *)(v14 + 30192) )
          sub_1086A0(v14);
        if ( v40 > 0xFFFFFFFFFFFFFF88LL )
          return v40;
        if ( v40 )
        {
          v43 = *(_QWORD *)(v14 + 30304);
          if ( v40 - v43 > v72 - v16 )
          {
            v67 = v40;
            v68 = v14;
            v69 = (_DWORD *)(v14 + 95940);
            if ( v72 != v16 )
            {
              v76 = v67;
              v74 = v72 - v16;
              memcpy((char *)v69 + v43, v16, v74);
              v67 = v76;
              *(_QWORD *)(v68 + 30304) += v74;
            }
            v73 = v67;
            v83[2] = v83[1];
            v46 = sub_108920(v42, v69, *(_QWORD *)(v68 + 30304), *(_DWORD *)(v68 + 30104));
            if ( v46 > 0xFFFFFFFFFFFFFF88LL )
              return v46;
            v70 = v73;
            if ( (unsigned __int64)(*(_DWORD *)(v68 + 30104) == 0 ? 4 : 0) + 2 >= v73 )
              v70 = *(_DWORD *)(v68 + 30104) == 0 ? 6LL : 2LL;
            return 3LL - *(_QWORD *)(v68 + 30304) + v70;
          }
          memcpy((void *)(v14 + 95940 + v43), v16, v40 - v43);
          *(_QWORD *)(v14 + 30304) = v40;
          v13 = *(unsigned int *)(v14 + 30236);
          v16 += v40 - v43;
          continue;
        }
        v44 = *(_QWORD *)(v14 + 29928);
        if ( v44 == -1 )
          goto LABEL_108;
        if ( *(_DWORD *)(v14 + 29948) == 1 )
          goto LABEL_65;
        if ( v44 > v75 - (__int64)dest )
        {
          if ( *(_DWORD *)(v14 + 30320) != 1 )
            goto LABEL_65;
LABEL_64:
          if ( v75 - (__int64)dest < v44 )
            return -70;
LABEL_65:
          v45 = sub_108580(v14);
          v46 = sub_109A40(v14, v45);
          if ( v46 > 0xFFFFFFFFFFFFFF88LL )
            return v46;
          if ( !*(_DWORD *)(v14 + 30104) && (*(_DWORD *)(v14 + 95940) & 0xFFFFFFF0) == 0x184D2A50 )
          {
            v61 = *(unsigned int *)(v14 + 95944);
            *(_DWORD *)(v14 + 29996) = 7;
            *(_QWORD *)(v14 + 29920) = v61;
          }
          else
          {
            v46 = sub_108E30(v14, (_DWORD *)(v14 + 95940), *(_QWORD *)(v14 + 30304));
            if ( v46 > 0xFFFFFFFFFFFFFF88LL )
              return v46;
            *(_QWORD *)(v14 + 29920) = 3;
            *(_DWORD *)(v14 + 29996) = 2;
          }
          v47 = *(_QWORD *)(v14 + 29936);
          v48 = 1024;
          if ( v47 >= 0x400 )
            v48 = *(_QWORD *)(v14 + 29936);
          *(_QWORD *)(v14 + 29936) = v48;
          if ( v48 > *(_QWORD *)(v14 + 30264) )
            return -16;
          v49 = *(_DWORD *)(v14 + 30232);
          v50 = *(unsigned int *)(v14 + 29944);
          if ( v49 )
          {
            if ( (unsigned int)v50 > v49 )
              v50 = *(unsigned int *)(v14 + 30232);
            *(_DWORD *)(v14 + 29944) = v50;
          }
          v51 = 4;
          if ( (unsigned int)v50 >= 4 )
            v51 = v50;
          v52 = v51;
          if ( !*(_DWORD *)(v14 + 30320) )
          {
            v53 = v47 < (unsigned __int64)&loc_20000;
            v54 = &loc_20000;
            v55 = *(_QWORD *)(v14 + 29928);
            if ( v53 )
              v54 = (void *)v48;
            if ( v50 > (unsigned __int64)v54 )
              v50 = (unsigned __int64)v54;
            if ( v48 + 2 * v50 + 64 <= v55 )
              v55 = v48 + 2 * v50 + 64;
            v40 = v55;
            v52 = v51 + v55;
          }
          v56 = *(_QWORD *)(v14 + 30248);
          v57 = *(_QWORD *)(v14 + 30280);
          if ( v56 + v57 >= 3 * v52 )
          {
            v58 = *(_QWORD *)(v14 + 95960) + 1LL;
            *(_QWORD *)(v14 + 95960) = v58;
            if ( v51 <= v56 && v40 <= v57 && v58 <= 0x7F )
            {
              *(_DWORD *)(v14 + 30236) = 2;
              goto LABEL_27;
            }
LABEL_90:
            v59 = *(_QWORD *)(v14 + 30168);
            if ( v59 )
            {
              if ( v59 - 95976 < v52 )
                return -64;
              v60 = *(char **)(v14 + 30240);
            }
            else
            {
              v62 = *(_QWORD *)(v14 + 30144);
              if ( *(_QWORD *)(v14 + 30240) )
              {
                v63 = *(void (__fastcall **)(__int64))(v14 + 30136);
                if ( v63 )
                  v63(v62);
                else
                  free(*(void **)(v14 + 30240));
                v62 = *(_QWORD *)(v14 + 30144);
              }
              v64 = *(__int64 (__fastcall **)(__int64, size_t))(v14 + 30128);
              *(_QWORD *)(v14 + 30248) = 0;
              *(_QWORD *)(v14 + 30280) = 0;
              if ( v64 )
                v60 = (char *)v64(v62, v52);
              else
                v60 = (char *)malloc(v52);
              *(_QWORD *)(v14 + 30240) = v60;
              if ( !v60 )
                return -64;
            }
            *(_QWORD *)(v14 + 30248) = v51;
            *(_QWORD *)(v14 + 30272) = &v60[v51];
            *(_QWORD *)(v14 + 30280) = v40;
            goto LABEL_94;
          }
          *(_QWORD *)(v14 + 95960) = 0;
          if ( v51 > v56 || v40 > v57 )
            goto LABEL_90;
LABEL_94:
          *(_DWORD *)(v14 + 30236) = 2;
LABEL_27:
          v32 = *(_QWORD *)(v14 + 29920);
          v33 = v72 - v16;
          if ( (unsigned int)(*(_DWORD *)(v14 + 29996) - 3) > 1 || *(_DWORD *)(v14 + 29992) )
          {
            if ( !v32 )
            {
              v17 = v15;
              v18 = (char *)dest;
              v19 = v83;
              v20 = v14;
              *(_DWORD *)(v14 + 30236) = 0;
              goto LABEL_8;
            }
          }
          else
          {
            if ( v32 > v33 )
              v32 = v72 - v16;
            if ( !v32 )
              v32 = 1;
          }
          if ( v33 >= v32 )
          {
            v40 = sub_1094C0(v14, (char **)&dest, v75, v16, v32);
            if ( v40 > 0xFFFFFFFFFFFFFF88LL )
              return v40;
            v16 += v32;
            v13 = *(unsigned int *)(v14 + 30236);
          }
          else
          {
            if ( v16 == v72 )
              goto LABEL_127;
            *(_DWORD *)(v14 + 30236) = 3;
LABEL_36:
            v34 = sub_108F10(v14);
            v35 = *(_QWORD *)(v14 + 30256);
            v36 = v34;
            v37 = v34 - v35;
            if ( *(_DWORD *)(v14 + 29996) == 7 )
            {
              v38 = v72 - v16;
              if ( v72 - v16 > v37 )
                v38 = v34 - v35;
              if ( v38 )
              {
                v16 += v38;
                *(_QWORD *)(v14 + 30256) = v38 + v35;
              }
            }
            else
            {
              if ( *(_QWORD *)(v14 + 30248) - v35 < v37 )
                return -20;
              v38 = v72 - v16;
              if ( v72 - v16 > v37 )
                v38 = v34 - v35;
              if ( v38 )
              {
                v81 = v34;
                memcpy((void *)(*(_QWORD *)(v14 + 30240) + v35), v16, v38);
                v36 = v81;
                v16 += v38;
                *(_QWORD *)(v14 + 30256) += v38;
              }
            }
            if ( v37 > v38 )
            {
LABEL_127:
              v17 = v15;
              v20 = v14;
              v19 = v83;
              v18 = (char *)dest;
              goto LABEL_8;
            }
            v39 = *(_DWORD **)(v14 + 30240);
            *(_QWORD *)(v14 + 30256) = 0;
            v40 = sub_1094C0(v14, (char **)&dest, v75, v39, v36);
            if ( v40 > 0xFFFFFFFFFFFFFF88LL )
              return v40;
            v13 = *(unsigned int *)(v14 + 30236);
            if ( (unsigned int)v13 > 4 )
              return -1;
          }
          continue;
        }
        sub_108C40(&v85, v82, v79 - v77, *(_DWORD *)(v14 + 30104));
        if ( v79 - v77 < v85.m128i_i64[1] )
        {
LABEL_108:
          if ( *(_DWORD *)(v14 + 30320) != 1 )
            goto LABEL_65;
          if ( *(_DWORD *)(v14 + 29948) == 1 )
            goto LABEL_65;
          v44 = *(_QWORD *)(v14 + 29928);
          if ( v44 == -1 )
            goto LABEL_65;
          goto LABEL_64;
        }
        v78 = v85.m128i_u64[1];
        v17 = v15;
        v19 = v83;
        v65 = sub_108580(v14);
        v20 = v14;
        v66 = sub_10A0D0(v14, (char *)dest, v75 - (_QWORD)dest, v82, v78, v65);
        v3 = v66;
        if ( v66 > 0xFFFFFFFFFFFFFF88LL )
          return v3;
        v18 = (char *)dest;
        v16 = &v82[v78];
        if ( dest )
          v18 = (char *)dest + v66;
        dest = v18;
        *(_QWORD *)(v14 + 29920) = 0;
        *(_DWORD *)(v14 + 30236) = 0;
LABEL_8:
        v19[2] = &v16[-*v19];
        v21 = _mm_loadu_si128(v17);
        v17[1].m128i_i64[0] = (__int64)&v18[-v17->m128i_i64[0]];
        *(__m128i *)(v20 + 30328) = v21;
        *(_QWORD *)(v20 + 30344) = v17[1].m128i_i64[0];
        if ( v80 == v18 && v82 == v16 )
        {
          v71 = *(_DWORD *)(v20 + 30316) + 1;
          *(_DWORD *)(v20 + 30316) = v71;
          if ( v71 <= 15 )
            goto LABEL_11;
          v3 = -80;
          if ( (char *)v75 != v18 )
          {
            v3 = -82;
            if ( v72 != v16 )
              goto LABEL_11;
          }
        }
        else
        {
          *(_DWORD *)(v20 + 30316) = 0;
LABEL_11:
          v22 = sub_108F10(v20);
          v3 = v22;
          if ( v22 )
          {
            return 3LL * ((unsigned int)sub_108F20(v20) == 2) + v22 - *(_QWORD *)(v20 + 30256);
          }
          else
          {
            v23 = *(_DWORD *)(v20 + 30312);
            if ( *(_QWORD *)(v20 + 30296) == *(_QWORD *)(v20 + 30288) )
            {
              if ( v23 )
              {
                v24 = v19[2];
                if ( v24 < v19[1] )
                {
                  v19[2] = v24 + 1;
                }
                else
                {
                  *(_DWORD *)(v20 + 30236) = 2;
                  return 1;
                }
              }
            }
            else
            {
              v3 = 1;
              if ( !v23 )
              {
                --v19[2];
                *(_DWORD *)(v20 + 30312) = 1;
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
        v26 = *(_QWORD *)(v14 + 30288);
        v18 = (char *)dest;
        v27 = *(_QWORD *)(v14 + 30296) - v26;
        v28 = v75 - (_QWORD)dest;
        v29 = v27;
        if ( v75 - (__int64)dest <= v27 )
          v29 = v75 - (_QWORD)dest;
        if ( v29 )
        {
          memcpy(dest, (const void *)(*(_QWORD *)(v14 + 30272) + v26), v29);
          v18 = (char *)dest;
          v26 = *(_QWORD *)(v14 + 30288);
        }
        if ( v18 )
          v18 += v29;
        v30 = v26 + v29;
        *(_QWORD *)(v14 + 30288) = v30;
        dest = v18;
        if ( v28 < v27 )
        {
          v17 = v15;
          v20 = v14;
          v19 = v83;
          goto LABEL_8;
        }
        *(_DWORD *)(v14 + 30236) = 2;
        v31 = *(_QWORD *)(v14 + 30280);
        if ( v31 < *(_QWORD *)(v14 + 29928) && v31 < *(unsigned int *)(v14 + 29944) + v30 )
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

