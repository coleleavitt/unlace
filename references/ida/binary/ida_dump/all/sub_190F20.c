__int64 __fastcall sub_190F20(__int64 a1, char *a2)
{
  __int64 v2; // rdx
  char v3; // al
  char v4; // cl
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *a2;
  v4 = *(_BYTE *)(v2 + 8);
  if ( *a2 == 1 )
  {
    if ( v4 == 1 )
    {
      v11 = *((int *)a2 + 2);
      if ( *(_QWORD *)v2 >= v11 && *(_QWORD *)v2 <= v11 )
        return 1;
    }
  }
  else if ( v3 == 5 )
  {
    if ( v4 == 5 )
    {
      v6 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)(v6 + 8) <= *(_QWORD *)v2 && *(_QWORD *)(v6 + 8) >= *(_QWORD *)v2 )
        return 1;
    }
  }
  else
  {
    if ( !v4 && *(_QWORD *)v2 == -1 )
      return 1;
    if ( v3 == 4 )
    {
      v7 = *((_DWORD **)a2 + 1);
      if ( *v7 == 12 )
      {
        v8 = *(__int64 **)(a1 + 48);
        v9 = *v8;
        v10 = *v8 + 24 * v8[1];
        if ( v9 != v10 )
        {
          while ( v7 != *(_DWORD **)(v9 + 8) )
          {
            v9 += 24;
            if ( v10 == v9 )
              return 0;
          }
          *(_BYTE *)(a1 + 40) = 1;
        }
      }
    }
  }
  return 0;
}
