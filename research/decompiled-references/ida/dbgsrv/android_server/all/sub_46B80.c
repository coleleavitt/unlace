/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B80
// Address: 0x0000000000046B80

//----- (0000000000046B80) ----------------------------------------------------
__int64 __fastcall sub_46B80(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  unsigned __int64 i; // x23

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v4 + 80) = a3;
  *(_DWORD *)(v4 + 84) = a2;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536)) & 1) == 0 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a1 + 536);
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    for ( i = 0; i < v8; ++i )
    {
      if ( (*(_DWORD *)(v7 + 80) & *(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + v9 + 12)) != 0 )
      {
        sub_49F64((pthread_mutex_t *)(*(_QWORD *)(v7 + 16) + v10), a4 + v9, v7);
        v8 = *(_QWORD *)(v7 + 24);
      }
      v10 += 40;
      v9 += 32;
    }
  }
  return 1;
}
