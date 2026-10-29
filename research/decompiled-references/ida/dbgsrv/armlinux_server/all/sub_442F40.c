/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442F40
// Address: 0x0000000000442F40

//----- (0000000000442F40) ----------------------------------------------------
__int64 __fastcall sub_442F40(__int64 a1, __int64 a2, int a3, const char **a4)
{
  int v8; // w1
  __int64 v9; // x0
  const char *v10; // x21
  __int64 v11; // x20
  char *v12; // x0
  __int64 v13; // x3
  __int64 (__fastcall *v14)(); // x2
  char *v15; // x0
  __int64 (__fastcall *v17)(); // x2

  v8 = *(_DWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 176) = v8;
  v10 = *a4;
  v11 = v9 + 48LL * a3;
  v12 = strstr(*a4, *(const char **)(v11 + 24));
  if ( v12 )
  {
    v13 = *(_QWORD *)(v11 + 32);
    if ( v13 )
      v12 += v13 - 1;
    *a4 = v12;
    v14 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
    if ( v14 != nullsub_2 )
      ((void (__fastcall *)(__int64, _QWORD))v14)(a2, 0);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
    v15 = (char *)*a4;
  }
  else
  {
    v15 = (char *)&v10[strlen(v10)];
    *a4 = v15;
    v17 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
    if ( v17 != nullsub_2 )
    {
      ((void (__fastcall *)(__int64, _QWORD))v17)(a2, (unsigned int)(a3 + 1));
      v15 = (char *)*a4;
    }
  }
  return sub_442BD8(a1, a2, v15, *(_DWORD *)(a1 + 120));
}
// 442BA8: using guessed type __int64 __fastcall nullsub_2();
