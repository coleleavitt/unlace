unsigned __int64 __fastcall sub_21A3360(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v4)(void); // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1[9] + 80LL * (unsigned int)a2 + 48) + 24 * HIDWORD(a2);
  if ( *(_BYTE *)v2 != 6 )
    return ((unsigned __int64)*(unsigned int *)(v2 + 4) << 32) | 1;
  v4 = *(__int64 (**)(void))(*a1 + 56LL);
  if ( (char *)v4 == (char *)sub_21A2690 )
  {
    v5 = 1;
    v6 = 954437177 * (unsigned int)((__int64)(a1[71] - a1[70]) >> 4);
  }
  else
  {
    v7 = v4();
    v5 = v7;
    v6 = HIDWORD(v7);
  }
  return (v6 << 32) | v5;
}
