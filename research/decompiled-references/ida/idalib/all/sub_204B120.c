char __fastcall sub_204B120(char *a1, _BYTE *a2)
{
  char result; // al
  __int64 v3; // rdx

  result = 1;
  if ( *a2 == 85 )
  {
    v3 = *((_QWORD *)a2 - 4);
    if ( v3 )
    {
      if ( *(_BYTE *)v3 == 13 )
      {
        if ( (*(_BYTE *)(v3 + 33) & 0x20) == 0 || (result = 0, (unsigned int)(*(_DWORD *)(v3 + 36) - 68) > 3) )
        {
          result = *a1;
          if ( *a1 )
          {
            if ( (*(_BYTE *)(v3 + 33) & 0x20) != 0 )
              return *(_DWORD *)(v3 + 36) != 295;
          }
          else
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
