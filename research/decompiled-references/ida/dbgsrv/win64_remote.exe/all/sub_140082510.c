/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140082510
// Address: 0x0000000140082510

//----- (0000000140082510) ----------------------------------------------------
__int64 __fastcall sub_140082510(unsigned __int16 a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // dx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  char v8; // [rsp+48h] [rbp-10h]
  unsigned __int16 v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 v10; // [rsp+70h] [rbp+18h] BYREF

  v9 = a1;
  result = 0xFFFF;
  if ( a1 != 0xFFFF )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v6, a2);
    v3 = v9;
    if ( v9 >= 0x100u )
    {
      v4 = *(_QWORD *)(v7 + 312);
      if ( v4 )
      {
        v5 = _crtLCMapStringW(v4, 256, &v9, 1, &v10, 1);
        v3 = v9;
        if ( v5 )
          v3 = v10;
      }
    }
    else if ( (wctype[(unsigned __int8)v9 + 1] & 1) != 0 )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 272) + (unsigned __int8)v9);
    }
    else
    {
      v3 = (unsigned __int8)v9;
    }
    if ( v8 )
      *(_DWORD *)(v6 + 936) &= ~2u;
    return v3;
  }
  return result;
}
// 14008956C: using guessed type __int64 __fastcall _crtLCMapStringW(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
