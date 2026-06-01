/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CF64
// Address: 0x000000000006CF64

//----- (000000000006CF64) ----------------------------------------------------
_QWORD *__fastcall sub_6CF64(__int64 a1, __int64 a2, int a3, const char **a4)
{
  __int64 v4; // x24
  const char *v6; // x23
  char *v10; // x0
  __int64 v11; // x8
  __int64 v12; // x8

  v4 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v6 = *a4;
  v10 = strstr(*a4, *(const char **)(v4 + 48LL * a3 + 24));
  if ( v10 )
  {
    v11 = *(_QWORD *)(v4 + 48LL * a3 + 32);
    if ( v11 )
      v12 = v11 - 1;
    else
      v12 = 0;
    *a4 = &v10[v12];
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
  }
  else
  {
    *a4 = &v6[strlen(v6)];
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, (unsigned int)(a3 + 1));
  }
  return sub_6CCE4((_QWORD *)a1, a2, (unsigned __int64)*a4, *(_DWORD *)(a1 + 120));
}
