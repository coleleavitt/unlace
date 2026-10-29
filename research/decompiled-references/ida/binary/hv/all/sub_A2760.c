__int64 __fastcall sub_A2760(_QWORD *a1, int a2)
{
  void (__fastcall *v2)(_QWORD); // rcx
  int v3; // r12d
  __int64 v4; // rbp
  int v5; // r13d

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = sub_A2620((__int64)a1);
  if ( v3 )
    return 4294967294LL;
  v4 = a1[7];
  if ( a2 < 0 )
  {
    if ( a2 >= -15 )
    {
      a2 = -a2;
      goto LABEL_15;
    }
    return 4294967294LL;
  }
  v3 = (a2 >> 4) + 5;
  if ( a2 < 48 )
    a2 &= 0xFu;
  v5 = 0;
  if ( !a2 )
    goto LABEL_9;
LABEL_15:
  if ( (unsigned int)(a2 - 8) > 7 )
    return 4294967294LL;
  v5 = a2;
LABEL_9:
  if ( *(_QWORD *)(v4 + 72) )
  {
    if ( *(_DWORD *)(v4 + 56) != v5 )
    {
      v2(a1[10]);
      *(_QWORD *)(v4 + 72) = 0;
    }
  }
  *(_DWORD *)(v4 + 16) = v3;
  *(_DWORD *)(v4 + 56) = v5;
  return sub_A2720(a1);
}

