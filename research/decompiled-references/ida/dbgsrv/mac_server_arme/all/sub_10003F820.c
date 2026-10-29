/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003F820
// Address: 0x000000010003F820

//----- (000000010003F820) ----------------------------------------------------
__int64 __fastcall sub_10003F820(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v7; // x0
  int v8; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char *v16; // x1
  char *v17; // x0
  unsigned __int64 v18; // x8
  char *v19; // x9
  int v20; // t1
  char __s[16]; // [xsp+10h] [xbp-50h] BYREF
  __int128 v22; // [xsp+20h] [xbp-40h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  sub_100040098(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 560) = a2;
    *(_BYTE *)(a1 + 608) = 1;
    return 0;
  }
  *(_BYTE *)(a1 + 608) = 0;
  if ( !*(_QWORD *)(a1 + 560) )
  {
    v7 = operator new(0x28u);
    *v7 = 0u;
    v7[1] = 0u;
    *((_DWORD *)v7 + 8) = 1065353216;
    *(_QWORD *)(a1 + 560) = v7;
  }
  if ( !(unsigned int)sub_10004050C(a1, "__IDC__", "1", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "far", "__far", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "near", "__near", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "huge", "__huge", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "interrupt", "__interrupt", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_cdecl", "__cdecl", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_pascal", "__pascal", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_stdcall", "__stdcall", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_fastcall", "__fastcall", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_thiscall", "__thiscall", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_export", "__export", 0, 0, nullptr)
    && !(unsigned int)sub_10004050C(a1, "_import", "__import", 0, 0, nullptr) )
  {
    if ( (a3 & 1) == 0 && (byte_1000A58F0 & 1) == 0 )
      return 0;
    if ( !(unsigned int)sub_10004050C(a1, "__MAC__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_10004050C(a1, "__UNIX__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_10004050C(a1, "__EA64__", "1", 0, 0, nullptr) )
    {
      if ( (byte_1000A58F0 & 1) != 0 )
      {
        v8 = dword_1000A4AE8;
        if ( dword_1000A4AE8 == -1 )
        {
          dword_1000A4AE8 = callui(53) & 1;
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
            52,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            (char *)&xmmword_1000A5A78,
            (va_list)0x20,
            *(va_list *)__s,
            *(__int64 *)&__s[8]);
          v8 = dword_1000A4AE8;
        }
        if ( v8 )
        {
          sub_10004050C(a1, "__QT__", "1", 0, 0, nullptr);
          v16 = "__GUI__";
        }
        else
        {
          v16 = "__TXT__";
        }
        sub_10004050C(a1, v16, "1", 0, 0, nullptr);
        sub_10004050C(a1, "__IDA_VERSION__", &xmmword_1000A5A78, 0, 0, nullptr);
        *(_OWORD *)__s = xmmword_1000A5A78;
        v22 = xmmword_1000A5A88;
        v17 = strchr(__s, 46);
        if ( v17 )
        {
          v18 = 0;
          do
          {
            v19 = v17;
            v20 = (unsigned __int8)*++v17;
            *v19 = v20;
            --v18;
          }
          while ( v20 );
          if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
            *(_WORD *)(v17 - 1) = 48;
        }
        sub_10004050C(a1, "__IDAVER__", __s, 0, 0, nullptr);
      }
      return 0;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return get_qerrno();
}
// 10003FBB4: variable 'v9' is possibly undefined
// 10003FBB4: variable 'v10' is possibly undefined
// 10003FBB4: variable 'v11' is possibly undefined
// 10003FBB4: variable 'v12' is possibly undefined
// 10003FBB4: variable 'v13' is possibly undefined
// 10003FBB4: variable 'v14' is possibly undefined
// 10003FBB4: variable 'v15' is possibly undefined
// 1000A4AE8: using guessed type int dword_1000A4AE8;
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 1000A58F0: using guessed type char byte_1000A58F0;
// 1000A5A78: using guessed type __int128 xmmword_1000A5A78;
// 1000A5A88: using guessed type __int128;
