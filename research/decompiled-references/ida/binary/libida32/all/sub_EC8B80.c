__int64 __fastcall sub_EC8B80(unsigned __int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbp
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rbp
  __m128 v16; // rax
  char v17; // cl
  unsigned int v18; // eax
  __int64 v19; // rbp
  char v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rbp
  unsigned __int64 v27; // rdi
  char v28; // al
  unsigned int v29; // eax
  __int64 v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned int v34; // edx
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  __int64 v37; // rbp
  __int64 v38; // rbp
  __int64 v39; // rbp
  __int64 v40; // rbp
  unsigned int v41; // eax
  __m128 v42; // xmm1
  unsigned __int64 v43; // rax
  char v44; // cl
  __int64 v45; // rbp
  __int64 v46; // rbp
  __int64 v47; // rbp
  unsigned __int64 v48; // rax
  __int64 v49; // rbp
  unsigned __int64 v50; // rbp
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rbp
  __int64 v54; // rbp
  unsigned __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // rbp
  __int64 v58; // rbp
  __int64 v59; // rax
  unsigned __int64 v60; // rbp
  __int64 v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // rbp
  _QWORD *i; // rcx
  __int64 v65; // rax
  __int16 v66; // dx
  __int64 v67; // rax
  unsigned int v68; // ebx
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rbp
  __int64 v72; // rbp
  unsigned int v73; // eax
  __int64 v74; // rbp
  __int64 v75; // rbp
  unsigned __int64 v76; // rdi
  unsigned int v77; // eax
  __int64 v78; // rbp
  _DWORD *v79; // rax
  unsigned int v80; // eax
  _DWORD *v81; // rdi
  unsigned __int64 v82; // r12
  __int64 v83; // rbp
  unsigned int v84; // eax
  __int64 v85; // rbp
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned int v88; // eax
  __m128 v89; // rax
  char v90; // cl
  unsigned int v91; // eax
  __int64 v92; // rbp
  __int64 v93; // rbx
  __int64 v94; // rbp
  unsigned __int64 v95; // rdi
  unsigned int v96; // ebx
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rbp
  unsigned __int64 v100; // rdi
  __int64 v101; // rbp
  unsigned int v102; // eax
  unsigned int v103; // ebx
  unsigned __int64 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rdi
  __int64 v108; // rax
  unsigned __int64 v109; // rbp
  unsigned int v110; // eax
  unsigned int v111; // ebx
  unsigned __int64 v112; // rdi
  __int64 v113; // rax
  unsigned int v114; // eax
  __m128 v115; // rax
  char v116; // cl
  unsigned int v117; // eax
  unsigned int v118; // eax
  __int64 v119; // rdx
  unsigned __int64 v120; // rdx
  char v121; // si
  __m128 v122; // xmm2
  unsigned __int64 v123; // rdx
  char v124; // cl
  unsigned __int64 v125; // [rsp+8h] [rbp-40h] BYREF
  __m128 v126; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v127; // [rsp+20h] [rbp-28h]

  switch ( *(_WORD *)a1 & 0x1FF )
  {
    case 0:
    case 0x100:
      return ((unsigned __int64)*(unsigned int *)(a1 + 40) << 32) | *(unsigned int *)(a1 + 8);
    case 1:
      return (sub_EC8400(*(_QWORD *)(a1 + 8LL * ((unsigned int)((*(_WORD *)a1 & 0x200) != 0) + 1) + 16)) << 32)
           | *(unsigned int *)(a1 + 4);
    case 2:
    case 0xF0:
      return (sub_EC8400(*(_QWORD *)(a1 + 16)) << 32) | *(unsigned int *)(a1 + 4);
    case 3:
      return *(_QWORD *)(a1 + 32);
    case 4:
      v100 = *(_QWORD *)(a1 + 16);
      if ( *(_BYTE *)(a1 + 2) <= 0xFu )
      {
        v101 = *(unsigned int *)(a1 + 4);
        v102 = sub_EC7AA0(v100, a2, a3);
      }
      else
      {
        v101 = (unsigned int)sub_EC8400(v100);
        v102 = *(_DWORD *)(a1 + 4);
      }
      return (v101 << 32) | v102;
    case 5:
      return *(_QWORD *)(a1 + 24);
    case 6:
      return *(_QWORD *)(a1 + 16);
    case 7:
      return ((unsigned __int64)*(unsigned int *)(a1 + 36) << 32) | *(unsigned int *)(a1 + 36);
    case 8:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 9:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4LL * *(unsigned int *)(a1 + 4) + 16) << 32)
           | *(unsigned int *)(a1 + 20);
    case 0xA:
      return *(_QWORD *)(a1 + 24);
    case 0xB:
      return *(_QWORD *)(a1 + 16);
    case 0xC:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 16);
    case 0xD:
      return *(_QWORD *)(a1 + 16);
    case 0xE:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 16);
    case 0xF:
      return ((unsigned __int64)*(unsigned int *)(a1 + 40) << 32) | *(unsigned int *)(a1 + 4);
    case 0x10:
      return *(_QWORD *)(a1 + 16);
    case 0x11:
    case 0x24:
    case 0x37:
    case 0x38:
    case 0x3C:
    case 0x3D:
    case 0x4F:
      v24 = *(_QWORD *)(a1 + 16);
      v25 = (unsigned int)sub_EC8400(v24);
      return (v25 << 32) | (unsigned int)sub_EC7AA0(v24, a2, a3);
    case 0x12:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0x13:
      return *(_QWORD *)(a1 + 16);
    case 0x14:
      return *(_QWORD *)(a1 + 16);
    case 0x15:
      v22 = *(unsigned int *)(a1 + 20);
      return (v22 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
    case 0x16:
    case 0x1C:
      v11 = *(unsigned int *)(a1 + 16);
      return (v11 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
    case 0x17:
      if ( (*(_QWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 80) )
      {
        v19 = *(unsigned int *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 84);
      }
      else
      {
        v117 = sub_B61CD0(a1 + 16);
        v19 = v117;
        if ( !v117 )
          v19 = *(unsigned int *)(a1 + 24);
      }
      v20 = sub_C71B10(a1);
      if ( v20 )
      {
        v119 = *(_QWORD *)(a1 + 40);
        if ( v119 )
        {
          v126 = *(__m128 *)(a1 + 40);
          v120 = *(_QWORD *)(v119 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v120 )
          {
            v126.m128_u64[0] = v120;
            v121 = 0;
            while ( (*(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v121 = v20;
              v120 = *(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v121 )
              v126.m128_u64[0] = v120;
          }
          v21 = sub_E6C7F0((__int64 *)&v126);
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        v21 = sub_EC7AA0(*(_QWORD *)(a1 + 56), a2, a3);
      }
      return (v19 << 32) | v21;
    case 0x18:
      if ( (*(_QWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 64) )
      {
        v15 = *(unsigned int *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 68);
      }
      else
      {
        v118 = sub_B61CD0(a1 + 16);
        v15 = v118;
        if ( !v118 )
          v15 = *(unsigned int *)(a1 + 24);
      }
      v16.m128_u64[0] = *(_QWORD *)(a1 + 40);
      if ( v16.m128_u64[0] )
      {
        v16.m128_u64[1] = *(_QWORD *)(a1 + 48);
        v126 = v16;
        v16.m128_u64[0] = *(_QWORD *)(v16.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16.m128_u64[0] )
        {
          v126.m128_u64[0] = v16.m128_u64[0];
          v17 = 0;
          while ( (*(_QWORD *)(v16.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v17 = 1;
            v16.m128_u64[0] = *(_QWORD *)(v16.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v17 )
            v126.m128_u64[0] = v16.m128_u64[0];
        }
        v18 = sub_E6C7F0((__int64 *)&v126);
      }
      else
      {
        v18 = *(_DWORD *)(a1 + 24);
      }
      return (v15 << 32) | v18;
    case 0x19:
      return ((unsigned __int64)*(unsigned int *)(a1 + 16) << 32) | *(unsigned int *)(a1 + 16);
    case 0x1A:
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
      {
        v13 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 16));
        v14 = sub_EC7AA0(v12, a2, a3);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 4);
        v13 = v14;
      }
      return (v13 << 32) | v14;
    case 0x1B:
      return *(_QWORD *)(a1 + 16);
    case 0x1D:
    case 0xA0:
      return (sub_EC8400(*(_QWORD *)(a1 + 16)) << 32) | *(unsigned int *)(a1 + 24);
    case 0x1E:
      return *(_QWORD *)(a1 + 24);
    case 0x1F:
      return ((unsigned __int64)*(unsigned int *)(a1 + 32) << 32) | *(unsigned int *)(a1 + 24);
    case 0x20:
      v8 = *(unsigned int *)(a1 + 32);
      v9 = *(_QWORD *)(a1 + 40);
      if ( (v9 & 6) != 0 )
        v10 = *(_DWORD *)(a1 + 36);
      else
        v10 = sub_EC7AA0(v9 & 0xFFFFFFFFFFFFFFF8LL, a2, a3);
      return (v8 << 32) | v10;
    case 0x21:
      return *(_QWORD *)(a1 + 32);
    case 0x22:
      v6 = *(unsigned int *)(a1 + 32);
      v7 = *(_DWORD *)(a1 + 32);
      if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
        v7 = sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
      return (v6 << 32) | v7;
    case 0x23:
      v5 = *(unsigned int *)(a1 + 24);
      return (v5 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
    case 0x25:
      return *(_QWORD *)(a1 + 24);
    case 0x26:
      return *(_QWORD *)(a1 + 20);
    case 0x27:
      return *(_QWORD *)(a1 + 32);
    case 0x28:
      return ((unsigned __int64)*(unsigned int *)(a1 + 20) << 32) | *(unsigned int *)(a1 + 20);
    case 0x29:
      return *(_QWORD *)(a1 + 32);
    case 0x2A:
      return *(_QWORD *)(a1 + 20);
    case 0x2B:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 16);
    case 0x2C:
      return (sub_EC8400(*(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 24) + 32)) << 32) | *(unsigned int *)(a1 + 16);
    case 0x2D:
    case 0x36:
    case 0x70:
    case 0x7E:
      return 0;
    case 0x2E:
      v54 = (unsigned int)sub_BD6160((__int64 *)a1);
      return (v54 << 32) | (unsigned int)sub_BDA680(a1);
    case 0x2F:
    case 0x7B:
      v38 = *(unsigned int *)(a1 + 4);
      return (v38 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
    case 0x30:
      v35 = *(_QWORD *)(a1 + 16);
      if ( (v35 & 4) != 0 )
        v36 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      v37 = (unsigned int)sub_EC8400(v36);
      return (v37 << 32) | (unsigned int)sub_EC7AA0(v36, a2, a3);
    case 0x31:
    case 0x40:
      v39 = *(unsigned int *)(a1 + 32);
      return (v39 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
    case 0x32:
      v26 = *(unsigned int *)(a1 + 32);
      v27 = *(_QWORD *)(a1 + 16);
      if ( !v27 )
        goto LABEL_68;
      v28 = sub_BDA5C0(v27);
      if ( v28 )
      {
        if ( *(_QWORD *)(a1 + 40) )
        {
          v122 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 40));
          v126 = v122;
          if ( v122.m128_u64[0] )
          {
            v123 = *(_QWORD *)(v122.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v123 )
            {
              v125 = v126.m128_u64[1];
              v124 = 0;
              v126 = _mm_loadh_ps((const double *)&v125);
              while ( (*(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v124 = v28;
                v123 = *(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v124 )
                v126.m128_u64[0] = v123;
            }
          }
          v29 = sub_E6C7F0((__int64 *)&v126);
        }
        else
        {
          v29 = *(_DWORD *)(a1 + 32);
        }
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 16);
LABEL_68:
        v29 = sub_EC7AA0(v27, a2, a3);
      }
      return (v26 << 32) | v29;
    case 0x33:
      return ((unsigned __int64)*(unsigned int *)(a1 + 28) << 32) | *(unsigned int *)(a1 + 16);
    case 0x34:
      return ((unsigned __int64)*(unsigned int *)(a1 + 28) << 32) | *(unsigned int *)(a1 + 28);
    case 0x35:
      v23 = (unsigned int)sub_BD74E0(a1);
      return (v23 << 32) | (unsigned int)sub_BD7480(a1);
    case 0x39:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 4);
    case 0x3A:
      return ((unsigned __int64)*(unsigned int *)(a1 + 16) << 32) | *(unsigned int *)(a1 + 16);
    case 0x3B:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 24);
    case 0x3E:
      return ((unsigned __int64)*(unsigned int *)(a1 + 28) << 32) | *(unsigned int *)(a1 + 28);
    case 0x3F:
      return ((unsigned __int64)*(unsigned int *)(a1 + 28) << 32) | *(unsigned int *)(a1 + 28);
    case 0x41:
      return *(_QWORD *)(a1 + 16);
    case 0x42:
      return ((unsigned __int64)*(unsigned int *)(a1 + 16) << 32) | *(unsigned int *)(a1 + 16);
    case 0x43:
      v46 = (unsigned int)sub_BDF6F0(a1);
      return (v46 << 32) | (unsigned int)sub_BDF6E0(a1);
    case 0x44:
      v45 = (unsigned int)sub_BDF650(a1);
      return (v45 << 32) | (unsigned int)sub_BDCC90(a1);
    case 0x45:
      if ( (*(_DWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 56) )
        v40 = *(unsigned int *)(a1 + 60);
      else
        v40 = *(unsigned int *)(a1 + 40);
      v41 = 0;
      if ( *(_QWORD *)(a1 + 16) )
      {
        v42 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 16));
        v126 = v42;
        if ( v42.m128_u64[0] )
        {
          v43 = *(_QWORD *)(v42.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v43 )
          {
            v44 = 0;
            v125 = v126.m128_u64[1];
            v126 = _mm_loadh_ps((const double *)&v125);
            while ( (*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v44 = 1;
              v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v44 )
              v126.m128_u64[0] = v43;
          }
        }
        v41 = sub_E6C7F0((__int64 *)&v126);
      }
      return (v40 << 32) | v41;
    case 0x46:
    case 0x48:
    case 0x49:
      return (sub_EC8400(*(_QWORD *)(a1 + 24)) << 32) | *(unsigned int *)(a1 + 16);
    case 0x47:
      v30 = (unsigned int)sub_BD42A0(a1);
      if ( (*(_QWORD *)a1 & 0x80000LL) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 32);
        if ( v31 )
        {
          v125 = *(_QWORD *)(a1 + 40);
          v126 = _mm_loadh_ps((const double *)&v125);
          v32 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v32 )
          {
            v126.m128_u64[0] = v32;
            v33 = 0;
            while ( (*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v33 = 1;
              v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v33 )
              v126.m128_u64[0] = v32;
          }
          v34 = sub_E6C7F0((__int64 *)&v126);
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = *(_DWORD *)(a1 + 4);
      }
      return (v30 << 32) | v34;
    case 0x4A:
      return *(_QWORD *)(a1 + 32);
    case 0x4B:
      v85 = *(_QWORD *)(a1 + 16);
      v86 = *(_QWORD *)(v85 + 64);
      if ( !v86 || (v87 = *(unsigned int *)(v86 + 4), !(_DWORD)v87) )
      {
        v88 = sub_B61CD0(v85 + 24);
        v87 = v88;
        if ( !v88 )
          v87 = *(unsigned int *)(v85 + 32);
      }
      v89.m128_u64[0] = *(_QWORD *)v85;
      if ( *(_QWORD *)v85 )
      {
        v89.m128_u64[1] = *(_QWORD *)(v85 + 8);
        v126 = v89;
        v89.m128_u64[0] = *(_QWORD *)(v89.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v89.m128_u64[0] )
        {
          v126.m128_u64[0] = v89.m128_u64[0];
          v90 = 0;
          while ( (*(_QWORD *)(v89.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v90 = 1;
            v89.m128_u64[0] = *(_QWORD *)(v89.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v90 )
            v126.m128_u64[0] = v89.m128_u64[0];
        }
        v91 = sub_E6C7F0((__int64 *)&v126);
      }
      else
      {
        v91 = *(_DWORD *)(v85 + 32);
      }
      return (v87 << 32) | v91;
    case 0x4C:
      v82 = *(_QWORD *)(a1 + 32);
      if ( v82 )
      {
        v83 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 32));
        v84 = *(_DWORD *)(a1 + 16);
        if ( !v84 )
          v84 = sub_EC7AA0(v82, a2, a3);
      }
      else
      {
        v84 = 0;
        v83 = 0;
      }
      return (v83 << 32) | v84;
    case 0x4D:
      return *(_QWORD *)(a1 + 40);
    case 0x4E:
      return ((unsigned __int64)*(unsigned int *)(a1 + 20) << 32) | *(unsigned int *)(a1 + 20);
    case 0x50:
    case 0x57:
      return (sub_EC8400(*(_QWORD *)(a1 + 16)) << 32) | *(unsigned int *)(a1 + 32);
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      return *(_QWORD *)(a1 + 32);
    case 0x56:
      v71 = (unsigned int)sub_C70DF0(a1);
      return (v71 << 32) | (unsigned int)sub_C70DC0(a1);
    case 0x58:
      return *(_QWORD *)(a1 + 32);
    case 0x59:
    case 0x5C:
    case 0x5D:
      v74 = *(unsigned int *)(a1 + 20);
      return (v74 << 32) | (unsigned int)sub_BD3030(a1);
    case 0x5A:
      v72 = *(unsigned int *)(a1 + 20);
      if ( (unsigned int)sub_C70E10(a1, a2, a3) == 1 )
        v73 = *(_DWORD *)(a1 + 20);
      else
        v73 = sub_EC7AA0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32), a2, a3);
      return (v72 << 32) | v73;
    case 0x5B:
      return sub_C70820(a1);
    case 0x5E:
      return *(_QWORD *)(a1 + 32);
    case 0x5F:
      if ( *(_DWORD *)(a1 + 28) || (v98 = *(_DWORD *)(a1 + 4)) == 0 )
        v99 = *(unsigned int *)(a1 + 28);
      else
        v99 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 8LL * (unsigned int)(v98 - 1) + 32));
      return (v99 << 32) | (unsigned int)sub_C717C0(a1);
    case 0x60:
      return *(_QWORD *)(a1 + 24);
    case 0x61:
      v95 = *(_QWORD *)(a1 + 16);
      v96 = *(_DWORD *)(a1 + 4);
      if ( v95 )
        v97 = sub_EC8400(v95);
      else
        v97 = v96;
      return (v97 << 32) | v96;
    case 0x62:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0x63:
      return sub_EC8B80(*(_QWORD *)(a1 + 16));
    case 0x64:
      v94 = *(unsigned int *)(a1 + 4);
      return (v94 << 32) | (unsigned int)sub_C701E0(a1);
    case 0x65:
      sub_C6FDE0((__int64)&v126, a1);
      v93 = (unsigned int)sub_EC8400(v127);
      return (v93 << 32) | (unsigned int)sub_EC7AA0(v126.m128_u64[1], a1, a3);
    case 0x66:
      v92 = (unsigned int)sub_C70400(a1);
      return (v92 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
    case 0x67:
      return *(_QWORD *)(a1 + 28);
    case 0x68:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0x69:
      return *(_QWORD *)(a1 + 24);
    case 0x6A:
      return *(_QWORD *)(a1 + 40);
    case 0x6B:
      return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | *(unsigned int *)(a1 + 24);
    case 0x6C:
      v78 = *(unsigned int *)(a1 + 24);
      if ( !(_DWORD)v78 )
      {
        v79 = *(_DWORD **)(a1 + 40);
        if ( v79 && (*v79 & 0x4000) != 0 )
          v78 = *(unsigned int *)(a1 + 20);
        else
          v78 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 48));
      }
      v80 = *(_DWORD *)(a1 + 16);
      if ( !v80 )
      {
        v81 = *(_DWORD **)(a1 + 40);
        if ( v81 && (*v81 & 0x4000) != 0 )
          v80 = sub_EC7AA0((unsigned __int64)v81, a2, a3);
        else
          v80 = *(_DWORD *)(a1 + 20);
      }
      return (v78 << 32) | v80;
    case 0x6D:
      if ( (*(_QWORD *)a1 & 0x100000LL) != 0 && *(_DWORD *)(a1 + 72) )
      {
        v75 = *(unsigned int *)(a1 + 76);
      }
      else
      {
        v114 = sub_B61CD0(a1 + 48);
        v75 = v114;
        if ( !v114 )
          v75 = *(unsigned int *)(a1 + 56);
      }
      v76 = *(_QWORD *)(a1 + 16);
      if ( !v76 || (unsigned __int8)sub_BDA5C0(v76) )
      {
        v115.m128_u64[0] = *(_QWORD *)(a1 + 32);
        if ( v115.m128_u64[0] )
        {
          v115.m128_u64[1] = *(_QWORD *)(a1 + 40);
          v126 = v115;
          v115.m128_u64[0] = *(_QWORD *)(v115.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v115.m128_u64[0] )
          {
            v126.m128_u64[0] = v115.m128_u64[0];
            v116 = 0;
            while ( (*(_QWORD *)(v115.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v116 = 1;
              v115.m128_u64[0] = *(_QWORD *)(v115.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v116 )
              v126.m128_u64[0] = v115.m128_u64[0];
          }
          v77 = sub_E6C7F0((__int64 *)&v126);
        }
        else
        {
          v77 = *(_DWORD *)(a1 + 56);
        }
      }
      else
      {
        v77 = sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
      }
      return (v75 << 32) | v77;
    case 0x6E:
    case 0x84:
      return (sub_EC8400(*(_QWORD *)(a1 + 24)) << 32) | *(unsigned int *)(a1 + 4);
    case 0x6F:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0x71:
      v53 = (unsigned int)sub_C70750(a1);
      return (v53 << 32) | (unsigned int)sub_C70710(a1);
    case 0x72:
      v52 = (unsigned int)sub_C71070((__int16 *)a1);
      return (v52 << 32) | (unsigned int)sub_C71040(a1);
    case 0x73:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0x74:
      v50 = *(_QWORD *)(a1 + 24);
      v51 = (unsigned int)sub_EC8400(v50);
      return (v51 << 32) | (unsigned int)sub_EC7AA0(v50, a2, a3);
    case 0x75:
      v48 = sub_BD7590(a1);
      v49 = (unsigned int)sub_EC8400(v48);
      return (v49 << 32) | (unsigned int)sub_BD7580(a1);
    case 0x76:
    case 0x77:
      v47 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 24));
      return (v47 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 16), a2, a3);
    case 0x78:
      return *(_QWORD *)(a1 + 76);
    case 0x79:
      return *(_QWORD *)(a1 + 24);
    case 0x7A:
      return *(_QWORD *)(a1 + 32);
    case 0x7C:
      v63 = *(unsigned int *)(a1 + 64);
      return (v63 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
    case 0x7D:
      v59 = *(_QWORD *)(a1 + 16);
      v60 = *(_QWORD *)(v59 + 16);
      if ( v60 )
      {
        v61 = (unsigned int)sub_EC8400(*(_QWORD *)(v59 + 16));
        v62 = sub_EC7AA0(v60, a2, a3);
      }
      else
      {
        v62 = *(_DWORD *)(v59 + 4);
        v61 = v62;
      }
      return (v61 << 32) | v62;
    case 0x7F:
      return *(_QWORD *)(a1 + 16);
    case 0x80:
      v58 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 40));
      return (v58 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
    case 0x81:
      v57 = (unsigned int)sub_EC8400(*(_QWORD *)(a1 + 48));
      return (v57 << 32) | (unsigned int)sub_EC7AA0(*(_QWORD *)(a1 + 24), a2, a3);
    case 0x82:
      return (sub_EC8400(*(_QWORD *)(a1 + 8)) << 32) | *(unsigned int *)(a1 + 4);
    case 0x83:
      v65 = *(_QWORD *)a1;
      v66 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 8LL * (((v66 & 0x200) != 0) + (unsigned int)((v66 & 0x400) != 0) + 1) + 24) )
        v67 = sub_EC8400(*(_QWORD *)(a1 + 8LL * (((v66 & 0x200) != 0) + (unsigned int)((v65 & 0x400) != 0) + 1) + 24));
      else
        v67 = sub_EC8400(*(_QWORD *)(a1 + 8LL * (((v66 & 0x200) != 0) + ((v65 & 0x400) != 0)) + 24));
      return (v67 << 32) | *(unsigned int *)(a1 + 4);
    case 0x85:
      for ( i = (_QWORD *)a1;
            (*(_WORD *)i[(unsigned int)((*i & 0x200) != 0) + 4] & 0x1FF) == 0x85;
            i = (_QWORD *)i[(unsigned int)((*i & 0x200) != 0) + 4] )
      {
        ;
      }
      return (sub_EC8400(i[(unsigned int)((*i & 0x200) != 0) + 4]) << 32) | *(unsigned int *)(a1 + 4);
    case 0x86:
      return sub_EC8B80(*(_QWORD *)(a1 + 8));
    case 0x87:
      return (sub_EC8400(*(_QWORD *)(a1 + 24)) << 32) | *(unsigned int *)(a1 + 12);
    case 0x88:
      return ((unsigned __int64)*(unsigned int *)(a1 + 8) << 32) | *(unsigned int *)(a1 + 8);
    case 0x89:
    case 0x9B:
    case 0x9F:
      return (sub_EC8400(*(_QWORD *)(a1 + 16)) << 32) | *(unsigned int *)(a1 + 8);
    case 0x8A:
      return ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL) << 32) | *(unsigned int *)(a1 + 8);
    case 0x8B:
      v68 = *(_DWORD *)(a1 + 4);
      v69 = *(_QWORD *)(a1 + 8);
      v70 = v68;
      if ( v69 )
        v70 = sub_EC8400(v69);
      return (v70 << 32) | v68;
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xAE:
    case 0xAF:
    case 0xB0:
    case 0xB1:
    case 0xB2:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
    case 0xD4:
    case 0xD5:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xD9:
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDD:
    case 0xDE:
    case 0xDF:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEB:
    case 0xEC:
      return *(_QWORD *)(a1 + 12);
    case 0x9A:
      return (sub_EC8400(*(_QWORD *)(a1 + 24)) << 32) | *(unsigned int *)(a1 + 32);
    case 0x9C:
      return (sub_ECEE90(a1) << 32) | *(unsigned int *)(a1 + 8);
    case 0x9D:
      v103 = *(_DWORD *)(a1 + 8);
      v104 = *(_QWORD *)(a1 + 16);
      v105 = v103;
      if ( v104 )
        v105 = sub_EC8400(v104);
      return (v105 << 32) | v103;
    case 0x9E:
      return ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL) << 32) | *(unsigned int *)(a1 + 8);
    case 0xED:
      v55 = *(_QWORD *)(a1 + 8);
      v56 = (unsigned int)sub_EC8400(v55);
      return (v56 << 32) | (unsigned int)sub_EC7AA0(v55, a2, a3);
    case 0xEE:
    case 0xF8:
    case 0xFE:
      return ((unsigned __int64)*(unsigned int *)(a1 + 4) << 32) | *(unsigned int *)(a1 + 4);
    case 0xEF:
      return (sub_EC8400(*(_QWORD *)(a1 + 56)) << 32) | *(unsigned int *)(a1 + 8);
    case 0xF1:
      v106 = *(_QWORD *)a1;
      if ( (*(_QWORD *)a1 & 0x1000LL) == 0
        || (v107 = *(_QWORD *)(a1 + 8LL * (((v106 & 0x4000) != 0) + (unsigned int)((v106 & 0x2000) != 0) + 2) + 16)) == 0 )
      {
        v107 = *(_QWORD *)(a1 + 8LL * (((v106 & 0x4000) != 0) + (unsigned int)((v106 & 0x2000) != 0) + 1) + 16);
      }
      return (sub_EC8400(v107) << 32) | *(unsigned int *)(a1 + 4);
    case 0xF2:
      return ((unsigned __int64)*(unsigned int *)(a1 + 16) << 32) | *(unsigned int *)(a1 + 4);
    case 0xF3:
      return (sub_EC8400(*(_QWORD *)(a1 + 40)) << 32) | *(unsigned int *)(a1 + 4);
    case 0xF4:
      return ((unsigned __int64)*(unsigned int *)(a1 + 28) << 32) | *(unsigned int *)(a1 + 4);
    case 0xF5:
      return *(_QWORD *)(a1 + 16);
    case 0xF6:
      v108 = *(_QWORD *)(a1 + 16);
      if ( v108 )
      {
        v109 = *(unsigned int *)(v108 + 12);
LABEL_239:
        v110 = *(_DWORD *)(v108 + 8);
        return (v109 << 32) | v110;
      }
      v109 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 32;
      v108 = *(_QWORD *)(a1 + 16);
      if ( v108 )
        goto LABEL_239;
      v110 = sub_B4F350(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
      return (v109 << 32) | v110;
    case 0xF7:
      v111 = *(_DWORD *)(a1 + 8);
      v112 = *(_QWORD *)(a1 + 16);
      v113 = v111;
      if ( v112 )
        v113 = sub_EC8400(v112);
      return (v113 << 32) | v111;
    case 0xF9:
      return *(_QWORD *)(a1 + 8);
    case 0xFA:
      return sub_EC8B80(*(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 8) + 32));
    case 0xFB:
      return (sub_EC8400(*(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 12) + 16)) << 32) | *(unsigned int *)(a1 + 8);
    case 0xFC:
      return (sub_EC8400(*(_QWORD *)(a1 + 64)) << 32) | *(unsigned int *)(a1 + 72);
    case 0xFD:
      return (sub_EC8400(*(_QWORD *)(a1 + 24)) << 32) | *(unsigned int *)(a1 + 8);
    case 0xFF:
      return ((unsigned __int64)*(unsigned int *)(a1 + 44) << 32) | *(unsigned int *)(a1 + 8);
  }
}

