__int64 __fastcall _pthread_joiner_prepost_wake(__int64 a1)
{
  __int64 v2; // x9
  char v3; // w10
  __int64 result; // x0
  int v5; // w10
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_BYTE *)(a1 + 49);
  if ( (v3 & 1) != 0 )
  {
    result = *(unsigned int *)(v2 + 20);
    *(_BYTE *)(a1 + 49) = v3 & 0xFE;
  }
  else
  {
    result = 0;
    *(_BYTE *)(v2 + 24) = 1;
    *(_QWORD *)(a1 + 32) = 0;
  }
  if ( *(_QWORD *)(v2 + 8) )
  {
    v5 = atomic_load((unsigned __int16 *)(a1 + 166));
    if ( (~v5 & 0x11) != 0 )
      v6 = *(_QWORD *)(a1 + 40);
    else
      v6 = 1;
    **(_QWORD **)(v2 + 8) = v6;
  }
  return result;
}
