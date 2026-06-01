__int64 __fastcall sub_AAF8A0(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // eax
  unsigned int *v3; // r12
  unsigned int *v5; // r12

  sub_15B6250(a1[2], 1);
  v1 = *a1;
  v2 = *(_DWORD *)(a1[2] + 252);
  if ( v2 == 5 )
  {
    v5 = (unsigned int *)sub_186B270(0x6C8u);
    sub_A5E520((__int64)v5, *a1);
    sub_8F1E10(v1, v5);
    return sub_AAF350(a1);
  }
  else
  {
    if ( v2 == 6 )
    {
      v3 = (unsigned int *)sub_186B270(0x48u);
      sub_A75F00(v3, *a1);
    }
    else
    {
      v3 = (unsigned int *)sub_186B270(0x668u);
      sub_A44350((__int64)v3, *a1);
    }
    sub_8F1E10(v1, v3);
    return sub_AAF350(a1);
  }
}

