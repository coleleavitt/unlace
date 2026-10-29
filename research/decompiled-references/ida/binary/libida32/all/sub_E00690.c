char __fastcall sub_E00690(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx
  __int64 v3; // rdx
  _WORD *v4; // rdx

  result = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      result = *(_BYTE *)(v2 + 28);
      if ( result )
      {
        return 0;
      }
      else
      {
        v3 = **(_QWORD **)(v2 + 32);
        if ( (v3 & 2) != 0 )
        {
          v4 = (_WORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v4 )
            return (*v4 & 0x1FF) == 9;
        }
      }
    }
  }
  return result;
}

