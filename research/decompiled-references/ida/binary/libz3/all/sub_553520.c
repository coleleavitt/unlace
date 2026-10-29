__int64 __fastcall sub_553520(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi

  if ( *(_DWORD *)(a2 + 16) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v3++);
      sub_182A4B0(a1, v4);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a2 + 16) );
  }
  *(_DWORD *)(a2 + 16) = 0;
  sub_182A4D0(a1, *(_QWORD *)a2);
  return a2;
}

