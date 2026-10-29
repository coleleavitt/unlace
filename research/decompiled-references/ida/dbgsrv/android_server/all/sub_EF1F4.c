/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF1F4
// Address: 0x00000000000EF1F4

//----- (00000000000EF1F4) ----------------------------------------------------
__int64 __fastcall sub_EF1F4(_QWORD *a1, __int64 *a2)
{
  unsigned int (__fastcall *v2)(__int64, __int64, _QWORD, _QWORD *, __int64 *, __int64); // x23
  __int64 v3; // x24
  unsigned int v6; // w0
  unsigned int v7; // w19
  __int64 v8; // x1
  unsigned int v9; // w0
  __int64 s[202]; // [xsp+50h] [xbp+50h] BYREF
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD *, __int64 *); // [xsp+6A0h] [xbp+6A0h]

  v2 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64 *, __int64))a1[2];
  v3 = a1[3];
  while ( 1 )
  {
    v6 = sub_EE428(a2, (char *)s);
    v7 = v6;
    if ( v6 != 5 && v6 )
      return 2;
    v8 = v6 == 5 ? 26LL : 10LL;
    if ( v2(1, v8, *a1, a1, a2, v3) )
      return 2;
    if ( v7 == 5 )
      return v7;
    if ( v12 )
      break;
LABEL_10:
    sub_EF0E8(a2, s);
  }
  v9 = v12(1, 10, *a1, a1, a2);
  v7 = v9;
  if ( v9 != 7 )
  {
    if ( v9 != 8 )
      return 2;
    goto LABEL_10;
  }
  return v7;
}
