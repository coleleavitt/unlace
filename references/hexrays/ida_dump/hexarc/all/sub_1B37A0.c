__int64 __fastcall sub_1B37A0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  __int128 v3; // rdi
  int v4; // eax

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 520);
  if ( v2 )
  {
    while ( 1 )
    {
      *((_QWORD *)&v3 + 1) = *(_QWORD *)(v2 + 56);
      if ( !*((_QWORD *)&v3 + 1) )
        goto LABEL_3;
      if ( **((_DWORD **)&v3 + 1) != 54 )
        goto LABEL_3;
      *(_QWORD *)&v3 = v2;
      v4 = sub_1B3040(v3);
      if ( !v4 )
        goto LABEL_3;
      if ( v4 < 0 )
      {
        if ( v4 != -17 )
          return (unsigned int)-4;
        v1 = -17;
LABEL_3:
        v2 = *(_QWORD *)(v2 + 8);
        if ( !v2 )
          return v1;
      }
      else
      {
        v2 = *(_QWORD *)(v2 + 8);
        if ( !v1 )
          v1 = 1;
        if ( !v2 )
          return v1;
      }
    }
  }
  return v1;
}
