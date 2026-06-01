/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_405940
// Address: 0x00405940

//----- (00405940) --------------------------------------------------------
int __userpurge sub_405940@<eax>(HMODULE *a1@<ecx>, __m128i a2@<xmm0>, int a3)
{
  HMODULE *v3; // ebx
  signed int i; // esi
  const CHAR *v5; // eax
  bool v6; // zf
  const CHAR *v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // eax
  LPCCH v11; // esi
  const CHAR *v12; // eax
  CHAR *v13; // eax
  const char *v14; // eax
  const CHAR *v15; // eax
  HMODULE LibraryA; // eax
  FARPROC SymbolServerGetOptionData; // eax
  FARPROC SymbolServerSetOptions; // ecx
  const CHAR *v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  HMODULE v23; // eax
  OLECHAR *v24; // eax
  int v25; // esi
  int v26; // edx
  HMODULE v27; // ecx
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  HMODULE v32; // edi
  int v33; // ecx
  HMODULE v34; // ecx
  int v35; // [esp+10h] [ebp-60h] BYREF
  int v36; // [esp+14h] [ebp-5Ch] BYREF
  int v37; // [esp+18h] [ebp-58h] BYREF
  HMODULE *v38; // [esp+1Ch] [ebp-54h]
  HMODULE hModule; // [esp+20h] [ebp-50h]
  char v40[4]; // [esp+24h] [ebp-4Ch] BYREF
  int (__stdcall *v41)(int, __int64 *); // [esp+28h] [ebp-48h]
  void (__stdcall *v42)(_DWORD, _DWORD, _DWORD); // [esp+2Ch] [ebp-44h]
  __int64 v43; // [esp+30h] [ebp-40h] BYREF
  __int64 v44; // [esp+38h] [ebp-38h] BYREF
  LPCCH lpMultiByteStr; // [esp+40h] [ebp-30h] BYREF
  int v46; // [esp+44h] [ebp-2Ch]
  int v47; // [esp+4Ch] [ebp-24h] BYREF
  int v48; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch] BYREF
  unsigned int v50; // [esp+58h] [ebp-18h]
  int v51; // [esp+5Ch] [ebp-14h]
  LPOLESTR lpsz; // [esp+60h] [ebp-10h] BYREF
  int v53; // [esp+6Ch] [ebp-4h]
  char v54[260]; // [esp+70h] [ebp+0h] BYREF

  v3 = a1;
  v38 = a1;
  if ( a1[2] )
    return 0;
  if ( !byte_4B69AC )
  {
    CoInitialize(nullptr);
    byte_4B69AC = 1;
  }
  v48 = 0;
  v47 = 0;
  i = sub_4047B0(v3, a2, &v35);
  if ( i >= 0 )
  {
    if ( *(_DWORD *)(a3 + 4) <= 1u || !sub_404740(*(const CHAR **)a3) )
      goto LABEL_110;
    v5 = MultiByteStr;
    if ( *(_DWORD *)(a3 + 4) )
      v5 = *(const CHAR **)a3;
    if ( !sub_457B00(v5) )
      goto LABEL_110;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v6 = *(_DWORD *)(a3 + 4) == 0;
    v7 = MultiByteStr;
    v53 = 0;
    if ( !v6 )
      v7 = *(const CHAR **)a3;
    sub_45AAC0((int)&v49, (int)v7, -1);
    v8 = *(_DWORD *)(a3 + 68);
    if ( (v8 & 6) == 0 || (LOBYTE(lpsz) = 1, (v8 & 0x10) != 0) )
      LOBYTE(lpsz) = 0;
    v9 = &dword_48A0F4;
    if ( v50 )
      v9 = (int *)v49;
    v10 = sub_404450(a2, (int)v3[3], (int)v9, a3 + 24, lpsz);
    i = v10;
    if ( v10 == -2140340218 || v10 == -2140340217 )
    {
      v53 = 1;
      if ( v49 )
      {
        v50 = 0;
        sub_453A20((void *)v49);
      }
      v53 = -1;
      goto LABEL_100;
    }
    sub_403330((int)(v3 + 10), (unsigned int *)a3);
    v53 = 2;
    if ( v49 )
    {
      v50 = 0;
      sub_453A20((void *)v49);
    }
    v53 = -1;
    if ( i )
    {
LABEL_110:
      if ( *(_DWORD *)(a3 + 16) <= 1u )
        goto LABEL_98;
      sub_402AD0(&lpMultiByteStr, (unsigned int *)(a3 + 12));
      v11 = MultiByteStr;
      v12 = MultiByteStr;
      v53 = 3;
      if ( v46 )
        v12 = lpMultiByteStr;
      if ( !sub_457B00(v12) )
      {
        sub_4566A0((int)v3, a2, v54, 260);
        v13 = (CHAR *)MultiByteStr;
        if ( *(_DWORD *)(a3 + 16) )
          v13 = *(CHAR **)(a3 + 12);
        v14 = sub_456590(v13);
        sub_402970(a2, (LPVOID *)&lpMultiByteStr, "%s\\%s", v54, v14);
        sub_402760("PDB: \"%s\": not found, trying \"%s\"\n");
      }
      v15 = MultiByteStr;
      if ( v46 )
        v15 = lpMultiByteStr;
      if ( !sub_404740(v15) )
      {
        sub_401400((void **)&lpMultiByteStr);
        return -2140340219;
      }
      sub_403330((int)(v3 + 10), (unsigned int *)&lpMultiByteStr);
      LibraryA = LoadLibraryA("symsrv.dll");
      hModule = LibraryA;
      a2 = 0;
      v40[0] = 0;
      v41 = nullptr;
      v42 = nullptr;
      v43 = 0;
      v44 = 0;
      if ( LibraryA )
      {
        SymbolServerGetOptionData = GetProcAddress(LibraryA, "SymbolServerGetOptionData");
        v41 = (int (__stdcall *)(int, __int64 *))SymbolServerGetOptionData;
        if ( SymbolServerGetOptionData )
        {
          v43 = ((int (__stdcall *)(int, __int64 *))SymbolServerGetOptionData)(2048, &v43);
          v44 = v41(1, &v44);
        }
        SymbolServerSetOptions = GetProcAddress(hModule, "SymbolServerSetOptions");
        v42 = (void (__stdcall *)(_DWORD, _DWORD, _DWORD))SymbolServerSetOptions;
        if ( SymbolServerSetOptions )
        {
          ((void (__stdcall *)(int, char *, int))SymbolServerSetOptions)(2048, v40, (int)v40 >> 31);
          v42(1, sub_403B30, (int)sub_403B30 >> 31);
          if ( (dword_4B70EC & 0x10000) != 0 )
            v42(1024, 1, 0);
        }
      }
      v20 = MultiByteStr;
      if ( v46 )
        v11 = lpMultiByteStr;
      if ( *(_DWORD *)(a3 + 52) )
        v20 = *(const CHAR **)(a3 + 48);
      sub_45AAC0((int)(v3 + 7), (int)v20, -1);
      sub_45AAC0((int)(v3 + 4), (int)v11, -1);
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v6 = (*(_BYTE *)(a3 + 68) & 1) == 0;
      LOBYTE(v53) = 4;
      lpsz = nullptr;
      if ( v6 )
        lpsz = (LPOLESTR)2;
      sub_407560((char **)&v49, (LPVOID *)&lpsz);
      lpsz = (LPOLESTR)3;
      sub_407560((char **)&v49, (LPVOID *)&lpsz);
      v21 = 0;
      for ( i = -2147467259; v21 < v50; ++v21 )
      {
        v22 = sub_4055C0(v38, (__m128i)0LL, a3, *(_DWORD *)(v49 + 4 * v21));
        i = v22;
        if ( !v22 )
          break;
        if ( v22 == -2140340219 )
          break;
      }
      LOBYTE(v53) = 5;
      if ( v49 )
      {
        v50 = 0;
        sub_453A20((void *)v49);
      }
      v23 = hModule;
      LOBYTE(v53) = 3;
      if ( hModule )
      {
        if ( v42 )
        {
          v42(2048, v43, HIDWORD(v43));
          v42(1, v44, HIDWORD(v44));
          v23 = hModule;
        }
        FreeLibrary(v23);
        hModule = nullptr;
        if ( v40[0] )
          ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))off_4B46B0)(24, 10, 0, &off_4B46B0);
      }
      v53 = -1;
      sub_401400((void **)&lpMultiByteStr);
      v3 = v38;
      if ( i )
      {
LABEL_98:
        if ( !i )
          i = -2147467259;
        goto LABEL_100;
      }
    }
    i = (*(int (__stdcall **)(HMODULE, int *))(*(_DWORD *)v3[3] + 32))(v3[3], &v48);
    if ( (dword_4B70EC & 0x10000) != 0 )
    {
      if ( i != -2147418113 && i != -2147024809 && (i < -2140340223 || (unsigned int)(i + 2140340223) >= 0x19) )
        sub_453860(a2, i);
      sub_402760("PDB: openSession(): %s\n");
    }
    if ( i >= 0 )
    {
      if ( *(_DWORD *)(a3 + 60) != -1 )
      {
        sub_402760("PDB: using load address %a\n");
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v48 + 16))(v48, *(_DWORD *)(a3 + 60), 0);
      }
      i = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v48 + 20))(v48, &v47);
      if ( !i )
      {
        v24 = (OLECHAR *)sub_4627C2(0x24u);
        lpsz = v24;
        if ( v24 )
        {
          v25 = v47;
          v26 = v48;
          v27 = v3[3];
          *((_DWORD *)v24 + 1) = a3;
          *((_DWORD *)v24 + 2) = -1;
          *((_DWORD *)v24 + 3) = 0;
          *((_DWORD *)v24 + 4) = -1;
          *((_DWORD *)v24 + 5) = -1;
          *(_DWORD *)v24 = &off_489A08;
          *((_DWORD *)v24 + 6) = v27;
          *((_DWORD *)v24 + 7) = v26;
          *((_DWORD *)v24 + 8) = v25;
        }
        else
        {
          v24 = nullptr;
        }
        v28 = v47;
        v3[2] = (HMODULE)v24;
        if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)v28 + 376))(v28, &v36) )
        {
          v29 = 332;
          v36 = 332;
        }
        else
        {
          v29 = v36;
        }
        if ( v29 <= 0x1F1 )
        {
          if ( v29 == 497 )
          {
            v30 = 68;
          }
          else
          {
            switch ( v29 )
            {
              case 0x1C0u:
              case 0x1C2u:
                v30 = 101;
                break;
              case 0x1C4u:
                v30 = 104;
                break;
              case 0x1F0u:
                v30 = 67;
                break;
              default:
                goto LABEL_92;
            }
          }
LABEL_94:
          *((_DWORD *)v3[2] + 2) = v30;
          *((_DWORD *)v3[2] + 3) = v35;
          v32 = v3[2];
          i = (*(int (__stdcall **)(_DWORD, LPOLESTR *))(**((_DWORD **)v32 + 8) + 12))(*((_DWORD *)v32 + 8), &lpsz);
          if ( !i )
          {
            v33 = *((_DWORD *)v32 + 7);
            *((_DWORD *)v32 + 5) = lpsz;
            i = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v33 + 12))(v33, &v37);
            if ( !i )
            {
              *((_DWORD *)v32 + 4) = v37;
              return 0;
            }
          }
          goto LABEL_100;
        }
        if ( v29 > 0x8664 )
        {
          if ( v29 == 43620 )
          {
            v30 = 246;
            goto LABEL_94;
          }
        }
        else
        {
          if ( v29 == 34404 )
          {
            v30 = 208;
            goto LABEL_94;
          }
          v31 = v29 - 498;
          if ( !v31 )
          {
            v30 = 69;
            goto LABEL_94;
          }
          if ( v31 == 14 )
          {
            v30 = 128;
            goto LABEL_94;
          }
        }
LABEL_92:
        v30 = 3;
        goto LABEL_94;
      }
    }
  }
LABEL_100:
  if ( !v3[2] )
  {
    if ( v47 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v47 + 8))(v47);
    if ( v48 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v48 + 8))(v48);
    v34 = v3[3];
    if ( v34 )
      (*(void (__stdcall **)(HMODULE))(*(_DWORD *)v34 + 8))(v3[3]);
  }
  return i;
}
// 403B30: using guessed type _DWORD __stdcall sub_403B30(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 489A08: using guessed type int (__stdcall *off_489A08)(char);
// 48A0F4: using guessed type int dword_48A0F4;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B69AC: using guessed type char byte_4B69AC;
// 4B70EC: using guessed type int dword_4B70EC;
