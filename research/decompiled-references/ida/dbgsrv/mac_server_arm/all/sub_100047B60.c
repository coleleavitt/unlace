/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047B60
// Address: 0x0000000100047B60

//----- (0000000100047B60) ----------------------------------------------------
__int64 __fastcall sub_100047B60(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  unsigned __int64 *v6; // x23
  unsigned __int64 *i; // x8
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x21
  unsigned __int64 v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 result; // x0
  _QWORD *j; // x24
  _QWORD *v19; // x0
  unsigned __int64 v20; // x22
  __int64 v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  char v28; // [xsp+17h] [xbp-49h] BYREF

  v5 = (_QWORD *)a1[2];
  v6 = (unsigned __int64 *)v5[47];
  for ( i = &v6[10 * v5[48]]; v6 < i; v6 += 10 )
  {
    if ( *v6 > a2 )
      break;
    v8 = v6[1];
    if ( v8 > a2 )
      goto LABEL_8;
  }
  if ( v6 != i )
  {
    a2 = *v6;
    if ( *v6 < a3 )
    {
      v8 = v6[1];
LABEL_8:
      if ( v8 >= a3 )
        v9 = a3;
      else
        v9 = v8;
      v10 = a2;
      if ( (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 288LL))(v5) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v10, v9);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_1000560A0(
          a1[2],
          "dbg_bin_search memory range %a..%a is unreadable, skip it\n",
          v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v10);
      }
      for ( j = v6 + 10; ; j += 10 )
      {
        v19 = (_QWORD *)a1[2];
        if ( (unsigned __int64)j >= v19[47] + 80LL * v19[48] )
          break;
        v20 = j[1];
        if ( v20 > a3 )
          break;
        v21 = *j;
        if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *, __int64, _QWORD))(*v19 + 288LL))(v19, *j, &v28, 1, 0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 24))(a1, v21, v20);
        }
        else
        {
          sub_1000560A0(
            a1[2],
            "dbg_bin_search memory range %a..%a is unreadable, skip it\n",
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v21);
          result = 0xFFFFFFFFLL;
        }
        if ( (_DWORD)result != -1 )
          return result;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
// 100047C48: variable 'v11' is possibly undefined
// 100047C48: variable 'v12' is possibly undefined
// 100047C48: variable 'v13' is possibly undefined
// 100047C48: variable 'v14' is possibly undefined
// 100047C48: variable 'v15' is possibly undefined
// 100047C48: variable 'v16' is possibly undefined
// 100047CD8: variable 'v22' is possibly undefined
// 100047CD8: variable 'v23' is possibly undefined
// 100047CD8: variable 'v24' is possibly undefined
// 100047CD8: variable 'v25' is possibly undefined
// 100047CD8: variable 'v26' is possibly undefined
// 100047CD8: variable 'v27' is possibly undefined
