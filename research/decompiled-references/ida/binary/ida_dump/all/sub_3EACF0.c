__int64 __fastcall sub_3EACF0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 i; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  if ( a1 )
  {
    v2 = a1;
    v3 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v2 + 64) != 8 || !*(_DWORD *)(*(_QWORD *)(v2 + 72) + 284LL) )
      {
        if ( !*(_QWORD *)(v2 + 8) && *(_DWORD *)v2 == 55 )
          goto LABEL_9;
        ++v3;
        sub_11D5A0(v2);
      }
      v2 = *(_QWORD *)(v2 + 8);
      if ( !v2 || *(_QWORD *)(v2 + 24) != v1 )
        goto LABEL_9;
    }
  }
  v3 = 0;
LABEL_9:
  for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(_QWORD *)(i + 24) != v1 )
      break;
    ++v3;
    sub_11D5A0(i);
  }
  return v3;
}
