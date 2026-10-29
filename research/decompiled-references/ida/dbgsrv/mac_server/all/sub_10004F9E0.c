/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F9E0
// Address: 0x000000010004F9E0

//----- (000000010004F9E0) ----------------------------------------------------
__int64 __fastcall sub_10004F9E0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // r14
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  unsigned int v14; // eax
  _QWORD *v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  char v19; // [rsp+Eh] [rbp-32h] BYREF
  char v20; // [rsp+Fh] [rbp-31h] BYREF

  v6 = (_QWORD *)a1[2];
  v7 = v6[47];
  v8 = (unsigned __int64 *)(80LL * v6[48] + v7 - 80);
  v9 = -1;
  while ( (unsigned __int64)v8 >= v7 )
  {
    v10 = *v8;
    v8 -= 10;
    if ( v10 < a3 )
    {
      v11 = v8[11];
      if ( v11 < a3 )
        a3 = v8[11];
      if ( a3 != -1 )
      {
        v12 = a3;
        v13 = a2;
        if ( v10 > a2 )
          v13 = v10;
        if ( v11 <= a2 )
          v13 = v10;
        if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v6 + 288LL))(
               v6,
               v13,
               &v19,
               1,
               0) != 1 )
        {
          sub_100060FA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
          goto LABEL_18;
        }
        v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v13, v12);
        if ( v14 == -1 )
        {
LABEL_18:
          while ( 1 )
          {
            v16 = (_QWORD *)a1[2];
            if ( (unsigned __int64)v8 < v16[47] )
              break;
            v17 = v8[1];
            if ( v17 <= a2 )
              break;
            v18 = *v8;
            if ( *v8 <= a2 )
              v18 = a2;
            if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v16 + 288LL))(
                   v16,
                   v18,
                   &v20,
                   1,
                   0) == 1 )
            {
              v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v18, v17);
              if ( v14 != -1 )
                return v14;
            }
            else
            {
              sub_100060FA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
            }
            v8 -= 10;
          }
        }
        else
        {
          return v14;
        }
      }
      return v9;
    }
  }
  return v9;
}
