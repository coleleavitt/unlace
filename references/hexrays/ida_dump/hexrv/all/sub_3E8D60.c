unsigned int *__fastcall sub_3E8D60(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // r9
  unsigned int *v12; // rbx

  v11 = **(int **)(*(_QWORD *)(a1 + 832) + 632LL);
  if ( v11 == a4 || v11 == a5 || v11 == a6 )
    sub_1D1C90(a1, 3u, a3, 0, 0x3BEA45E214ADDC55LL, v11, 0);
  v12 = (unsigned int *)sub_1D1C90(a1, a2, a3, a4, a5, a6, a7);
  if ( v12 )
    sub_11A400(v12);
  return v12;
}
