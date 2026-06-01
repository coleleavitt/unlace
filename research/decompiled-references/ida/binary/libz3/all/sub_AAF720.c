__int64 __fastcall sub_AAF720(__int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  unsigned int *v4; // r12
  unsigned int *v6; // r12

  sub_15B6250(a1[2], a2);
  v2 = *a1;
  v3 = *(_DWORD *)(a1[2] + 252);
  if ( v3 == 5 )
  {
    v6 = (unsigned int *)sub_186B270(0x6C8u);
    sub_A5E520((__int64)v6, *a1);
    sub_8F1E10(v2, v6);
    return sub_AAF350(a1);
  }
  else
  {
    if ( v3 == 6 )
    {
      v4 = (unsigned int *)sub_186B270(0x48u);
      sub_A75F00(v4, *a1);
    }
    else
    {
      v4 = (unsigned int *)sub_186B270(0x668u);
      sub_A44350((__int64)v4, *a1);
    }
    sub_8F1E10(v2, v4);
    return sub_AAF350(a1);
  }
}

