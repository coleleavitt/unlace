/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CEC8
// Address: 0x000000000007CEC8

//----- (000000000007CEC8) ----------------------------------------------------
__int64 __fastcall sub_7CEC8(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v8; // w20
  __int64 v12; // x8
  _QWORD *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  char *v17; // x1
  __int64 v18; // x0
  unsigned __int8 *v19; // x8
  int v20; // w10
  _OWORD v21[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v22; // [xsp+28h] [xbp-38h]

  v8 = a3;
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_7D730(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 624) = a2;
    *(_BYTE *)(a1 + 672) = 1;
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 624);
  *(_BYTE *)(a1 + 672) = 0;
  if ( !v12 )
  {
    v13 = operator new(0x28u);
    v13[2] = 0;
    v13[3] = 0;
    *v13 = 0;
    v13[1] = 0;
    *((_DWORD *)v13 + 8) = 1065353216;
    *(_QWORD *)(a1 + 624) = v13;
  }
  if ( !(unsigned int)sub_7DD30(a1, "__IDC__", "1", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "far", "__far", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "near", "__near", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "huge", "__huge", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "interrupt", "__interrupt", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_cdecl", "__cdecl", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_pascal", "__pascal", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_stdcall", "__stdcall", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_fastcall", "__fastcall", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_thiscall", "__thiscall", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_export", "__export", 0, 0, nullptr)
    && !(unsigned int)sub_7DD30(a1, "_import", "__import", 0, 0, nullptr) )
  {
    if ( (v8 & 1) == 0 && !byte_166D60 )
      return 0;
    if ( !(unsigned int)sub_7DD30(a1, "__LINUX__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_7DD30(a1, "__UNIX__", "1", 0, 0, nullptr)
      && !(unsigned int)sub_7DD30(a1, "__EA64__", "1", 0, 0, nullptr) )
    {
      if ( byte_166D60 )
      {
        v16 = dword_164B28;
        if ( dword_164B28 == -1 )
        {
          dword_164B28 = callui(53, v14, v15) & 1;
          callui(52, &xmmword_166BB0, 32);
          v16 = dword_164B28;
        }
        if ( v16 )
        {
          sub_7DD30(a1, "__QT__", "1", 0, 0, nullptr);
          v17 = "__GUI__";
        }
        else
        {
          v17 = "__TXT__";
        }
        sub_7DD30(a1, v17, "1", 0, 0, nullptr);
        sub_7DD30(a1, "__IDA_VERSION__", &xmmword_166BB0, 0, 0, nullptr);
        v21[0] = xmmword_166BB0;
        v21[1] = xmmword_166BC0;
        v18 = __strchr_chk((const char *)v21, 46, 32);
        if ( v18 )
        {
          v19 = (unsigned __int8 *)(v18 + 1);
          do
          {
            v20 = *v19;
            *(v19++ - 1) = v20;
          }
          while ( v20 );
          if ( (unsigned __int64)&v19[~(v18 + 1)] <= 1 )
            *((_WORD *)v19 - 1) = 48;
        }
        sub_7DD30(a1, "__IDAVER__", v21, 0, 0, nullptr);
      }
      return 0;
    }
  }
  return get_qerrno();
}
// 7D200: variable 'v14' is possibly undefined
// 7D200: variable 'v15' is possibly undefined
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// 164B28: using guessed type int dword_164B28;
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
// 166BB0: using guessed type __int128 xmmword_166BB0;
// 166BC0: using guessed type __int128;
// 166D60: using guessed type char byte_166D60;
