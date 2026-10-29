/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81940
// Address: 0x0000000000081940

//----- (0000000000081940) ----------------------------------------------------
__int64 __fastcall sub_81940(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rcx
  char v21; // dl
  _OWORD v22[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  sub_82290(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 456) = a2;
    *(_BYTE *)(a1 + 504) = 1;
    return 0;
  }
  *(_BYTE *)(a1 + 504) = 0;
  if ( !*(_QWORD *)(a1 + 456) )
  {
    v5 = operator new(0x28u);
    v5[1] = 0;
    *v5 = 0;
    *((_DWORD *)v5 + 8) = 1065353216;
    *(_QWORD *)(a1 + 456) = v5;
  }
  if ( !(unsigned int)sub_829B0(a1, "__IDC__", "1", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "far", "__far", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "near", "__near", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "huge", "__huge", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "interrupt", "__interrupt", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_cdecl", "__cdecl", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_pascal", "__pascal", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_stdcall", "__stdcall", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_fastcall", "__fastcall", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_thiscall", "__thiscall", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_export", "__export", 0, 0, nullptr)
    && !(unsigned int)sub_829B0(a1, "_import", "__import", 0, 0, nullptr) )
  {
    if ( (a3 & 1) == 0 && !(_BYTE)qword_156AA8 )
      return 0;
    if ( !(unsigned int)sub_829B0(a1, "__LINUX__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_829B0(a1, "__UNIX__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_829B0(a1, "__EA64__", "1", 0, 0, nullptr) )
    {
      if ( (_BYTE)qword_156AA8 )
      {
        v10 = dword_154B20;
        if ( dword_154B20 == -1 )
        {
          dword_154B20 = callui(53, (unsigned int)"__EA64__", v6, v7, v8, v9, v22[0]) & 1;
          callui(52, (unsigned int)&xmmword_1558F0, 32, v11, v12, v13, v22[0]);
          v10 = dword_154B20;
        }
        if ( v10 )
        {
          sub_829B0(a1, "__QT__", "1", 0, 0, nullptr);
          v14 = "__GUI__";
        }
        else
        {
          v14 = "__TXT__";
        }
        sub_829B0(a1, v14, "1", 0, 0, nullptr);
        sub_829B0(a1, "__IDA_VERSION__", (const char *)&xmmword_1558F0, 0, 0, nullptr);
        v22[1] = xmmword_155900;
        v22[0] = xmmword_1558F0;
        v18 = __strchr_chk((const char *)v22, 46, 32, v15, v16, v17);
        if ( v18 )
        {
          v19 = v18 + 1;
          v20 = (_BYTE *)v19;
          do
          {
            v21 = *v20;
            *(v20 - 1) = *v20;
            ++v20;
          }
          while ( v21 );
          if ( (unsigned __int64)&v20[~v19] <= 1 )
            *((_WORD *)v20 - 1) = 48;
        }
        sub_829B0(a1, "__IDAVER__", (const char *)v22, 0, 0, nullptr);
      }
      return 0;
    }
  }
  return get_qerrno();
}
// 81C44: variable 'v6' is possibly undefined
// 81C44: variable 'v7' is possibly undefined
// 81C44: variable 'v8' is possibly undefined
// 81C44: variable 'v9' is possibly undefined
// 81C63: variable 'v11' is possibly undefined
// 81C63: variable 'v12' is possibly undefined
// 81C63: variable 'v13' is possibly undefined
// 81D08: variable 'v15' is possibly undefined
// 81D08: variable 'v16' is possibly undefined
// 81D08: variable 'v17' is possibly undefined
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
// 154B20: using guessed type int dword_154B20;
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1558F0: using guessed type __int128 xmmword_1558F0;
// 155900: using guessed type __int128 xmmword_155900;
// 156AA8: using guessed type __int64 qword_156AA8;
