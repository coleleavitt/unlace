/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FA98
// Address: 0x000000000003FA98

//----- (000000000003FA98) ----------------------------------------------------
__int64 __fastcall sub_3FA98(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // w1
  char v6; // w8
  __int64 result; // x0
  signed int v8; // w21
  int v9; // w23
  __int64 *v10; // x8
  __int64 *v11; // x28
  __int64 *v12; // x24
  __int64 v13; // x3
  int v14; // w22
  int v15; // w8
  unsigned __int64 v16; // x1
  __int64 v17; // x8
  __int64 v18; // x27
  __int64 v19; // x10
  int v20; // w9
  __int64 v21; // x8
  __int64 v22; // x8
  int v23; // w8
  __int64 v24; // x0
  int v25; // w24
  int *v26; // x29
  int v27; // w21
  int v28; // w23
  char *v29; // x0
  double v30; // d0
  __int64 v31; // x22
  __int64 v32; // x0
  const char *v33; // x2
  const char *v34; // x3
  int v35; // w8
  double v36; // d0
  int v37; // w27
  unsigned __int64 v38; // x23
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x24
  __int64 v43; // x0
  __int64 v44; // x0
  int v45; // w1
  __int64 v46; // x9
  __int64 v47; // x8
  int v48; // w0
  __int64 v49; // x9
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x9
  unsigned __int64 v53; // x11
  bool v54; // cf
  _BOOL4 v55; // w11
  __int64 v56; // x9
  __int64 v57; // x11
  _QWORD *v58; // x10
  __int64 v59; // x8
  __int64 v60; // x9
  unsigned __int64 v61; // x11
  _BOOL4 v62; // w11
  __int64 v63; // [xsp+10h] [xbp-350h]
  char v64[4]; // [xsp+24h] [xbp-33Ch] BYREF
  __int64 v65; // [xsp+28h] [xbp-338h] BYREF
  int v66; // [xsp+30h] [xbp-330h]
  _QWORD v67[2]; // [xsp+38h] [xbp-328h] BYREF
  _BYTE *v68; // [xsp+48h] [xbp-318h] BYREF
  __int64 v69; // [xsp+50h] [xbp-310h]
  _OWORD v70[8]; // [xsp+58h] [xbp-308h] BYREF
  _BYTE v71[272]; // [xsp+D8h] [xbp-288h] BYREF
  _BYTE v72[16]; // [xsp+1E8h] [xbp-178h] BYREF
  __int64 v73; // [xsp+1F8h] [xbp-168h]
  unsigned __int64 v74; // [xsp+2E8h] [xbp-78h]
  __int64 v75; // [xsp+2F8h] [xbp-68h]

  v75 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v66 = a3;
  v65 = 0;
  v64[0] = 0;
  v6 = sub_3F92C((_QWORD *)a1, (int *)&v65, v64);
  result = 0;
  if ( (v6 & 1) != 0 )
  {
    v8 = v65;
    v9 = HIDWORD(v65);
    v10 = *(__int64 **)(a1 + 1744);
    if ( !v10 )
      goto LABEL_9;
    v11 = (__int64 *)(a1 + 1744);
    v12 = (__int64 *)(a1 + 1744);
    do
    {
      if ( *((_DWORD *)v10 + 8) >= (int)v65 )
        v12 = v10;
      v10 = (__int64 *)v10[*((_DWORD *)v10 + 8) < (int)v65];
    }
    while ( v10 );
    if ( v12 == v11 || *((_DWORD *)v12 + 8) > (int)v65 )
    {
LABEL_9:
      sub_99D18(a1, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v65);
      if ( (~v9 & 0x7F) != 0 )
        v13 = 0;
      else
        v13 = BYTE1(v9);
      ptrace(PTRACE_CONT, (unsigned int)v8, 0, v13);
      return 0;
    }
    if ( *((_DWORD *)v12 + 15) == 1 )
    {
      v14 = BYTE4(v65) & 0x7F;
      if ( (v65 & 0x7F00000000LL) == 0 || *(_BYTE *)(a1 + 1853) || ((BYTE4(v65) + 1) & 0x7E) != 0 )
      {
LABEL_22:
        *(_DWORD *)(a2 + 4) = 0;
        *((_DWORD *)v12 + 15) = 1;
        if ( (v9 & 0xFF7F) != 0xB7F )
          goto LABEL_36;
        if ( !*(_QWORD *)(a1 + 1864) )
          goto LABEL_36;
        memset(v70, 0, sizeof(v70));
        ptrace(PTRACE_GETSIGINFO, (unsigned int)v8, 0, v70);
        if ( SDWORD2(v70[0]) < 1 )
          goto LABEL_36;
        v15 = dword_164020;
        v67[0] = v72;
        v67[1] = 272;
        if ( dword_164020 < 0 )
        {
          v68 = v71;
          v69 = 272;
          v15 = ptrace(PTRACE_GETREGSET, (unsigned int)v8, 1, &v68) == 0;
          dword_164020 = v15;
        }
        if ( v15 <= 0 )
        {
          v16 = -1;
          if ( !*(_QWORD *)(a1 + 1864) )
            goto LABEL_36;
        }
        else
        {
          if ( ptrace(PTRACE_GETREGSET, (unsigned int)v8, 1, v67) )
            v16 = -1;
          else
            v16 = v74;
          if ( !*(_QWORD *)(a1 + 1864) )
            goto LABEL_36;
        }
        if ( rangeset_t_find_range(a1 + 1856, v16) )
        {
          *((_DWORD *)v12 + 13) = 0;
          *((_DWORD *)v12 + 15) = 0;
          ptrace(PTRACE_CONT, (unsigned int)v8, 0, 11);
          return 0;
        }
LABEL_36:
        sub_3B6B4(a1, 0, 1);
        *(_BYTE *)(a1 + 1932) = 0;
        if ( v64[0] )
          goto LABEL_45;
        v17 = *v11;
        if ( !*v11 )
          goto LABEL_44;
        v18 = a1 + 1744;
        do
        {
          if ( *(_DWORD *)(v17 + 32) >= v8 )
            v18 = v17;
          v17 = *(_QWORD *)(v17 + 8LL * (*(_DWORD *)(v17 + 32) < v8));
        }
        while ( v17 );
        if ( (__int64 *)v18 == v11 || *(_DWORD *)(v18 + 32) > v8 )
        {
LABEL_44:
          sub_99D18(a1, "thread %d disappeared after freezing?!...\n", v8);
          goto LABEL_45;
        }
        *(_DWORD *)a2 = *(_DWORD *)(a1 + 1844);
        *(_DWORD *)(a2 + 4) = v8;
        if ( *(_BYTE *)(a1 + 1853) )
          goto LABEL_56;
        if ( ((v9 + 1) & 0x7E) != 0 )
        {
          ptrace(PTRACE_GETSIGINFO, (unsigned int)v8, 0, v72);
          v22 = v73;
        }
        else
        {
          v23 = dword_164020;
          v68 = v72;
          v69 = 272;
          if ( dword_164020 < 0 )
          {
            *(_QWORD *)&v70[0] = v71;
            *((_QWORD *)&v70[0] + 1) = 272;
            v23 = ptrace(PTRACE_GETREGSET, (unsigned int)v8, 1, v70) == 0;
            dword_164020 = v23;
          }
          if ( v23 <= 0 )
          {
LABEL_56:
            v22 = -1;
            goto LABEL_64;
          }
          v24 = ptrace(PTRACE_GETREGSET, (unsigned int)v8, 1, &v68);
          v22 = v74;
          if ( v24 )
            v22 = -1;
        }
LABEL_64:
        *(_QWORD *)(a2 + 8) = v22;
        *(_BYTE *)(a2 + 16) = 0;
        if ( v14 != 127 )
        {
          if ( (((_BYTE)v9 + 1) & 0x7E) != 0 )
          {
            v27 = *(_DWORD *)a2;
            v28 = *(_DWORD *)(a2 + 4);
            v29 = strsignal(v14);
            sub_99D18(a1, "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n", v27, v28, v29, v14, v30);
          }
          else
          {
            v14 = BYTE1(v9);
          }
          if ( *(_QWORD *)(a1 + 1752) < 2u || *(_DWORD *)(v18 + 40) == *(_DWORD *)(a1 + 1844) )
          {
            set_debug_event_code(a2, 2);
            v35 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
            if ( v35 != 2 && v35 != 4 )
            {
LABEL_178:
              if ( !under_debugger )
              {
                result = (__int64)interr(3296);
LABEL_180:
                if ( !under_debugger )
                  result = (__int64)interr(3298);
              }
LABEL_182:
              __break(1u);
              return sub_403B4(result, v5);
            }
            *(_DWORD *)(a2 + 24) = v14;
            *(_BYTE *)(a1 + 1853) = 1;
            v19 = *v11;
            if ( !*v11 )
              goto LABEL_53;
          }
          else
          {
            free_debug_event(a2);
            sub_3AFD0(a1, *(_DWORD *)(a2 + 4), 3);
            v19 = *v11;
            if ( !*v11 )
              goto LABEL_53;
          }
LABEL_46:
          v20 = *(_DWORD *)(a2 + 4);
          v21 = a1 + 1744;
          do
          {
            if ( *(_DWORD *)(v19 + 32) >= v20 )
              v21 = v19;
            v19 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 32) < v20));
          }
          while ( v19 );
          if ( (__int64 *)v21 != v11 && *(_DWORD *)(v21 + 32) <= v20 )
            *(_BYTE *)(v21 + 56) = 0;
          goto LABEL_53;
        }
        v63 = v18 + 40;
        set_debug_event_code(a2, 7);
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
          goto LABEL_176;
        v25 = BYTE1(v9);
        *(_DWORD *)(a2 + 24) = BYTE1(v9);
        v26 = (int *)(a2 + 24);
        *(_BYTE *)(a2 + 28) = 1;
        *(_QWORD *)(a2 + 32) = -1;
        if ( BYTE1(v9) == 19 && *(_BYTE *)(v18 + 64) )
        {
          *(_BYTE *)(v18 + 64) = 0;
          goto LABEL_69;
        }
        v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, BYTE1(v9));
        v32 = a2 + 40;
        if ( !v31 )
        {
          result = sub_3C748(v32, "got unknown signal #%d", BYTE1(v9));
          goto LABEL_91;
        }
        if ( *(_QWORD *)(v31 + 16) )
        {
          v33 = *(const char **)(v31 + 8);
          if ( *(_QWORD *)(v31 + 40) )
          {
LABEL_77:
            v34 = *(const char **)(v31 + 32);
            goto LABEL_90;
          }
        }
        else
        {
          v33 = &byte_F154B;
          if ( *(_QWORD *)(v31 + 40) )
            goto LABEL_77;
        }
        v34 = &byte_F154B;
LABEL_90:
        sub_3C748(v32, "got %s signal (%s)", v33, v34);
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a2, v31);
        if ( (result & 1) == 0 )
        {
          v37 = 0;
          if ( (*(_BYTE *)(v31 + 4) & 2) != 0 )
            v25 = 0;
LABEL_94:
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
          {
            if ( (*v26 & 0xFFFFFFFE) != 4 || (v38 = *(_QWORD *)(a2 + 8), v38 == -1) )
            {
LABEL_110:
              v46 = *v11;
              if ( !*v11 )
                goto LABEL_53;
LABEL_111:
              v47 = a1 + 1744;
              do
              {
                if ( *(_DWORD *)(v46 + 32) >= v8 )
                  v47 = v46;
                v46 = *(_QWORD *)(v46 + 8LL * (*(_DWORD *)(v46 + 32) < v8));
              }
              while ( v46 );
              if ( (__int64 *)v47 == v11 || *(_DWORD *)(v47 + 32) > v8 )
                goto LABEL_45;
              *(_DWORD *)(v47 + 52) = v25;
              if ( *(_BYTE *)(a1 + 1933) )
              {
                if ( (v37 & 1) != 0 )
                  goto LABEL_45;
              }
              else
              {
                v48 = sub_9C2A4(a1, a2, 0, v36);
                if ( ((v37 | v48) & 1) != 0 )
                {
                  if ( (v48 & 1) != 0 )
                    return 0;
                  goto LABEL_45;
                }
              }
              if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
              {
                sub_9CF58(a1, a2, v31);
                if ( *(_BYTE *)(a1 + 1933) )
                  goto LABEL_71;
LABEL_70:
                if ( *(_BYTE *)(a1 + 1934) )
                  goto LABEL_71;
                sub_404F0(a1, 0);
                return 0;
              }
LABEL_45:
              v19 = *v11;
              if ( *v11 )
                goto LABEL_46;
LABEL_53:
              copy_debug_event(a1 + 168, a2);
              return 1;
            }
            v39 = *(_QWORD *)(a1 + 1568);
            if ( v38 == v39 && v39 )
            {
              if ( !sub_403B4(result, v8) )
              {
                sub_39FA0((__int64)"%a: could not return from the shlib breakpoint!\n", v38);
                return 1;
              }
              if ( sub_3EB28((_QWORD *)a1) )
                goto LABEL_108;
              goto LABEL_69;
            }
            v40 = *(_QWORD *)(a1 + 1536);
            if ( v38 == v40 && v40 || (v41 = *(_QWORD *)(a1 + 1552), v38 == v41) && v41 )
            {
              v42 = *(_QWORD *)(a1 + 160);
              *(_DWORD *)(a1 + 1848) = v8;
              sub_3AB44(a1);
              if ( !sub_403B4(v43, v8) )
              {
                sub_39FA0((__int64)"%a: could not return from the thread breakpoint!\n", v38);
                return 1;
              }
              if ( v42 != *(_QWORD *)(a1 + 160) )
              {
LABEL_108:
                v44 = a2;
                v45 = 0;
LABEL_109:
                set_debug_event_code(v44, v45);
                v25 = 0;
                goto LABEL_110;
              }
LABEL_69:
              if ( *(_BYTE *)(a1 + 1933) )
              {
LABEL_71:
                set_debug_event_code(a2, 13);
                return 1;
              }
              goto LABEL_70;
            }
            if ( *(_QWORD *)(a1 + 1944) <= 1u )
            {
              result = sub_3EB28((_QWORD *)a1);
              v49 = *(_QWORD *)(a1 + 1744);
              if ( !v49 )
                goto LABEL_137;
              v50 = a1 + 1744;
              do
              {
                if ( *(_DWORD *)(v49 + 32) >= v8 )
                  v50 = v49;
                v49 = *(_QWORD *)(v49 + 8LL * (*(_DWORD *)(v49 + 32) < v8));
              }
              while ( v49 );
              if ( (__int64 *)v50 == v11 || *(_DWORD *)(v50 + 32) > v8 )
              {
LABEL_137:
                v63 = 0;
                v51 = *(_QWORD *)(a1 + 440);
                if ( !v51 )
                {
LABEL_155:
                  if ( v63 && *(_BYTE *)(v63 + 16) )
                  {
                    v45 = 6;
                    v44 = a2;
                    goto LABEL_109;
                  }
                  if ( v31 && (*(_BYTE *)(v31 + 4) & 2) != 0 )
                  {
                    v25 = 0;
                    v46 = *v11;
                    if ( !*v11 )
                      goto LABEL_53;
                    goto LABEL_111;
                  }
                  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
                  {
                    v25 = *v26;
                    v46 = *v11;
                    if ( !*v11 )
                      goto LABEL_53;
                    goto LABEL_111;
                  }
                  goto LABEL_176;
                }
LABEL_141:
                v52 = a1 + 440;
                do
                {
                  v53 = *(_QWORD *)(v51 + 32);
                  v54 = v53 >= v38;
                  v55 = v53 < v38;
                  if ( v54 )
                    v52 = v51;
                  v51 = *(_QWORD *)(v51 + 8LL * v55);
                }
                while ( v51 );
                if ( v52 != a1 + 440 && v38 >= *(_QWORD *)(v52 + 32) )
                {
                  v56 = 8LL * *(_QWORD *)(a1 + 360);
                  if ( v56 )
                  {
                    v57 = 8LL * *(_QWORD *)(a1 + 360);
                    v58 = *(_QWORD **)(a1 + 352);
                    while ( v38 != *v58 )
                    {
                      v57 -= 8;
                      ++v58;
                      if ( !v57 )
                        goto LABEL_165;
                    }
                  }
                  else
                  {
                    v58 = *(_QWORD **)(a1 + 352);
                  }
                  if ( v58 == (_QWORD *)(*(_QWORD *)(a1 + 352) + v56) )
                  {
LABEL_165:
                    v59 = *(_QWORD *)(a1 + 1904);
                    if ( v59 )
                    {
                      v60 = a1 + 1904;
                      do
                      {
                        v61 = *(_QWORD *)(v59 + 32);
                        v54 = v61 >= v38;
                        v62 = v61 < v38;
                        if ( v54 )
                          v60 = v59;
                        v59 = *(_QWORD *)(v59 + 8LL * v62);
                      }
                      while ( v59 );
                      if ( v60 != a1 + 1904 && v38 >= *(_QWORD *)(v60 + 32) )
                        goto LABEL_69;
                    }
                    set_debug_event_code(a2, 5);
                    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
                    {
                      v25 = 0;
                      *(_QWORD *)v26 = -1;
                      *(_QWORD *)(a2 + 32) = -1;
                      *(_QWORD *)(a2 + 8) = v38;
                      v46 = *v11;
                      if ( !*v11 )
                        goto LABEL_53;
                      goto LABEL_111;
                    }
                    goto LABEL_180;
                  }
                }
                goto LABEL_155;
              }
              v63 = v50 + 40;
            }
            v51 = *(_QWORD *)(a1 + 440);
            if ( !v51 )
              goto LABEL_155;
            goto LABEL_141;
          }
LABEL_176:
          if ( under_debugger )
            goto LABEL_182;
          result = (__int64)interr(3299);
          goto LABEL_178;
        }
LABEL_91:
        v37 = 1;
        goto LABEL_94;
      }
      if ( under_debugger )
        goto LABEL_182;
      interr(30057);
    }
    v14 = v9 & 0x7F;
    goto LABEL_22;
  }
  return result;
}
// 3FF10: variable 'v30' is possibly undefined
// 400CC: variable 'v43' is possibly undefined
// 40178: variable 'v36' is possibly undefined
// 403B1: variable 'result' is possibly undefined
// 403B1: variable 'v5' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 164020: using guessed type int dword_164020;
// 168DF0: using guessed type char under_debugger;
