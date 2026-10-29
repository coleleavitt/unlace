__int64 *__fastcall sub_219BCC0(__int64 *a1, __int64 a2, unsigned int **a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  __int32 v7; // ebp
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int *v19; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int32 v29; // esi
  unsigned int *v30; // rdi
  __int32 v31; // esi
  unsigned int *v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // edi
  unsigned int v35; // ecx
  __int32 v36; // r11d
  unsigned __int32 v37; // edi
  const char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  const char *v57; // rax
  char *v58; // rax
  unsigned __int64 v59; // [rsp+0h] [rbp-378h] BYREF
  char v60; // [rsp+8h] [rbp-370h]
  __m128i v61[2]; // [rsp+10h] [rbp-368h] BYREF
  __int16 v62; // [rsp+30h] [rbp-348h]
  __m128i v63[2]; // [rsp+40h] [rbp-338h] BYREF
  __int16 v64; // [rsp+60h] [rbp-318h]
  __m128i v65[3]; // [rsp+70h] [rbp-308h] BYREF
  __m128i v66[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  __int16 v67; // [rsp+C0h] [rbp-2B8h]
  __m128i v68[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  __int16 v69; // [rsp+F0h] [rbp-288h]
  __m128i v70[2]; // [rsp+100h] [rbp-278h] BYREF
  __int16 v71; // [rsp+120h] [rbp-258h]
  __m128i v72[3]; // [rsp+130h] [rbp-248h] BYREF
  __m128i v73[2]; // [rsp+160h] [rbp-218h] BYREF
  __int16 v74; // [rsp+180h] [rbp-1F8h]
  __m128i v75[2]; // [rsp+190h] [rbp-1E8h] BYREF
  __int16 v76; // [rsp+1B0h] [rbp-1C8h]
  __m128i v77[2]; // [rsp+1C0h] [rbp-1B8h] BYREF
  __int16 v78; // [rsp+1E0h] [rbp-198h]
  __m128i v79[2]; // [rsp+1F0h] [rbp-188h] BYREF
  __int16 v80; // [rsp+210h] [rbp-168h]
  __m128i v81[2]; // [rsp+220h] [rbp-158h] BYREF
  __int16 v82; // [rsp+240h] [rbp-138h]
  __m128i v83[3]; // [rsp+250h] [rbp-128h] BYREF
  __m128i v84[2]; // [rsp+280h] [rbp-F8h] BYREF
  __int16 v85; // [rsp+2A0h] [rbp-D8h]
  __m128i v86[3]; // [rsp+2B0h] [rbp-C8h] BYREF
  __m128i v87[2]; // [rsp+2E0h] [rbp-98h] BYREF
  __int16 v88; // [rsp+300h] [rbp-78h]
  __m128i v89[2]; // [rsp+310h] [rbp-68h] BYREF
  __int16 v90; // [rsp+330h] [rbp-48h]

  v7 = a5;
  if ( a4 <= 7 )
  {
    v9 = *a6 == 0;
    v87[0].m128i_i64[0] = (__int64)" cmdsize too small";
    v88 = 259;
    v85 = 257;
    if ( !v9 )
    {
      v84[0].m128i_i64[0] = (__int64)a6;
      LOBYTE(v85) = 3;
    }
    v81[0].m128i_i32[0] = a5;
    v82 = 265;
    v79[0].m128i_i64[0] = (__int64)"load command ";
    v80 = 259;
    sub_A41580(v83, v79, v81, 259, a5, (__int64)a6);
    sub_A41580(v86, v83, v84, v10, v11, v12);
    sub_A41580(v89, v86, v87, v13, v14, v15);
    sub_21967F0(a1, v89[0].m128i_i64, v16, v17);
    return a1;
  }
  v19 = *a3;
  if ( (unsigned __int64)v19 < sub_215DEC0(a2)
    || (v24 = sub_215DEC0(a2), v23 = (__int64)(v19 + 2), (unsigned __int64)(v19 + 2) > v22 + v24) )
  {
    v89[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
    v90 = 259;
    sub_21967F0(v87[0].m128i_i64, v89[0].m128i_i64, v22, v23);
    v60 |= 1u;
    v59 = 0;
    *a1 = v87[0].m128i_i64[0];
    goto LABEL_8;
  }
  v27 = *(unsigned int *)(a2 + 8);
  v28 = *(_QWORD *)v19;
  v29 = _byteswap_ulong(*v19);
  if ( (unsigned int)v27 <= 0x14 )
  {
    v50 = 1398784;
    if ( _bittest64(&v50, v27) )
      v28 = ((unsigned __int64)((HIDWORD(v28) << 8) & 0xFF0000
                              | HIBYTE(HIDWORD(v28))
                              | (HIDWORD(v28) << 24)
                              | (HIDWORD(v28) >> 8) & 0xFF00) << 32)
          | v29;
  }
  v30 = *a3;
  v31 = *(_DWORD *)(a2 + 52);
  v59 = v28;
  v60 &= ~1u;
  v32 = v30 + 2;
  v33 = (unsigned __int64)v30 + HIDWORD(v28);
  if ( (unsigned __int64)(v30 + 2) >= v33 )
  {
LABEL_81:
    *a1 = 0;
    goto LABEL_8;
  }
  if ( v33 < (unsigned __int64)(v30 + 3) )
  {
LABEL_82:
    v9 = *a6 == 0;
    v87[0].m128i_i64[0] = (__int64)" extends past end of command";
    v88 = 259;
    v85 = 257;
    if ( !v9 )
    {
      v84[0].m128i_i64[0] = (__int64)a6;
      LOBYTE(v85) = 3;
    }
    v38 = "flavor in ";
    goto LABEL_32;
  }
  LOBYTE(v25) = (((_DWORD)v27 - 14) & 0xFFFFFFFD) != 0;
  v34 = (v27 - 18) & 0xFFFFFFFD;
  LOBYTE(v34) = v34 != 0;
  v35 = v27 - 11;
  LOBYTE(v35) = v35 > 1;
  v26 = (v31 - 16777228) & 0xFEFFFFFF;
  v36 = 0;
  v25 = v35 & v34 & (unsigned int)v25;
  while ( 1 )
  {
    v27 = (unsigned __int64)(v32 + 2);
    v37 = _byteswap_ulong(*v32);
    if ( (_BYTE)v25 )
    {
      if ( v33 < v27 )
      {
LABEL_85:
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" extends past end of command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v38 = " count in ";
        goto LABEL_32;
      }
      v27 = v32[1];
      v37 = *v32;
    }
    else
    {
      if ( v33 < v27 )
        goto LABEL_85;
      v27 = _byteswap_ulong(v32[1]);
    }
    if ( v31 == 7 )
      break;
    if ( v31 == (_DWORD)&loc_1000007 )
    {
      switch ( v37 )
      {
        case 7u:
          if ( (_DWORD)v27 != 44 )
          {
            v27 = 257;
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v77[0].m128i_i32[0] = v36;
            v81[0].m128i_i64[0] = (__int64)" which is a x86_THREAD_STATE flavor in ";
            v82 = 259;
            v78 = 265;
            v57 = " count not x86_THREAD_STATE_COUNT for flavor number ";
LABEL_95:
            v73[0].m128i_i64[0] = (__int64)v57;
            v70[0].m128i_i32[0] = v7;
            v74 = 259;
            v71 = 265;
            v58 = "load command ";
LABEL_96:
            v68[0].m128i_i64[0] = (__int64)v58;
            v69 = 259;
LABEL_91:
            sub_A41580(v72, v68, v70, v27, v25, v26);
            sub_A41580(v75, v72, v73, v54, v55, v56);
            goto LABEL_33;
          }
          v32 += 46;
          if ( v33 < (unsigned __int64)v32 )
          {
            v9 = *a6 == 0;
            v87[0].m128i_i64[0] = (__int64)" command";
            v88 = 259;
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v38 = " x86_THREAD_STATE extends past end of command in ";
            goto LABEL_32;
          }
          break;
        case 8u:
          if ( (_DWORD)v27 != 133 )
          {
            v9 = *a6 == 0;
            v87[0].m128i_i64[0] = (__int64)" command";
            v88 = 259;
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v77[0].m128i_i32[0] = v36;
            v81[0].m128i_i64[0] = (__int64)" which is a x86_FLOAT_STATE flavor in ";
            v57 = " count not x86_FLOAT_STATE_COUNT for flavor number ";
            v82 = 259;
            v78 = 265;
            goto LABEL_95;
          }
          v32 += 135;
          if ( v33 < (unsigned __int64)v32 )
          {
            v9 = *a6 == 0;
            v87[0].m128i_i64[0] = (__int64)" command";
            v88 = 259;
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v38 = " x86_FLOAT_STATE extends past end of command in ";
            goto LABEL_32;
          }
          break;
        case 9u:
          if ( (_DWORD)v27 != 6 )
          {
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v77[0].m128i_i32[0] = v36;
            v81[0].m128i_i64[0] = (__int64)" which is a x86_EXCEPTION_STATE flavor in ";
            v57 = " count not x86_EXCEPTION_STATE_COUNT for flavor number ";
            v82 = 259;
            v78 = 265;
            goto LABEL_95;
          }
          v32 += 8;
          if ( v33 < (unsigned __int64)v32 )
          {
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v38 = " x86_EXCEPTION_STATE extends past end of command in ";
            goto LABEL_32;
          }
          break;
        case 4u:
          if ( (_DWORD)v27 != 42 )
          {
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v77[0].m128i_i32[0] = v36;
            v81[0].m128i_i64[0] = (__int64)" which is a x86_THREAD_STATE64 flavor in ";
            v57 = " count not x86_THREAD_STATE64_COUNT for flavor number ";
            v82 = 259;
            v78 = 265;
            goto LABEL_95;
          }
          v32 += 44;
          if ( v33 < (unsigned __int64)v32 )
          {
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v38 = " x86_THREAD_STATE64 extends past end of command in ";
            goto LABEL_32;
          }
          break;
        case 6u:
          if ( (_DWORD)v27 != 4 )
          {
            v25 = 259;
            v26 = 257;
            v9 = *a6 == 0;
            v87[0].m128i_i64[0] = (__int64)" command";
            v88 = 259;
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v77[0].m128i_i32[0] = v36;
            v81[0].m128i_i64[0] = (__int64)" which is a x86_EXCEPTION_STATE64 flavor in ";
            v57 = " count not x86_EXCEPTION_STATE64_COUNT for flavor number ";
            v82 = 259;
            v78 = 265;
            goto LABEL_95;
          }
          v32 += 6;
          if ( v33 < (unsigned __int64)v32 )
          {
            v27 = 257;
            v9 = *a6 == 0;
            v88 = 259;
            v87[0].m128i_i64[0] = (__int64)" command";
            v85 = 257;
            if ( !v9 )
            {
              v84[0].m128i_i64[0] = (__int64)a6;
              LOBYTE(v85) = 3;
            }
            v38 = " x86_EXCEPTION_STATE64 extends past end of command in ";
            goto LABEL_32;
          }
          break;
        default:
          goto LABEL_88;
      }
    }
    else if ( v31 == 12 )
    {
      if ( v37 != 1 )
        goto LABEL_88;
      if ( (_DWORD)v27 != 17 )
      {
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v77[0].m128i_i32[0] = v36;
        v81[0].m128i_i64[0] = (__int64)" which is a ARM_THREAD_STATE flavor in ";
        v82 = 259;
        v78 = 265;
        v57 = " count not ARM_THREAD_STATE_COUNT for flavor number ";
        goto LABEL_95;
      }
      v32 += 19;
      if ( v33 < (unsigned __int64)v32 )
      {
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v38 = " ARM_THREAD_STATE extends past end of command in ";
        goto LABEL_32;
      }
    }
    else if ( (_DWORD)v26 )
    {
      if ( v31 != 18 )
      {
        v26 = 259;
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command can't be checked";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v27 = 265;
        v25 = 265;
        v82 = 259;
        v81[0].m128i_i64[0] = (__int64)" for ";
        v73[0].m128i_i64[0] = (__int64)") load command ";
        v58 = "unknown cputype (";
        v78 = 265;
        v77[0].m128i_i32[0] = v7;
        v74 = 259;
        v71 = 265;
        v70[0].m128i_i32[0] = v31;
        goto LABEL_96;
      }
      if ( v37 != 1 )
      {
LABEL_88:
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( *a6 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v70[0].m128i_i32[0] = v37;
        v63[0].m128i_i32[0] = v7;
        v81[0].m128i_i64[0] = (__int64)" in ";
        v73[0].m128i_i64[0] = (__int64)") for flavor number ";
        v66[0].m128i_i64[0] = (__int64)" unknown flavor (";
        v67 = 259;
        v82 = 259;
        v64 = 265;
        v61[0].m128i_i64[0] = (__int64)"load command ";
        v77[0].m128i_i32[0] = v36;
        v62 = 259;
        v78 = 265;
        v74 = 259;
        v71 = 265;
        sub_A41580(v65, v61, v63, v27, v25, v26);
        sub_A41580(v68, v65, v66, v51, v52, v53);
        goto LABEL_91;
      }
      if ( (_DWORD)v27 != 40 )
      {
        v25 = 257;
        v9 = *a6 == 0;
        v88 = 259;
        v87[0].m128i_i64[0] = (__int64)" command";
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v27 = 259;
        v77[0].m128i_i32[0] = v36;
        v81[0].m128i_i64[0] = (__int64)" which is a PPC_THREAD_STATE flavor in ";
        v57 = " count not PPC_THREAD_STATE_COUNT for flavor number ";
        v82 = 259;
        v78 = 265;
        goto LABEL_95;
      }
      v32 += 42;
      if ( v33 < (unsigned __int64)v32 )
      {
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v38 = " PPC_THREAD_STATE extends past end of command in ";
        goto LABEL_32;
      }
    }
    else
    {
      if ( v37 != 6 )
        goto LABEL_88;
      if ( (_DWORD)v27 != 68 )
      {
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v77[0].m128i_i32[0] = v36;
        v81[0].m128i_i64[0] = (__int64)" which is a ARM_THREAD_STATE64 flavor in ";
        v57 = " count not ARM_THREAD_STATE64_COUNT for flavor number ";
        v82 = 259;
        v78 = 265;
        goto LABEL_95;
      }
      v32 += 70;
      if ( v33 < (unsigned __int64)v32 )
      {
        v26 = 259;
        v9 = *a6 == 0;
        v87[0].m128i_i64[0] = (__int64)" command";
        v88 = 259;
        v85 = 257;
        if ( !v9 )
        {
          v84[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v85) = 3;
        }
        v38 = " ARM_THREAD_STATE64 extends past end of command in ";
        goto LABEL_32;
      }
    }
LABEL_20:
    ++v36;
    if ( v33 <= (unsigned __int64)v32 )
      goto LABEL_81;
    v27 = (unsigned __int64)(v32 + 1);
    if ( v33 < (unsigned __int64)(v32 + 1) )
      goto LABEL_82;
  }
  if ( v37 != 1 )
    goto LABEL_88;
  if ( (_DWORD)v27 != 16 )
  {
    v9 = *a6 == 0;
    v87[0].m128i_i64[0] = (__int64)" command";
    v88 = 259;
    v85 = 257;
    if ( !v9 )
    {
      v84[0].m128i_i64[0] = (__int64)a6;
      LOBYTE(v85) = 3;
    }
    v25 = 259;
    v26 = 265;
    v77[0].m128i_i32[0] = v36;
    v82 = 259;
    v78 = 265;
    v81[0].m128i_i64[0] = (__int64)" which is a x86_THREAD_STATE32 flavor in ";
    v57 = " count not x86_THREAD_STATE32_COUNT for flavor number ";
    goto LABEL_95;
  }
  v32 += 18;
  if ( v33 >= (unsigned __int64)v32 )
    goto LABEL_20;
  v9 = *a6 == 0;
  v88 = 259;
  v87[0].m128i_i64[0] = (__int64)" command";
  v85 = 257;
  if ( !v9 )
  {
    v84[0].m128i_i64[0] = (__int64)a6;
    LOBYTE(v85) = 3;
  }
  v38 = " x86_THREAD_STATE32 extends past end of command in ";
LABEL_32:
  v81[0].m128i_i64[0] = (__int64)v38;
  v75[0].m128i_i64[0] = (__int64)"load command ";
  v77[0].m128i_i32[0] = v7;
  v82 = 259;
  v78 = 265;
  v76 = 259;
LABEL_33:
  sub_A41580(v79, v75, v77, v27, v25, v26);
  sub_A41580(v83, v79, v81, v39, v40, v41);
  sub_A41580(v86, v83, v84, v42, v43, v44);
  sub_A41580(v89, v86, v87, v45, v46, v47);
  sub_21967F0(a1, v89[0].m128i_i64, v48, v49);
LABEL_8:
  sub_219BCA0((__int64 *)&v59);
  return a1;
}
