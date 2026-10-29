/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14007B510
// Address: 0x000000014007B510

//----- (000000014007B510) ----------------------------------------------------
__int64 __fastcall sub_14007B510(unsigned __int16 *a1, unsigned __int16 *a2, struct __crt_locale_pointers *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rbx
  struct __crt_locale_data *locinfo; // rdx
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  int v10; // ebp
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  struct __crt_locale_pointers v15; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-20h]

  v3 = a2;
  v4 = a1;
  if ( a1 && a2 )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v14, a3);
    locinfo = v15.locinfo;
    if ( *((_QWORD *)v15.locinfo + 39) )
    {
      do
      {
        if ( *v4 >= 0x100u )
        {
          v9 = sub_140082510(*v4, &v15);
          locinfo = v15.locinfo;
        }
        else
        {
          v8 = *(unsigned __int8 *)v4;
          if ( (wctype[v8 + 1] & 1) != 0 )
            LOBYTE(v8) = *(_BYTE *)(v8 + *((_QWORD *)locinfo + 34));
          v9 = (unsigned __int8)v8;
        }
        ++v4;
        v10 = v9;
        v11 = v9;
        if ( *v3 >= 0x100u )
        {
          v13 = sub_140082510(*v3, &v15);
          locinfo = v15.locinfo;
        }
        else
        {
          v12 = *(unsigned __int8 *)v3;
          if ( (wctype[v12 + 1] & 1) != 0 )
            LOBYTE(v12) = *(_BYTE *)(v12 + *((_QWORD *)locinfo + 34));
          v13 = (unsigned __int8)v12;
        }
        ++v3;
        v7 = v11 - v13;
      }
      while ( !v7 && v10 );
    }
    else
    {
      v7 = _ascii_wcsicmp(v4, v3);
    }
    if ( v16 )
      *(_DWORD *)(v14 + 936) &= ~2u;
    return v7;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}
// 14007B488: using guessed type __int64 __fastcall _ascii_wcsicmp(_QWORD, _QWORD);
