/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x00000000000C6694

//----- (00000000000C6694) ----------------------------------------------------
__int64 __fastcall qvfprintf(FILE *a1, char *s, _OWORD *a3)
{
  size_t v6; // x0
  const char *v7; // x0
  __int128 v8; // q0
  __int64 v10; // x0
  _OWORD arg[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v12; // [xsp+28h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    v6 = strlen(s);
    v7 = sub_C61D8(s, (unsigned __int8 *)arg - ((v6 + 115) & 0xFFFFFFFFFFFFFFF0LL), v6 + 100);
    v8 = a3[1];
    arg[0] = *a3;
    arg[1] = v8;
    return vfprintf(a1, v7, arg);
  }
  else
  {
    v10 = set_qerrno(1u);
    *(_DWORD *)__errno(v10) = 9;
    set_qerrno(1u);
    return 0xFFFFFFFFLL;
  }
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
