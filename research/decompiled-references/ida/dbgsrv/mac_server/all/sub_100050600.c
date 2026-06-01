/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050600
// Address: 0x0000000100050600

//----- (0000000100050600) ----------------------------------------------------
__int64 __fastcall sub_100050600(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  _QWORD *v6; // rdi
  unsigned __int64 *v7; // rbx
  unsigned __int64 *i; // rcx
  unsigned __int64 v9; // r15
  __int64 result; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  char v16; // [rsp+Eh] [rbp-32h] BYREF
  char v17; // [rsp+Fh] [rbp-31h] BYREF

  v6 = (_QWORD *)a1[2];
  v7 = (unsigned __int64 *)v6[47];
  for ( i = &v7[10 * v6[48]]; v7 < i; v7 += 10 )
  {
    if ( *v7 > a2 )
      break;
    v9 = v7[1];
    if ( v9 > a2 )
      goto LABEL_8;
  }
  result = 0xFFFFFFFFLL;
  if ( v7 != i )
  {
    a2 = *v7;
    if ( *v7 < a3 )
    {
      v9 = v7[1];
LABEL_8:
      if ( v9 >= a3 )
        v9 = a3;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v6 + 288LL))(
             v6,
             a2,
             &v16,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, a2, v9);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_100060FA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
      }
      v11 = v7 + 10;
      do
      {
        v12 = (_QWORD *)a1[2];
        result = 0xFFFFFFFFLL;
        if ( (unsigned __int64)v11 >= v12[47] + 80LL * v12[48] )
          break;
        v13 = v11[1];
        if ( v13 > a3 )
          break;
        v14 = *v11;
        if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *, __int64, _QWORD))(*v12 + 288LL))(
               v12,
               *v11,
               &v17,
               1,
               0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 24))(a1, v14, v13);
        }
        else
        {
          sub_100060FA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
          result = 0xFFFFFFFFLL;
        }
        v11 += 10;
      }
      while ( (_DWORD)result == -1 );
    }
  }
  return result;
}
