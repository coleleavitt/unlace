unsigned __int64 __fastcall sub_9B60(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  __int64 *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  int v17; // ebp
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  _DWORD *v20; // r15
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // r13
  unsigned __int64 v30; // r15
  __int64 v31; // rsi
  int v32; // ebx
  int v33; // r12d
  unsigned int *v34; // r11
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r10
  unsigned __int8 v38; // dl
  unsigned __int16 v39; // ax
  char v40; // bp
  bool v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v45; // rbp
  char v46; // dl
  __int64 v47; // r8
  const char *v48; // rcx
  int v49; // eax
  int v50; // r15d
  int v51; // eax
  _BYTE *v52; // r14
  const char *v53; // rcx
  int v54; // eax
  const char *v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rdx
  const char *v58; // rcx
  __int64 qword; // rax
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 *v62; // [rsp+0h] [rbp-768h]
  __int64 v63; // [rsp+0h] [rbp-768h]
  int v64; // [rsp+8h] [rbp-760h]
  __int64 v65; // [rsp+10h] [rbp-758h]
  unsigned int v66; // [rsp+18h] [rbp-750h]
  _BYTE *v67; // [rsp+18h] [rbp-750h]
  bool v68; // [rsp+18h] [rbp-750h]
  __int64 v69; // [rsp+28h] [rbp-740h]
  int v70; // [rsp+30h] [rbp-738h]
  __int64 v71; // [rsp+38h] [rbp-730h]
  __int64 v72; // [rsp+48h] [rbp-720h] BYREF
  __m128i v73; // [rsp+50h] [rbp-718h] BYREF
  __m128i v74; // [rsp+60h] [rbp-708h]
  __m128i v75; // [rsp+70h] [rbp-6F8h]
  __m128i v76[2]; // [rsp+80h] [rbp-6E8h] BYREF
  __m128i v77; // [rsp+A0h] [rbp-6C8h] BYREF
  __m128i v78; // [rsp+B0h] [rbp-6B8h]
  __m128i v79; // [rsp+C0h] [rbp-6A8h]
  __m128i v80[2]; // [rsp+D0h] [rbp-698h] BYREF
  __m128i v81; // [rsp+F0h] [rbp-678h]
  __m128i v82; // [rsp+100h] [rbp-668h]
  __m128i v83; // [rsp+110h] [rbp-658h]
  __m128i v84[2]; // [rsp+120h] [rbp-648h] BYREF
  __m128i v85; // [rsp+140h] [rbp-628h]
  __m128i v86; // [rsp+150h] [rbp-618h]
  __m128i v87; // [rsp+160h] [rbp-608h]
  __m128i v88[2]; // [rsp+170h] [rbp-5F8h] BYREF
  __m128i v89; // [rsp+190h] [rbp-5D8h]
  __m128i v90; // [rsp+1A0h] [rbp-5C8h]
  __m128i v91; // [rsp+1B0h] [rbp-5B8h]
  __m128i v92[2]; // [rsp+1C0h] [rbp-5A8h] BYREF
  __m128i v93; // [rsp+1E0h] [rbp-588h]
  __m128i v94; // [rsp+1F0h] [rbp-578h]
  __m128i v95; // [rsp+200h] [rbp-568h]
  __m128i v96[2]; // [rsp+210h] [rbp-558h] BYREF
  __m128i v97; // [rsp+230h] [rbp-538h]
  __m128i v98; // [rsp+240h] [rbp-528h]
  __m128i v99; // [rsp+250h] [rbp-518h]
  __m128i v100[2]; // [rsp+260h] [rbp-508h] BYREF
  __m128i v101; // [rsp+280h] [rbp-4E8h]
  __m128i v102; // [rsp+290h] [rbp-4D8h]
  __m128i v103; // [rsp+2A0h] [rbp-4C8h]
  __m128i v104[2]; // [rsp+2B0h] [rbp-4B8h] BYREF
  __m128i v105; // [rsp+2D0h] [rbp-498h] BYREF
  __m128i v106; // [rsp+2E0h] [rbp-488h] BYREF
  __m128i v107; // [rsp+2F0h] [rbp-478h] BYREF
  __m128i v108[2]; // [rsp+300h] [rbp-468h] BYREF
  _BYTE v109[1024]; // [rsp+320h] [rbp-448h] BYREF
  _BYTE v110[8]; // [rsp+720h] [rbp-48h] BYREF
  unsigned __int64 v111; // [rsp+728h] [rbp-40h]

  v9 = 0;
  v111 = __readfsqword(0x28u);
  v10 = (__int64 *)a1;
  *(_OWORD *)(a1 + 231) = 0;
  *(_OWORD *)(a1 + 183) = 0;
  *(_OWORD *)(a1 + 199) = 0;
  *(_OWORD *)(a1 + 215) = 0;
  *(_OWORD *)(a1 + 243) = 0;
  memset(v76, 0, 28);
  memset(v80, 0, 28);
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = 0;
  memset(v84, 0, 28);
  memset(v88, 0, 28);
  memset(v92, 0, 28);
  memset(v96, 0, 28);
  memset(v100, 0, 28);
  memset(v104, 0, 28);
  v82 = 0;
  v83 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v11 = sub_69D0((unsigned __int16 *)(a1 + 57));
  qlseek(*(_QWORD *)(a1 + 8), v11, 0);
  v12 = a1 + 183;
  if ( *(_DWORD *)(a1 + 61) )
  {
    v13 = 1;
    do
    {
      while ( 1 )
      {
        sub_8010(*(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), (__int64)&v105, *(_BYTE *)(a1 + 382));
        if ( v105.m128i_i64[0] == 0x63696D616E79642ELL && !v105.m128i_i8[8] )
        {
          v73 = _mm_load_si128(&v105);
          v74 = _mm_load_si128(&v106);
          v75 = _mm_load_si128(&v107);
          v76[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v76 + 12) = v9;
        }
        if ( v105.m128i_i64[0] == 0x6D79736E79642ELL )
        {
          v77 = _mm_load_si128(&v105);
          v78 = _mm_load_si128(&v106);
          v79 = _mm_load_si128(&v107);
          v80[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v80 + 12) = v9;
        }
        if ( v105.m128i_i64[0] == 0x7274736E79642ELL )
        {
          *(__m128i *)(a1 + 183) = _mm_load_si128(&v105);
          *(__m128i *)(a1 + 199) = _mm_load_si128(&v106);
          *(__m128i *)(a1 + 215) = _mm_load_si128(&v107);
          *(__m128i *)(a1 + 231) = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)(a1 + 243) = v9;
        }
        if ( v105.m128i_i32[0] == 1935763502 && v105.m128i_i16[2] == 104 )
        {
          v81 = _mm_load_si128(&v105);
          v82 = _mm_load_si128(&v106);
          v83 = _mm_load_si128(&v107);
          v84[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v84 + 12) = v9;
        }
        if ( v105.m128i_i32[0] == 2037607726 && v105.m128i_i16[2] == 109 )
        {
          v85 = _mm_load_si128(&v105);
          v86 = _mm_load_si128(&v106);
          v87 = _mm_load_si128(&v107);
          v88[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v88 + 12) = v9;
        }
        if ( v105.m128i_i64[0] == 0x7473696C62696C2ELL && !v105.m128i_i8[8] )
        {
          v89 = _mm_load_si128(&v105);
          v90 = _mm_load_si128(&v106);
          v91 = _mm_load_si128(&v107);
          v92[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v92 + 12) = v9;
        }
        if ( v105.m128i_i64[0] == 0x63696C666E6F632ELL && !v105.m128i_i8[8] )
        {
          v93 = _mm_load_si128(&v105);
          v94 = _mm_load_si128(&v106);
          v95 = _mm_load_si128(&v107);
          v96[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v96 + 12) = v9;
        }
        if ( v105.m128i_i64[0] == 0x6E79642E6C65722ELL && !v105.m128i_i8[8] )
        {
          v97 = _mm_load_si128(&v105);
          v98 = _mm_load_si128(&v106);
          v99 = _mm_load_si128(&v107);
          v100[0] = _mm_load_si128(v108);
          v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
          *(__m128 *)((char *)v100 + 12) = v9;
        }
        if ( v105.m128i_i32[0] == 1953457966 && !v105.m128i_i8[4] )
          break;
        if ( *(_DWORD *)(a1 + 61) < ++v13 )
          goto LABEL_19;
      }
      ++v13;
      v101 = _mm_load_si128(&v105);
      v102 = _mm_load_si128(&v106);
      v103 = _mm_load_si128(&v107);
      v104[0] = _mm_load_si128(v108);
      v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v108[0].m128i_u64[1] + 4));
      *(__m128 *)((char *)v104 + 12) = v9;
    }
    while ( *(_DWORD *)(a1 + 61) >= v13 );
LABEL_19:
    v12 = a1 + 183;
  }
  v14 = sub_87D0(*(_QWORD *)(a1 + 8), v12);
  v15 = *(_QWORD *)(a1 + 8);
  *(__int64 *)((char *)v10 + 259) = v14;
  v16 = sub_87D0(v15, (__int64)&v73);
  if ( v16 && (unsigned __int64)v75.m128i_i64[0] >> 4 )
  {
    v70 = -1;
    v17 = 0;
    v18 = 0;
    v19 = (unsigned __int64)v75.m128i_i64[0] >> 4;
    v69 = -1;
    v64 = -1;
    v62 = v10;
    do
    {
      v20 = (_DWORD *)(v16 + 16 * v18);
      v21 = *v20;
      if ( !*v20 )
        break;
      if ( v21 > 19 )
      {
        switch ( v21 )
        {
          case 1879048193:
            v48 = "RLD_VERSION";
            goto LABEL_69;
          case 1879048194:
            v48 = "TIME_STAMP";
            goto LABEL_69;
          case 1879048195:
            v48 = "ICHECKSUM";
            goto LABEL_69;
          case 1879048196:
            v55 = "IVERSION";
            goto LABEL_101;
          case 1879048197:
            v48 = "FLAGS";
            goto LABEL_69;
          case 1879048198:
            v53 = "BASE_ADDRESS";
            goto LABEL_87;
          case 1879048199:
            v53 = "MSYM";
            goto LABEL_87;
          case 1879048200:
            v53 = "CONFLICT";
            goto LABEL_87;
          case 1879048201:
            v53 = "LIBLIST";
            goto LABEL_87;
          case 1879048202:
            v48 = "LOCAL_GOTNO";
            if ( v64 == -1 )
              v64 = v20[2];
            goto LABEL_69;
          case 1879048203:
            v48 = "CONFLICTNO";
            goto LABEL_69;
          case 1879048208:
            v48 = "LIBLISTNO";
            goto LABEL_69;
          case 1879048209:
            v48 = "SYMTABNO";
            goto LABEL_69;
          case 1879048210:
            v48 = "UNREFEXTNO";
            goto LABEL_69;
          case 1879048211:
            v48 = "GOTSYM";
            if ( v70 == -1 )
              v70 = v20[2];
            goto LABEL_69;
          case 1879048212:
            v48 = "HIPAGENO";
            goto LABEL_69;
          case 1879048215:
            v48 = "SO_SUFFIX";
            goto LABEL_69;
          default:
            goto LABEL_38;
        }
      }
      if ( v21 <= 0 )
      {
LABEL_38:
        v22 = qsnprintf(v109, 1024, "   %08X    ", v21);
        qsnprintf(&v109[v22], 1024LL - v22, " = %16X", v20[2]);
      }
      else
      {
        switch ( v21 )
        {
          case 1:
            v55 = "NEEDED";
            goto LABEL_101;
          case 3:
            v53 = "PLTGOT";
            v69 = *((_QWORD *)v20 + 1);
            goto LABEL_87;
          case 4:
            v53 = "HASH";
            goto LABEL_87;
          case 5:
            v53 = "STRTAB";
            goto LABEL_87;
          case 6:
            v53 = "SYMTAB";
            goto LABEL_87;
          case 10:
            v48 = "STRSZ";
            goto LABEL_69;
          case 11:
            v48 = "SYMENT";
            goto LABEL_69;
          case 12:
            v53 = "INIT";
            goto LABEL_87;
          case 13:
            v53 = "FINI";
            goto LABEL_87;
          case 14:
            v55 = "SONAME";
            goto LABEL_101;
          case 15:
            v55 = "RPATH";
LABEL_101:
            v56 = qsnprintf(v109, 1024, "DT_%-12s", v55);
            v57 = (unsigned int)v20[2];
            if ( !(_DWORD)v57 )
              goto LABEL_125;
            v58 = *(const char **)((char *)v62 + 259);
            if ( v58 )
            {
              if ( v57 >= *(__int64 *)((char *)v62 + 215) )
LABEL_125:
                v58 = nullptr;
              else
                v58 += v57;
            }
            qsnprintf(&v109[v56], 1024LL - v56, " = %s", v58);
            break;
          case 16:
            qsnprintf(v109, 1024, "DT_%-12s", "SYMBOLIC");
            break;
          case 17:
            v53 = "REL";
LABEL_87:
            v54 = qsnprintf(v109, 1024, "DT_%-12s", v53);
            qsnprintf(&v109[v54], v110 - &v109[v54], " = %a", *(double *)v9.m128_u64);
            break;
          case 18:
            v48 = "RELSZ";
            goto LABEL_69;
          case 19:
            v48 = "RELENT";
LABEL_69:
            v49 = qsnprintf(v109, 1024, "DT_%-12s", v48);
            v50 = v20[2];
            v67 = &v109[v49];
            v51 = qsnprintf(v67, v110 - v67, " = %16X", v50);
            if ( v21 == 1879048197 )
            {
              v52 = &v67[v51];
              if ( (v50 & 1) != 0 )
                v52 += (int)qsnprintf(&v67[v51], v110 - v52, " RHF_QUICKSTART");
              if ( (v50 & 2) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_NOTPOT");
              if ( (v50 & 4) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_NO_LIBRARY_REPLACEMENT");
              if ( (v50 & 8) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_NO_MOVE");
              if ( (v50 & 0x4000000) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_TLS");
              if ( (v50 & 0x10000000) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_RING_SEARCH");
              if ( (v50 & 0x20000000) != 0 )
                v52 += (int)qsnprintf(v52, v110 - v52, " RHF_DEPTH_FIRST");
              if ( (v50 & 0x40000000) != 0 )
                qsnprintf(v52, v110 - v52, " RHF_USE_31BIT_ADDRESSES");
            }
            break;
          default:
            goto LABEL_38;
        }
      }
      ++v17;
      sub_5800((__int64)"%s", (__int64)v109, v23, v24, v25, v26, v9, a3, a4, a5, v27, v28, a8, a9, (char)v62);
      v18 = v17;
    }
    while ( v17 < v19 );
    v10 = v62;
  }
  else
  {
    v69 = -1;
    v70 = -1;
    v64 = -1;
  }
  qfree(v16);
  v29 = sub_87D0(v10[1], (__int64)&v77);
  if ( v29 )
  {
    netnode_check((char *)v10 + 267, 0, 0, 1);
    v30 = v79.m128i_i64[0] / 0x18uLL;
    if ( v79.m128i_i64[0] > 0x17uLL )
    {
      v31 = 0;
      v32 = 0;
      v33 = 8 * (v64 - v70);
      while ( 1 )
      {
        v34 = (unsigned int *)(v29 + 24 * v31);
        v35 = *v34;
        if ( !(_DWORD)v35 )
          goto LABEL_47;
        v36 = *(__int64 *)((char *)v10 + 259);
        if ( !v36 || v35 >= *(__int64 *)((char *)v10 + 215) )
          goto LABEL_47;
        v37 = v36 + v35;
        v38 = *((_BYTE *)v34 + 20);
        v39 = *((_WORD *)v34 + 11);
        v40 = v38 >> 4;
        v41 = v38 >> 4 == 2;
        if ( v39 == 0xFF01 )
        {
          v66 = 0;
          goto LABEL_56;
        }
        if ( v39 > 0xFF01u )
        {
          if ( v39 != 0xFFF1 )
          {
            if ( v39 == 0xFFF2 )
              goto LABEL_58;
            if ( v39 != 0xFF02 )
              goto LABEL_47;
          }
LABEL_55:
          v66 = 5;
LABEL_56:
          v42 = *(__int64 *)((char *)v10 + 267);
          v65 = v37;
          v63 = *((_QWORD *)v34 + 1);
          v72 = v63 + 1;
          netnode_supset(v42, v31, &v72, 8, 65);
          v43 = (unsigned int)v32++;
          v33 += 8;
          sub_11E40(v10, v43, v63, v65, v66, v40 == 2);
          v31 = v32;
          if ( v32 >= v30 )
            break;
        }
        else
        {
          if ( !v39 )
          {
LABEL_58:
            v45 = -1;
            if ( v70 != -1 && v64 != -1 )
            {
              if ( v69 == -1 || v70 > v32 )
              {
                v45 = -1;
              }
              else
              {
                v71 = v37;
                v45 = v69 + v33;
                v68 = v38 >> 4 == 2;
                qword = get_qword(v45);
                v60 = *(__int64 *)((char *)v10 + 267);
                v72 = qword + 1;
                netnode_supset(v60, v31, &v72, 8, 65);
                v61 = *(__int64 *)((char *)v10 + 267);
                v72 = v45;
                netnode_supset(v61, v31, &v72, 8, 71);
                v41 = v68;
                v37 = v71;
                v38 = *(_BYTE *)(v29 + 24 * v31 + 20);
              }
            }
            v46 = v38 & 0xF;
            v47 = 3;
            if ( v46 != 1 )
              v47 = v46 == 2;
            (*(void (__fastcall **)(__int64 *, _QWORD, __int64, bool, __int64, __int64))(*v10 + 16))(
              v10,
              (unsigned int)v32,
              v37,
              v41,
              v47,
              v45);
            goto LABEL_47;
          }
          if ( v39 == 0xFF00 )
            goto LABEL_55;
LABEL_47:
          ++v32;
          v33 += 8;
          v31 = v32;
          if ( v32 >= v30 )
            break;
        }
      }
    }
  }
  qfree(v29);
  qfree(*(__int64 *)((char *)v10 + 259));
  return v111 - __readfsqword(0x28u);
}

