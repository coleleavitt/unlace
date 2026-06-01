__int64 __fastcall sub_B74ED0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 *i; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v7 = sub_B8C3D0(a1);
    v8 = *(__int64 **)v7;
    a4 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
    if ( *(_QWORD *)v7 < a4 )
    {
      v17 = *(__int64 **)v7;
      while ( *(_WORD *)(*v17 + 36) != 279 )
      {
        if ( (__int64 *)a4 == ++v17 )
          goto LABEL_13;
      }
      if ( (__int64 *)a4 != v17 )
        return 1;
    }
    else if ( v8 != (__int64 *)a4 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 279 )
        return 1;
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( v8 == i )
          break;
        v10 = *i;
        if ( *(_WORD *)(v10 + 36) == 279 )
          return 1;
      }
    }
LABEL_13:
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      goto LABEL_2;
    v11 = sub_B8C3D0(a1);
    v12 = *(_QWORD *)v11;
    a4 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
    if ( *(_QWORD *)v11 >= a4 )
    {
      if ( v12 != a4 )
      {
        while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 169 )
        {
          a4 += 8LL;
          if ( v12 == a4 )
            goto LABEL_18;
        }
        return 1;
      }
    }
    else
    {
      v13 = *(_QWORD *)v11;
      while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 169 )
      {
        v13 += 8;
        if ( a4 == v13 )
          goto LABEL_18;
      }
      if ( a4 != v13 )
        return 1;
    }
LABEL_18:
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      goto LABEL_2;
    v14 = sub_B8C3D0(a1);
    v15 = *(_QWORD *)v14;
    a4 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
    if ( *(_QWORD *)v14 >= a4 )
    {
      if ( v15 == a4 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 150 )
      {
        a4 += 8LL;
        if ( v15 == a4 )
          goto LABEL_2;
      }
    }
    else
    {
      v16 = *(_QWORD *)v14;
      while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 150 )
      {
        v16 += 8;
        if ( a4 == v16 )
          goto LABEL_2;
      }
      if ( a4 == v16 )
        goto LABEL_2;
    }
    return 1;
  }
LABEL_2:
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25 <= 1 )
    return *(_BYTE *)(v4 + 21) & 1;
  v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
  if ( (unsigned int)v6 <= 1
    && (v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4)) != 0 )
  {
    return *(_BYTE *)(v4 + 21) & 1;
  }
  else
  {
    return 0;
  }
}
