__int64 __fastcall sub_149F80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( dword_245160 < 0 )
    return -1;
  v2 = -1;
  if ( dword_245160 < (unsigned __int64)xmmword_252598 )
  {
    v3 = qword_252590 + ((__int64)dword_245160 << 8);
    if ( a2 < *(_QWORD *)(v3 + 96) )
      return *(_QWORD *)(*(_QWORD *)(v3 + 88) + 32 * a2);
  }
  return v2;
}

