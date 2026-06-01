/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CCD8
// Address: 0x000000000045CCD8

//----- (000000000045CCD8) ----------------------------------------------------
__int64 sub_45CCD8(__int64 a1, __int64 a2, ...)
{
  __int64 (*v5)(void); // x2
  int v6; // w22
  __int64 v7; // x1
  const char *v8; // x0
  gcc_va_list va; // [xsp+30h] [xbp-100h] BYREF
  gcc_va_list va1; // [xsp+58h] [xbp-D8h] BYREF
  __int64 v11; // [xsp+100h] [xbp-30h]
  __int64 v12; // [xsp+108h] [xbp-28h]
  __int64 v13; // [xsp+110h] [xbp-20h]
  __int64 v14; // [xsp+118h] [xbp-18h]
  __int64 v15; // [xsp+120h] [xbp-10h]
  __int64 v16; // [xsp+128h] [xbp-8h]

  va_start(va, a2);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  v15 = va_arg(va, _QWORD);
  v16 = va_arg(va, _QWORD);
  va_end(va);
  if ( *(_BYTE *)(a1 + 792) )
  {
    v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 408LL);
    if ( v5 == sub_45B6B0 )
      v6 = *__errno_location();
    else
      v6 = v5();
    va_start(va1, a2);
    v7 = *(_QWORD *)(a1 + 480);
    va_start(va, a2);
    sub_45C308(0, v7, a2, va);
    v8 = (const char *)sub_492F00(v6);
    sub_40AAF0(a1, (__int64)": %s\n", v8);
  }
  return 0;
}
// 45CCD8: could not find valid save-restore pair for x22
// 45C308: using guessed type __int64 __fastcall sub_45C308(_QWORD, _QWORD, _QWORD, _QWORD);
