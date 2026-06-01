/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E110
// Address: 0x000000000008E110

//----- (000000000008E110) ----------------------------------------------------
__int64 __fastcall sub_8E110(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 result; // rax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  char v17; // [rsp+Eh] [rbp-3Ah] BYREF
  char v18; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]

  v5 = a3;
  v19 = __readfsqword(0x28u);
  v7 = (_QWORD *)a1[2];
  v8 = v7[47];
  v9 = (unsigned __int64 *)(v8 + 80LL * v7[48] - 80);
  do
  {
    if ( (unsigned __int64)v9 < v8 )
      return 0xFFFFFFFFLL;
    v10 = *v9;
    v9 -= 10;
  }
  while ( v10 >= a3 );
  v11 = v9[11];
  if ( v11 <= a3 )
    v5 = v9[11];
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v12 = v10;
  if ( v11 > a2 )
    v12 = a2;
  if ( v10 > a2 )
    v12 = v10;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v7 + 288LL))(
         v7,
         v12,
         &v18,
         1,
         0) != 1 )
  {
    sub_9FDA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
LABEL_15:
    while ( 1 )
    {
      v14 = (_QWORD *)a1[2];
      if ( (unsigned __int64)v9 < v14[47] )
        break;
      v15 = v9[1];
      if ( v15 <= a2 )
        break;
      v16 = *v9;
      if ( *v9 <= a2 )
        v16 = a2;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v14 + 288LL))(
             v14,
             v16,
             &v17,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v16, v15);
      }
      else
      {
        sub_9FDA0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
        result = 0xFFFFFFFFLL;
      }
      v9 -= 10;
      if ( (_DWORD)result != -1 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v12, v5);
  if ( (_DWORD)result == -1 )
    goto LABEL_15;
  return result;
}
