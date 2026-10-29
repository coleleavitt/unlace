char __fastcall sub_7E5030(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a2 + 88;
  if ( *(int *)(a2 + 88) >> 8 == -1 )
    goto LABEL_8;
  while ( *(_DWORD *)(a1 + 12) != *(char *)v2 )
  {
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return v2;
  }
  v2 = (unsigned int)(*(int *)v2 >> 8);
  if ( (_DWORD)v2 == -1 )
LABEL_8:
    LOBYTE(v2) = 0;
  else
    LOBYTE(v2) = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2) == a2;
  return v2;
}

