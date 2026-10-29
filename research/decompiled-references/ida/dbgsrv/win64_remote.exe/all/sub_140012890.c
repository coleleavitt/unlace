/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140012890
// Address: 0x0000000140012890

//----- (0000000140012890) ----------------------------------------------------
__int64 __fastcall sub_140012890(__int64 a1, __int64 a2, DWORD a3)
{
  double v3; // xmm2_8
  DWORD v7; // edx
  BOOL v8; // eax
  int v9; // edx
  int v11; // r12d
  DWORD dwProcessId; // eax
  DWORD dwDebugEventCode; // r8d
  int v14; // r9d
  DWORD v15; // r8d
  DWORD dwThreadId; // edx
  int v17; // r15d
  __int64 v18; // r14
  char v19; // si
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 **v22; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  void *v27; // r15
  void *v28; // rbx
  void *v29; // rsi
  HMODULE ModuleHandleA; // rbx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 *v36; // r9
  __int64 *v37; // rax
  __int64 *k; // rcx
  DWORD v39; // r8d
  __int64 **v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rax
  unsigned __int64 ExceptionRecord; // r14
  _QWORD *v44; // r15
  unsigned __int64 v45; // rcx
  const char *v46; // rcx
  __int64 *v47; // rbx
  const char *v48; // rcx
  __int64 **v49; // rcx
  __int64 *m; // rax
  __int64 *n; // rcx
  size_t v52; // rax
  __int64 v53; // rsi
  size_t v54; // rax
  HANDLE hThread; // rsi
  const char *v56; // rbx
  __int64 v57; // r14
  size_t v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r9
  __int64 v64; // rax
  char **v65; // rcx
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rdx
  char **v68; // rax
  char *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rbx
  void *v72; // rcx
  __int64 v73; // rbx
  size_t v74; // rax
  int v75; // r12d
  __int64 v76; // rax
  __int128 v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+60h] [rbp-A0h] BYREF
  char **v80; // [rsp+68h] [rbp-98h]
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  void *v84[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v85; // [rsp+A0h] [rbp-60h]
  __int128 v86; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v87; // [rsp+C0h] [rbp-40h]
  _QWORD v88[4]; // [rsp+D0h] [rbp-30h] BYREF
  void *Block; // [rsp+F0h] [rbp-10h]
  void *v90; // [rsp+F8h] [rbp-8h]
  void *v91; // [rsp+100h] [rbp+0h]
  __int128 v92; // [rsp+108h] [rbp+8h]
  __int128 v93; // [rsp+118h] [rbp+18h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  struct _DEBUG_EVENT DebugEvent; // [rsp+130h] [rbp+30h] BYREF
  char Str[1024]; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( *(_QWORD *)(a1 + 152) )
  {
    sub_1400623C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (*(_QWORD *)(a1 + 144) & (*(_QWORD *)(a1 + 136) - 1LL))));
    sub_140062880(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (*(_QWORD *)(a1 + 144) & (*(_QWORD *)(a1 + 136) - 1LL))));
    v75 = 0;
    v76 = *(_QWORD *)(a1 + 152) - 1LL;
    *(_QWORD *)(a1 + 152) = v76;
    if ( v76 )
      ++*(_QWORD *)(a1 + 144);
    else
      *(_QWORD *)(a1 + 144) = 0;
    LOBYTE(v75) = v76 != 0;
    return (unsigned int)(v75 + 1);
  }
  else
  {
    v7 = -1;
    if ( *(_DWORD *)(a1 + 904) != 1 )
      v7 = a3;
    v8 = WaitForDebugEvent(&DebugEvent, v7);
    v9 = *(_DWORD *)(a1 + 904);
    if ( !v8 )
    {
      if ( v9 == 4 )
      {
        sub_140063190(a2, 12);
        return 1;
      }
      return 0;
    }
    v11 = 0;
    dwProcessId = DebugEvent.dwProcessId;
    dwDebugEventCode = DebugEvent.dwDebugEventCode;
    if ( v9 == 1 )
    {
      if ( DebugEvent.dwDebugEventCode != 3 )
        return 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 864) = 0;
      *(_DWORD *)(a1 + 488) = dwProcessId;
      *(_DWORD *)(a1 + 904) = 2;
    }
    if ( *(_BYTE *)(a1 + 624) )
    {
      sub_14001B810(a1, &DebugEvent.dwDebugEventCode);
      dwProcessId = DebugEvent.dwProcessId;
      dwDebugEventCode = DebugEvent.dwDebugEventCode;
    }
    v14 = *(_DWORD *)(a1 + 488);
    if ( dwProcessId != v14 )
    {
      sub_140043130(a1, (struct __crt_locale_pointers *)"ignore: pid %x != %x\n", dwProcessId, v14);
      if ( DebugEvent.dwDebugEventCode == 1
        && (DebugEvent.u.Exception.ExceptionRecord.ExceptionCode == -2147483645
         || DebugEvent.u.Exception.ExceptionRecord.ExceptionCode == 1073741855) )
      {
        v11 = 1;
      }
      v15 = -2147418111;
      if ( v11 )
        v15 = 65538;
      if ( !ContinueDebugEvent(DebugEvent.dwProcessId, DebugEvent.dwThreadId, v15) )
        sub_140043190(a1, (struct __crt_locale_pointers *)"ContinueDebugEvent");
      return 0;
    }
    *(_DWORD *)a2 = dwProcessId;
    dwThreadId = DebugEvent.dwThreadId;
    *(_DWORD *)(a2 + 4) = DebugEvent.dwThreadId;
    *(_BYTE *)(a2 + 16) = 1;
    v17 = 1;
    switch ( dwDebugEventCode )
    {
      case 1u:
        v18 = (__int64)DebugEvent.u.Exception.ExceptionRecord.ExceptionAddress & *(_QWORD *)(a1 + 24);
        v19 = 0;
        v20 = *(_QWORD **)(a1 + 1088);
        v21 = (_QWORD *)*v20;
        if ( (_QWORD *)*v20 != v20 )
        {
          do
          {
            v19 |= sub_140011CE0(a1, v21 + 5, v18);
            v22 = (__int64 **)v21[2];
            if ( *((_BYTE *)v22 + 25) )
            {
              for ( i = v21[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
              {
                if ( v21 != *(_QWORD **)(i + 16) )
                  break;
                v21 = (_QWORD *)i;
              }
              v21 = (_QWORD *)i;
            }
            else
            {
              v21 = (_QWORD *)v21[2];
              for ( j = *v22; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v21 = j;
            }
          }
          while ( v21 != *(_QWORD **)(a1 + 1088) );
        }
        v17 = sub_140015610(a1, a2, &DebugEvent.u.Exception.ExceptionRecord.ExceptionCode, v19);
        if ( v17 <= 0 )
          return (unsigned int)v17;
        goto LABEL_52;
      case 2u:
        sub_14000DA90(a1, (__int128 *)&DebugEvent.u, dwThreadId);
        sub_14001B040(a2, 3);
        *(_QWORD *)(a2 + 8) = (__int64)DebugEvent.u.Exception.ExceptionRecord.ExceptionAddress & *(_QWORD *)(a1 + 24);
        (*(void (__fastcall **)(__int64, HANDLE))(*(_QWORD *)a1 + 616LL))(a1, DebugEvent.u.CreateThread.hThread);
        goto LABEL_52;
      case 3u:
        *(CREATE_PROCESS_DEBUG_INFO *)(a1 + 1112) = DebugEvent.u.CreateProcessInfo;
        v25 = *(_QWORD *)(a1 + 792);
        if ( v25 != -1 && v25 != *(_QWORD *)(a1 + 1120) )
          sub_1400181E0(a1, (_QWORD *)(a1 + 792));
        *(_QWORD *)(a1 + 792) = *(_QWORD *)(a1 + 1120);
        sub_1400181E0(a1, (_QWORD *)(a1 + 1112));
        sub_14000ECE0(a1, a2);
        v26 = sub_1400181A0(a2);
        v81 = a1;
        v79 = *(_QWORD *)(v26 + 24);
        v82 = v79;
        *(_QWORD *)&v77 = *(_QWORD *)(v26 + 32);
        v83 = v77;
        memset(v84, 0, sizeof(v84));
        v27 = nullptr;
        v28 = *(void **)(v26 + 8);
        if ( v28 )
        {
          v29 = sub_14005AAA0(*(_QWORD *)(v26 + 8));
          v84[0] = v29;
          v27 = v28;
          v84[2] = v28;
          memcpy(v29, *(const void **)v26, (size_t)v28);
          v84[1] = v28;
        }
        else
        {
          v28 = v84[1];
          v29 = v84[0];
        }
        v85 = 0;
        v86 = 0;
        v87 = 0;
        v88[0] = *(_QWORD *)(sub_1400181A0(a2) + 24);
        v88[1] = a1;
        v88[2] = v79;
        v88[3] = v77;
        Block = v29;
        memset(v84, 0, sizeof(v84));
        v90 = v28;
        v91 = v27;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        sub_140009E20((_QWORD *)(a1 + 928), (__int64)&v77, (__int64)v88);
        if ( Block )
          j_free(Block);
        *(_QWORD *)&v77 = *(_QWORD *)(a1 + 1128);
        *((_QWORD *)&v77 + 1) = *(_QWORD *)(a1 + 1152);
        v78 = *(_QWORD *)(a1 + 1160);
        sub_14000DA90(a1, &v77, DebugEvent.dwThreadId);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 616LL))(a1, *(_QWORD *)(a1 + 1128));
        if ( !*(_QWORD *)(a1 + 816) && byte_1400CAFA4 && dword_1400CAF20 == 3 )
        {
          ModuleHandleA = GetModuleHandleA("kernel32.dll");
          v31 = sub_14000E260(a1, (__int64)ModuleHandleA);
          sub_14001D5D0(a1 + 808, (unsigned __int64)ModuleHandleA, v31, 0xFFFFFFFFFFFFFFFFuLL);
        }
        goto LABEL_51;
      case 4u:
        v36 = *(__int64 **)(a1 + 1088);
        v37 = (__int64 *)v36[1];
        for ( k = v36; !*((_BYTE *)v37 + 25); v37 = (__int64 *)*v37 )
        {
          v39 = *((_DWORD *)v37 + 8);
          if ( v39 >= dwThreadId )
          {
            if ( *((_BYTE *)k + 25) && dwThreadId < v39 )
              k = v37;
            v36 = v37;
          }
          else
          {
            v37 += 2;
          }
        }
        if ( *((_BYTE *)k + 25) )
          v40 = (__int64 **)(*(_QWORD *)(a1 + 1088) + 8LL);
        else
          v40 = (__int64 **)k;
        v41 = *v40;
        while ( !*((_BYTE *)v41 + 25) )
        {
          if ( dwThreadId >= *((_DWORD *)v41 + 8) )
          {
            v41 = (__int64 *)v41[2];
          }
          else
          {
            k = v41;
            v41 = (__int64 *)*v41;
          }
        }
        *(_QWORD *)&v77 = v36;
        *((_QWORD *)&v77 + 1) = k;
        sub_14000C380((_QWORD *)(a1 + 1088), (__int64 *)&v77);
        sub_14001AFF0(a2, 4, DebugEvent.u.Exception.ExceptionRecord.ExceptionCode);
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 624LL))(a1, *(unsigned int *)(a2 + 4));
        if ( v42 == *(_QWORD *)(a1 + 880) )
          *(_QWORD *)(a1 + 880) = -1;
        if ( v42 == *(_QWORD *)(a1 + 1128) )
          *(_QWORD *)(a1 + 1128) = -1;
        goto LABEL_52;
      case 5u:
        sub_14001AFF0(a2, 2, DebugEvent.u.Exception.ExceptionRecord.ExceptionCode);
        *(_BYTE *)(a1 + 1193) = 1;
        goto LABEL_52;
      case 6u:
        ExceptionRecord = (unsigned __int64)DebugEvent.u.Exception.ExceptionRecord.ExceptionRecord;
        v44 = (_QWORD *)sub_14001B090(a2, 8);
        v45 = *(_QWORD *)(a1 + 24) & ExceptionRecord;
        *(_QWORD *)(a2 + 8) = v45;
        v44[3] = v45;
        v44[5] = -1;
        Str[0] = 0;
        if ( !sub_140013BB0(
                (_QWORD *)a1,
                (unsigned __int8 *)Str,
                0x400u,
                DebugEvent.u.CreateProcessInfo.lpBaseOfImage,
                DebugEvent.u.LoadDll.fUnicode != 0,
                ExceptionRecord) )
          goto LABEL_112;
        v46 = Str1;
        if ( *(_QWORD *)(a1 + 864) )
          v46 = *(const char **)(a1 + 856);
        if ( !strcmp(v46, Str) )
          goto LABEL_112;
        v47 = **(__int64 ***)(a1 + 944);
        if ( *((_BYTE *)v47 + 25) )
          goto LABEL_97;
        break;
      case 7u:
        sub_14001B040(a2, 9);
        hThread = DebugEvent.u.CreateThread.hThread;
        v79 = (unsigned __int64)DebugEvent.u.CreateThread.hThread;
        v80 = (char **)((char *)DebugEvent.u.CreateThread.hThread + 4096);
        v56 = sub_140014C10(a1, (_QWORD **)(a1 + 944), &v79);
        if ( v56 )
        {
          v57 = sub_140015F30(a2);
          v58 = strlen(v56);
          if ( v58 )
            sub_140001810(v57, v56, v58);
          else
            *(_QWORD *)(v57 + 8) = 0;
        }
        else
        {
          v59 = sub_140015F30(a2);
          sub_14000E720(v59);
        }
        if ( sub_14001DE20(a1 + 808, &v77, (__int64)hThread) )
        {
          sub_1400181E0(a1, &v77);
          goto LABEL_120;
        }
        v60 = *(_QWORD *)(a1 + 944);
        v61 = *(_QWORD *)(v60 + 8);
        v62 = v60;
        if ( !*(_BYTE *)(v61 + 25) )
        {
          do
          {
            if ( *(_QWORD *)(v61 + 32) >= (unsigned __int64)hThread )
              v60 = v61;
            else
              v61 += 16;
            v61 = *(_QWORD *)v61;
          }
          while ( !*(_BYTE *)(v61 + 25) );
          v62 = *(_QWORD *)(a1 + 944);
        }
        if ( *(_BYTE *)(v60 + 25) || (unsigned __int64)hThread < *(_QWORD *)(v60 + 32) || v60 == v62 )
        {
          sub_140043130(a1, (struct __crt_locale_pointers *)"Could not find dll to unload (base=%a)\n", v3);
          goto LABEL_52;
        }
        sub_1400181E0(a1, (_QWORD *)(v60 + 88));
        v63 = *(_QWORD *)(a1 + 1008);
        v64 = *(_QWORD *)(v63 + 8);
        v65 = (char **)v63;
        if ( !*(_BYTE *)(v64 + 25) )
        {
          v66 = *(_QWORD *)(v60 + 32);
          do
          {
            v67 = *(_QWORD *)(v64 + 32);
            if ( v67 >= v66 )
            {
              if ( *((_BYTE *)v65 + 25) && v66 < v67 )
                v65 = (char **)v64;
              v63 = v64;
            }
            else
            {
              v64 += 16;
            }
            v64 = *(_QWORD *)v64;
          }
          while ( !*(_BYTE *)(v64 + 25) );
        }
        if ( *((_BYTE *)v65 + 25) )
          v68 = (char **)(*(_QWORD *)(a1 + 1008) + 8LL);
        else
          v68 = v65;
        v69 = *v68;
        while ( !v69[25] )
        {
          if ( *(_QWORD *)(v60 + 32) >= *((_QWORD *)v69 + 4) )
          {
            v69 = *((char **)v69 + 2);
          }
          else
          {
            v65 = (char **)v69;
            v69 = *(char **)v69;
          }
        }
        v79 = v63;
        v80 = v65;
        sub_14000C6B0((_QWORD *)(a1 + 1008), (__int64 *)&v79);
        v70 = sub_14000C8A0((_QWORD *)(a1 + 944), v60);
        v71 = (_QWORD *)v70;
        v72 = *(void **)(v70 + 64);
        if ( v72 )
        {
          *(_QWORD *)(v70 + 72) = 0;
          j_free(v72);
          v71[8] = 0;
          v71[10] = 0;
        }
        j_j_free(v71);
        goto LABEL_51;
      case 8u:
        sub_140013560(a1, (__int64)&DebugEvent, Str, 0x400u);
        v73 = sub_14001B040(a2, 10);
        v74 = strlen(Str);
        if ( v74 )
          sub_140001810(v73, Str, v74);
        else
          *(_QWORD *)(v73 + 8) = 0;
        goto LABEL_52;
      case 9u:
        sub_140043130(a1, (struct __crt_locale_pointers *)"RIP_EVENT (system debugging error)");
        goto LABEL_52;
      default:
        sub_140043130(a1, (struct __crt_locale_pointers *)"UNKNOWN_EVENT %d", dwDebugEventCode);
        *(_BYTE *)(a2 + 16) = 0;
        goto LABEL_52;
    }
    do
    {
      v48 = Str1;
      if ( v47[9] )
        v48 = (const char *)v47[8];
      if ( !strcmp(v48, Str) )
      {
LABEL_112:
        sub_140043130(
          a1,
          (struct __crt_locale_pointers *)"%p: bogus DLL load event, skippping\n",
          (const void *)ExceptionRecord);
        goto LABEL_120;
      }
      v49 = (__int64 **)v47[2];
      if ( *((_BYTE *)v49 + 25) )
      {
        for ( m = (__int64 *)v47[1]; !*((_BYTE *)m + 25); m = (__int64 *)m[1] )
        {
          if ( v47 != (__int64 *)m[2] )
            break;
          v47 = m;
        }
        v47 = m;
      }
      else
      {
        v47 = (__int64 *)v47[2];
        for ( n = *v49; !*((_BYTE *)n + 25); n = (__int64 *)*n )
          v47 = n;
      }
    }
    while ( !*((_BYTE *)v47 + 25) );
LABEL_97:
    v52 = strlen(Str);
    if ( v52 )
      sub_140001810((__int64)v44, Str, v52);
    else
      v44[1] = 0;
    v53 = (unsigned int)sub_14000E260(a1, ExceptionRecord);
    v44[4] = v53;
    if ( sub_14001D6B0(a1 + 808, ExceptionRecord, v53, (unsigned __int64)DebugEvent.u.CreateThread.hThread) )
    {
      sub_140043130(
        a1,
        (struct __crt_locale_pointers *)"%p: 64bit DLL loaded into high addresses has been detected\n",
        (const void *)ExceptionRecord);
LABEL_120:
      *(_BYTE *)(a2 + 16) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, a2);
      return 0;
    }
    sub_1400181E0(a1, &DebugEvent.u.CreateThread.hThread);
    DebugEvent.u.CreateThread.hThread = nullptr;
    v81 = a1;
    *(_QWORD *)&v77 = v84;
    memset(v84, 0, sizeof(v84));
    v54 = strlen(Str);
    sub_140001810((__int64)v84, Str, v54);
    v85 = *(_OWORD *)&DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
    v86 = *((_OWORD *)&DebugEvent.u.RipInfo + 1);
    v87 = DebugEvent.u.Exception.ExceptionRecord.ExceptionInformation[0];
    v82 = _mm_srli_si128(*(__m128i *)&DebugEvent.u.Exception.ExceptionRecord.ExceptionCode, 8).m128i_u64[0]
        & *(_QWORD *)(a1 + 24);
    v83 = v53;
    sub_14000D380(a1, (__int64)&v81);
    if ( *(_QWORD *)(a1 + 840) < (unsigned __int64)((unsigned int)sub_14001DA00(a1) == 1) + 1 )
    {
      if ( sub_14001E730(a1, Str) && sub_14001D5D0(a1 + 808, ExceptionRecord, v53, 0xFFFFFFFFFFFFFFFFuLL) )
        ++*(_QWORD *)(a1 + 840);
      if ( !*(_DWORD *)(a1 + 904) && !*(_BYTE *)(a1 + 921) )
        *(_BYTE *)(a1 + 920) = *(_BYTE *)(a1 + 840);
    }
    if ( v84[0] )
    {
      v84[1] = nullptr;
      j_free(v84[0]);
    }
LABEL_51:
    v17 = 1;
LABEL_52:
    if ( *(_DWORD *)(a1 + 904) == 2 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      if ( *(_QWORD *)(a1 + 136) <= (unsigned __int64)(*(_QWORD *)(a1 + 152) + 1LL) )
        sub_14000CE80((_QWORD *)(a1 + 120), 1u);
      v32 = *(_QWORD *)(a1 + 136) - 1LL;
      *(_QWORD *)(a1 + 144) &= v32;
      v33 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 144);
      v34 = 8 * (v32 & v33);
      if ( !*(_QWORD *)(v34 + *(_QWORD *)(a1 + 128)) )
        *(_QWORD *)(v34 + *(_QWORD *)(a1 + 128)) = operator new(0x48u);
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (v33 & (*(_QWORD *)(a1 + 136) - 1LL)));
      *(_DWORD *)v35 = -1;
      *(_DWORD *)(v35 + 4) = 0;
      *(_QWORD *)(v35 + 8) = -1;
      *(_BYTE *)(v35 + 16) = 0;
      *(_DWORD *)(v35 + 20) = 0;
      sub_1400623C0(v35, a2);
      ++*(_QWORD *)(a1 + 152);
      sub_14000E770(a1, a2, 1u);
      *(_DWORD *)(a1 + 904) = 0;
    }
    return (unsigned int)v17;
  }
}
// 1400133E6: variable 'v3' is possibly undefined
// 1400CAF20: using guessed type int dword_1400CAF20;
// 1400CAFA4: using guessed type char byte_1400CAFA4;
// 1400CB61C: using guessed type char byte_1400CB61C;
