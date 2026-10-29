__int64 __fastcall sub_734100(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r12d
  bool v3; // zf

  if ( a1 && (v1 = *(_QWORD *)(a1 + 320)) != 0 )
  {
    v2 = 0;
    if ( !*(_QWORD *)(v1 + 192) )
    {
      v2 = *(_DWORD *)(v1 + 312);
      if ( v2 )
      {
        v2 = 0;
      }
      else if ( *(_QWORD *)(v1 + 168) != *(_QWORD *)(v1 + 176) )
      {
        v2 = -105;
      }
    }
    free(*(void **)v1);
    v3 = *(_QWORD *)(v1 + 128) == 8;
    *(_QWORD *)v1 = 0;
    if ( v3 )
      sub_730100((_QWORD *)(v1 + 8));
    free((void *)v1);
    *(_QWORD *)(a1 + 320) = 0;
  }
  else
  {
    return (unsigned int)-102;
  }
  return v2;
}

