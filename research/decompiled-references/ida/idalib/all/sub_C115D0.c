__int64 __fastcall sub_C115D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 **v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 **v18; // rax
  __int64 *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rcx

  v2 = sub_BFBC70(*(_QWORD *)(a1 + 32));
  if ( v2 )
  {
    v6 = (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34;
    if ( (unsigned int)v6 <= 5 )
    {
      if ( (*(_BYTE *)(v2 + 29) & 1) != 0 )
      {
        v7 = (__int64 **)sub_B8C3D0(v2, a2, v6, v3, v4, v5);
        v8 = *v7;
        v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
        if ( (unsigned __int64)v8 < v9 )
        {
          v22 = v8;
          while ( *(_WORD *)(*v22 + 36) != 128 )
          {
            if ( (__int64 *)v9 == ++v22 )
              return 0;
          }
          if ( (__int64 *)v9 == v22 )
            return 0;
LABEL_24:
          result = *v8;
          if ( *(_WORD *)(*v8 + 36) != 128 )
          {
            v23 = v8 + 1;
            do
              result = *v23++;
            while ( *(_WORD *)(result + 36) != 128 );
          }
          return result;
        }
        if ( v8 != (__int64 *)v9 )
        {
          if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 128 )
          {
            v10 = (__int64 *)(v9 + 8);
            while ( v8 != v10 )
            {
              v11 = *v10++;
              if ( *(_WORD *)(v11 + 36) == 128 )
                goto LABEL_24;
            }
            return 0;
          }
          goto LABEL_24;
        }
      }
      return 0;
    }
  }
  v13 = sub_BFBC70(*(_QWORD *)(a1 + 32));
  if ( !v13 || (*(_BYTE *)(v13 + 29) & 1) == 0 )
    return 0;
  v18 = (__int64 **)sub_B8C3D0(v13, a2, v14, v15, v16, v17);
  v19 = *v18;
  v20 = (unsigned __int64)&(*v18)[*((unsigned int *)v18 + 2)];
  if ( (unsigned __int64)v19 < v20 )
  {
    v21 = v19;
    while ( *(_WORD *)(*v21 + 36) != 128 )
    {
      if ( (__int64 *)v20 == ++v21 )
        return 0;
    }
    if ( (__int64 *)v20 == v21 )
      return 0;
LABEL_29:
    result = *v19;
    if ( *(_WORD *)(*v19 + 36) != 128 )
    {
      v24 = v19 + 1;
      do
        result = *v24++;
      while ( *(_WORD *)(result + 36) != 128 );
    }
    return result;
  }
  if ( v19 == (__int64 *)v20 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 128 )
    goto LABEL_29;
  v25 = (__int64 *)(v20 + 8);
  while ( v19 != v25 )
  {
    v26 = *v25++;
    if ( *(_WORD *)(v26 + 36) == 128 )
      goto LABEL_29;
  }
  return 0;
}
