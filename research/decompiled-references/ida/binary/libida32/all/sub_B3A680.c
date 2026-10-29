void __fastcall sub_B3A680(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 32) = a3;
  if ( v3 )
    *(_DWORD *)(a2 + 8) = v3;
  sub_B29750((__int64)a1, a2);
  sub_B2B810(a1, (unsigned int *)a2);
  if ( a1[5] )
  {
    sub_B2A380(a1, (unsigned int *)a2);
    if ( *((char *)sub_B1A550(a1[3], (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF) + 19) < 0 )
      sub_B38E40(a1, (unsigned int *)a2);
  }
}

