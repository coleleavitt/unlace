/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FDB0
// Address: 0x0001FDB0

//----- (0001FDB0) --------------------------------------------------------
int __fastcall sub_1FDB0(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r5
  _DWORD *v5; // r0
  __int16 v6; // r5
  __pid_t v7; // r6
  _DWORD *v8; // r4
  __pid_t v9; // r1
  _DWORD *v10; // r2
  int v11; // r0
  int v12; // r3
  int v14; // r1
  int v15; // r3
  unsigned int v16; // r1
  int v17; // r3
  _DWORD *v18; // r0
  int v19; // r4
  __pid_t v20; // r1
  _DWORD *v21; // r2
  _DWORD *v22; // r2
  int v23; // r1
  _DWORD *v24; // r0
  int v25; // r3
  _DWORD *v26; // r4
  int v27; // r2
  int v28; // r0
  int v29; // r5
  int v30; // r0
  _BYTE *v31; // r4
  int v32; // r5
  _DWORD *v33; // r1
  int v34; // r0
  const char *v35; // r3
  const char *v36; // r2
  _DWORD *v37; // r1
  int v38; // r2
  int v39; // r0
  unsigned int v40; // r5
  int v41; // r0
  unsigned int v42; // r0
  double v43; // r2
  int v44; // r0
  int v45; // r0
  int v46; // r4
  unsigned int v47; // r0
  double v48; // r2
  _DWORD *v49; // r1
  _DWORD *v50; // r0
  __pid_t v51; // r2
  _DWORD *v52; // r3
  _DWORD *v53; // r1
  int v54; // r7
  _DWORD *v55; // r2
  unsigned int v56; // r3
  _DWORD *v57; // r4
  _DWORD *v58; // r0
  int v59; // r2
  _DWORD *v60; // r1
  int v61; // r2
  int v62; // r0
  _DWORD *v63; // r1
  _DWORD *v64; // r0
  __pid_t v65; // r2
  _DWORD *v66; // r3
  _BOOL4 v67; // r0
  _DWORD *v68; // r2
  _DWORD *v69; // r1
  unsigned int v70; // r3
  _DWORD *v71; // r4
  unsigned int v72; // [sp+14h] [bp-C4h]
  _DWORD *v73; // [sp+1Ch] [bp-BCh]
  int v74; // [sp+28h] [bp-B0h]
  int v75; // [sp+28h] [bp-B0h]
  int v76; // [sp+2Ch] [bp-ACh]
  int v77; // [sp+2Ch] [bp-ACh]
  int v78; // [sp+30h] [bp-A8h]
  int v79; // [sp+30h] [bp-A8h]
  _DWORD *v80; // [sp+34h] [bp-A4h]
  _DWORD *v81; // [sp+38h] [bp-A0h]
  char v83[4]; // [sp+44h] [bp-94h] BYREF
  __pid_t v84; // [sp+48h] [bp-90h] BYREF
  int v85; // [sp+4Ch] [bp-8Ch]
  int v86; // [sp+50h] [bp-88h]
  _DWORD v87[32]; // [sp+54h] [bp-84h] BYREF

  v3 = (int)a1;
  v4 = 0;
  v84 = 0;
  v86 = a3;
  v85 = 0;
  v83[0] = 0;
  if ( !sub_1FCB0(a1, &v84, v83) )
    return v4;
  v5 = *(_DWORD **)(v3 + 916);
  v6 = v85;
  v7 = v84;
  if ( v5 )
  {
    v8 = (_DWORD *)(v3 + 916);
    do
    {
      v9 = v5[4];
      if ( v9 >= v84 )
        v8 = v5;
      v10 = v5 + 1;
      if ( v9 >= v84 )
        v10 = v5;
      v5 = (_DWORD *)*v10;
    }
    while ( *v10 );
    if ( v8 != (_DWORD *)(v3 + 916) && v8[4] <= v84 )
    {
      v81 = (_DWORD *)(v3 + 916);
      if ( v8[10] == 1 )
      {
        v76 = v85 & 0x7F;
        v14 = a2;
        if ( (v85 & 0x7F) != 0 && !*(_BYTE *)(v3 + 977) )
        {
          v15 = v85;
          if ( !((unsigned int)((v85 + 1) << 25) >> 26) )
          {
            if ( !under_debugger )
              interr(30057);
            goto LABEL_177;
          }
LABEL_23:
          *(_DWORD *)(v14 + 4) = 0;
          v8[10] = 1;
          v74 = v15;
          if ( (v15 & 0xFF7F) == 0xB7F )
          {
            if ( *(_DWORD *)(v3 + 984) )
            {
              memset(v87, 0, sizeof(v87));
              ptrace(PTRACE_GETSIGINFO, v7, 0, v87);
              if ( v87[2] >= 1 )
              {
                v4 = 0;
                v16 = ptrace(PTRACE_PEEKUSER, v7, 60, 0);
                if ( *(_DWORD *)(v3 + 984) )
                {
                  if ( rangeset_t_find_range(v3 + 980, v16) )
                  {
                    v8[10] = 0;
                    v8[8] = 0;
                    ptrace(PTRACE_CONT, v7, 0, 11);
                    return v4;
                  }
                }
              }
            }
          }
          sub_1CD58(v3, 0, 1);
          v17 = v3;
          *(_BYTE *)(v3 + 1020) = 0;
          if ( v83[0] )
            goto LABEL_40;
          v80 = (_DWORD *)v3;
          v18 = (_DWORD *)*v81;
          if ( !*v81 )
            goto LABEL_39;
          v19 = v3 + 916;
          do
          {
            v20 = v18[4];
            if ( v20 >= v7 )
              v19 = (int)v18;
            v21 = v18 + 1;
            if ( v20 >= v7 )
              v21 = v18;
            v18 = (_DWORD *)*v21;
          }
          while ( *v21 );
          if ( (_DWORD *)v19 == v81 || *(_DWORD *)(v19 + 16) > v7 )
          {
LABEL_39:
            sub_64B30(v3, "thread %d disappeared after freezing?!...\n");
            v17 = v3;
            goto LABEL_40;
          }
          *(_DWORD *)a2 = *(_DWORD *)(v3 + 968);
          *(_DWORD *)(a2 + 4) = v7;
          v73 = (_DWORD *)(v19 + 20);
          if ( *(_BYTE *)(v3 + 977) )
          {
            *(_DWORD *)(a2 + 8) = -1;
            v27 = a2;
          }
          else
          {
            if ( (unsigned int)((v74 + 1) << 25) >> 26 )
            {
              ptrace(PTRACE_GETSIGINFO, v7, 0, v87);
              v28 = v87[3];
            }
            else
            {
              v28 = ptrace(PTRACE_PEEKUSER, v7, 60, 0);
            }
            v27 = a2;
            *(_DWORD *)(a2 + 8) = v28;
          }
          *(_BYTE *)(v27 + 12) = 0;
          if ( v76 == 127 )
          {
            set_debug_event_code(v27, 7);
            v29 = BYTE1(v74);
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 7 )
              goto LABEL_171;
            *(_BYTE *)(a2 + 24) = 1;
            *(_DWORD *)(a2 + 20) = BYTE1(v74);
            *(_DWORD *)(a2 + 28) = -1;
            if ( BYTE1(v74) == 19 )
            {
              v30 = *(unsigned __int8 *)(v19 + 44);
              v31 = (_BYTE *)(v19 + 44);
              if ( v30 )
              {
                *v31 = 0;
                v4 = 0;
                goto LABEL_63;
              }
            }
            v33 = (_DWORD *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 28))(v3, BYTE1(v74));
            v34 = a2 + 32;
            v75 = (int)v33;
            if ( v33 )
            {
              v35 = &byte_B3CBE;
              v36 = &byte_B3CBE;
              if ( v33[3] )
                v36 = (const char *)v33[2];
              if ( v33[6] )
                v35 = (const char *)v33[5];
              sub_1DA58(v34, "got %s signal (%s)", v36, v35);
              if ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 236))(v3, a2, v75) )
              {
                v37 = (_DWORD *)a2;
                v38 = 1;
              }
              else
              {
                v38 = 0;
                if ( (*(_BYTE *)(v75 + 4) & 2) != 0 )
                  v29 = 0;
                v37 = (_DWORD *)a2;
              }
            }
            else
            {
              sub_1DA58(v34, "got unknown signal #%d", v29);
              v37 = (_DWORD *)a2;
              v38 = 1;
            }
            if ( (v37[4] & 0xFFFFFFF) != 7 )
            {
LABEL_171:
              if ( !under_debugger )
                interr(3299);
              goto LABEL_177;
            }
            v77 = v29;
            if ( (v37[5] & 0xFFFFFFFE) != 4 || (v40 = v37[2], v40 == -1) )
            {
LABEL_143:
              v63 = (_DWORD *)*v81;
              if ( !*v81 )
              {
LABEL_50:
                copy_debug_event(v3 + 80, a2);
                return 1;
              }
              v79 = v38;
              v64 = v81;
              do
              {
                v65 = v63[4];
                if ( v65 >= v7 )
                  v64 = v63;
                v66 = v63 + 1;
                if ( v65 >= v7 )
                  v66 = v63;
                v63 = (_DWORD *)*v66;
              }
              while ( *v66 );
              v17 = v3;
              if ( v64 != v81 && v64[4] <= v7 )
              {
                v64[8] = v77;
                if ( *(_BYTE *)(v3 + 1021) )
                {
                  v17 = (int)v80;
                  if ( v79 )
                    goto LABEL_40;
                }
                else
                {
                  v4 = 0;
                  v67 = sub_66504(v80, a2, 0);
                  v17 = (int)v80;
                  if ( v79 | v67 )
                  {
                    if ( v67 )
                      return v4;
                    goto LABEL_40;
                  }
                }
                if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7 )
                {
                  v3 = v17;
                  sub_66DF4(v17, (_DWORD *)a2, v75);
                  v4 = 0;
                  goto LABEL_63;
                }
              }
LABEL_40:
              v22 = (_DWORD *)*v81;
              v3 = v17;
              if ( *v81 )
              {
                v23 = *(_DWORD *)(a2 + 4);
                v24 = v81;
                do
                {
                  v25 = v22[4];
                  if ( v25 >= v23 )
                    v24 = v22;
                  v26 = v22 + 1;
                  if ( v25 >= v23 )
                    v26 = v22;
                  v22 = (_DWORD *)*v26;
                }
                while ( *v26 );
                if ( v24 != v81 && v24[4] <= v23 )
                  *((_BYTE *)v24 + 36) = 0;
              }
              goto LABEL_50;
            }
            v41 = *(_DWORD *)(v3 + 824);
            v78 = v38;
            if ( v40 == v41 && v41 )
            {
              ptrace(PTRACE_GETREGS, v7, 0, v87);
              v87[15] = v87[14] & 0xFFFFFFFE;
              v42 = v87[16] & 0xFFFFFFDF;
              if ( v87[14] << 31 )
                v42 = v87[16] | 0x20;
              v87[16] = v42;
              v77 = 0;
              v4 = 0;
              if ( ptrace(PTRACE_SETREGS, v7, 0, v87) )
              {
                sub_1BBA0((int)"%a: could not return from the shlib breakpoint!\n", v43);
                return 1;
              }
              if ( !sub_1F2C8((_DWORD *)v3) )
              {
LABEL_63:
                if ( !*(_BYTE *)(v3 + 1021) && !*(_BYTE *)(v3 + 1022) )
                {
                  sub_2057C(v3, 0);
                  return v4;
                }
                set_debug_event_code(a2, 13);
                return 1;
              }
              goto LABEL_107;
            }
            v44 = *(_DWORD *)(v3 + 800);
            if ( v40 == v44 && v44 || (v45 = *(_DWORD *)(v3 + 812), v40 == v45) && v45 )
            {
              *(_DWORD *)(v3 + 972) = v7;
              v46 = *(_DWORD *)(v3 + 76);
              sub_1C4C4(v3);
              v77 = 0;
              ptrace(PTRACE_GETREGS, v7);
              v87[15] = v87[14] & 0xFFFFFFFE;
              v47 = v87[16] & 0xFFFFFFDF;
              if ( v87[14] << 31 )
                v47 = v87[16] | 0x20;
              v87[16] = v47;
              if ( ptrace(PTRACE_SETREGS, v7, 0, v87) )
              {
                sub_1BBA0((int)"%a: could not return from the thread breakpoint!\n", v48);
                return 1;
              }
              v4 = 0;
              if ( v46 == *(_DWORD *)(v3 + 76) )
                goto LABEL_63;
LABEL_107:
              set_debug_event_code(a2, 0);
LABEL_142:
              v38 = v78;
              goto LABEL_143;
            }
            if ( *(_DWORD *)(v3 + 1028) <= 1u )
            {
              sub_1F2C8((_DWORD *)v3);
              v49 = (_DWORD *)*v81;
              v73 = nullptr;
              if ( *v81 )
              {
                v50 = (_DWORD *)(v3 + 916);
                do
                {
                  v51 = v49[4];
                  if ( v51 >= v7 )
                    v50 = v49;
                  v52 = v49 + 1;
                  if ( v51 >= v7 )
                    v52 = v49;
                  v49 = (_DWORD *)*v52;
                }
                while ( *v52 );
                if ( v50 != v81 && v50[4] <= v7 )
                  v73 = v50 + 5;
              }
            }
            v53 = *(_DWORD **)(v3 + 228);
            v54 = v3 + 228;
            if ( !v53 )
              goto LABEL_180;
            v55 = (_DWORD *)v54;
            do
            {
              v56 = v53[4];
              if ( v56 >= v40 )
                v55 = v53;
              v57 = v53 + 1;
              if ( v56 >= v40 )
                v57 = v53;
              v53 = (_DWORD *)*v57;
            }
            while ( *v57 );
            if ( v55 == (_DWORD *)v54 || v40 < v55[4] )
              goto LABEL_180;
            v72 = v40;
            v58 = (_DWORD *)v80[46];
            v59 = v80[47];
            v60 = &v58[v59];
            if ( 4 * v59 )
            {
              v61 = 4 * v59;
              while ( v40 != *v58 )
              {
                v61 -= 4;
                ++v58;
                if ( !v61 )
                  goto LABEL_160;
              }
            }
            if ( v58 != v60 )
            {
LABEL_180:
              if ( v73 && *((_BYTE *)v73 + 16) )
              {
                set_debug_event_code(a2, 6);
                v62 = 0;
LABEL_141:
                v77 = v62;
                v3 = (int)v80;
                goto LABEL_142;
              }
              v3 = (int)v80;
              v38 = v78;
              if ( !v75 || (v77 = 0, (*(_BYTE *)(v75 + 4) & 2) == 0) )
              {
                if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7 )
                {
                  v62 = *(_DWORD *)(a2 + 20);
                  goto LABEL_141;
                }
                goto LABEL_171;
              }
              goto LABEL_143;
            }
LABEL_160:
            v68 = (_DWORD *)v80[251];
            if ( v68 )
            {
              v69 = v80 + 251;
              do
              {
                v70 = v68[4];
                if ( v70 >= v40 )
                  v69 = v68;
                v71 = v68 + 1;
                if ( v70 >= v40 )
                  v71 = v68;
                v68 = (_DWORD *)*v71;
              }
              while ( *v71 );
              v3 = (int)v80;
              v4 = 0;
              if ( v69 != v80 + 251 && v72 >= v69[4] )
                goto LABEL_63;
            }
            set_debug_event_code(a2, 5);
            if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 5 )
            {
              *(_DWORD *)(a2 + 20) = -1;
              *(_DWORD *)(a2 + 24) = -1;
              *(_DWORD *)(a2 + 8) = v72;
              v62 = 0;
              goto LABEL_141;
            }
            if ( !under_debugger )
              interr(3298);
          }
          else
          {
            if ( (unsigned int)((v74 + 1) << 25) >> 26 )
            {
              strsignal(v76);
              v32 = v3;
              sub_64B30(v3, "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n");
            }
            else
            {
              v76 = BYTE1(v74);
              v32 = v3;
            }
            if ( *(_DWORD *)(v32 + 920) >= 2u && *v73 != *(_DWORD *)(v3 + 968) )
            {
              free_debug_event((_DWORD *)a2);
              sub_1C868(v32, *(_DWORD *)(a2 + 4), 3);
              v17 = v32;
              goto LABEL_40;
            }
            set_debug_event_code(a2, 2);
            v39 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
            if ( v39 == 2 || v39 == 4 )
            {
              *(_DWORD *)(a2 + 20) = v76;
              *(_BYTE *)(v3 + 977) = 1;
              v17 = v3;
              goto LABEL_40;
            }
            if ( !under_debugger )
              interr(3296);
          }
LABEL_177:
          __debugbreak();
        }
      }
      else
      {
        v76 = v85 & 0x7F;
        v14 = a2;
      }
      v15 = v85;
      goto LABEL_23;
    }
  }
  sub_64B30(v3, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n");
  v11 = v6 & 0x7F;
  v12 = HIBYTE(v6);
  v4 = 0;
  if ( v11 != 127 )
    v12 = 0;
  ptrace(PTRACE_CONT, v7, 0, v12);
  return v4;
}
// 20232: variable 'v43' is possibly undefined
// 202A4: variable 'v48' is possibly undefined
// 19430: using guessed type int __fastcall strsignal(_DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
