__int64 __fastcall sub_AAD750(__int64 *a1)
{
  __int64 v1; // r12
  unsigned int *v2; // rbp
  unsigned int *v3; // rbp

  sub_15B5820(a1[2]);
  v1 = *a1;
  v2 = (unsigned int *)sub_186B270(0x1D0u);
  sub_B45410(v2, *a1);
  sub_8F1E10(v1, v2);
  v3 = (unsigned int *)sub_186B270(0xD8u);
  sub_B23630(v3, *a1);
  return sub_8F1E10(*a1, v3);
}

