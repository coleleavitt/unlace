__int64 __fastcall compar(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // edx

  if ( (*(_BYTE *)(*(_QWORD *)a1 + 28LL) & 4) != 0 )
    v2 = *(_WORD *)(*(_QWORD *)a1 + 28LL) >> 3;
  else
    v2 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 28LL) & 4) != 0 )
    v3 = *(_WORD *)(*(_QWORD *)a2 + 28LL) >> 3;
  else
    v3 = -1;
  return (unsigned int)(v2 - v3);
}

