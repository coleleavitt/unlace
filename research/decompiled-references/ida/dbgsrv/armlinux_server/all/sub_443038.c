/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443038
// Address: 0x0000000000443038

//----- (0000000000443038) ----------------------------------------------------
__int64 __fastcall sub_443038(__int64 a1, __int64 a2, const char **a3)
{
  const char *v6; // x19
  size_t v7; // x0
  __int64 result; // x0
  __int64 (__fastcall *v9)(); // x2

  v6 = *a3;
  v7 = strlen(*a3);
  *a3 = &v6[v7];
  sub_442BD8(a1, a2, &v6[v7], *(_DWORD *)(a1 + 128));
  if ( *((unsigned __int8 *)*a3 - 1) == *(unsigned __int8 *)(a1 + 184) )
  {
    v9 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
    if ( v9 != nullsub_2 )
      ((void (__fastcall *)(__int64, __int64))v9)(a2, 16);
    result = *(unsigned int *)(a1 + 128);
    *(_DWORD *)(a1 + 176) = result;
  }
  else
  {
    result = *(unsigned int *)(a1 + 116);
    *(_DWORD *)(a1 + 176) = result;
  }
  return result;
}
// 442BA8: using guessed type __int64 __fastcall nullsub_2();
