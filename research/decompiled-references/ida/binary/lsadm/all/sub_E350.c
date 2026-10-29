__int64 __fastcall sub_E350(__int64 a1, _QWORD *a2, void (*a3)(const char *, ...), __int64 a4, __int64 a5)
{
  if ( *(_BYTE *)(a1 + 70) )
  {
    sub_E230(a1, a2, a3, a4, a5, 14);
    return 0xFFFFFFFFLL;
  }
  else
  {
    sub_E230(a1, a2, a3, a4, a5, 15);
    return 4294967294LL;
  }
}

