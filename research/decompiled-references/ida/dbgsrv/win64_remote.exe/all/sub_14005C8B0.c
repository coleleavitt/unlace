/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005C8B0
// Address: 0x000000014005C8B0

//----- (000000014005C8B0) ----------------------------------------------------
HANDLE __fastcall sub_14005C8B0(__int64 a1, const char **a2)
{
  const char **v2; // r12
  bool v4; // r15
  const char *v5; // rbx
  size_t v6; // rsi
  void *v7; // rax
  void *v8; // rax
  const char *v9; // r13
  const CHAR *v10; // rcx
  char *v11; // rdx
  char *v12; // rbx
  char *v13; // rdx
  HANDLE StdHandle; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  const char *v17; // rdi
  const char *v18; // rbx
  size_t v19; // r15
  void *v20; // rax
  int v21; // eax
  __int8 *v22; // rax
  char *v23; // rdx
  char v24; // bl
  unsigned __int64 v25; // rax
  unsigned __int8 *v26; // rdx
  char *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // r15
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  size_t v34; // rdi
  void *v35; // rax
  int v36; // eax
  HANDLE hProcess; // r14
  int v38; // edx
  DWORD v39; // ecx
  DWORD v40; // edi
  BOOL v41; // edi
  DWORD LastError; // eax
  const char *v43; // rax
  char *v44; // r8
  const char *v45; // rdx
  const char *v46; // rcx
  struct _PROCESS_INFORMATION *v47; // rax
  char *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  void *v51; // rcx
  char *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rbx
  void *v55; // rcx
  char *v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  void *v59; // rcx
  char *v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rbx
  void *v63; // rcx
  void *v64; // rcx
  const char *v65; // r8
  const char *v66; // rdx
  const char *v67; // rcx
  const char *v69; // [rsp+50h] [rbp-B0h] BYREF
  const char *v70; // [rsp+58h] [rbp-A8h]
  const char *v71; // [rsp+60h] [rbp-A0h]
  void *v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-90h]
  unsigned __int64 v74; // [rsp+78h] [rbp-88h]
  void *v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h]
  unsigned __int64 v77; // [rsp+90h] [rbp-70h]
  void *Block; // [rsp+98h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  DWORD dwCreationFlags; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpApplicationName; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpFileName[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-20h]
  void *v87; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]
  LPCWSTR lpCurrentDirectory[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v91; // [rsp+110h] [rbp+10h]
  LPWSTR lpCommandLine[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v93; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v94; // [rsp+130h] [rbp+30h]
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+138h] [rbp+38h] BYREF
  const char **v96; // [rsp+150h] [rbp+50h]
  struct _STARTUPINFOW StartupInfo; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int8 v98[272]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int8 v99[272]; // [rsp+2E0h] [rbp+1E0h] BYREF
  WCHAR Buffer[264]; // [rsp+3F0h] [rbp+2F0h] BYREF

  v2 = a2;
  v96 = a2;
  if ( (dword_1400CB618 & 0x4000000) != 0 )
    sub_140002CE0(
      (struct __crt_locale_pointers *)"Launching process %s, with args %s\n",
      *(const char **)(a1 + 16),
      *(const char **)(a1 + 24));
  memset(&StartupInfo.cb + 1, 0, 100);
  StartupInfo.cb = 104;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  v4 = 0;
  v5 = *(const char **)(a1 + 16);
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  if ( v5 )
  {
    v6 = strlen(v5);
    v7 = nullptr;
    if ( v6 != -1 )
    {
      v7 = sub_14005ABE0((__int64)&v75, nullptr, v6 + 1, 1u);
      v75 = v7;
    }
    v76 = v6 + 1;
    memcpy(v7, v5, v6);
    *((_BYTE *)v75 + v6) = 0;
  }
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    v76 = 0;
    if ( !sub_14005D470("COMSPEC", (__int64)&v75) )
    {
      if ( v77 >= 8 )
      {
        v8 = v75;
      }
      else
      {
        v8 = sub_14005ABE0((__int64)&v75, v75, 8u, 1u);
        v75 = v8;
      }
      v76 = 8;
      memcpy(v8, "cmd.exe", 7u);
      *((_BYTE *)v75 + 7) = 0;
    }
  }
  v9 = Str1;
  v10 = Str1;
  if ( v76 )
    v10 = (const CHAR *)v75;
  if ( sub_14005EF30(v10) )
  {
    v11 = (char *)Str1;
    if ( v76 )
      v11 = (char *)v75;
    sub_1400621E0(v98, v11, 260);
  }
  else
  {
    v12 = (char *)v75;
    if ( sub_140068480(v75) )
      sub_1400621E0(v98, v12, 260);
    else
      sub_1400698F0((char *)v98, 260, v12, "exe");
  }
  if ( sub_14005DC40(v98) )
  {
    v4 = sub_14005EF30((const CHAR *)v98);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 && sub_14005EF30((const CHAR *)v98) )
    {
      sub_14005DC80(v99, 260, (CHAR *)v98);
      sub_1400621E0(v98, v99, 260);
      goto LABEL_41;
    }
    sub_14005EDE0((WCHAR **)lpFileName, (const CHAR *)v98);
    if ( lpFileName[1] <= (LPCWSTR)1 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1452);
    }
    if ( SearchPathW(nullptr, lpFileName[0], L".exe", 0x104u, Buffer, nullptr) )
    {
      lpApplicationName = nullptr;
      v83 = 0;
      v84 = 0;
      if ( sub_140061D80((__int64)&lpApplicationName, Buffer, -1) )
      {
        v13 = (char *)Str1;
        if ( v83 )
          v13 = (char *)lpApplicationName;
        sub_1400621E0(v98, v13, 260);
        v4 = 1;
      }
      if ( lpApplicationName )
      {
        v83 = 0;
        j_free((void *)lpApplicationName);
      }
    }
    else if ( sub_14005E930(v99, 260, (__int64)v98, nullptr) )
    {
      sub_1400621E0(v98, v99, 260);
      v4 = 1;
    }
    if ( lpFileName[0] )
    {
      lpFileName[1] = nullptr;
      j_free((void *)lpFileName[0]);
    }
  }
  if ( !v4 )
  {
    v69 = nullptr;
    v70 = nullptr;
    v71 = nullptr;
    sub_140002FB0((__int64)&v69, "Unable to launch process %s,file does not exist", (const char *)v98);
    if ( (dword_1400CB618 & 0x4000000) != 0 )
    {
      if ( v70 )
        v9 = v69;
      sub_140002CE0((struct __crt_locale_pointers *)"%s\n", v9);
    }
    if ( v2 )
    {
      v65 = *v2;
      v66 = v2[1];
      v67 = v2[2];
      *v2 = v69;
      v2[1] = v70;
      v2[2] = v71;
      v69 = v65;
      v70 = v66;
      v71 = v67;
    }
    else
    {
      v65 = v69;
    }
    if ( !v65 )
      goto LABEL_187;
    v70 = nullptr;
    v64 = (void *)v65;
    goto LABEL_186;
  }
LABEL_41:
  if ( *(_QWORD *)(a1 + 32) != -1 || *(_QWORD *)(a1 + 40) != -1 || *(_QWORD *)(a1 + 48) != -1 )
  {
    StdHandle = *(HANDLE *)(a1 + 40);
    if ( StdHandle == (HANDLE)-1LL )
      StdHandle = GetStdHandle(0xFFFFFFF5);
    StartupInfo.hStdOutput = StdHandle;
    v15 = *(HANDLE *)(a1 + 32);
    if ( v15 == (HANDLE)-1LL )
      v15 = GetStdHandle(0xFFFFFFF6);
    StartupInfo.hStdInput = v15;
    v16 = *(HANDLE *)(a1 + 48);
    if ( v16 == (HANDLE)-1LL )
      v16 = GetStdHandle(0xFFFFFFF4);
    StartupInfo.hStdError = v16;
    StartupInfo.dwFlags |= 0x100u;
  }
  v17 = pNodeName;
  v18 = pNodeName;
  if ( *(_QWORD *)(a1 + 24) )
    v18 = *(const char **)(a1 + 24);
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  if ( v18 )
  {
    v19 = strlen(v18);
    v20 = nullptr;
    if ( v19 != -1 )
    {
      v20 = sub_14005ABE0((__int64)&v72, nullptr, v19 + 1, 1u);
      v72 = v20;
    }
    v73 = v19 + 1;
    memcpy(v20, v18, v19);
    *((_BYTE *)v72 + v19) = 0;
  }
  v21 = *(_DWORD *)(a1 + 8);
  if ( (v21 & 8) != 0 )
  {
    if ( *v18 )
      v17 = "/c ";
  }
  else if ( (v21 & 4) != 0 )
  {
    goto LABEL_65;
  }
  v22 = sub_14006CA14((__int64)v98, 0x20u);
  v23 = "\"%s\" %s%s";
  if ( !v22 )
    v23 = "%s %s%s";
  sub_140002FB0((__int64)&v72, v23, v98, v17, v18);
LABEL_65:
  dwCreationFlags = 0;
  v24 = 0;
  v25 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x40u )
    v94 = nullptr;
  else
    v94 = *(unsigned __int8 **)(a1 + 64);
  *(_OWORD *)lpFileName = 0;
  v86 = 0;
  if ( v25 > 0x38 )
  {
    v26 = *(unsigned __int8 **)(a1 + 56);
    if ( v26 )
    {
      sub_14005BF70((__int64)lpFileName, v26, (*(_DWORD *)(a1 + 8) & 0x800) == 0);
      dwCreationFlags = 1024;
    }
  }
  v87 = nullptr;
  v88 = 0;
  v89 = 0;
  Block = nullptr;
  v79 = 0;
  v80 = 0;
  v27 = (char *)Str1;
  if ( v73 )
    v27 = (char *)v72;
  sub_140068CD0((__int64)&v87, &Block, v27, 4u);
  if ( !v79 )
    goto LABEL_96;
  v28 = (int)v79 - 1;
  if ( (int)v79 - 1 >= 0 )
  {
    v29 = 48LL * ((int)v79 - 1);
    v30 = v73;
    do
    {
      v31 = *(int *)((char *)Block + v29 + 36);
      v32 = v30 - 1;
      if ( !v30 )
        v32 = 0;
      if ( v31 < v32 && *(_DWORD *)((char *)Block + v29 + 40) )
      {
        v33 = v31 + *(int *)((char *)Block + v29 + 40);
        if ( v33 < v32 )
        {
          v34 = v32 - v33;
          memcpy((char *)v72 + v31, (char *)v72 + v33, v34);
          v31 += v34;
        }
        if ( v31 + 1 <= v74 )
        {
          v35 = v72;
        }
        else
        {
          v35 = sub_14005ABE0((__int64)&v72, v72, v31 + 1, 1u);
          v72 = v35;
        }
        v73 = v31 + 1;
        *((_BYTE *)v35 + v31) = 0;
        v30 = v73;
      }
      v29 -= 48;
      --v28;
    }
    while ( v28 >= 0 );
    v2 = v96;
  }
  v36 = sub_14005C490(&Block, (__int64)v2, (__int64)&StartupInfo);
  v24 = v36;
  if ( v36 != -1 )
  {
LABEL_96:
    v38 = *(_DWORD *)(a1 + 8);
    v39 = dwCreationFlags | 0x10;
    if ( (v38 & 1) == 0 )
      v39 = dwCreationFlags;
    v40 = v39 | 0x23;
    if ( (v38 & 2) == 0 )
      v40 = v39;
    if ( (v38 & 0x100) != 0 )
    {
      StartupInfo.dwFlags |= 1u;
      StartupInfo.wShowWindow = 0;
    }
    sub_14005EDE0((WCHAR **)&lpApplicationName, (const CHAR *)v98);
    *(_OWORD *)lpCommandLine = 0;
    v93 = 0;
    if ( v73 > 1 )
      sub_140061F60((__int64)lpCommandLine, (unsigned __int8 *)v72, -1);
    *(_OWORD *)lpCurrentDirectory = 0;
    v91 = 0;
    if ( v94 && *v94 )
      sub_140061F60((__int64)lpCurrentDirectory, v94, -1);
    v41 = CreateProcessW(
            lpApplicationName,
            lpCommandLine[0],
            nullptr,
            nullptr,
            StartupInfo.dwFlags != 0,
            v40,
            (LPVOID)lpFileName[0],
            lpCurrentDirectory[0],
            &StartupInfo,
            &ProcessInformation);
    if ( !v41 )
    {
      v69 = nullptr;
      v70 = nullptr;
      v71 = nullptr;
      LastError = GetLastError();
      v43 = (const char *)sub_14005A890(LastError);
      sub_140002FB0((__int64)&v69, "%s: CreateProcess failed: %s", (const char *)v98, v43);
      if ( (dword_1400CB618 & 0x4000000) != 0 )
      {
        if ( v70 )
          v9 = v69;
        sub_140002CE0((struct __crt_locale_pointers *)"%s\n", v9);
      }
      if ( v2 )
      {
        v44 = (char *)*v2;
        v45 = v2[1];
        v46 = v2[2];
        *v2 = v69;
        v2[1] = v70;
        v2[2] = v71;
        v69 = v44;
        v70 = v45;
        v71 = v46;
      }
      else
      {
        v44 = (char *)v69;
      }
      if ( v44 )
      {
        v70 = nullptr;
        j_free(v44);
      }
    }
    if ( (v24 & 1) != 0 )
      CloseHandle(StartupInfo.hStdInput);
    if ( (v24 & 2) != 0 )
      CloseHandle(StartupInfo.hStdOutput);
    if ( (v24 & 4) != 0 )
      CloseHandle(StartupInfo.hStdError);
    if ( v41 )
    {
      if ( *(_QWORD *)a1 > 0x48u && (v47 = *(struct _PROCESS_INFORMATION **)(a1 + 72)) != nullptr )
        *v47 = ProcessInformation;
      else
        CloseHandle(ProcessInformation.hThread);
      hProcess = ProcessInformation.hProcess;
      if ( lpCurrentDirectory[0] )
      {
        lpCurrentDirectory[1] = nullptr;
        j_free((void *)lpCurrentDirectory[0]);
        lpCurrentDirectory[0] = nullptr;
        v91 = 0;
      }
      if ( lpCommandLine[0] )
      {
        lpCommandLine[1] = nullptr;
        j_free(lpCommandLine[0]);
        lpCommandLine[0] = nullptr;
        v93 = 0;
      }
      if ( lpApplicationName )
      {
        v83 = 0;
        j_free((void *)lpApplicationName);
        lpApplicationName = nullptr;
        v84 = 0;
      }
      goto LABEL_134;
    }
    if ( lpCurrentDirectory[0] )
    {
      lpCurrentDirectory[1] = nullptr;
      j_free((void *)lpCurrentDirectory[0]);
      lpCurrentDirectory[0] = nullptr;
      v91 = 0;
    }
    if ( lpCommandLine[0] )
    {
      lpCommandLine[1] = nullptr;
      j_free(lpCommandLine[0]);
      lpCommandLine[0] = nullptr;
      v93 = 0;
    }
    if ( lpApplicationName )
    {
      v83 = 0;
      j_free((void *)lpApplicationName);
      lpApplicationName = nullptr;
      v84 = 0;
    }
    v56 = (char *)Block;
    if ( Block )
    {
      v57 = v79;
      if ( v79 )
      {
        v58 = 0;
        do
        {
          v59 = *(void **)&v56[v58 + 8];
          if ( v59 )
          {
            *(_QWORD *)&v56[v58 + 16] = 0;
            j_free(v59);
            *(_QWORD *)&v56[v58 + 8] = 0;
            *(_QWORD *)&v56[v58 + 24] = 0;
            v56 = (char *)Block;
          }
          v58 += 48;
          --v57;
        }
        while ( v57 );
      }
      v79 = 0;
      j_free(v56);
      Block = nullptr;
      v80 = 0;
    }
    v60 = (char *)v87;
    if ( v87 )
    {
      v61 = v88;
      if ( v88 )
      {
        v62 = 0;
        do
        {
          v63 = *(void **)&v60[v62];
          if ( v63 )
          {
            *(_QWORD *)&v60[v62 + 8] = 0;
            j_free(v63);
            *(_QWORD *)&v60[v62] = 0;
            *(_QWORD *)&v60[v62 + 16] = 0;
            v60 = (char *)v87;
          }
          v62 += 24;
          --v61;
        }
        while ( v61 );
      }
      v88 = 0;
      j_free(v60);
      v87 = nullptr;
      v89 = 0;
    }
    if ( lpFileName[0] )
    {
      lpFileName[1] = nullptr;
      j_free((void *)lpFileName[0]);
      lpFileName[0] = nullptr;
      v86 = 0;
    }
    v64 = v72;
    if ( !v72 )
    {
LABEL_187:
      hProcess = nullptr;
      goto LABEL_188;
    }
    v73 = 0;
LABEL_186:
    j_free(v64);
    goto LABEL_187;
  }
  if ( (dword_1400CB618 & 0x4000000) != 0 )
  {
    if ( v2 )
    {
      if ( v2[1] )
        v9 = *v2;
    }
    else
    {
      v9 = "Unknown redirection error.\n";
    }
    sub_140002CE0((struct __crt_locale_pointers *)"Unable to launch process, redirection error %s", v9);
  }
  hProcess = nullptr;
LABEL_134:
  v48 = (char *)Block;
  if ( Block )
  {
    v49 = v79;
    if ( v79 )
    {
      v50 = 0;
      do
      {
        v51 = *(void **)&v48[v50 + 8];
        if ( v51 )
        {
          *(_QWORD *)&v48[v50 + 16] = 0;
          j_free(v51);
          *(_QWORD *)&v48[v50 + 8] = 0;
          *(_QWORD *)&v48[v50 + 24] = 0;
          v48 = (char *)Block;
        }
        v50 += 48;
        --v49;
      }
      while ( v49 );
    }
    v79 = 0;
    j_free(v48);
    Block = nullptr;
    v80 = 0;
  }
  v52 = (char *)v87;
  if ( v87 )
  {
    v53 = v88;
    if ( v88 )
    {
      v54 = 0;
      do
      {
        v55 = *(void **)&v52[v54];
        if ( v55 )
        {
          *(_QWORD *)&v52[v54 + 8] = 0;
          j_free(v55);
          *(_QWORD *)&v52[v54] = 0;
          *(_QWORD *)&v52[v54 + 16] = 0;
          v52 = (char *)v87;
        }
        v54 += 24;
        --v53;
      }
      while ( v53 );
    }
    v88 = 0;
    j_free(v52);
    v87 = nullptr;
    v89 = 0;
  }
  if ( lpFileName[0] )
  {
    lpFileName[1] = nullptr;
    j_free((void *)lpFileName[0]);
    lpFileName[0] = nullptr;
    v86 = 0;
  }
  if ( v72 )
  {
    v73 = 0;
    j_free(v72);
  }
LABEL_188:
  if ( v75 )
  {
    v76 = 0;
    j_free(v75);
  }
  return hProcess;
}
// 1400CB618: using guessed type int dword_1400CB618;
// 1400CB61C: using guessed type char byte_1400CB61C;
