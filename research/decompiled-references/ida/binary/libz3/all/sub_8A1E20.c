__int64 __fastcall sub_8A1E20(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rax
  unsigned int i; // ebx
  unsigned int v6; // esi

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = 0;
    do
    {
      if ( v2 >= *(_DWORD *)(v1 - 4) )
        break;
      v3 = v2++;
      sub_8A1A40(a1, v3);
      v1 = *(_QWORD *)(a1 + 8);
    }
    while ( v1 );
  }
  v4 = *(_QWORD *)(a1 + 24);
  for ( i = 0; v4; v4 = *(_QWORD *)(a1 + 24) )
  {
    if ( i >= *(_DWORD *)(v4 - 4) )
      break;
    v6 = i++;
    sub_89FD40(a1, v6);
  }
  return 1;
}

