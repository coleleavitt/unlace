char __fastcall sub_157E6E0(__int64 a1, __int64 a2, double a3)
{
  char v3; // dl
  char result; // al
  char v5; // dl
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebp

  v3 = *(_BYTE *)(a1 + 11);
  result = *(_BYTE *)(a2 + 11);
  if ( !v3 )
  {
    v3 = *(_BYTE *)(a1 + 12);
    if ( result )
    {
      if ( !v3 )
        return result;
      goto LABEL_3;
    }
    goto LABEL_13;
  }
  if ( !result )
  {
LABEL_13:
    result = *(_BYTE *)(a2 + 12);
    if ( result != v3 )
      return result;
  }
LABEL_3:
  result = *(_BYTE *)(a1 + 10);
  v5 = *(_BYTE *)(a2 + 10);
  if ( result )
  {
    if ( v5 )
    {
LABEL_23:
      v10 = sub_EEB7E0(*(_QWORD *)a2, a2, a3);
      return (unsigned int)sub_EEB7E0(*(_QWORD *)a1, a2, a3) < v10;
    }
    result = *(_BYTE *)(a2 + 8);
    if ( !result )
    {
      if ( *(_BYTE *)(a2 + 9) )
      {
        v9 = 2;
        v7 = 4;
        return v7 > v9;
      }
      v6 = 4;
      v7 = 4;
      goto LABEL_10;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 8) )
    {
      v7 = 3;
      v6 = 3;
    }
    else if ( *(_BYTE *)(a1 + 9) )
    {
      v7 = 2;
      v6 = 2;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 24) != 0;
      v7 = v6;
    }
    if ( !v5 )
    {
      if ( *(_BYTE *)(a2 + 8) )
      {
        v9 = 3;
        v8 = 3;
      }
      else
      {
        if ( !*(_BYTE *)(a2 + 9) )
        {
LABEL_10:
          v8 = *(_DWORD *)(a2 + 24) != 0;
          v9 = v8;
          goto LABEL_11;
        }
        v9 = 2;
        v8 = 2;
      }
LABEL_11:
      if ( v6 != v8 )
        return v7 > v9;
      goto LABEL_23;
    }
  }
  return result;
}
