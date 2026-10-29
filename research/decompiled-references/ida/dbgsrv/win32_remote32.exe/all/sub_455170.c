/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455170
// Address: 0x00455170

//----- (00455170) --------------------------------------------------------
int __userpurge sub_455170@<eax>(int a1@<ebx>, int a2, DWORD a3)
{
  _DWORD *v3; // edi
  DWORD v4; // esi
  const char **v5; // eax
  const char *v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  bool v9; // zf
  const CHAR *v10; // eax
  const CHAR *v11; // eax
  char *v12; // eax
  bool v13; // al
  char *v14; // eax
  HANDLE StdHandle; // eax
  HANDLE v16; // eax
  HANDLE v17; // eax
  char *v18; // eax
  char *v19; // esi
  unsigned int v20; // esi
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  const char *v24; // ecx
  char *v25; // ecx
  char *v26; // eax
  int v27; // ecx
  int v28; // esi
  unsigned int v29; // edi
  int v30; // edx
  unsigned int v31; // esi
  unsigned int v32; // edx
  unsigned int v33; // esi
  char *v34; // eax
  DWORD v35; // esi
  int v36; // edx
  unsigned int v37; // ecx
  DWORD v38; // eax
  const WCHAR *v39; // eax
  DWORD LastError; // eax
  const char *v41; // eax
  int v42; // edx
  int v43; // ecx
  void *v44; // eax
  char v45; // al
  struct _PROCESS_INFORMATION *v46; // eax
  char *v47; // eax
  int v48; // edi
  int v49; // esi
  void *v50; // ecx
  const char *v51; // eax
  char *v52; // edi
  const char *v53; // ecx
  int v54; // esi
  void *v55; // eax
  int v56; // esi
  char *v57; // eax
  int v58; // edi
  int v59; // esi
  void *v60; // ecx
  const char *v61; // eax
  char *v62; // edi
  const char *v63; // ecx
  int v64; // esi
  void *v65; // eax
  void *v66; // edi
  int v67; // edx
  int v68; // ecx
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+Ch] [ebp-4FCh] BYREF
  struct _STARTUPINFOW StartupInfo; // [esp+1Ch] [ebp-4ECh] BYREF
  void *v72; // [esp+60h] [ebp-4A8h]
  LPWSTR lpCommandLine; // [esp+64h] [ebp-4A4h] BYREF
  int v74; // [esp+68h] [ebp-4A0h]
  int v75; // [esp+6Ch] [ebp-49Ch]
  WCHAR *v76; // [esp+70h] [ebp-498h] BYREF
  int v77; // [esp+74h] [ebp-494h]
  int v78; // [esp+78h] [ebp-490h]
  char *v79; // [esp+7Ch] [ebp-48Ch] BYREF
  const char *v80; // [esp+80h] [ebp-488h]
  int v81; // [esp+84h] [ebp-484h]
  LPCWSTR lpApplicationName; // [esp+88h] [ebp-480h] BYREF
  int v83; // [esp+8Ch] [ebp-47Ch]
  int v84; // [esp+90h] [ebp-478h]
  LPCWSTR lpFileName; // [esp+94h] [ebp-474h] BYREF
  unsigned int v86; // [esp+98h] [ebp-470h]
  int v87; // [esp+9Ch] [ebp-46Ch]
  int hProcess; // [esp+A0h] [ebp-468h]
  const char *v89; // [esp+A4h] [ebp-464h] BYREF
  int v90; // [esp+A8h] [ebp-460h]
  int v91; // [esp+ACh] [ebp-45Ch]
  LPCCH lpMultiByteStr; // [esp+B0h] [ebp-458h] BYREF
  int v93; // [esp+B4h] [ebp-454h]
  unsigned int v94; // [esp+B8h] [ebp-450h]
  char *v95; // [esp+BCh] [ebp-44Ch] BYREF
  unsigned int v96; // [esp+C0h] [ebp-448h]
  unsigned int v97; // [esp+C4h] [ebp-444h]
  LPVOID v98; // [esp+C8h] [ebp-440h] BYREF
  int v99; // [esp+CCh] [ebp-43Ch]
  int v100; // [esp+D0h] [ebp-438h]
  unsigned int v101; // [esp+D4h] [ebp-434h]
  DWORD dwCreationFlags; // [esp+D8h] [ebp-430h]
  const char *v103; // [esp+DCh] [ebp-42Ch]
  char v104; // [esp+E3h] [ebp-425h]
  const char *v105; // [esp+E4h] [ebp-424h]
  WCHAR Buffer[260]; // [esp+E8h] [ebp-420h] BYREF
  __int8 v107[260]; // [esp+2F0h] [ebp-218h] BYREF
  CHAR MultiByteStr[260]; // [esp+3F4h] [ebp-114h] BYREF
  int v109; // [esp+504h] [ebp-4h]

  v3 = (_DWORD *)a2;
  v4 = a3;
  v72 = (void *)a2;
  dwCreationFlags = a3;
  v5 = (const char **)(a2 + 8);
  if ( (dword_4B70EC & 0x4000000) != 0 )
  {
    sub_402760("Launching process %s, with args %s\n");
    v5 = (const char **)(a2 + 8);
  }
  v6 = *v5;
  memset(&StartupInfo.lpReserved, 0, 64);
  StartupInfo.cb = 68;
  ProcessInformation = 0;
  v104 = 0;
  v105 = v6;
  lpMultiByteStr = nullptr;
  v93 = 0;
  v94 = 0;
  v109 = 0;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = v7 + 1;
    if ( v7 != -1 )
    {
      lpMultiByteStr = (LPCCH)sub_453B00((int)&lpMultiByteStr, nullptr, v7 + 1, 1u);
      v8 = v7 + 1;
    }
    v93 = v8;
    sub_464310((unsigned int)lpMultiByteStr, (unsigned int)v105, v7);
    lpMultiByteStr[v7] = 0;
    v4 = dwCreationFlags;
  }
  v9 = (*(_BYTE *)(a2 + 4) & 8) == 0;
  v109 = 1;
  if ( !v9 )
  {
    v93 = 0;
    if ( !sub_4560B0("COMSPEC", (void **)&lpMultiByteStr) )
    {
      if ( v94 >= 8 )
      {
        v10 = lpMultiByteStr;
      }
      else
      {
        v10 = (const CHAR *)sub_453B00((int)&lpMultiByteStr, (void *)lpMultiByteStr, 8u, 1u);
        lpMultiByteStr = v10;
      }
      v93 = 8;
      sub_464310((unsigned int)v10, (unsigned int)"cmd.exe", 7u);
      *((_BYTE *)lpMultiByteStr + 7) = 0;
    }
  }
  v11 = ::MultiByteStr;
  if ( v93 )
    v11 = lpMultiByteStr;
  if ( sub_457B00(v11) )
  {
    v12 = (char *)::MultiByteStr;
    if ( v93 )
      v12 = (char *)lpMultiByteStr;
    sub_45ACB0((unsigned int)MultiByteStr, v12, 260);
  }
  else
  {
    v101 = (unsigned int)lpMultiByteStr;
    if ( sub_460570(lpMultiByteStr) )
      sub_45ACB0((unsigned int)MultiByteStr, (char *)v101, 260);
    else
      sub_461920(MultiByteStr, 260, (char *)v101, "exe");
  }
  if ( sub_4567D0((unsigned __int8 *)MultiByteStr) )
  {
    v13 = sub_457B00(MultiByteStr);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 4) & 2) != 0 && sub_457B00(MultiByteStr) )
    {
      sub_456810(v107, 260, MultiByteStr);
      sub_45ACB0((unsigned int)MultiByteStr, v107, 260);
      goto LABEL_41;
    }
    sub_4579C0((LPWSTR *)&lpFileName, MultiByteStr);
    LOBYTE(v109) = 2;
    if ( v86 <= 1 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1452);
    }
    if ( SearchPathW(nullptr, lpFileName, L".exe", 0x104u, Buffer, nullptr) )
    {
      lpApplicationName = nullptr;
      v83 = 0;
      v84 = 0;
      LOBYTE(v109) = 3;
      if ( sub_45A700((int)&lpApplicationName, Buffer, -1) )
      {
        v14 = (char *)::MultiByteStr;
        if ( v83 )
          v14 = (char *)lpApplicationName;
        sub_45ACB0((unsigned int)MultiByteStr, v14, 260);
        v104 = 1;
      }
      LOBYTE(v109) = 4;
      if ( lpApplicationName )
      {
        v83 = 0;
        sub_453A20((void *)lpApplicationName);
      }
    }
    else if ( sub_4574A0(v107, 260, (int)MultiByteStr, nullptr) )
    {
      sub_45ACB0((unsigned int)MultiByteStr, v107, 260);
      v104 = 1;
    }
    LOBYTE(v109) = 5;
    if ( lpFileName )
    {
      v86 = 0;
      sub_453A20((void *)lpFileName);
    }
    v13 = v104;
    LOBYTE(v109) = 1;
  }
  if ( !v13 )
  {
    v98 = nullptr;
    v99 = 0;
    v100 = 0;
    LOBYTE(v109) = 40;
    sub_402970((__m128i)0LL, &v98, "Unable to launch process %s,file does not exist", MultiByteStr);
    if ( (dword_4B70EC & 0x4000000) != 0 )
      sub_402760("%s\n");
    if ( v4 )
    {
      v66 = *(void **)v4;
      v67 = *(_DWORD *)(v4 + 4);
      v68 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)v4 = v98;
      *(_DWORD *)(v4 + 4) = v99;
      *(_DWORD *)(v4 + 8) = v100;
      v98 = v66;
      v99 = v67;
      v100 = v68;
    }
    else
    {
      v66 = v98;
    }
    LOBYTE(v109) = 41;
    if ( v66 )
    {
      v99 = 0;
      sub_453A20(v66);
    }
    goto LABEL_178;
  }
LABEL_41:
  if ( *(_DWORD *)(a2 + 16) != -1 || *(_DWORD *)(a2 + 20) != -1 || *(_DWORD *)(a2 + 24) != -1 )
  {
    StdHandle = *(HANDLE *)(a2 + 20);
    if ( StdHandle == (HANDLE)-1 )
      StdHandle = GetStdHandle(0xFFFFFFF5);
    StartupInfo.hStdOutput = StdHandle;
    v16 = *(HANDLE *)(a2 + 16);
    if ( v16 == (HANDLE)-1 )
      v16 = GetStdHandle(0xFFFFFFF6);
    StartupInfo.hStdInput = v16;
    v17 = *(HANDLE *)(a2 + 24);
    if ( v17 == (HANDLE)-1 )
      v17 = GetStdHandle(0xFFFFFFF4);
    StartupInfo.dwFlags |= 0x100u;
    StartupInfo.hStdError = v17;
  }
  v18 = *(char **)(a2 + 12);
  v19 = (char *)pNodeName;
  v95 = nullptr;
  v96 = 0;
  if ( v18 )
    v19 = v18;
  v97 = 0;
  v101 = (unsigned int)v19;
  LOBYTE(v109) = 6;
  if ( v19 )
  {
    v20 = strlen(v19);
    v21 = v20 + 1;
    if ( v20 != -1 )
    {
      v95 = (char *)sub_453B00((int)&v95, nullptr, v20 + 1, 1u);
      v21 = v20 + 1;
    }
    v96 = v21;
    sub_464310((unsigned int)v95, v101, v20);
    v95[v20] = 0;
    v19 = (char *)v101;
  }
  v22 = *(_DWORD *)(a2 + 4);
  LOBYTE(v109) = 7;
  if ( (v22 & 8) != 0 )
  {
    v9 = *v19 == 0;
    v103 = "/c ";
    if ( !v9 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( (v22 & 4) == 0 )
  {
LABEL_61:
    v103 = pNodeName;
LABEL_62:
    if ( sub_464F10(MultiByteStr, 0x20u) )
      sub_402970((__m128i)0LL, (LPVOID *)&v95, "\"%s\" %s%s", MultiByteStr, v103, v19);
    else
      sub_402970((__m128i)0LL, (LPVOID *)&v95, "%s %s%s", MultiByteStr, v103, v19);
  }
  v23 = *(_DWORD *)a2;
  v101 = 0;
  v103 = nullptr;
  if ( v23 <= 0x20 )
    v24 = nullptr;
  else
    v24 = *(const char **)(a2 + 32);
  v105 = v24;
  lpFileName = nullptr;
  v86 = 0;
  v87 = 0;
  LOBYTE(v109) = 8;
  if ( v23 > 0x1C )
  {
    v25 = *(char **)(a2 + 28);
    if ( v25 )
    {
      sub_454920((__m128i)0LL, (int)&lpFileName, v25, (*(_DWORD *)(a2 + 4) & 0x800) == 0);
      v101 = 1024;
    }
  }
  v79 = nullptr;
  v80 = nullptr;
  v81 = 0;
  v89 = nullptr;
  v90 = 0;
  v91 = 0;
  v26 = (char *)::MultiByteStr;
  if ( v96 )
    v26 = v95;
  LOBYTE(v109) = 10;
  sub_460DD0(a1, (int)&v79, &v89, v26, 4u);
  if ( !v90 )
  {
    v35 = dwCreationFlags;
LABEL_91:
    v36 = v3[1];
    v37 = v101 | 0x10;
    if ( (v36 & 1) == 0 )
      v37 = v101;
    dwCreationFlags = v37 | 0x23;
    v38 = v37 | 0x23;
    if ( (v36 & 2) == 0 )
      v38 = v37;
    dwCreationFlags = v38;
    if ( (v36 & 0x100) != 0 )
    {
      StartupInfo.dwFlags |= 1u;
      StartupInfo.wShowWindow = 0;
    }
    sub_4579C0((LPWSTR *)&lpApplicationName, MultiByteStr);
    lpCommandLine = nullptr;
    v74 = 0;
    v75 = 0;
    LOBYTE(v109) = 17;
    if ( v96 > 1 )
      sub_45AAC0((int)&lpCommandLine, (int)v95, -1);
    v39 = nullptr;
    v76 = nullptr;
    v77 = 0;
    v78 = 0;
    LOBYTE(v109) = 18;
    if ( v105 && *v105 )
    {
      sub_45AAC0((int)&v76, (int)v105, -1);
      v39 = v76;
    }
    v105 = (const char *)CreateProcessW(
                           lpApplicationName,
                           lpCommandLine,
                           nullptr,
                           nullptr,
                           StartupInfo.dwFlags != 0,
                           dwCreationFlags,
                           (LPVOID)lpFileName,
                           v39,
                           &StartupInfo,
                           &ProcessInformation);
    if ( !v105 )
    {
      v98 = nullptr;
      v99 = 0;
      v100 = 0;
      LOBYTE(v109) = 19;
      LastError = GetLastError();
      v41 = (const char *)sub_453860((__m128i)0LL, LastError);
      sub_402970((__m128i)0LL, &v98, "%s: CreateProcess failed: %s", MultiByteStr, v41);
      if ( (dword_4B70EC & 0x4000000) != 0 )
        sub_402760("%s\n");
      if ( v35 )
      {
        v42 = *(_DWORD *)(v35 + 4);
        v43 = *(_DWORD *)(v35 + 8);
        v72 = *(void **)v35;
        *(_DWORD *)v35 = v98;
        *(_DWORD *)(v35 + 4) = v99;
        *(_DWORD *)(v35 + 8) = v100;
        v44 = v72;
        v98 = v72;
        v99 = v42;
        v100 = v43;
      }
      else
      {
        v44 = v98;
      }
      LOBYTE(v109) = 20;
      if ( v44 )
      {
        v99 = 0;
        sub_453A20(v44);
      }
      LOBYTE(v109) = 18;
    }
    v45 = (char)v103;
    if ( ((unsigned __int8)v103 & 1) != 0 )
    {
      CloseHandle(StartupInfo.hStdInput);
      v45 = (char)v103;
    }
    if ( (v45 & 2) != 0 )
    {
      CloseHandle(StartupInfo.hStdOutput);
      v45 = (char)v103;
    }
    if ( (v45 & 4) != 0 )
      CloseHandle(StartupInfo.hStdError);
    if ( v105 )
    {
      if ( *v3 > 0x24u && (v46 = (struct _PROCESS_INFORMATION *)v3[9]) != nullptr )
        *v46 = ProcessInformation;
      else
        CloseHandle(ProcessInformation.hThread);
      hProcess = (int)ProcessInformation.hProcess;
      LOBYTE(v109) = 21;
      if ( v76 )
      {
        v77 = 0;
        sub_453A20(v76);
        v76 = nullptr;
        v78 = 0;
      }
      LOBYTE(v109) = 22;
      if ( lpCommandLine )
      {
        v74 = 0;
        sub_453A20(lpCommandLine);
        lpCommandLine = nullptr;
        v75 = 0;
      }
      LOBYTE(v109) = 23;
      if ( lpApplicationName )
      {
        v83 = 0;
        sub_453A20((void *)lpApplicationName);
        lpApplicationName = nullptr;
        v84 = 0;
      }
      goto LABEL_128;
    }
    LOBYTE(v109) = 31;
    if ( v76 )
    {
      v77 = 0;
      sub_453A20(v76);
      v76 = nullptr;
      v78 = 0;
    }
    LOBYTE(v109) = 32;
    if ( lpCommandLine )
    {
      v74 = 0;
      sub_453A20(lpCommandLine);
      lpCommandLine = nullptr;
      v75 = 0;
    }
    LOBYTE(v109) = 33;
    if ( lpApplicationName )
    {
      v83 = 0;
      sub_453A20((void *)lpApplicationName);
      lpApplicationName = nullptr;
      v84 = 0;
    }
    v57 = (char *)v89;
    LOBYTE(v109) = 34;
    v105 = v89;
    if ( v89 )
    {
      v58 = v90;
      if ( v90 )
      {
        v59 = 0;
        do
        {
          v60 = *(void **)&v57[v59 + 4];
          LOBYTE(v109) = 35;
          if ( v60 )
          {
            *(_DWORD *)&v57[v59 + 8] = 0;
            sub_453A20(v60);
            v61 = v105;
            *(_DWORD *)&v105[v59 + 4] = 0;
            *(_DWORD *)&v61[v59 + 12] = 0;
            v57 = (char *)v89;
            v105 = v89;
          }
          v59 += 28;
          LOBYTE(v109) = 34;
          --v58;
        }
        while ( v58 );
      }
      v90 = 0;
      sub_453A20(v57);
      v89 = nullptr;
      v91 = 0;
    }
    v62 = v79;
    LOBYTE(v109) = 36;
    if ( v79 )
    {
      v63 = v80;
      v105 = v80;
      if ( v80 )
      {
        v64 = 0;
        do
        {
          v65 = *(void **)&v62[v64];
          LOBYTE(v109) = 37;
          if ( v65 )
          {
            *(_DWORD *)&v62[v64 + 4] = 0;
            sub_453A20(v65);
            v63 = v105;
            *(_DWORD *)&v62[v64] = 0;
            *(_DWORD *)&v62[v64 + 8] = 0;
            v62 = v79;
          }
          v64 += 12;
          LOBYTE(v109) = 36;
          v105 = --v63;
        }
        while ( v63 );
      }
      v80 = nullptr;
      sub_453A20(v62);
      v79 = nullptr;
      v81 = 0;
    }
    LOBYTE(v109) = 38;
    if ( lpFileName )
    {
      v86 = 0;
      sub_453A20((void *)lpFileName);
      lpFileName = nullptr;
      v87 = 0;
    }
    LOBYTE(v109) = 39;
    if ( v95 )
    {
      v96 = 0;
      sub_453A20(v95);
    }
LABEL_178:
    v56 = 0;
    goto LABEL_179;
  }
  v27 = v90 - 1;
  v103 = (const char *)(v90 - 1);
  if ( v90 - 1 >= 0 )
  {
    v28 = 28 * v27;
    hProcess = 28 * v27;
    do
    {
      v29 = *(_DWORD *)&v89[v28 + 20];
      v30 = *(_DWORD *)&v89[v28 + 24];
      v31 = v96 != 0 ? v96 - 1 : 0;
      if ( v29 < v31 && v30 )
      {
        v32 = v29 + v30;
        if ( v32 < v31 )
        {
          v33 = v31 - v32;
          sub_464310((unsigned int)&v95[v29], (unsigned int)&v95[v32], v33);
          v29 += v33;
        }
        if ( v29 + 1 <= v97 )
        {
          v34 = v95;
        }
        else
        {
          v34 = (char *)sub_453B00((int)&v95, v95, v29 + 1, 1u);
          v95 = v34;
        }
        v27 = (int)v103;
        v96 = v29 + 1;
        v34[v29] = 0;
      }
      --v27;
      v28 = hProcess - 28;
      v103 = (const char *)v27;
      hProcess -= 28;
    }
    while ( v27 >= 0 );
    v3 = v72;
  }
  v35 = dwCreationFlags;
  v103 = (const char *)sub_454D80((__m128i)0LL, &v89, (LPVOID *)dwCreationFlags, &StartupInfo);
  if ( v103 != (const char *)-1 )
    goto LABEL_91;
  if ( (dword_4B70EC & 0x4000000) != 0 )
    sub_402760("Unable to launch process, redirection error %s");
  hProcess = 0;
LABEL_128:
  v47 = (char *)v89;
  LOBYTE(v109) = 24;
  v105 = v89;
  if ( v89 )
  {
    v48 = v90;
    if ( v90 )
    {
      v49 = 0;
      do
      {
        v50 = *(void **)&v47[v49 + 4];
        LOBYTE(v109) = 25;
        if ( v50 )
        {
          *(_DWORD *)&v47[v49 + 8] = 0;
          sub_453A20(v50);
          v51 = v105;
          *(_DWORD *)&v105[v49 + 4] = 0;
          *(_DWORD *)&v51[v49 + 12] = 0;
          v47 = (char *)v89;
          v105 = v89;
        }
        v49 += 28;
        LOBYTE(v109) = 24;
        --v48;
      }
      while ( v48 );
    }
    v90 = 0;
    sub_453A20(v47);
    v89 = nullptr;
    v91 = 0;
  }
  v52 = v79;
  LOBYTE(v109) = 26;
  if ( v79 )
  {
    v53 = v80;
    v105 = v80;
    if ( v80 )
    {
      v54 = 0;
      do
      {
        v55 = *(void **)&v52[v54];
        LOBYTE(v109) = 27;
        if ( v55 )
        {
          *(_DWORD *)&v52[v54 + 4] = 0;
          sub_453A20(v55);
          v53 = v105;
          *(_DWORD *)&v52[v54] = 0;
          *(_DWORD *)&v52[v54 + 8] = 0;
          v52 = v79;
        }
        v54 += 12;
        LOBYTE(v109) = 26;
        v105 = --v53;
      }
      while ( v53 );
    }
    v80 = nullptr;
    sub_453A20(v52);
    v79 = nullptr;
    v81 = 0;
  }
  LOBYTE(v109) = 28;
  if ( lpFileName )
  {
    v86 = 0;
    sub_453A20((void *)lpFileName);
    lpFileName = nullptr;
    v87 = 0;
  }
  LOBYTE(v109) = 29;
  if ( v95 )
  {
    v96 = 0;
    sub_453A20(v95);
  }
  v56 = hProcess;
LABEL_179:
  v109 = 42;
  if ( lpMultiByteStr )
  {
    v93 = 0;
    sub_453A20((void *)lpMultiByteStr);
  }
  return v56;
}
// 45545F: conditional instruction was optimized away because %var_470.4>=2u
// 45599B: conditional instruction was optimized away because %var_448.4>=2u
// 4B70EC: using guessed type int dword_4B70EC;
// 4B70F0: using guessed type char byte_4B70F0;
