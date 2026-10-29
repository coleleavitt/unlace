/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045D70
// Address: 0x0000000140045D70

//----- (0000000140045D70) ----------------------------------------------------
__int64 __fastcall sub_140045D70(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4)
{
  double v4; // xmm2_8
  __int64 v5; // rax
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // r8
  __int64 result; // rax
  _QWORD *v14; // r10
  _QWORD *i; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rbp
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1[2];
  v8 = a2;
  v9 = *(__int64 **)(v5 + 352);
  v10 = &v9[10 * *(_QWORD *)(v5 + 360)];
  v11 = v9 == v10;
  if ( v9 < v10 )
  {
    while ( *v9 <= a2 )
    {
      if ( v9[1] > a2 )
      {
        if ( a2 != -1 )
          goto LABEL_11;
        break;
      }
      if ( *v9 <= a2 )
      {
        v9 += 10;
        if ( v9 < v10 )
          continue;
      }
      break;
    }
    v11 = v9 == v10;
  }
  if ( v11 )
    return 0xFFFFFFFFLL;
  v8 = *v9;
  if ( *v9 >= a3 )
    return 0xFFFFFFFFLL;
LABEL_11:
  v12 = v9[1];
  if ( a3 < v12 )
    v12 = a3;
  result = sub_140045BA0(a1, v8, v12, a4);
  if ( (_DWORD)result == -1 )
  {
    v14 = (_QWORD *)a1[2];
    for ( i = v9 + 10; (unsigned __int64)i < v14[44] + 80LL * v14[45]; i += 10 )
    {
      v16 = i[1];
      if ( a3 < v16 )
        break;
      v17 = *i;
      if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *, __int64, _QWORD))(*v14 + 280LL))(v14, *i, &v18, 1, 0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 16))(a1, v17, v16);
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
// 140045E77: variable 'v4' is possibly undefined
