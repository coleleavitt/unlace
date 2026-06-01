void __fastcall sub_AB9E40(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 )
  {
    if ( *a1 )
      v2 = sub_B6AC30(a2);
    else
      v2 = *(_QWORD *)(a2 + 16);
    for ( ; v2; v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL )
      sub_AB9DD0((__int64)a1, v2);
  }
}

