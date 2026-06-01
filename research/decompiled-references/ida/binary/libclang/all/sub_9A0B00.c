__int64 __fastcall sub_9A0B00(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 72);
  if ( v2 == 2 )
  {
    if ( *(_BYTE *)(a2 + 64) != 3 )
      abort();
    sub_6A4260(a1, (int *)(a2 + 8));
    return a1;
  }
  else if ( v2 == 4 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = 0;
    return a1;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 64) == 1 )
      sub_A1E120(a1, a2 + 8, **(_QWORD **)a2);
    else
      sub_97DB00(a1, (__int64 *)(a2 + 8));
    return a1;
  }
}

