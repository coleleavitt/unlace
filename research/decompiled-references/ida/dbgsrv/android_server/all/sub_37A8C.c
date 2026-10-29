/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A8C
// Address: 0x0000000000037A8C

//----- (0000000000037A8C) ----------------------------------------------------
__int64 __fastcall sub_37A8C(int a1, int a2, unsigned __int64 *a3)
{
  unsigned int v4; // w0
  unsigned int v5; // w20
  __int64 chk; // x0
  unsigned int v7; // w19
  char *v8; // x22
  _DWORD *v9; // x0
  _DWORD *v10; // x21
  char *v12; // [xsp+0h] [xbp-490h] BYREF
  char haystack[1024]; // [xsp+8h] [xbp-488h] BYREF
  _BYTE v14[64]; // [xsp+408h] [xbp-88h] BYREF
  __int64 v15; // [xsp+448h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_37BAC((__int64)v14, 64, 64, (__int64)"/proc/%d/task/%d/status", a1, a2);
  v4 = __open_2(v14, 0);
  if ( (v4 & 0x80000000) != 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v5 = v4;
    while ( 1 )
    {
      chk = __read_chk(v5, haystack, 1023, 1024);
      if ( (chk & 0x80000000) == 0 )
        break;
      if ( *(_DWORD *)__errno(chk) != 4 )
        goto LABEL_12;
    }
    haystack[(int)chk] = 0;
    v8 = strstr(haystack, "CapPrm:");
    v9 = (_DWORD *)__errno(v8);
    v10 = v9;
    if ( !v8 )
    {
      *v9 = 22;
LABEL_12:
      v7 = -1;
      goto LABEL_13;
    }
    *v9 = 0;
    *a3 = strtoull(v8 + 8, &v12, 16);
    if ( *v10 )
      v7 = -1;
    else
      v7 = 0;
LABEL_13:
    close(v5);
  }
  return v7;
}
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37580: using guessed type __int64 __fastcall __read_chk(_QWORD, _QWORD, _QWORD, _QWORD);
