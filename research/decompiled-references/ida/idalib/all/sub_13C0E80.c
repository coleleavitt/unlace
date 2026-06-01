__int64 __fastcall sub_13C0E80(__int64 a1, __int64 a2, unsigned __int64 a3, void **a4, __int64 a5, bool *a6)
{
  __int64 i; // rcx
  unsigned __int64 v8; // rcx

  for ( i = *(_QWORD *)(a3 + 8); i; i = *(_QWORD *)(v8 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v8 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    a3 = v8;
  }
  sub_13C0870(a1, a2, (_BYTE *)(a3 + 32), *(_QWORD *)a3, (void *)&byte_22F0C30, 0, a4, a5, a6);
  return a1;
}
