__int64 __fastcall sub_11893A0(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  int v3; // eax

  v1 = 0;
  v2 = *(_QWORD *)(*a1 - 8LL);
  if ( v2 )
  {
    if ( strlen(*(const char **)(*a1 - 8LL)) == 13 )
    {
      if ( *(_QWORD *)v2 != 0x2D7463697274732BLL
        || *(_DWORD *)(v2 + 8) != 1734962273
        || (v1 = 1, *(_BYTE *)(v2 + 12) != 110) )
      {
        if ( *(_QWORD *)v2 != 0x2D7463697274732DLL
          || *(_DWORD *)(v2 + 8) != 1734962273
          || (v3 = 0, *(_BYTE *)(v2 + 12) != 110) )
        {
          v3 = 1;
        }
        LOBYTE(v1) = v3 == 0;
      }
    }
  }
  return v1;
}
