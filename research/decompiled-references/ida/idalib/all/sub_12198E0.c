__int64 __fastcall sub_12198E0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  void *v4; // rdi

  sub_9EE8A0(a1, a2);
  sub_9EE8A0(a1 + 32, a2 + 32);
  sub_9EE8A0(a1 + 64, a2 + 64);
  sub_11189B0(a1 + 96, (__int64 *)(a2 + 96));
  sub_9EE8A0(a1 + 120, a2 + 120);
  v3 = (_QWORD *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 184) )
  {
    if ( !*(_BYTE *)(a2 + 184) )
    {
      v4 = *(void **)(a1 + 152);
      *(_BYTE *)(a1 + 184) = 0;
      if ( v4 != (void *)(a1 + 168) )
        operator delete(v4);
      return a1;
    }
    sub_9EE8A0((__int64)v3, a2 + 152);
    return a1;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 184) )
      return a1;
    *(_QWORD *)(a1 + 152) = a1 + 168;
    sub_1213B80(v3, *(_BYTE **)(a2 + 152), *(_QWORD *)(a2 + 152) + *(_QWORD *)(a2 + 160));
    *(_BYTE *)(a1 + 184) = 1;
    return a1;
  }
}
