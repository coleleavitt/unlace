__int64 __fastcall sub_7422D0(__int64 a1, int a2)
{
  unsigned __int16 *v4; // rdi
  int v5; // eax
  unsigned __int16 v6; // r8
  unsigned int v7; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // ecx
  int v19; // esi

  v4 = (unsigned __int16 *)(a1 + 6LL * a2 + 6);
  if ( a2 <= 1 )
  {
    v5 = *(__int16 *)(a1 + 4);
    v6 = *v4;
    if ( a2 >= v5 - 2 )
      return v6;
    v13 = v4[4];
    if ( !(_WORD)v13 )
      return v6;
    v14 = v4[1];
    if ( v14 != v13 + 1 || v4[7] + 2 != v14 )
      return v6;
LABEL_19:
    v15 = v4[3];
    if ( v15 == v6 )
      return v6;
    v16 = v4[6];
    if ( v16 == v6 )
      return v6;
    v7 = v15;
    if ( v15 == v16 )
      return v7;
    if ( a2 <= 1 )
      return v6;
LABEL_9:
    if ( v5 - 1 > a2 )
    {
      v11 = v4[1];
      if ( (_WORD)v11 )
      {
        v12 = *(v4 - 2);
        if ( v12 == v11 + 1 && v12 == v4[4] + 2 )
        {
          v7 = *(v4 - 3);
          if ( v6 == (_WORD)v7 || (_WORD)v7 == v4[3] )
            return v7;
        }
      }
    }
    return v6;
  }
  v9 = *(v4 - 2);
  if ( !(_WORD)v9 )
  {
    v5 = *(__int16 *)(a1 + 4);
    v6 = *v4;
    if ( a2 >= v5 - 2 )
      goto LABEL_9;
    goto LABEL_30;
  }
  v10 = *(v4 - 5);
  if ( v10 != v9 + 1 || v10 != v4[1] + 2 )
  {
    v6 = *v4;
    goto LABEL_8;
  }
  v7 = *(v4 - 6);
  v17 = *(v4 - 3);
  if ( (_WORD)v7 != v17 )
  {
    v6 = *v4;
    if ( (_WORD)v7 != *v4 )
    {
      v7 = v17;
      if ( v17 != v6 )
      {
LABEL_8:
        v5 = *(__int16 *)(a1 + 4);
        if ( a2 >= v5 - 2 )
          goto LABEL_9;
LABEL_30:
        v18 = v4[4];
        if ( !(_WORD)v18 )
          goto LABEL_9;
        v19 = v4[1];
        if ( v19 != v18 + 1 || v4[7] + 2 != v19 )
          goto LABEL_9;
        goto LABEL_19;
      }
    }
  }
  return v7;
}
