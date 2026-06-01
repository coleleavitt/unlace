/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045060
// Address: 0x0000000100045060

//----- (0000000100045060) ----------------------------------------------------
__int64 __fastcall sub_100045060(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _OWORD *v5; // rax
  const char *v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // al
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  char *v17; // rax
  __int64 v18; // rcx
  char v19; // dl
  char __s[16]; // [rsp+0h] [rbp-40h] BYREF
  __int128 v21; // [rsp+10h] [rbp-30h]

  sub_100045990(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 520) = a2;
    *(_BYTE *)(a1 + 568) = 1;
    return 0;
  }
  *(_BYTE *)(a1 + 568) = 0;
  if ( !*(_QWORD *)(a1 + 520) )
  {
    v5 = operator new(0x28u);
    *v5 = 0;
    v5[1] = 0;
    *((_DWORD *)v5 + 8) = 1065353216;
    *(_QWORD *)(a1 + 520) = v5;
  }
  if ( !(unsigned int)sub_100045E80(a1, "__IDC__", "1", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "far", "__far", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "near", "__near", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "huge", "__huge", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "interrupt", "__interrupt", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_cdecl", "__cdecl", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_pascal", "__pascal", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_stdcall", "__stdcall", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_fastcall", "__fastcall", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_thiscall", "__thiscall", 0, 0, nullptr)
    && !(unsigned int)sub_100045E80(a1, "_export", "__export", 0, 0, nullptr) )
  {
    v6 = "_import";
    if ( !(unsigned int)sub_100045E80(a1, "_import", "__import", 0, 0, nullptr) )
    {
      v11 = qword_1000AE220;
      if ( (((unsigned __int8)qword_1000AE220 | a3) & 1) != 0 )
      {
        if ( (unsigned int)sub_100045E80(a1, "__MAC__", "1", 0, 0, nullptr) )
          return get_qerrno();
        if ( (unsigned int)sub_100045E80(a1, "__UNIX__", "1", 0, 0, nullptr) )
          return get_qerrno();
        v6 = "__EA64__";
        if ( (unsigned int)sub_100045E80(a1, "__EA64__", "1", 0, 0, nullptr) )
          return get_qerrno();
        v11 = qword_1000AE220;
      }
      if ( (v11 & 1) != 0 )
      {
        v12 = dword_1000AC1C8;
        if ( dword_1000AC1C8 == -1 )
        {
          dword_1000AC1C8 = callui(53, (_DWORD)v6, v7, v8, v9, v10, __s[0]) & 1;
          callui(52, (unsigned int)&xmmword_1000AE3B0, 32, v13, v14, v15, __s[0]);
          v12 = dword_1000AC1C8;
        }
        if ( v12 )
        {
          sub_100045E80(a1, "__QT__", "1", 0, 0, nullptr);
          v16 = "__GUI__";
        }
        else
        {
          v16 = "__TXT__";
        }
        sub_100045E80(a1, v16, "1", 0, 0, nullptr);
        sub_100045E80(a1, "__IDA_VERSION__", &xmmword_1000AE3B0, 0, 0, nullptr);
        v21 = xmmword_1000AE3C0;
        *(_OWORD *)__s = xmmword_1000AE3B0;
        v17 = strchr(__s, 46);
        if ( v17 )
        {
          v18 = 0;
          do
          {
            v19 = v17[v18 + 1];
            v17[v18++] = v19;
          }
          while ( v19 );
          if ( (unsigned __int64)-v18 >= 0xFFFFFFFFFFFFFFFELL )
            *(_WORD *)&v17[v18 - 1] = 48;
        }
        sub_100045E80(a1, "__IDAVER__", __s, 0, 0, nullptr);
      }
      return 0;
    }
  }
  return get_qerrno();
}
// 10004536E: variable 'v7' is possibly undefined
// 10004536E: variable 'v8' is possibly undefined
// 10004536E: variable 'v9' is possibly undefined
// 10004536E: variable 'v10' is possibly undefined
// 10004538D: variable 'v13' is possibly undefined
// 10004538D: variable 'v14' is possibly undefined
// 10004538D: variable 'v15' is possibly undefined
// 1000AC1C8: using guessed type int dword_1000AC1C8;
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1000AE220: using guessed type __int64 qword_1000AE220;
// 1000AE3B0: using guessed type __int128 xmmword_1000AE3B0;
// 1000AE3C0: using guessed type __int128 xmmword_1000AE3C0;
