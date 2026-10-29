/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044C60
// Address: 0x0000000140044C60

//----- (0000000140044C60) ----------------------------------------------------
__int64 __fastcall sub_140044C60(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  double v7; // xmm2_8
  double v8; // xmm3_8
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 result; // rax

  v13 = dword_1400C6C34;
  if ( dword_1400C6C34 == -1 )
  {
    v13 = sub_14005D470("IDA_IDB_BIN_SEARCH", 0);
    dword_1400C6C34 = (unsigned __int8)v13;
  }
  if ( v13 )
    return 0;
  sub_140043130(a1, (struct __crt_locale_pointers *)"dbg_bin_search %a..%a\n", v7, v8);
  if ( a3 >= a4 || !*(_QWORD *)(a5 + 8) || !*(_QWORD *)(a1 + 360) )
    return 0;
  v14 = operator new(0x1098u);
  v15 = v14;
  if ( (a6 & 0x10) != 0 )
  {
    v16 = a7;
    if ( v14 )
    {
      sub_1400448B0((__int64)v14, a2, a1, a5, a6, a7);
      *v15 = &off_140096FB8;
      v15[530] = 0;
    }
    else
    {
      v15 = nullptr;
    }
  }
  else
  {
    v16 = a7;
    if ( v14 )
    {
      sub_1400448B0((__int64)v14, a2, a1, a5, a6, a7);
      *v15 = &off_140096FA0;
      v15[530] = 4096;
    }
    else
    {
      v15 = nullptr;
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64))(*v15 + 8LL))(v15, a3, a4);
  if ( (_DWORD)result == -7 )
  {
    if ( v15[522] != -1 )
    {
      sub_140043130(a1, (struct __crt_locale_pointers *)"dbg_bin_search failed to read memory at %a\n", v7);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 8) <= 1u )
          sub_140002FB0(v16, "Failed to read memory at %a\n", v7);
      }
    }
    return 4294967289LL;
  }
  return result;
}
// 140044CC2: variable 'v7' is possibly undefined
// 140044CC2: variable 'v8' is possibly undefined
// 140096FA0: using guessed type __int64 (__fastcall *off_140096FA0)(void *Block);
// 140096FB8: using guessed type __int64 (__fastcall *off_140096FB8)(void *Block);
// 1400C6C34: using guessed type int dword_1400C6C34;
