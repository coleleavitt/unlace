__int64 __fastcall sub_B7410(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int *v3; // rsi

  v2 = *(_QWORD **)(a1 + 192);
  if ( a2 < v2[1] )
  {
    v3 = (unsigned int *)(*v2 + (a2 << 6));
    if ( v3 )
      sub_120900(0, *v3, 0xFFFFFFFFLL, 1);
  }
  return -1;
}

