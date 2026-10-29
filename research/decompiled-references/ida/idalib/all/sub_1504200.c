__int64 __fastcall sub_1504200(__int64 a1)
{
  __int16 v2; // ax
  unsigned __int16 v3; // cx
  unsigned int v4; // eax
  unsigned __int16 v5; // si
  __int64 v6; // rdx
  unsigned __int16 v7; // cx
  __int64 *v8; // rdi
  unsigned __int16 v10; // cx
  unsigned int v11; // eax
  unsigned __int16 v12; // si
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 *v19; // rdi
  __int64 *v20; // rdi

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_16;
  }
  if ( v2 == 23 )
  {
    v7 = *(_WORD *)(a1 + 88);
    if ( !v7 )
      goto LABEL_16;
    v14 = *(_DWORD *)(a1 + 2792);
    if ( !v14 )
    {
LABEL_39:
      *(_WORD *)(a1 + 88) = v7 - 1;
      goto LABEL_16;
    }
    v15 = *(_QWORD *)(a1 + 2784) + 24LL * v14 - 24;
    while ( 1 )
    {
      if ( v7 == *(_WORD *)(v15 + 14) )
      {
        if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_34;
      }
      else if ( v7 > *(_WORD *)(v15 + 14) )
      {
        goto LABEL_34;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v15 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v15 + 18) )
        goto LABEL_39;
LABEL_34:
      --v14;
      v15 -= 24;
      *(_DWORD *)(a1 + 2792) = v14;
      if ( !v14 )
        goto LABEL_39;
    }
  }
  if ( (unsigned __int16)(v2 - 20) <= 1u )
  {
    v3 = *(_WORD *)(a1 + 90);
    if ( v2 == 20 )
    {
      *(_WORD *)(a1 + 90) = v3 + 1;
    }
    else if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 2792);
      if ( v4 )
      {
        v5 = *(_WORD *)(a1 + 88);
        v6 = *(_QWORD *)(a1 + 2784) + 24LL * v4 - 24;
        do
        {
          if ( v5 == *(_WORD *)(v6 + 14) )
          {
            if ( *(_DWORD *)(v6 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_9;
          }
          else if ( v5 > *(_WORD *)(v6 + 14) )
          {
            goto LABEL_9;
          }
          if ( v3 <= *(_WORD *)(v6 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v6 + 18) )
            break;
LABEL_9:
          --v4;
          v6 -= 24;
          *(_DWORD *)(a1 + 2792) = v4;
        }
        while ( v4 );
      }
      *(_WORD *)(a1 + 90) = v3 - 1;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int16)(v2 - 24) <= 1u )
  {
    v10 = *(_WORD *)(a1 + 92);
    if ( v2 == 24 )
    {
      *(_WORD *)(a1 + 92) = v10 + 1;
    }
    else if ( v10 )
    {
      v11 = *(_DWORD *)(a1 + 2792);
      if ( v11 )
      {
        v12 = *(_WORD *)(a1 + 88);
        v13 = *(_QWORD *)(a1 + 2784) + 24LL * v11 - 24;
        do
        {
          if ( v12 == *(_WORD *)(v13 + 14) )
          {
            if ( *(_DWORD *)(v13 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_25;
          }
          else if ( v12 > *(_WORD *)(v13 + 14) )
          {
            goto LABEL_25;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v13 + 16) && *(_WORD *)(v13 + 18) >= v10 )
            break;
LABEL_25:
          --v11;
          v13 -= 24;
          *(_DWORD *)(a1 + 2792) = v11;
        }
        while ( v11 );
      }
      *(_WORD *)(a1 + 92) = v10 - 1;
    }
LABEL_16:
    v8 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v8, (int *)(a1 + 16));
    return *(unsigned int *)(a1 + 40);
  }
  if ( (unsigned __int16)(v2 - 14) <= 1u || (unsigned __int16)(v2 - 17) <= 2u )
    goto LABEL_16;
  if ( v2 == 3 )
    return sub_1566D30(a1);
  v16 = (int *)(a1 + 16);
  if ( sub_10CCDE0(v2) )
  {
    v17 = *(_DWORD *)(a1 + 20);
    v18 = *(_DWORD *)(a1 + 16);
    v19 = *(__int64 **)(a1 + 8);
    if ( !v17 )
      v17 = v18;
    *(_DWORD *)(a1 + 40) = v17;
    sub_14634E0(v19, v16);
    return v18;
  }
  else
  {
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, v16);
    return *(unsigned int *)(a1 + 40);
  }
}
