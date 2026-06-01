unsigned __int64 __fastcall sub_7C5A50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  __int64 v4; // kr00_8
  __int64 v5; // rdi
  _DWORD *v6; // rdx
  __int64 v7; // rdi
  void *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  void *v12; // rdx
  __int64 v13; // rdi
  __m128i *v14; // rdx
  __m128i si128; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdi
  _DWORD *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  _DWORD *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdi
  _DWORD *v29; // rdx
  __int64 v30; // rdi
  _DWORD *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __m128i *v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  void *v38; // rdx
  __int64 v39; // rdi
  _DWORD *v40; // rdx
  __int64 v41; // rdi
  _DWORD *v42; // rdx
  __int64 v43; // rdi
  _DWORD *v44; // rdx
  __int64 v45; // rdi
  _DWORD *v46; // rdx
  __int64 v47; // rdi
  _DWORD *v48; // rdx
  __int64 v49; // rdi
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  _DWORD *v52; // rdx
  __int64 v53; // rdi
  _DWORD *v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rdx
  int v57; // r12d
  __int64 v58; // rbp
  __int64 v59; // r14
  __int64 v60; // r11
  const char *v61; // rax
  __int64 v62; // r14
  const char *v63; // rax
  __int64 v64; // r12
  __int64 v65; // rdx
  __int64 v66; // r12
  const char *v67; // rax
  __int64 v68; // rax
  char *v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rdx
  __m128i v78; // xmm0
  unsigned int v79; // eax
  const char *v80; // rax
  __int64 v81; // r12
  const char *v82; // rax
  __int64 v83; // rax
  const char *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  __int64 v91; // r12
  __int64 v92; // rdx
  __m128i v93; // xmm0
  unsigned int v94; // eax
  const char *v95; // rax
  const char *v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdi
  __int64 v103; // r12
  __int64 v104; // rdx
  __m128i v105; // xmm0
  unsigned int v106; // eax
  const char *v107; // rax
  __int64 v108; // r12
  const char *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r12
  int v112; // [rsp+0h] [rbp-44h]
  int v113[2]; // [rsp+4h] [rbp-40h]
  __int64 v114; // [rsp+4h] [rbp-40h]

  v4 = v2;
  result = *(unsigned int *)(a2 + 8);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      return sub_A940D0();
    case 1:
      v41 = *a1;
      v42 = *(_DWORD **)(v41 + 32);
      result = *(_QWORD *)(v41 + 24) - (_QWORD)v42;
      if ( result <= 6 )
        return sub_26240F0(v41, "acq_rel", 7);
      *v42 = 1601266529;
      *(_DWORD *)((char *)v42 + 3) = 1818587743;
      *(_QWORD *)(v41 + 32) += 7LL;
      return result;
    case 2:
      v43 = *a1;
      v44 = *(_DWORD **)(v43 + 32);
      result = *(_QWORD *)(v43 + 24) - (_QWORD)v44;
      if ( result <= 6 )
        return sub_26240F0(v43, "acquire", 7);
      *v44 = 1970365281;
      *(_DWORD *)((char *)v44 + 3) = 1701996917;
      *(_QWORD *)(v43 + 32) += 7LL;
      return result;
    case 4:
      if ( *(_DWORD *)(a2 + 16) )
      {
        sub_5FF0F0(*a1, "affinity");
        v110 = 40;
        v111 = *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24);
        if ( v111 )
        {
          sub_5FF0F0(*a1, "(");
          sub_AE6C50(v111, *a1, 0, a1[1], 0, 0, "\n", 1u);
          sub_5FF0F0(*a1, " :");
          v110 = 32;
        }
        sub_A9ADF0(a1, a2, v110);
        return sub_5FF0F0(*a1, ")");
      }
      return result;
    case 5:
      return sub_A92C10();
    case 6:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_A99840();
      return result;
    case 7:
      if ( *(_DWORD *)(a2 + 16) )
      {
        v57 = *(_DWORD *)(a2 + 52);
        v58 = *(_QWORD *)(a2 + 24);
        v112 = *(_DWORD *)(a2 + 56);
        if ( !v57 )
        {
          *(_QWORD *)v113 = *(_QWORD *)(a2 + 32);
          sub_5FF0F0(*a1, "allocate");
          if ( v58 )
          {
            LODWORD(v59) = v58;
            sub_5FF0F0(*a1, "(");
            v60 = *a1;
            v58 = *(_QWORD *)v113;
LABEL_132:
            v114 = v60;
            v61 = (const char *)sub_CA0650(*(unsigned int *)(a2 + 8));
            sub_5FF0F0(v114, v61);
            sub_5FF0F0(*a1, "(");
            sub_AE6C50(v59, *a1, 0, a1[1], 0, 0, "\n", 1u);
            sub_5FF0F0(*a1, ")");
LABEL_133:
            if ( v58 )
            {
              sub_5FF0F0(*a1, ", ");
              v62 = *a1;
              if ( v112 == 2 )
              {
                sub_AE6C50(v58, v62, 0, a1[1], 0, 0, "\n", 1u);
              }
              else
              {
                v63 = (const char *)sub_CA0650(*(unsigned int *)(a2 + 8));
                sub_5FF0F0(v62, v63);
                sub_5FF0F0(*a1, "(");
                sub_AE6C50(v58, *a1, 0, a1[1], 0, 0, "\n", 1u);
                sub_5FF0F0(*a1, ")");
              }
            }
            sub_5FF0F0(*a1, ":");
            sub_A983C0(a1, a2, 32);
            return sub_5FF0F0(*a1, ")");
          }
LABEL_143:
          sub_A983C0(a1, a2, 40);
          return sub_5FF0F0(*a1, ")");
        }
        if ( v57 == 2 && v58 )
        {
          v64 = *(_QWORD *)(a2 + 32);
          LODWORD(v59) = *(_QWORD *)(a2 + 24);
          sub_5FF0F0(*a1, "allocate");
          v58 = v64;
          sub_5FF0F0(*a1, "(");
          v60 = *a1;
        }
        else
        {
          v59 = *(_QWORD *)(a2 + 32);
          sub_5FF0F0(*a1, "allocate");
          if ( !v59 )
            goto LABEL_143;
          sub_5FF0F0(*a1, "(");
          v60 = *a1;
          if ( v57 != 2 )
            goto LABEL_132;
        }
        sub_AE6C50(v59, v60, 0, a1[1], 0, 0, "\n", 1u);
        goto LABEL_133;
      }
      return nullsub_703();
    case 8:
      return sub_A931B0();
    case 0xA:
      return sub_A93830();
    case 0xB:
      return sub_A93720();
    case 0xC:
      return sub_A956B0();
    case 0xE:
      v28 = *a1;
      v29 = *(_DWORD **)(v28 + 32);
      result = *(_QWORD *)(v28 + 24) - (_QWORD)v29;
      if ( result <= 6 )
        return sub_26240F0(v28, "capture", 7);
      *v29 = 1953522019;
      *(_DWORD *)((char *)v29 + 3) = 1701999988;
      *(_QWORD *)(v28 + 32) += 7LL;
      return result;
    case 0xF:
      return sub_A93260();
    case 0x10:
      v30 = *a1;
      v31 = *(_DWORD **)(v30 + 32);
      result = *(_QWORD *)(v30 + 24) - (_QWORD)v31;
      if ( result <= 6 )
        return sub_26240F0(v30, "compare", 7);
      *v31 = 1886220131;
      *(_DWORD *)((char *)v31 + 3) = 1701994864;
      *(_QWORD *)(v30 + 32) += 7LL;
      return result;
    case 0x11:
      return sub_A942A0();
    case 0x12:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A99BA0();
      return result;
    case 0x13:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A99A10();
      return result;
    case 0x14:
      return sub_A933C0();
    case 0x15:
      return sub_A95170();
    case 0x16:
      return sub_A99EA0();
    case 0x17:
      return sub_A94FD0();
    case 0x18:
      return sub_A94DA0();
    case 0x19:
      return sub_A93310();
    case 0x1A:
      return sub_A94710();
    case 0x1C:
      return sub_A95070();
    case 0x1D:
      return sub_A9B100();
    case 0x1E:
      v13 = *a1;
      v14 = *(__m128i **)(v13 + 32);
      if ( *(_QWORD *)(v13 + 24) - (_QWORD)v14 <= 0x11u )
        return sub_26240F0(v13, "dynamic_allocators", 18);
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7EB40);
      v14[1].m128i_i16[0] = 29554;
      *v14 = si128;
      *(_QWORD *)(v13 + 32) += 18LL;
      return 29554;
    case 0x20:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9ADA0();
      return result;
    case 0x21:
      return sub_A94040();
    case 0x22:
      return sub_A95600();
    case 0x23:
      return sub_A92AB0();
    case 0x24:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A98A60();
      return result;
    case 0x25:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A99D30();
      return result;
    case 0x26:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_A9B670();
      return result;
    case 0x27:
      v5 = *a1;
      v6 = *(_DWORD **)(v5 + 32);
      result = *(_QWORD *)(v5 + 24) - (_QWORD)v6;
      if ( result <= 3 )
        return sub_26240F0(v5, "full", 4);
      *v6 = 1819047270;
      *(_QWORD *)(v5 + 32) += 4LL;
      return result;
    case 0x28:
      return sub_A948A0();
    case 0x29:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9A8F0();
      return result;
    case 0x2A:
      return sub_A94A80();
    case 0x2B:
      return sub_A941F0();
    case 0x2C:
      return sub_A92970();
    case 0x2D:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v98 = "in_reduction(";
      sub_5FF0F0(*a1, "in_reduction(");
      v102 = *(_QWORD *)(a2 + 56);
      v103 = *a1;
      v104 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v104 != 6 )
        goto LABEL_178;
      v106 = *(_DWORD *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v102 )
        goto LABEL_179;
      if ( v106 )
      {
        v107 = (const char *)sub_C88770(v106);
        sub_5FF0F0(v103, v107);
      }
      else
      {
LABEL_178:
        if ( v102 )
        {
LABEL_179:
          v98 = (const char *)*a1;
          sub_A7B4E0(v102, *a1, a1[1], 0);
          v103 = *a1;
        }
        v105 = _mm_loadu_si128((const __m128i *)(a2 + 72));
        sub_792640(
          v103,
          (__int64)v98,
          v104,
          v99,
          v100,
          v101,
          v105.m128i_u64[0],
          v105.m128i_i32[2],
          *(__int64 **)(a2 + 88));
      }
      sub_5FF0F0(*a1, ":");
      sub_A99270(a1, a2, 32);
      return sub_5FF0F0(*a1, ")");
    case 0x2F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9AC10();
      return result;
    case 0x31:
      return sub_A94B30();
    case 0x32:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9A760();
      return result;
    case 0x33:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
      {
        sub_5FF0F0(*a1, "lastprivate");
        v65 = 40;
        if ( *(_DWORD *)(a2 + 48) != 1 )
        {
          v66 = sub_5FF0F0(*a1, "(");
          v67 = (const char *)sub_CA0650(51);
          v68 = sub_5FF0F0(v66, v67);
          sub_5FF0F0(v68, ":");
          v65 = 32;
        }
        sub_A98AB0(a1, a2, v65);
        return sub_5FF0F0(*a1, ")");
      }
      return result;
    case 0x34:
      if ( !*(_DWORD *)(a2 + 16) )
        return result;
      sub_5FF0F0(*a1, "linear");
      sub_A99480(a1, a2, 40);
      if ( !*(_DWORD *)(a2 + 52) && !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
        return sub_5FF0F0(*a1, ")");
      sub_5FF0F0(*a1, ": ");
      if ( *(_DWORD *)(a2 + 52) )
      {
        v108 = *a1;
        v109 = (const char *)sub_CA0650(52);
        sub_5FF0F0(v108, v109);
        if ( !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
          return sub_5FF0F0(*a1, ")");
        if ( *(_DWORD *)(a2 + 52) )
          sub_5FF0F0(*a1, ", ");
      }
      else if ( !*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) )
      {
        return sub_5FF0F0(*a1, ")");
      }
      sub_5FF0F0(*a1, "step(");
      sub_AE6C50(*(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64), *a1, 0, a1[1], 0, 0, "\n", 1u);
      sub_5FF0F0(*a1, ")");
      return sub_5FF0F0(*a1, ")");
    case 0x36:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_A9A150();
      return result;
    case 0x39:
      v22 = *a1;
      v23 = *(_QWORD *)(v22 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v23) <= 8 )
        return sub_26240F0(v22, "mergeable", 9);
      *(_BYTE *)(v23 + 8) = 101;
      *(_QWORD *)v23 = 0x6C6261656772656DLL;
      *(_QWORD *)(v22 + 32) += 9LL;
      return 0x6C6261656772656DLL;
    case 0x3A:
      return sub_A93A50();
    case 0x3B:
      v20 = *a1;
      v21 = *(_DWORD **)(v20 + 32);
      result = *(_QWORD *)(v20 + 24) - (_QWORD)v21;
      if ( result <= 6 )
        return sub_26240F0(v20, "nogroup", 7);
      *v21 = 1919381358;
      *(_DWORD *)((char *)v21 + 3) = 1886744434;
      *(_QWORD *)(v20 + 32) += 7LL;
      return result;
    case 0x3C:
      v32 = *a1;
      v33 = *(_QWORD *)(v32 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v33) <= 8 )
        return sub_26240F0(v32, "no_openmp", 9);
      *(_BYTE *)(v33 + 8) = 112;
      *(_QWORD *)v33 = 0x6D6E65706F5F6F6ELL;
      *(_QWORD *)(v32 + 32) += 9LL;
      return 0x6D6E65706F5F6F6ELL;
    case 0x3D:
      v34 = *a1;
      v35 = *(__m128i **)(v34 + 32);
      if ( *(_QWORD *)(v34 + 24) - (_QWORD)v35 <= 0x11u )
        return sub_26240F0(v34, "no_openmp_routines", 18);
      v36 = _mm_load_si128((const __m128i *)&xmmword_3C7EB70);
      v35[1].m128i_i16[0] = 29541;
      *v35 = v36;
      *(_QWORD *)(v34 + 32) += 18LL;
      return 29541;
    case 0x3E:
      v37 = *a1;
      v38 = *(void **)(v37 + 32);
      if ( *(_QWORD *)(v37 + 24) - (_QWORD)v38 <= 0xDu )
        return sub_26240F0(v37, "no_parallelism", 14);
      qmemcpy(v38, "no_parallelism", 14);
      *(_QWORD *)(v37 + 32) += 14LL;
      return 0x6D73696C656C6C61LL;
    case 0x3F:
      v16 = *a1;
      v17 = *(_QWORD *)(v16 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v16 + 24) - v17) <= 5 )
        return sub_26240F0(v16, "nowait", 6);
      *(_DWORD *)v17 = 1635217262;
      *(_WORD *)(v17 + 4) = 29801;
      *(_QWORD *)(v16 + 32) += 6LL;
      return 29801;
    case 0x40:
      return sub_A94F10();
    case 0x41:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9AA80();
      return result;
    case 0x43:
      return sub_A94E50();
    case 0x44:
      return sub_A94990();
    case 0x45:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A981E0();
      return result;
    case 0x46:
      return sub_A92B60();
    case 0x47:
      return sub_A95860();
    case 0x48:
      v55 = *a1;
      v56 = *(_QWORD *)(v55 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - v56) <= 8 )
        return sub_26240F0(v55, "ompx_bare", 9);
      *(_BYTE *)(v56 + 8) = 101;
      *(_QWORD *)v56 = 0x7261625F78706D6FLL;
      *(_QWORD *)(v55 + 32) += 9LL;
      return 0x7261625F78706D6FLL;
    case 0x49:
      return sub_A957B0();
    case 0x4A:
      return sub_A95240();
    case 0x4B:
      return sub_A93C90();
    case 0x4C:
      return sub_A930D0();
    case 0x4D:
      return sub_A92F50();
    case 0x4E:
      return sub_A947F0();
    case 0x4F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A988D0();
      return result;
    case 0x50:
      return sub_A934D0();
    case 0x51:
      v24 = *a1;
      v25 = *(_DWORD **)(v24 + 32);
      result = *(_QWORD *)(v24 + 24) - (_QWORD)v25;
      if ( result <= 3 )
        return sub_26240F0(v24, "read", 4);
      *v25 = 1684104562;
      *(_QWORD *)(v24 + 32) += 4LL;
      return result;
    case 0x52:
      if ( !*(_DWORD *)(a2 + 16) )
        return result;
      v71 = "reduction(";
      sub_5FF0F0(*a1, "reduction(");
      if ( *(_DWORD *)(a2 + 52) )
      {
        v81 = *a1;
        v82 = (const char *)sub_CA0650(82);
        v83 = sub_5FF0F0(v81, v82);
        v71 = ", ";
        sub_5FF0F0(v83, ", ");
      }
      v75 = *(_QWORD *)(a2 + 64);
      v76 = *a1;
      v77 = *(_QWORD *)(a2 + 80) & 7LL;
      if ( (_DWORD)v77 != 6 )
        goto LABEL_160;
      v79 = *(_DWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v75 )
        goto LABEL_161;
      if ( v79 )
      {
        v80 = (const char *)sub_C88770(v79);
        sub_5FF0F0(v76, v80);
      }
      else
      {
LABEL_160:
        if ( v75 )
        {
LABEL_161:
          v71 = (char *)*a1;
          sub_A7B4E0(v75, *a1, a1[1], 0);
          v76 = *a1;
        }
        v78 = _mm_loadu_si128((const __m128i *)(a2 + 80));
        sub_792640(v76, (__int64)v71, v77, v72, v73, v74, v78.m128i_u64[0], v78.m128i_i32[2], *(__int64 **)(a2 + 96));
      }
      sub_5FF0F0(*a1, ":");
      sub_A98E10(a1, a2, 32);
      return sub_5FF0F0(*a1, ")");
    case 0x53:
      v47 = *a1;
      v48 = *(_DWORD **)(v47 + 32);
      result = *(_QWORD *)(v47 + 24) - (_QWORD)v48;
      if ( result <= 6 )
        return sub_26240F0(v47, "relaxed", 7);
      *v48 = 1634493810;
      *(_DWORD *)((char *)v48 + 3) = 1684371553;
      *(_QWORD *)(v47 + 32) += 7LL;
      return result;
    case 0x54:
      v45 = *a1;
      v46 = *(_DWORD **)(v45 + 32);
      result = *(_QWORD *)(v45 + 24) - (_QWORD)v46;
      if ( result <= 6 )
        return sub_26240F0(v45, "release", 7);
      *v46 = 1701602674;
      *(_DWORD *)((char *)v46 + 3) = 1702060389;
      *(_QWORD *)(v45 + 32) += 7LL;
      return result;
    case 0x55:
      v11 = *a1;
      v12 = *(void **)(v11 + 32);
      if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 <= 0xEu )
        return sub_26240F0(v11, "reverse_offload", 15);
      qmemcpy(v12, "reverse_offload", 15);
      *(_QWORD *)(v11 + 32) += 15LL;
      return 0x64616F6C66666F5FLL;
    case 0x56:
      return sub_A92CC0();
    case 0x57:
      return sub_A93B60();
    case 0x58:
      v39 = *a1;
      v40 = *(_DWORD **)(v39 + 32);
      result = *(_QWORD *)(v39 + 24) - (_QWORD)v40;
      if ( result <= 6 )
        return sub_26240F0(v39, "seq_cst", 7);
      *v40 = 1601267059;
      *(_DWORD *)((char *)v40 + 3) = 1953719135;
      *(_QWORD *)(v39 + 32) += 7LL;
      return result;
    case 0x59:
      return sub_A93940();
    case 0x5A:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A98DC0();
      return result;
    case 0x5B:
      v53 = *a1;
      v54 = *(_DWORD **)(v53 + 32);
      result = *(_QWORD *)(v53 + 24) - (_QWORD)v54;
      if ( result <= 3 )
        return sub_26240F0(v53, "simd", 4);
      *v54 = 1684892019;
      *(_QWORD *)(v53 + 32) += 4LL;
      return result;
    case 0x5C:
      return sub_A92D70();
    case 0x5D:
      return sub_A92E20();
    case 0x5E:
      result = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)result )
        return result;
      v86 = "task_reduction(";
      sub_5FF0F0(*a1, "task_reduction(");
      v90 = *(_QWORD *)(a2 + 56);
      v91 = *a1;
      v92 = *(_QWORD *)(a2 + 72) & 7LL;
      if ( (_DWORD)v92 != 6 )
        goto LABEL_169;
      v94 = *(_DWORD *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v90 )
        goto LABEL_170;
      if ( v94 )
      {
        v95 = (const char *)sub_C88770(v94);
        sub_5FF0F0(v91, v95);
      }
      else
      {
LABEL_169:
        if ( v90 )
        {
LABEL_170:
          v86 = (const char *)*a1;
          sub_A7B4E0(v90, *a1, a1[1], 0);
          v91 = *a1;
        }
        v93 = _mm_loadu_si128((const __m128i *)(a2 + 72));
        sub_792640(v91, (__int64)v86, v92, v87, v88, v89, v93.m128i_u64[0], v93.m128i_i32[2], *(__int64 **)(a2 + 88));
      }
      sub_5FF0F0(*a1, ":");
      sub_A99060(a1, a2, 32);
      return sub_5FF0F0(*a1, ")");
    case 0x5F:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A98370();
      return result;
    case 0x61:
      v51 = *a1;
      v52 = *(_DWORD **)(v51 + 32);
      result = *(_QWORD *)(v51 + 24) - (_QWORD)v52;
      if ( result <= 6 )
        return sub_26240F0(v51, "threads", 7);
      *v52 = 1701996660;
      *(_DWORD *)((char *)v52 + 3) = 1935958373;
      *(_QWORD *)(v51 + 32) += 7LL;
      return result;
    case 0x62:
      if ( *(_DWORD *)(a2 + 16) )
        return sub_A9B350();
      return result;
    case 0x63:
      v7 = *a1;
      v8 = *(void **)(v7 + 32);
      if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 <= 0xEu )
        return sub_26240F0(v7, "unified_address", 15);
      qmemcpy(v8, "unified_address", 15);
      *(_QWORD *)(v7 + 32) += 15LL;
      return 0x737365726464615FLL;
    case 0x64:
      v9 = *a1;
      v10 = *(_QWORD *)(v9 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v10) <= 0x14 )
        return sub_26240F0(v9, "unified_shared_memory", 21);
      *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_3C7EB30);
      *(_QWORD *)(v10 + 13) = 0x79726F6D656D5F64LL;
      *(_QWORD *)(v9 + 32) += 21LL;
      return 0x79726F6D656D5F64LL;
    case 0x67:
      v18 = *a1;
      v19 = *(_QWORD *)(v18 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v18 + 24) - v19) <= 5 )
        return sub_26240F0(v18, "untied", 6);
      *(_DWORD *)v19 = 1769238133;
      *(_WORD *)(v19 + 4) = 25701;
      *(_QWORD *)(v18 + 32) += 6LL;
      return 25701;
    case 0x68:
      return sub_A93F00();
    case 0x69:
      return sub_A94D00();
    case 0x6A:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9A5D0();
      return result;
    case 0x6B:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A9A440();
      return result;
    case 0x6C:
      result = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)result )
        return sub_A95320();
      return result;
    case 0x6D:
      v49 = *a1;
      v50 = *(_DWORD **)(v49 + 32);
      result = *(_QWORD *)(v49 + 24) - (_QWORD)v50;
      if ( result <= 3 )
        return sub_26240F0(v49, "weak", 4);
      *v50 = 1801545079;
      *(_QWORD *)(v49 + 32) += 4LL;
      return result;
    case 0x6F:
      v26 = *a1;
      v27 = *(_QWORD *)(v26 + 32);
      result = *(_QWORD *)(v26 + 24) - v27;
      if ( result <= 4 )
        return sub_26240F0(v26, "write", 5);
      *(_DWORD *)v27 = 1953067639;
      *(_BYTE *)(v27 + 4) = 101;
      *(_QWORD *)(v26 + 32) += 5LL;
      return result;
    default:
      return v4;
  }
}

