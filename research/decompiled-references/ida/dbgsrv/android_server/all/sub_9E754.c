/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E754
// Address: 0x000000000009E754

//----- (000000000009E754) ----------------------------------------------------
__int64 __fastcall sub_9E754(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 *v4; // x22
  __int64 v6; // x23
  char *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x22
  __int64 v10; // x0
  bool v11; // zf
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v4 = (__int64 *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( !v3 )
    return 0;
  v6 = v3 + 1;
  if ( v3 != -1 )
  {
    v7 = (char *)qvector_reserve((pthread_mutex_t *)(a2 + 8), nullptr, v3 + 1, 1u);
    v8 = v4[1];
    *v4 = (__int64)v7;
    memset(&v7[v8], 0, v6 - v8);
    v4[1] = v6;
  }
  *(_BYTE *)(*v4 + v3) = 0;
  v9 = *v4;
  v10 = sub_9DBD8();
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 288LL))(
          v10,
          v2,
          v9,
          v3,
          0) == v3;
  result = 0;
  if ( !v11 )
    return throw_idc_exception((__int64 *)a2, "read error");
  return result;
}
