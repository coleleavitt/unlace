/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EC90
// Address: 0x000000000008EC90

//----- (000000000008EC90) ----------------------------------------------------
__int64 __fastcall sub_8EC90(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  _QWORD *v7; // rdi
  __int64 *v8; // r13
  __int64 *v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rbp
  char v17; // [rsp+Eh] [rbp-3Ah] BYREF
  char v18; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v7 = (_QWORD *)a1[2];
  v8 = (__int64 *)v7[47];
  v9 = &v8[10 * v7[48]];
  if ( v8 < v9 )
  {
    v10 = a2;
    do
    {
      if ( *v8 > a2 )
        break;
      v11 = v8[1];
      if ( v11 > a2 )
        goto LABEL_9;
      v8 += 10;
    }
    while ( v8 < v9 );
  }
  result = 0xFFFFFFFFLL;
  if ( v8 != v9 )
  {
    v10 = *v8;
    if ( *v8 < a3 )
    {
      v11 = v8[1];
LABEL_9:
      if ( v11 > a3 )
        v11 = a3;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v7 + 288LL))(
             v7,
             v10,
             &v18,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v10, v11);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_9FDA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
      }
      v13 = v8 + 10;
      do
      {
        v14 = (_QWORD *)a1[2];
        result = 0xFFFFFFFFLL;
        if ( (unsigned __int64)v13 >= v14[47] + 80LL * v14[48] )
          break;
        v15 = v13[1];
        if ( v15 > a3 )
          break;
        v16 = *v13;
        if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *, __int64, _QWORD))(*v14 + 288LL))(
               v14,
               *v13,
               &v17,
               1,
               0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 24))(a1, v16, v15);
        }
        else
        {
          sub_9FDA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
          result = 0xFFFFFFFFLL;
        }
        v13 += 10;
      }
      while ( (_DWORD)result == -1 );
    }
  }
  return result;
}
