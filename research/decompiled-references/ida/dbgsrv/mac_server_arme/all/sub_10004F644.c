/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F644
// Address: 0x000000010004F644

//----- (000000010004F644) ----------------------------------------------------
__int64 __fastcall sub_10004F644(__int64 a1, int a2, _QWORD *a3, unsigned __int64 *a4, unsigned __int64 *a5)
{
  unsigned __int64 v10; // x1
  const char *v11; // x23
  unsigned __int8 *v12; // x8
  unsigned __int64 v14; // x1
  unsigned __int8 *v15; // x8
  int v18; // w24
  int v19; // w22
  bool v20; // zf
  int v21; // w25
  __int16 v22; // w0
  char v23; // w6
  __int64 (__fastcall **v24)(); // [xsp+18h] [xbp-58h] BYREF
  __int16 v25; // [xsp+20h] [xbp-50h]

  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000B44();
  if ( a2 == 16777218 )
  {
    v11 = (const char *)*a5;
    v14 = a5[1];
    v15 = (unsigned __int8 *)*a5;
    while ( (unsigned __int64)v15 < v14 )
    {
      if ( !*v15++ )
      {
        *a5 = (unsigned __int64)v15;
        goto LABEL_19;
      }
    }
    v11 = nullptr;
LABEL_19:
    v18 = unpack_dd(a5, v14);
    v21 = unpack_dd(a5, a5[1]);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000B44();
    v22 = unpack_dw(a5, a5[1]);
    v24 = &off_10009EF98;
    v25 = v22;
    v20 = v21 == 0;
  }
  else
  {
    if ( a2 != 16777217 )
      return 0xFFFFFFFFLL;
    v11 = (const char *)*a5;
    v10 = a5[1];
    v12 = (unsigned __int8 *)*a5;
    while ( (unsigned __int64)v12 < v10 )
    {
      if ( !*v12++ )
      {
        *a5 = (unsigned __int64)v12;
        goto LABEL_15;
      }
    }
    v11 = nullptr;
LABEL_15:
    v18 = unpack_dd(a5, v10);
    v19 = unpack_dd(a5, a5[1]);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000B44();
    v24 = (__int64 (__fastcall **)())&off_10009EF80;
    v20 = v19 == 0;
  }
  v23 = !v20;
  return sub_10004F848(
           (__int64 (__fastcall ***)(_QWORD, void **, __int64, __int64 *, void **, void **))&v24,
           a1,
           a3,
           a4,
           v11,
           v18,
           v23);
}
// 10009EF80: using guessed type __int64 (__fastcall *off_10009EF80)(int, int);
// 10009EF98: using guessed type __int64 (__fastcall *off_10009EF98)();
