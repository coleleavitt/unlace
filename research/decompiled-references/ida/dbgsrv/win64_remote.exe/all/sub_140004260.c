/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004260
// Address: 0x0000000140004260

//----- (0000000140004260) ----------------------------------------------------
__int64 __fastcall sub_140004260(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  unsigned __int64 v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v8[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *, int *))(*(_QWORD *)a3 + 48LL))(a3, 1, v8, &v9) )
    return 0;
  do
  {
    if ( !v9 )
      break;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v8[0] + 24LL))(v8[0], &v10) )
    {
      v5 = v10;
      v6 = *(_QWORD *)(a2 + 8) + 1LL;
      if ( v6 > *(_QWORD *)(a2 + 16) )
        *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v6, 4u);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * (*(_QWORD *)(a2 + 8))++) = v5;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  }
  while ( !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *, int *))(*(_QWORD *)a3 + 48LL))(a3, 1, v8, &v9) );
  return 0;
}
