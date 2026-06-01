__int64 __fastcall sub_AAF650(__int64 *a1)
{
  __int64 v1; // r12
  unsigned int *v2; // rbp

  sub_15B6BF0(a1[2]);
  v1 = *a1;
  if ( *(_DWORD *)(a1[2] + 252) == 2 )
  {
    v2 = (unsigned int *)sub_186B270(0x608u);
    sub_A51C30((__int64)v2, *a1);
  }
  else
  {
    v2 = (unsigned int *)sub_186B270(0x48u);
    sub_A75F00(v2, *a1);
  }
  sub_8F1E10(v1, v2);
  return sub_AAF350(a1);
}

