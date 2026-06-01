void __fastcall sub_AD1460(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 )
  {
    if ( *a1 )
      v2 = sub_B8E970(a2);
    else
      v2 = *(_QWORD *)(a2 + 16);
    for ( ; v2; v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL )
      sub_AD13F0((__int64)a1, v2);
  }
}
