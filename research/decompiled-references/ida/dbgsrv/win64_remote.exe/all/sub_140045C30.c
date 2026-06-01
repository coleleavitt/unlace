/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045C30
// Address: 0x0000000140045C30

//----- (0000000140045C30) ----------------------------------------------------
__int64 __fastcall sub_140045C30(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4)
{
  double v4; // xmm2_8
  __int64 v5; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rcx
  unsigned __int64 *i; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1[2];
  v8 = *(_QWORD *)(v5 + 352);
  v9 = (unsigned __int64 *)(80LL * *(_QWORD *)(v5 + 360) + v8 - 80);
  if ( (unsigned __int64)v9 < v8 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 < a3 )
      break;
    v9 -= 10;
    if ( (unsigned __int64)v9 < v8 )
      return 0xFFFFFFFFLL;
  }
  v11 = v9[1];
  v12 = v11;
  if ( a3 < v11 )
    v12 = a3;
  if ( v12 == -1 )
    return 0xFFFFFFFFLL;
  if ( v10 <= a2 && v11 > a2 )
    v10 = a2;
  result = sub_140045BA0(a1, v10, v12, a4);
  if ( (_DWORD)result == -1 )
  {
    v14 = (_QWORD *)a1[2];
    for ( i = v9 - 10; (unsigned __int64)i >= v14[44]; i -= 10 )
    {
      v16 = i[1];
      if ( a2 >= v16 )
        break;
      v17 = *i;
      if ( *i <= a2 )
        v17 = a2;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v14 + 280LL))(
             v14,
             v17,
             &v18,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 16))(a1, v17, v16);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_140043130(
          a1[2],
          (struct __crt_locale_pointers *)"dbg_bin_search memory range %a..%a is unreadable, skip it\n",
          v4,
          a4);
      }
      v14 = (_QWORD *)a1[2];
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
// 140045D26: variable 'v4' is possibly undefined
