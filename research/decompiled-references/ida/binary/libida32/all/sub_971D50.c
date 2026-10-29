char __fastcall sub_971D50(_BYTE *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _WORD *v4; // rcx
  _WORD *v5; // rdx

  result = *a1 & (a2 == 0);
  if ( result )
    return 1;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( (*a1 & 2) != 0 )
      {
        v4 = (_WORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v4 )
        {
          if ( (*v4 & 0x1FF) == 0x83 && (*(_QWORD *)v4 & 0x800LL) != 0 )
          {
            v5 = *(_WORD **)(a3 + 24);
            if ( !v5 || (*v5 & 0x1FF) != 0x85 )
              return 1;
          }
        }
      }
    }
  }
  return result;
}

