/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F370
// Address: 0x000000000003F370

//----- (000000000003F370) ----------------------------------------------------
__int64 __fastcall sub_3F370(unsigned __int64 a1, __int64 a2, int a3, double a4, __m128 a5)
{
  unsigned int v7; // r15d
  signed int v8; // ebp
  __int16 v9; // dx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r12
  unsigned __int64 *v12; // rbx
  __int16 v13; // bx
  __int64 v14; // rcx
  __int16 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int16 v19; // dx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rcx
  char *v26; // rax
  int v27; // ebx
  _QWORD *v28; // rax
  _QWORD *v29; // r15
  __int64 v30; // rdi
  const char *v31; // rcx
  const char *v32; // rdx
  char v33; // si
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rsi
  _QWORD *v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rbx
  unsigned __int64 v50; // rax
  bool v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  int v54; // [rsp+14h] [rbp-F4h]
  char v55; // [rsp+14h] [rbp-F4h]
  int sig; // [rsp+18h] [rbp-F0h]
  int siga; // [rsp+18h] [rbp-F0h]
  int sigb[2]; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v59; // [rsp+20h] [rbp-E8h]
  int v60; // [rsp+20h] [rbp-E8h]
  int *v61; // [rsp+30h] [rbp-D8h]
  char v62; // [rsp+3Fh] [rbp-C9h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C8h] BYREF
  int v64; // [rsp+48h] [rbp-C0h]
  __int128 v65; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v66; // [rsp+60h] [rbp-A8h]
  __int128 v67; // [rsp+70h] [rbp-98h]
  __int128 v68; // [rsp+80h] [rbp-88h]
  __int128 v69; // [rsp+90h] [rbp-78h]
  __int128 v70; // [rsp+A0h] [rbp-68h]
  __int128 v71; // [rsp+B0h] [rbp-58h]
  __int128 v72; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v73; // [rsp+D0h] [rbp-38h]

  v73 = __readfsqword(0x28u);
  v64 = a3;
  v63 = 0;
  v62 = 0;
  v7 = 0;
  if ( !sub_3F1F0((_QWORD *)a1, (unsigned int *)&v63, &v62) )
    return v7;
  v8 = v63;
  v9 = WORD2(v63);
  v10 = *(unsigned __int64 **)(a1 + 1040);
  if ( v10 )
  {
    v11 = (unsigned __int64 *)(a1 + 1040);
    v12 = (unsigned __int64 *)(a1 + 1040);
    do
    {
      if ( *((_DWORD *)v10 + 8) >= (int)v63 )
        v12 = v10;
      v10 = (unsigned __int64 *)v10[*((_DWORD *)v10 + 8) < (int)v63];
    }
    while ( v10 );
    if ( v12 != v11 && *((_DWORD *)v12 + 8) <= (int)v63 )
    {
      if ( *((_DWORD *)v12 + 15) == 1 )
      {
        sig = BYTE4(v63) & 0x7F;
        if ( (v63 & 0x7F00000000LL) != 0 && !*(_BYTE *)(a1 + 1149) && ((BYTE4(v63) + 1) & 0x7E) == 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(30057);
          goto LABEL_159;
        }
      }
      else
      {
        sig = BYTE4(v63) & 0x7F;
      }
      *(_DWORD *)(a2 + 4) = 0;
      *((_DWORD *)v12 + 15) = 1;
      v16 = v9;
      if ( (v9 & 0xFF7F) == 0xB7F )
      {
        if ( *(_QWORD *)(a1 + 1160) )
        {
          a4 = 0.0;
          v72 = 0;
          v71 = 0;
          v70 = 0;
          v69 = 0;
          v68 = 0;
          v67 = 0;
          v66 = 0;
          v65 = 0;
          ptrace(PTRACE_GETSIGINFO, (unsigned int)v8, 0, &v65);
          if ( SDWORD2(v65) > 0 )
          {
            v17 = ptrace(PTRACE_PEEKUSER, (unsigned int)v8, 128, 0);
            if ( *(_QWORD *)(a1 + 1160) )
            {
              if ( rangeset_t_find_range(a1 + 1152, v17) )
              {
                *((_DWORD *)v12 + 13) = 0;
                *((_DWORD *)v12 + 15) = 0;
                v7 = 0;
                ptrace(PTRACE_CONT, (unsigned int)v8, 0, 11);
                return v7;
              }
            }
          }
        }
      }
      sub_3AAD0(a1, 0, 1);
      *(_BYTE *)(a1 + 1228) = 0;
      if ( v62 )
        goto LABEL_35;
      v18 = *v11;
      if ( !*v11 )
        goto LABEL_34;
      v19 = v16;
      v20 = a1 + 1040;
      do
      {
        if ( *(_DWORD *)(v18 + 32) >= v8 )
          v20 = v18;
        v18 = *(_QWORD *)(v18 + 8LL * (*(_DWORD *)(v18 + 32) < v8));
      }
      while ( v18 );
      if ( (unsigned __int64 *)v20 == v11 || *(_DWORD *)(v20 + 32) > v8 )
      {
LABEL_34:
        sub_9FDA0(a1, "thread %d disappeared after freezing?!...\n", v8);
        goto LABEL_35;
      }
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 1140);
      *(_DWORD *)(a2 + 4) = v8;
      if ( *(_BYTE *)(a1 + 1149) )
      {
        *(_QWORD *)(a2 + 8) = -1;
      }
      else
      {
        if ( (((_BYTE)v16 + 1) & 0x7E) != 0 )
        {
          ptrace(PTRACE_GETSIGINFO, (unsigned int)v8, 0, &v65);
          v24 = v66;
        }
        else
        {
          v24 = ptrace(PTRACE_PEEKUSER, (unsigned int)v8, 128, 0);
        }
        *(_QWORD *)(a2 + 8) = v24;
        v19 = v16;
      }
      v25 = (_DWORD *)(v20 + 40);
      *(_BYTE *)(a2 + 16) = 0;
      if ( sig == 127 )
      {
        v59 = v20 + 40;
        set_debug_event_code(a2, 7);
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
          goto LABEL_153;
        *(_DWORD *)(a2 + 24) = HIBYTE(v16);
        *(_BYTE *)(a2 + 28) = 1;
        *(_QWORD *)(a2 + 32) = -1;
        if ( HIBYTE(v16) == 19 && *(_BYTE *)(v20 + 64) )
        {
          *(_BYTE *)(v20 + 64) = 0;
          goto LABEL_56;
        }
        v27 = HIBYTE(v16);
        v28 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, HIBYTE(v16));
        v29 = v28;
        v30 = a2 + 40;
        siga = v27;
        if ( v28 )
        {
          v31 = s1;
          v32 = s1;
          if ( v28[2] )
            v32 = (const char *)v28[1];
          if ( v28[5] )
            v31 = (const char *)v28[4];
          sub_3BBA0(v30, "got %s signal (%s)", v32, v31);
          v33 = 1;
          if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64, _QWORD *))(*(_QWORD *)a1 + 472LL))(
                  a1,
                  a2,
                  v29) )
          {
            v34 = v27;
            if ( (*((_BYTE *)v29 + 4) & 2) != 0 )
              v34 = 0;
            siga = v34;
            v33 = 0;
          }
        }
        else
        {
          sub_3BBA0(v30, "got unknown signal #%d", v27);
          v33 = 1;
        }
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
        {
LABEL_153:
          if ( !(_BYTE)under_debugger )
            interr(3299);
          goto LABEL_159;
        }
        if ( *(_DWORD *)(a2 + 24) != 5 || (v36 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_128:
          v48 = *v11;
          if ( !*v11 )
          {
LABEL_43:
            copy_debug_event(a1 + 168, a2);
            return 1;
          }
          v49 = (__int64)v29;
          v50 = a1 + 1040;
          do
          {
            if ( *(_DWORD *)(v48 + 32) >= v8 )
              v50 = v48;
            v48 = *(_QWORD *)(v48 + 8LL * (*(_DWORD *)(v48 + 32) < v8));
          }
          while ( v48 );
          if ( (unsigned __int64 *)v50 != v11 && *(_DWORD *)(v50 + 32) <= v8 )
          {
            *(_DWORD *)(v50 + 52) = siga;
            if ( *(_BYTE *)(a1 + 1229) )
            {
              if ( v33 )
                goto LABEL_35;
            }
            else
            {
              v7 = 0;
              v51 = sub_A2610(a1, a2, 0, a4, a5);
              if ( v51 | (unsigned __int8)v33 )
              {
                if ( v51 )
                  return v7;
                goto LABEL_35;
              }
            }
            if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
            {
              sub_A32F0(a1, a2, v49, a4, *(double *)a5.m128_u64);
              if ( !*(_BYTE *)(a1 + 1229) )
              {
LABEL_57:
                if ( !*(_BYTE *)(a1 + 1230) )
                {
                  v7 = 0;
                  sub_3FD90(a1, 0);
                  return v7;
                }
              }
LABEL_58:
              set_debug_event_code(a2, 13);
              return 1;
            }
          }
LABEL_35:
          v21 = *v11;
          if ( *v11 )
          {
            v22 = *(_DWORD *)(a2 + 4);
            v23 = a1 + 1040;
            do
            {
              if ( *(_DWORD *)(v21 + 32) >= v22 )
                v23 = v21;
              v21 = *(_QWORD *)(v21 + 8LL * (*(_DWORD *)(v21 + 32) < v22));
            }
            while ( v21 );
            if ( (unsigned __int64 *)v23 != v11 && *(_DWORD *)(v23 + 32) <= v22 )
              *(_BYTE *)(v23 + 56) = 0;
          }
          goto LABEL_43;
        }
        v37 = v36 - 1;
        v38 = *(_QWORD *)(a1 + 864);
        v55 = v33;
        if ( v37 == v38 && v38 )
        {
          if ( !(unsigned __int8)sub_3FCA0(a1, (unsigned int)v8) )
          {
            sub_390A0((int)"%a: could not return from the shlib breakpoint!\n", v37);
            return 1;
          }
          if ( sub_3E060((_QWORD *)a1, a4, *(double *)a5.m128_u64) )
            goto LABEL_92;
          goto LABEL_56;
        }
        v39 = *(_QWORD *)(a1 + 832);
        if ( v37 == v39 && v39 || (v40 = *(_QWORD *)(a1 + 848), v37 == v40) && v40 )
        {
          *(_QWORD *)sigb = *(_QWORD *)(a1 + 160);
          *(_DWORD *)(a1 + 1144) = v8;
          sub_39F50(a1);
          if ( !(unsigned __int8)sub_3FCA0(a1, (unsigned int)v8) )
          {
            sub_390A0((int)"%a: could not return from the thread breakpoint!\n", v37);
            return 1;
          }
          if ( *(_QWORD *)sigb != *(_QWORD *)(a1 + 160) )
          {
LABEL_92:
            siga = 0;
            set_debug_event_code(a2, 0);
            goto LABEL_128;
          }
LABEL_56:
          if ( !*(_BYTE *)(a1 + 1229) )
            goto LABEL_57;
          goto LABEL_58;
        }
        v61 = (int *)(a2 + 24);
        if ( *(_QWORD *)(a1 + 1240) <= 1u )
        {
          sub_3E060((_QWORD *)a1, a4, *(double *)a5.m128_u64);
          v41 = *(_QWORD *)(a1 + 1040);
          if ( !v41 )
            goto LABEL_104;
          v42 = a1 + 1040;
          do
          {
            if ( *(_DWORD *)(v41 + 32) >= v8 )
              v42 = v41;
            v41 = *(_QWORD *)(v41 + 8LL * (*(_DWORD *)(v41 + 32) < v8));
          }
          while ( v41 );
          if ( (unsigned __int64 *)v42 != v11 && *(_DWORD *)(v42 + 32) <= v8 )
            v59 = v42 + 40;
          else
LABEL_104:
            v59 = 0;
        }
        siga = 0;
        if ( (unsigned __int8)sub_3F090((_QWORD *)a1, a2) )
          goto LABEL_127;
        v43 = *(_QWORD *)(a1 + 440);
        if ( !v43 )
          goto LABEL_162;
        v44 = a1 + 440;
        do
        {
          if ( *(_QWORD *)(v43 + 32) >= v37 )
            v44 = v43;
          v43 = *(_QWORD *)(v43 + 8LL * (*(_QWORD *)(v43 + 32) < v37));
        }
        while ( v43 );
        if ( v44 == a1 + 440 || v37 < *(_QWORD *)(v44 + 32) )
          goto LABEL_162;
        v45 = *(_QWORD *)(a1 + 360);
        v46 = 8 * v45;
        v47 = *(_QWORD **)(a1 + 352);
        if ( 8 * v45 )
        {
          v47 = *(_QWORD **)(a1 + 352);
          while ( v37 != *v47 )
          {
            ++v47;
            v46 -= 8;
            if ( !v46 )
              goto LABEL_144;
          }
        }
        if ( v47 != (_QWORD *)(*(_QWORD *)(a1 + 352) + 8 * v45) )
        {
LABEL_162:
          if ( v59 && *(_BYTE *)(v59 + 16) )
          {
            set_debug_event_code(a2, 6);
LABEL_127:
            v33 = v55;
            goto LABEL_128;
          }
          v33 = v55;
          if ( !v29 || (*((_BYTE *)v29 + 4) & 2) == 0 )
          {
            if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
            {
              siga = *v61;
              goto LABEL_127;
            }
            goto LABEL_153;
          }
          goto LABEL_128;
        }
LABEL_144:
        v52 = *(_QWORD *)(a1 + 1200);
        if ( v52 )
        {
          v53 = a1 + 1200;
          do
          {
            if ( *(_QWORD *)(v52 + 32) >= v37 )
              v53 = v52;
            v52 = *(_QWORD *)(v52 + 8LL * (*(_QWORD *)(v52 + 32) < v37));
          }
          while ( v52 );
          if ( v53 != a1 + 1200 && v37 >= *(_QWORD *)(v53 + 32) )
            goto LABEL_56;
        }
        set_debug_event_code(a2, 5);
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
        {
          a4 = NAN;
          *(_OWORD *)v61 = -1;
          *(_QWORD *)(a2 + 8) = v37;
          goto LABEL_127;
        }
        if ( !(_BYTE)under_debugger )
          interr(3298);
LABEL_159:
        BUG();
      }
      if ( (((_BYTE)v19 + 1) & 0x7E) != 0 )
      {
        v60 = *(_DWORD *)a2;
        v54 = *(_DWORD *)(a2 + 4);
        v26 = strsignal(sig);
        sub_9FDA0(a1, "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n", v60, v54, v26, sig, a4);
        v25 = (_DWORD *)(v20 + 40);
        if ( *(_QWORD *)(a1 + 1048) < 2u )
        {
LABEL_73:
          set_debug_event_code(a2, 2);
          v35 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
          if ( v35 == 2 || v35 == 4 )
          {
            *(_DWORD *)(a2 + 24) = sig;
            *(_BYTE *)(a1 + 1149) = 1;
            goto LABEL_35;
          }
          if ( !(_BYTE)under_debugger )
            interr(3296);
          goto LABEL_159;
        }
      }
      else
      {
        sig = HIBYTE(v19);
        if ( *(_QWORD *)(a1 + 1048) < 2u )
          goto LABEL_73;
      }
      if ( *v25 != *(_DWORD *)(a1 + 1140) )
      {
        free_debug_event(a2);
        sub_3A390(a1, *(_DWORD *)(a2 + 4), 3);
        goto LABEL_35;
      }
      goto LABEL_73;
    }
  }
  v7 = 0;
  v13 = WORD2(v63);
  sub_9FDA0(a1, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v63);
  v14 = HIBYTE(v13);
  if ( (v13 & 0x7F) != 0x7F )
    v14 = 0;
  ptrace(PTRACE_CONT, (unsigned int)v8, 0, v14);
  return v7;
}
// 158B40: using guessed type __int64 under_debugger;
