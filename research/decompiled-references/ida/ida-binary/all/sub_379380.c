__int64 __fastcall sub_379380(__int64 a1, __int64 *a2, double *a3, __int64 a4, int *a5, __int64 a6, __m128d a7)
{
  unsigned __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, int); // rax
  __int64 v12; // rax
  int *v13; // [rsp+10h] [rbp-28h]
  __int64 v14; // [rsp+18h] [rbp-20h]

  v9 = *(int *)(a6 + 4);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 640LL);
  if ( v10 == sub_374FA0 )
  {
    if ( v9 < a2[35] )
      return sub_2BD320(a1, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v14 = a6;
    v13 = a5;
    v12 = v10(a1, (__int64)a2, v9);
    a5 = v13;
    a6 = v14;
    if ( (v12 & 0x100) == 0 )
      return sub_2BD320(a1, a2, a3, a4, a5, a6, a7);
  }
  return 1;
}
