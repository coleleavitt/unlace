__int64 __fastcall sub_BD90(__int64 a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // rax
  int v6; // edi
  int v7; // r8d
  int v8; // esi
  unsigned int v9; // edx
  unsigned __int8 *v10; // rax

  v3 = *a2;
  if ( (unsigned __int64)*a2 >= a3 )
  {
    *a2 = v3;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( *(_BYTE *)(a1 + 509) != 2 )
      return (v7 << 8) | v6 | (v8 << 16) | (v9 << 24);
  }
  else
  {
    v6 = *v3;
    *a2 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) >= a3 )
    {
      v10 = v3 + 1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    else
    {
      v7 = v3[1];
      *a2 = v3 + 2;
      if ( (unsigned __int64)(v3 + 2) >= a3 )
      {
        v10 = v3 + 2;
        v9 = 0;
        v8 = 0;
      }
      else
      {
        v8 = v3[2];
        *a2 = v3 + 3;
        if ( (unsigned __int64)(v3 + 3) >= a3 )
        {
          v10 = v3 + 3;
          v9 = 0;
        }
        else
        {
          v9 = v3[3];
          v10 = v3 + 4;
        }
      }
    }
    *a2 = v10;
    if ( *(_BYTE *)(a1 + 509) != 2 )
      return (v7 << 8) | v6 | (v8 << 16) | (v9 << 24);
  }
  return (v8 << 8) | (v7 << 16) | (v6 << 24) | v9;
}

