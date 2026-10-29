__int64 __fastcall sub_17A23E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  __int64 *v19; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v6 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v10 = *v6;
  v11 = *v6 + 8LL * *((unsigned int *)v6 + 2);
  if ( v10 < v11 )
  {
    v7 = v10;
    a2 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 197 )
    {
      while ( 1 )
      {
        v7 += 8;
        if ( v11 == v7 )
          break;
        a2 = *(_QWORD *)v7;
        if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 197 )
          goto LABEL_18;
      }
LABEL_8:
      if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      {
        v14 = sub_B8C3D0(a1, a2, v10, v7, v8, v9);
        v15 = *v14;
        v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
        if ( v15 >= v16 )
        {
          if ( v15 != v16 )
          {
            while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 195 )
            {
              v16 += 8LL;
              if ( v15 == v16 )
                return 0;
            }
            goto LABEL_25;
          }
        }
        else
        {
          v17 = v15;
          while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 195 )
          {
            v17 += 8LL;
            if ( v16 == v17 )
              return 0;
          }
          if ( v16 != v17 )
          {
LABEL_25:
            for ( result = *(_QWORD *)v15; *(_WORD *)(*(_QWORD *)v15 + 36LL) != 195; result = *(_QWORD *)v15 )
              v15 += 8LL;
            return result;
          }
        }
      }
      return 0;
    }
LABEL_18:
    if ( v11 == v7 )
      goto LABEL_8;
  }
  else
  {
    if ( v10 == v11 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 197 )
    {
      v12 = (__int64 *)(v11 + 8);
      do
      {
        v7 = (__int64)v12;
        if ( (__int64 *)v10 == v12 )
          goto LABEL_8;
        v13 = *v12++;
      }
      while ( *(_WORD *)(v13 + 36) != 197 );
    }
  }
  result = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 197 )
  {
    v19 = (__int64 *)(v10 + 8);
    do
      result = *v19++;
    while ( *(_WORD *)(result + 36) != 197 );
  }
  return result;
}
