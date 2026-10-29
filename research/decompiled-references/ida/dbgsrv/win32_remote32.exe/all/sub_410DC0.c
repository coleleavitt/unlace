/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410DC0
// Address: 0x00410DC0

//----- (00410DC0) --------------------------------------------------------
int __userpurge sub_410DC0@<eax>(__int32 a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, int a4, DWORD dwMilliseconds)
{
  int v5; // edi
  bool v6; // zf
  _DWORD *v7; // esi
  DWORD v8; // eax
  BOOL v9; // eax
  int v10; // ecx
  DWORD dwDebugEventCode; // edx
  DWORD dwProcessId; // ecx
  bool v14; // cl
  DWORD v15; // eax
  DWORD dwThreadId; // eax
  int *v17; // ecx
  int v18; // eax
  int v19; // ecx
  __m128i v20; // xmm0
  int v21; // eax
  char *ModuleHandleA; // esi
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // ecx
  const char *v27; // eax
  int v28; // eax
  int v29; // eax
  const char *v30; // eax
  int v31; // eax
  unsigned int v32; // kr00_4
  unsigned int *v33; // eax
  unsigned int v34; // ecx
  LPVOID v35; // eax
  int v36; // ecx
  const void *v37; // esi
  unsigned int v38; // eax
  int v39; // esi
  void *v40; // ecx
  unsigned int v41; // kr04_4
  signed int v42; // eax
  unsigned int *v43; // edx
  __int128 v44; // xmm1
  __int64 v45; // xmm2_8
  unsigned int v46; // esi
  int v47; // ecx
  int *v48; // esi
  int v49; // eax
  int v50; // esi
  _DWORD *v51; // eax
  const CHAR *v52; // eax
  _DWORD *v53; // eax
  void **v54; // eax
  unsigned int *v55; // eax
  void *v56; // ecx
  unsigned int *v57; // ecx
  unsigned int v58; // kr08_4
  unsigned int v59; // eax
  LPVOID v60; // eax
  int v61; // ecx
  void **v62; // [esp-Ch] [ebp-91Ch]
  int v63; // [esp-8h] [ebp-918h]
  double v64; // [esp-4h] [ebp-914h]
  DWORD ExceptionCode; // [esp-4h] [ebp-914h]
  const char *v66; // [esp-4h] [ebp-914h]
  _DWORD *v67; // [esp-4h] [ebp-914h]
  DWORD v68; // [esp+Ch] [ebp-904h] BYREF
  int v69; // [esp+10h] [ebp-900h]
  DWORD v70; // [esp+14h] [ebp-8FCh]
  int v71; // [esp+18h] [ebp-8F8h]
  void *v72; // [esp+1Ch] [ebp-8F4h]
  signed int v73; // [esp+20h] [ebp-8F0h]
  unsigned int v74; // [esp+24h] [ebp-8ECh]
  __int128 v75; // [esp+28h] [ebp-8E8h]
  __int64 v76; // [esp+38h] [ebp-8D8h]
  int v77; // [esp+40h] [ebp-8D0h]
  DWORD v78; // [esp+44h] [ebp-8CCh]
  int v79; // [esp+48h] [ebp-8C8h]
  void *v80; // [esp+4Ch] [ebp-8C4h] BYREF
  signed int v81; // [esp+50h] [ebp-8C0h]
  int v82; // [esp+54h] [ebp-8BCh]
  __int128 v83; // [esp+58h] [ebp-8B8h]
  __int64 v84; // [esp+68h] [ebp-8A8h]
  __m128i v85; // [esp+70h] [ebp-8A0h] BYREF
  void **v86; // [esp+80h] [ebp-890h] BYREF
  int v87; // [esp+84h] [ebp-88Ch] BYREF
  DWORD v88; // [esp+88h] [ebp-888h] BYREF
  int ExceptionFlags; // [esp+8Ch] [ebp-884h]
  int v90; // [esp+90h] [ebp-880h]
  int ExceptionAddress; // [esp+94h] [ebp-87Ch]
  unsigned int *v92; // [esp+98h] [ebp-878h] BYREF
  unsigned int v93; // [esp+9Ch] [ebp-874h] BYREF
  struct _DEBUG_EVENT DebugEvent; // [esp+A0h] [ebp-870h] BYREF
  char Buffer[1024]; // [esp+100h] [ebp-810h] BYREF
  unsigned __int16 v96[512]; // [esp+500h] [ebp-410h] BYREF
  int v97; // [esp+90Ch] [ebp-4h]
  int savedregs; // [esp+910h] [ebp+0h] BYREF

  v5 = a1;
  v85.m128i_i32[2] = a1;
  v6 = *(_DWORD *)(a1 + 200) == 0;
  v7 = (_DWORD *)a4;
  v90 = a4;
  if ( v6 && (*(_DWORD *)(a1 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( *(_DWORD *)(v5 + 76) )
  {
    sub_45AE50(
      (_DWORD *)a4,
      *(_DWORD **)(*(_DWORD *)(v5 + 64) + 4 * (*(_DWORD *)(v5 + 72) & (*(_DWORD *)(v5 + 68) - 1))));
    v67 = *(_DWORD **)(*(_DWORD *)(v5 + 64) + 4 * (*(_DWORD *)(v5 + 72) & (*(_DWORD *)(v5 + 68) - 1)));
    v97 = 0;
    sub_45B190(v67);
    v61 = *(_DWORD *)(v5 + 76) - 1;
    *(_DWORD *)(v5 + 76) = v61;
    if ( v61 )
      ++*(_DWORD *)(v5 + 72);
    else
      *(_DWORD *)(v5 + 72) = 0;
    return (v61 != 0) + 1;
  }
  else
  {
    v8 = -1;
    if ( *(_DWORD *)(v5 + 512) != 1 )
      v8 = dwMilliseconds;
    v9 = WaitForDebugEvent(&DebugEvent, v8);
    v10 = *(_DWORD *)(v5 + 512);
    if ( !v9 )
    {
      if ( v10 == 4 )
      {
        sub_45B9B0((_DWORD *)a4, 12);
        return 1;
      }
      return 0;
    }
    dwDebugEventCode = DebugEvent.dwDebugEventCode;
    v6 = v10 == 1;
    dwProcessId = DebugEvent.dwProcessId;
    if ( v6 )
    {
      if ( DebugEvent.dwDebugEventCode != 3 )
        return -1;
      *(_DWORD *)(v5 + 492) = 0;
      *(_DWORD *)(v5 + 256) = dwProcessId;
      *(_DWORD *)(v5 + 512) = 2;
    }
    if ( *(_BYTE *)(v5 + 332) )
    {
      sub_4169F0(v5, (int)&savedregs, a3, (int)&DebugEvent);
      dwProcessId = DebugEvent.dwProcessId;
      dwDebugEventCode = DebugEvent.dwDebugEventCode;
    }
    if ( dwProcessId != *(_DWORD *)(v5 + 256) )
    {
      sub_43C900(v5, (int)"ignore: pid %x != %x\n", dwProcessId, *(_DWORD *)(v5 + 256));
      v14 = DebugEvent.dwDebugEventCode == 1
         && (DebugEvent.u.Exception.ExceptionRecord.ExceptionCode == -2147483645
          || DebugEvent.u.Exception.ExceptionRecord.ExceptionCode == 1073741855);
      v15 = -2147418111;
      if ( v14 )
        v15 = 65538;
      if ( !ContinueDebugEvent(DebugEvent.dwProcessId, DebugEvent.dwThreadId, v15) )
        sub_43C950(a3, v5, (int)"ContinueDebugEvent");
      return 0;
    }
    dwThreadId = DebugEvent.dwThreadId;
    *(_DWORD *)a4 = dwProcessId;
    *(_DWORD *)(a4 + 4) = dwThreadId;
    *(_BYTE *)(a4 + 12) = 1;
    ExceptionAddress = 1;
    switch ( dwDebugEventCode )
    {
      case 1u:
        v17 = *(int **)(v5 + 604);
        ExceptionAddress = (int)DebugEvent.u.Exception.ExceptionRecord.ExceptionAddress;
        LOBYTE(ExceptionFlags) = 0;
        v18 = *v17;
        v93 = v18;
        if ( (int *)v18 != v17 )
        {
          do
          {
            LOBYTE(ExceptionFlags) = sub_40FBF0(v5, a3, v18 + 20, ExceptionAddress) | ExceptionFlags;
            sub_40B5E0((int *)&v93);
            v18 = v93;
          }
          while ( v93 != *(_DWORD *)(v5 + 604) );
          v7 = (_DWORD *)v90;
        }
        LOBYTE(ExceptionAddress) = DebugEvent.u.Exception.dwFirstChance != 0;
        ExceptionAddress = sub_412D20(v5, a3, (int)v7, (int *)&DebugEvent.u, ExceptionFlags, ExceptionAddress);
        if ( ExceptionAddress <= 0 )
          return ExceptionAddress;
        goto LABEL_115;
      case 2u:
        sub_40C6D0((_DWORD *)v5, (const __m128i *)&DebugEvent.u, dwThreadId);
        sub_4163A0((_DWORD *)a4, 3);
        ExceptionCode = DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
        *(_DWORD *)(a4 + 8) = DebugEvent.u.Exception.ExceptionRecord.ExceptionRecord;
        (*(void (__thiscall **)(int, DWORD))(*(_DWORD *)v5 + 308))(v5, ExceptionCode);
        goto LABEL_115;
      case 3u:
        v19 = *(_DWORD *)(v5 + 452);
        *(_OWORD *)(v5 + 616) = *(_OWORD *)&DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
        *(_OWORD *)(v5 + 632) = *((_OWORD *)&DebugEvent.u.RipInfo + 1);
        v20 = _mm_loadl_epi64((const __m128i *)&DebugEvent.u.RipInfo + 2);
        *(_QWORD *)(v5 + 648) = v20.m128i_i64[0];
        if ( v19 != -1 && v19 != *(_DWORD *)(v5 + 620) )
          sub_4145E0(v5, v20, (_DWORD *)(v5 + 452));
        *(_DWORD *)(v5 + 452) = *(_DWORD *)(v5 + 620);
        sub_4145E0(v5, v20, (_DWORD *)(v5 + 616));
        sub_40D930((_DWORD *)v5, v20, (_DWORD *)a4);
        v92 = sub_4145A0((_DWORD *)a4);
        v77 = v5;
        v80 = nullptr;
        v86 = (void **)v92[3];
        v78 = (DWORD)v86;
        v21 = v92[1];
        v93 = v92[4];
        v79 = v93;
        v81 = 0;
        v82 = 0;
        ExceptionFlags = v21;
        if ( v21 )
        {
          v82 = ExceptionFlags;
          v80 = sub_4539E0(v21);
          sub_464310((unsigned int)v80, *v92, ExceptionFlags);
          v81 = ExceptionFlags;
        }
        v83 = 0;
        v84 = 0;
        v97 = 1;
        v69 = v5;
        v75 = 0;
        v68 = sub_4145A0((_DWORD *)a4)[3];
        v70 = (DWORD)v86;
        v71 = v93;
        v72 = v80;
        v73 = v81;
        v80 = nullptr;
        v81 = 0;
        v74 = v82;
        v82 = 0;
        v76 = 0;
        LOBYTE(v97) = 2;
        sub_408F80((int *)(v5 + 524), (int)&v85.m128i_i32[1], (int)&v68);
        sub_409C70(&v68);
        v85.m128i_i32[0] = *(_DWORD *)(v5 + 624);
        *(__int64 *)((char *)v85.m128i_i64 + 4) = *(_QWORD *)(v5 + 640);
        v97 = -1;
        sub_40C6D0((_DWORD *)v5, &v85, DebugEvent.dwThreadId);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 308))(v5, *(_DWORD *)(v5 + 624));
        if ( !*(_DWORD *)(v5 + 464) && byte_4B6ABC && VersionInformation.dwPlatformId == 3 )
        {
          ModuleHandleA = (char *)GetModuleHandleA("kernel32.dll");
          v23 = sub_40CD20(v5, (__m128i)0LL, ModuleHandleA);
          sub_418250(v5 + 460, (unsigned int)ModuleHandleA, v23, 0xFFFFFFFF);
          v7 = (_DWORD *)v90;
        }
        goto LABEL_115;
      case 4u:
        v92 = (unsigned int *)dwThreadId;
        sub_410900((int *)(v5 + 604), (unsigned int *)&v92);
        sub_416360((_DWORD *)a4, 4, DebugEvent.u.Exception.ExceptionRecord.ExceptionCode);
        v24 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 312))(v5, *(_DWORD *)(a4 + 4));
        if ( v24 == *(_DWORD *)(v5 + 500) )
          *(_DWORD *)(v5 + 500) = -1;
        if ( v24 == *(_DWORD *)(v5 + 624) )
          *(_DWORD *)(v5 + 624) = -1;
        goto LABEL_115;
      case 5u:
        sub_416360((_DWORD *)a4, 2, DebugEvent.u.Exception.ExceptionRecord.ExceptionCode);
        *(_BYTE *)(v5 + 661) = 1;
        goto LABEL_115;
      case 6u:
        ExceptionFlags = DebugEvent.u.Exception.ExceptionRecord.ExceptionFlags;
        v25 = sub_4163F0((_DWORD *)a4, 8);
        v26 = ExceptionFlags;
        *(_DWORD *)(a4 + 8) = ExceptionFlags;
        v25[3] = v26;
        v25[5] = -1;
        v93 = (unsigned int)v25;
        LOBYTE(v96[0]) = 0;
        if ( !sub_411D20(
                (_DWORD *)v5,
                a3,
                v96,
                0x400u,
                DebugEvent.u.LoadDll.lpImageName,
                DebugEvent.u.LoadDll.fUnicode != 0,
                v26) )
          goto LABEL_95;
        v27 = MultiByteStr;
        if ( *(_DWORD *)(v5 + 492) )
          v27 = *(const char **)(v5 + 488);
        v28 = strcmp(v27, (const char *)v96);
        if ( v28 )
          v28 = v28 < 0 ? -1 : 1;
        if ( !v28 )
          goto LABEL_95;
        v29 = **(_DWORD **)(v5 + 532);
        v86 = (void **)v29;
        if ( *(_BYTE *)(v29 + 13) )
          goto LABEL_62;
        break;
      case 7u:
        sub_4163A0((_DWORD *)a4, 9);
        v92 = (unsigned int *)DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
        v86 = (void **)DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
        v88 = DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
        ExceptionFlags = DebugEvent.u.Exception.ExceptionRecord.ExceptionCode + 4096;
        v52 = sub_412440((_DWORD **)(v5 + 532), &v88);
        if ( v52 )
        {
          v66 = v52;
          v53 = sub_413600((_DWORD *)a4);
          sub_401590((int)v53, v66);
        }
        else
        {
          v54 = (void **)sub_413600((_DWORD *)a4);
          sub_40D190(v54);
        }
        if ( sub_4188E0((_DWORD *)(v5 + 460), &v85.m128i_i32[2], (int)v92) )
        {
          sub_4145E0(v5, a3, &v85.m128i_i32[2]);
          *(_BYTE *)(a4 + 12) = 1;
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v5 + 80))(v5, a4);
          return 0;
        }
        sub_408C10((int *)(v5 + 532), &v87, (unsigned int *)&v86);
        if ( *(_BYTE *)(ExceptionFlags + 13)
          || (unsigned int)v92 < *(_DWORD *)(ExceptionFlags + 16)
          || ExceptionFlags == *(_DWORD *)(v5 + 532) )
        {
          LODWORD(v64) = DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
          sub_43C900(v5, (int)"Could not find dll to unload (base=%a)\n", v64);
        }
        else
        {
          sub_4145E0(v5, a3, (_DWORD *)(ExceptionFlags + 44));
          sub_410AB0((int *)(v5 + 564), (unsigned int *)(ExceptionFlags + 16));
          v55 = (unsigned int *)sub_40BA90((int ***)(v5 + 532), ExceptionFlags);
          v92 = v55;
          v56 = (void *)v55[8];
          v97 = 12;
          if ( v56 )
          {
            v55[9] = 0;
            sub_453A20(v56);
            v55 = v92;
            v92[8] = 0;
            v55[10] = 0;
          }
          sub_4627F2(v55);
          v97 = -1;
        }
        goto LABEL_115;
      case 8u:
        sub_411B50(v5, a3, (int)&DebugEvent, Buffer, 0x400u);
        v57 = sub_4163A0((_DWORD *)a4, 10);
        v92 = v57;
        v58 = strlen(Buffer);
        if ( v58 )
        {
          v59 = v58 + 1;
          if ( v58 + 1 > v57[2] )
          {
            v60 = sub_453B00((int)v57, (void *)*v57, v58 + 1, 1u);
            v57 = v92;
            *v92 = (unsigned int)v60;
            v59 = v58 + 1;
          }
          v57[1] = v59;
          sub_464310(*v57, (unsigned int)Buffer, v58);
          *(_BYTE *)(v58 + *v92) = 0;
          v7 = (_DWORD *)v90;
        }
        else
        {
          v7 = (_DWORD *)v90;
          v57[1] = 0;
        }
        goto LABEL_115;
      case 9u:
        sub_43C900(v5, (int)"RIP_EVENT (system debugging error)");
        goto LABEL_115;
      default:
        sub_43C900(v5, (int)"UNKNOWN_EVENT %d", dwDebugEventCode);
        *(_BYTE *)(a4 + 12) = 0;
        goto LABEL_115;
    }
    do
    {
      if ( *(_DWORD *)(v29 + 36) )
        v30 = *(const char **)(v29 + 32);
      else
        v30 = MultiByteStr;
      v31 = strcmp(v30, (const char *)v96);
      if ( v31 )
        v31 = v31 < 0 ? -1 : 1;
      if ( !v31 )
      {
LABEL_95:
        sub_43C900(v5, (int)"%p: bogus DLL load event, skippping\n", (const void *)ExceptionFlags);
        *(_BYTE *)(a4 + 12) = 1;
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v5 + 80))(v5, a4);
        return 0;
      }
      sub_40B5E0((int *)&v86);
      v29 = (int)v86;
    }
    while ( !*((_BYTE *)v86 + 13) );
LABEL_62:
    v32 = strlen((const char *)v96);
    if ( v32 )
    {
      v33 = (unsigned int *)v93;
      v34 = v32 + 1;
      if ( v32 + 1 > *(_DWORD *)(v93 + 8) )
      {
        v35 = sub_453B00(v93, *(void **)v93, v32 + 1, 1u);
        v36 = v93;
        *(_DWORD *)v93 = v35;
        v33 = (unsigned int *)v36;
        v34 = v32 + 1;
      }
      v33[1] = v34;
      sub_464310(*v33, (unsigned int)v96, v32);
      *(_BYTE *)(v32 + *(_DWORD *)v93) = 0;
    }
    else
    {
      *(_DWORD *)(v93 + 4) = 0;
    }
    v37 = (const void *)ExceptionFlags;
    v38 = sub_40CD20(v5, a3, (char *)ExceptionFlags);
    v92 = (unsigned int *)v38;
    *(_DWORD *)(v93 + 16) = v38;
    if ( sub_40E5D0((int)v37, v38, DebugEvent.u.Exception.ExceptionRecord.ExceptionCode) )
    {
      sub_43C900(v5, (int)"%p: 64bit DLL loaded into high addresses has been detected\n", v37);
      v39 = v90;
      *(_BYTE *)(v90 + 12) = 1;
      (*(void (__stdcall **)(int, int))(*(_DWORD *)v5 + 80))(v5, v39);
      return 0;
    }
    else
    {
      sub_4145E0(v5, a3, &DebugEvent.u.Exception.ExceptionRecord.ExceptionCode);
      v40 = nullptr;
      DebugEvent.u.Exception.ExceptionRecord.ExceptionCode = 0;
      v77 = v5;
      v86 = &v80;
      v80 = nullptr;
      v81 = 0;
      v82 = 0;
      v97 = 4;
      v41 = strlen((const char *)v96);
      v42 = v41 + 1;
      if ( v41 != -1 )
      {
        v40 = sub_453B00((int)&v80, nullptr, v41 + 1, 1u);
        v42 = v41 + 1;
        v80 = v40;
      }
      v81 = v42;
      sub_464310((unsigned int)v40, (unsigned int)v96, v41);
      v43 = v92;
      *((_BYTE *)v80 + v41) = 0;
      v44 = *(_OWORD *)&DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
      v79 = (int)v43;
      v45 = *((_QWORD *)&DebugEvent.u.RipInfo + 2);
      v84 = *((_QWORD *)&DebugEvent.u.RipInfo + 2);
      v83 = *(_OWORD *)&DebugEvent.u.Exception.ExceptionRecord.ExceptionCode;
      v78 = DebugEvent.u.Exception.ExceptionRecord.ExceptionFlags;
      v46 = v81;
      v97 = 5;
      v68 = DebugEvent.u.Exception.ExceptionRecord.ExceptionFlags;
      v69 = v77;
      v70 = DebugEvent.u.Exception.ExceptionRecord.ExceptionFlags;
      v71 = (int)v43;
      v72 = nullptr;
      v73 = 0;
      v74 = 0;
      if ( v81 )
      {
        v72 = sub_4539E0(v81);
        v74 = v46;
        sub_464310((unsigned int)v72, (unsigned int)v80, v46);
        v45 = v84;
        v44 = v83;
        v73 = v46;
      }
      v75 = v44;
      v76 = v45;
      LOBYTE(v97) = 6;
      sub_408F80((int *)(v5 + 532), (int)&v85.m128i_i32[3], (int)&v68);
      LOBYTE(v97) = 7;
      if ( v72 )
        sub_453A20(v72);
      v47 = *(_DWORD *)(v5 + 564);
      v48 = (int *)(v5 + 564);
      LOBYTE(v97) = 5;
      v93 = 0;
      v49 = *(_DWORD *)(v47 + 4);
      v86 = (void **)v49;
      if ( !*(_BYTE *)(v49 + 13) )
      {
        do
        {
          v86 = (void **)v49;
          if ( *(_DWORD *)(v49 + 16) >= v78 )
          {
            v47 = v49;
            v93 = 1;
            v49 = *(_DWORD *)v49;
          }
          else
          {
            v49 = *(_DWORD *)(v49 + 8);
            v93 = 0;
          }
        }
        while ( !*(_BYTE *)(v49 + 13) );
        v5 = v85.m128i_i32[2];
      }
      if ( *(_BYTE *)(v47 + 13) || v78 < *(_DWORD *)(v47 + 16) )
      {
        if ( v48[1] == 214748364 )
          sub_403E20();
        v50 = *v48;
        *(__int64 *)((char *)v85.m128i_i64 + 4) = (unsigned int)(v5 + 564);
        LOBYTE(v97) = 8;
        v51 = sub_4627C2(0x14u);
        LOBYTE(v97) = 5;
        v51[4] = v78;
        v63 = v93;
        *v51 = v50;
        v62 = v86;
        v51[1] = v50;
        v51[2] = v50;
        *((_WORD *)v51 + 6) = 0;
        sub_403C10((_DWORD *)(v5 + 564), v62, v63, (int)v51);
      }
      if ( !*(_DWORD *)(v5 + 476) )
      {
        if ( sub_419070(a2, v5, v96) && sub_418250(v5 + 460, ExceptionFlags, (int)v92, 0xFFFFFFFF) )
          ++*(_DWORD *)(v5 + 476);
        if ( !*(_DWORD *)(v5 + 512) && !*(_BYTE *)(v5 + 521) )
          *(_BYTE *)(v5 + 520) = *(_BYTE *)(v5 + 476);
      }
      v97 = 10;
      if ( v80 )
      {
        v81 = 0;
        sub_453A20(v80);
      }
      v7 = (_DWORD *)v90;
      v97 = -1;
LABEL_115:
      if ( *(_DWORD *)(v5 + 512) == 2 && (v7[4] & 0xFFFFFFF) == 7 )
      {
        sub_410680((_DWORD *)(v5 + 60), a2, v7, 1);
        sub_40D240(v5, (int)v7, 1u);
        *(_DWORD *)(v5 + 512) = 0;
      }
      return ExceptionAddress;
    }
  }
}
// 4119A4: variable 'v64' is possibly undefined
// 4B6ABC: using guessed type char byte_4B6ABC;
// 4B70F0: using guessed type char byte_4B70F0;
