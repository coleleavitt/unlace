/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140006050
// Address: 0x0000000140006050

//----- (0000000140006050) ----------------------------------------------------
__int64 __fastcall sub_140006050(__int64 a1, __int64 a2)
{
  double v2; // xmm1_8
  __int64 v5; // rbx
  int v6; // r15d
  unsigned __int8 *v7; // rdi
  const CHAR *v8; // rcx
  unsigned __int8 *v9; // rdx
  int v10; // eax
  bool v11; // r9
  const wchar_t *v12; // rdx
  int v13; // eax
  size_t v14; // r12
  char *v15; // rcx
  const char *v16; // rax
  const char *v17; // rdx
  char *v18; // rcx
  size_t v20; // r8
  HMODULE LibraryA; // rax
  FARPROC SymbolServerGetOptionData; // rax
  FARPROC SymbolServerSetOptions; // rax
  unsigned __int8 *v24; // rbx
  __int64 v25; // rcx
  void *v26; // rdx
  bool v27; // zf
  unsigned __int64 v28; // rdi
  int v29; // eax
  HMODULE v30; // rcx
  const char *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rcx
  void *Block; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  void *v49; // [rsp+40h] [rbp-C0h] BYREF
  size_t v50; // [rsp+48h] [rbp-B8h]
  size_t v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  HMODULE hModule; // [rsp+70h] [rbp-90h]
  char v56[8]; // [rsp+78h] [rbp-88h] BYREF
  int (__fastcall *v57)(__int64, __int64 *); // [rsp+80h] [rbp-80h]
  void (__fastcall *v58)(_QWORD, _QWORD); // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v61; // [rsp+A8h] [rbp-58h] BYREF
  char v62[272]; // [rsp+B0h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
    return 0;
  if ( !byte_1400CADF4 )
  {
    CoInitialize(nullptr);
    byte_1400CADF4 = 1;
  }
  v53 = 0;
  v54 = 0;
  LODWORD(v5) = sub_140004DF0(a1, &v48);
  if ( (int)v5 >= 0 )
  {
    v6 = 3;
    v7 = (unsigned __int8 *)Str1;
    if ( *(_QWORD *)(a2 + 8) > 1u && sub_140004D60(*(_BYTE **)a2) )
    {
      v8 = Str1;
      if ( *(_QWORD *)(a2 + 8) )
        v8 = *(const CHAR **)a2;
      if ( sub_14005EF30(v8) )
      {
        Block = nullptr;
        v46 = 0;
        v47 = 0;
        v9 = (unsigned __int8 *)Str1;
        if ( *(_QWORD *)(a2 + 8) )
          v9 = *(unsigned __int8 **)a2;
        sub_140061F60((__int64)&Block, v9, -1);
        v10 = *(_DWORD *)(a2 + 112);
        v11 = (v10 & 6) != 0 && (v10 & 0x10) == 0;
        v12 = (const wchar_t *)&dword_140092834;
        if ( v46 )
          v12 = (const wchar_t *)Block;
        v13 = sub_140004A20(*(_QWORD *)(a1 + 24), v12, a2 + 48, v11);
        LODWORD(v5) = v13;
        if ( v13 == -2140340218 || v13 == -2140340217 )
        {
          if ( Block )
          {
            v46 = 0;
            j_free(Block);
          }
          goto LABEL_118;
        }
        sub_140003700(a1 + 80, a2);
        if ( Block )
        {
          v46 = 0;
          j_free(Block);
        }
        if ( !(_DWORD)v5 )
          goto LABEL_74;
      }
    }
    v14 = *(_QWORD *)(a2 + 32);
    if ( v14 <= 1 )
      goto LABEL_116;
    v49 = nullptr;
    v50 = 0;
    v51 = 0;
    v49 = sub_14005AAA0(v14);
    v51 = v14;
    memcpy(v49, *(const void **)(a2 + 24), v14);
    v50 = v14;
    if ( !sub_14005EF30((const CHAR *)v49) )
    {
      sub_14005DB20(v62, 260);
      v15 = (char *)Str1;
      if ( *(_QWORD *)(a2 + 32) )
        v15 = *(char **)(a2 + 24);
      v16 = sub_14005D9D0(v15);
      sub_140002FB0((__int64)&v49, "%s\\%s", v62, v16);
      v17 = Str1;
      if ( v50 )
        v17 = (const char *)v49;
      sub_140002CE0((struct __crt_locale_pointers *)"PDB: \"%s\": not found, trying \"%s\"\n", v17, v62);
    }
    v18 = (char *)Str1;
    if ( v50 )
      v18 = (char *)v49;
    if ( !sub_140004D60(v18) )
    {
      if ( v49 )
      {
        v50 = 0;
        j_free(v49);
      }
      return 2154627077LL;
    }
    if ( (void **)(a1 + 80) != &v49 )
    {
      v20 = v50 - 1;
      if ( !v50 )
        v20 = 0;
      if ( v20 )
        sub_140001810(a1 + 80, v49, v20);
      else
        *(_QWORD *)(a1 + 88) = 0;
    }
    LibraryA = LoadLibraryA("symsrv.dll");
    hModule = LibraryA;
    v56[0] = 0;
    v57 = nullptr;
    v58 = nullptr;
    v59 = 0;
    v60 = 0;
    if ( LibraryA )
    {
      SymbolServerGetOptionData = GetProcAddress(LibraryA, "SymbolServerGetOptionData");
      v57 = (int (__fastcall *)(__int64, __int64 *))SymbolServerGetOptionData;
      if ( SymbolServerGetOptionData )
      {
        v59 = ((int (__fastcall *)(__int64, __int64 *))SymbolServerGetOptionData)(2048, &v59);
        v60 = v57(1, &v60);
      }
      SymbolServerSetOptions = GetProcAddress(hModule, "SymbolServerSetOptions");
      v58 = (void (__fastcall *)(_QWORD, _QWORD))SymbolServerSetOptions;
      if ( SymbolServerSetOptions )
      {
        ((void (__fastcall *)(__int64, char *))SymbolServerSetOptions)(2048, v56);
        v58(1, sub_140003ED0);
        if ( (dword_1400CB618 & 0x10000) != 0 )
          v58(1024, 1);
      }
    }
    v24 = (unsigned __int8 *)Str1;
    if ( v50 )
      v24 = (unsigned __int8 *)v49;
    if ( *(_QWORD *)(a2 + 80) )
      v7 = *(unsigned __int8 **)(a2 + 72);
    sub_140061F60(a1 + 56, v7, -1);
    sub_140061F60(a1 + 32, v24, -1);
    Block = nullptr;
    v46 = 0;
    v47 = 0;
    if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
    {
      Block = sub_14005ABE0((__int64)&Block, nullptr, 1u, 4u);
      *((_DWORD *)Block + v46) = 0;
    }
    else
    {
      Block = sub_14005ABE0((__int64)&Block, nullptr, 1u, 4u);
      *((_DWORD *)Block + v46) = 2;
    }
    v25 = ++v46;
    v26 = Block;
    if ( v46 + 1 > v47 )
    {
      v26 = sub_14005ABE0((__int64)&Block, Block, v46 + 1, 4u);
      v25 = v46;
      Block = v26;
    }
    *((_DWORD *)v26 + v25) = 3;
    v27 = v46++ == -1;
    LODWORD(v5) = -2147467259;
    v28 = 0;
    if ( !v27 )
    {
      do
      {
        v29 = sub_140005BC0(a1, a2, *((_DWORD *)Block + v28));
        LODWORD(v5) = v29;
        if ( !v29 )
          break;
        if ( v29 == -2140340219 )
          break;
        ++v28;
      }
      while ( v28 < v46 );
    }
    if ( Block )
    {
      v46 = 0;
      j_free(Block);
    }
    v30 = hModule;
    if ( hModule )
    {
      if ( v58 )
      {
        v58(2048, v59);
        v58(1, v60);
        v30 = hModule;
      }
      FreeLibrary(v30);
      hModule = nullptr;
      if ( v56[0] )
        off_1400C6AE0(24, (struct __crt_locale_pointers *)0xA, 0, (va_list)&off_1400C6AE0, (int)Block);
    }
    if ( v49 )
    {
      v50 = 0;
      j_free(v49);
    }
    if ( (_DWORD)v5 )
    {
LABEL_116:
      if ( !(_DWORD)v5 )
        LODWORD(v5) = -2147467259;
    }
    else
    {
LABEL_74:
      v5 = (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24), &v53);
      if ( (dword_1400CB618 & 0x10000) != 0 )
      {
        if ( (_DWORD)v5 == -2147418113 )
        {
          v31 = "Data source has already been prepared.";
        }
        else if ( (_DWORD)v5 == -2147024809 )
        {
          v31 = "Invalid parameter.";
        }
        else if ( (int)v5 < -2140340223 || (unsigned int)(v5 + 2140340223) >= 0x19 )
        {
          v31 = (const char *)sub_14005A890(v5);
        }
        else
        {
          v31 = off_140091880[v5 + 2140340223];
        }
        sub_140002CE0((struct __crt_locale_pointers *)"PDB: openSession(): %s\n", v31);
      }
      if ( (int)v5 >= 0 )
      {
        if ( *(_QWORD *)(a2 + 96) != -1 )
        {
          sub_140002CE0((struct __crt_locale_pointers *)"PDB: using load address %a\n", v2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 32LL))(v53, *(_QWORD *)(a2 + 96));
        }
        LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 40LL))(v53, &v54);
        if ( !(_DWORD)v5 )
        {
          v32 = operator new(0x40u);
          v61 = v32;
          if ( v32 )
          {
            v33 = v54;
            v34 = v53;
            v35 = *(_QWORD *)(a1 + 24);
            v32[1] = a2;
            *((_DWORD *)v32 + 4) = -1;
            *((_DWORD *)v32 + 5) = 0;
            v32[3] = -1;
            *((_DWORD *)v32 + 8) = -1;
            *v32 = &off_140092028;
            v32[5] = v35;
            v32[6] = v34;
            v32[7] = v33;
          }
          else
          {
            v32 = nullptr;
          }
          *(_QWORD *)(a1 + 16) = v32;
          if ( (*(unsigned int (__fastcall **)(__int64, int *))(*(_QWORD *)v54 + 752LL))(v54, &v52) )
          {
            v36 = 332;
            v52 = 332;
          }
          else
          {
            v36 = v52;
          }
          if ( v36 > 0x1F1 )
          {
            v40 = v36 - 498;
            if ( v40 )
            {
              v41 = v40 - 14;
              if ( v41 )
              {
                v42 = v41 - 33892;
                if ( v42 )
                {
                  if ( v42 == 9216 )
                    v6 = 246;
                }
                else
                {
                  v6 = 208;
                }
              }
              else
              {
                v6 = 128;
              }
            }
            else
            {
              v6 = 69;
            }
          }
          else if ( v36 == 497 )
          {
            v6 = 68;
          }
          else
          {
            v37 = v36 - 448;
            if ( v37 && (v38 = v37 - 2) != 0 )
            {
              v39 = v38 - 2;
              if ( v39 )
              {
                if ( v39 == 44 )
                  v6 = 67;
              }
              else
              {
                v6 = 104;
              }
            }
            else
            {
              v6 = 101;
            }
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = v6;
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = v48;
          v43 = *(_QWORD *)(a1 + 16);
          LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v43 + 56) + 24LL))(
                          *(_QWORD *)(v43 + 56),
                          &v48);
          if ( !(_DWORD)v5 )
          {
            *(_DWORD *)(v43 + 32) = v48;
            LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(v43 + 48) + 24LL))(
                            *(_QWORD *)(v43 + 48),
                            &v61);
            if ( !(_DWORD)v5 )
            {
              *(_QWORD *)(v43 + 24) = v61;
              return 0;
            }
          }
        }
      }
    }
  }
LABEL_118:
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    v44 = *(_QWORD *)(a1 + 24);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  return (unsigned int)v5;
}
// 1400065F7: variable 'v2' is possibly undefined
// 140091880: using guessed type char *off_140091880[25];
// 140092028: using guessed type __int64 (__fastcall *off_140092028)(void *Block);
// 140092834: using guessed type int dword_140092834;
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CADF4: using guessed type char byte_1400CADF4;
// 1400CB618: using guessed type int dword_1400CB618;
