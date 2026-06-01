__int64 __fastcall sub_149F520(__int64 a1, char a2)
{
  __int16 v3; // ax
  unsigned __int16 v4; // cx
  unsigned int v5; // eax
  unsigned __int16 v6; // si
  __int64 v7; // rdx
  unsigned __int16 v8; // cx
  __int64 *v9; // rdi
  unsigned __int16 v11; // cx
  unsigned int v12; // eax
  unsigned __int16 v13; // si
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  int *v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 *v20; // rdi
  __int64 *v21; // rdi

  v3 = *(_WORD *)(a1 + 32);
  if ( v3 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_16;
  }
  if ( v3 == 23 )
  {
    v8 = *(_WORD *)(a1 + 88);
    if ( !v8 )
      goto LABEL_16;
    v15 = *(_DWORD *)(a1 + 2792);
    if ( !v15 )
    {
LABEL_39:
      *(_WORD *)(a1 + 88) = v8 - 1;
      goto LABEL_16;
    }
    v16 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
    while ( 1 )
    {
      if ( v8 == *(_WORD *)(v16 + 14) )
      {
        if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_34;
      }
      else if ( v8 > *(_WORD *)(v16 + 14) )
      {
        goto LABEL_34;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v16 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v16 + 18) )
        goto LABEL_39;
LABEL_34:
      --v15;
      v16 -= 24;
      *(_DWORD *)(a1 + 2792) = v15;
      if ( !v15 )
        goto LABEL_39;
    }
  }
  if ( (unsigned __int16)(v3 - 20) <= 1u )
  {
    v4 = *(_WORD *)(a1 + 90);
    if ( v3 == 20 )
    {
      *(_WORD *)(a1 + 90) = v4 + 1;
    }
    else if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 2792);
      if ( v5 )
      {
        v6 = *(_WORD *)(a1 + 88);
        v7 = *(_QWORD *)(a1 + 2784) + 24LL * v5 - 24;
        do
        {
          if ( v6 == *(_WORD *)(v7 + 14) )
          {
            if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_9;
          }
          else if ( v6 > *(_WORD *)(v7 + 14) )
          {
            goto LABEL_9;
          }
          if ( *(_WORD *)(v7 + 16) >= v4 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v7 + 18) )
            break;
LABEL_9:
          --v5;
          v7 -= 24;
          *(_DWORD *)(a1 + 2792) = v5;
        }
        while ( v5 );
      }
      *(_WORD *)(a1 + 90) = v4 - 1;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int16)(v3 - 24) <= 1u )
  {
    v11 = *(_WORD *)(a1 + 92);
    if ( v3 == 24 )
    {
      *(_WORD *)(a1 + 92) = v11 + 1;
    }
    else if ( v11 )
    {
      v12 = *(_DWORD *)(a1 + 2792);
      if ( v12 )
      {
        v13 = *(_WORD *)(a1 + 88);
        v14 = *(_QWORD *)(a1 + 2784) + 24LL * v12 - 24;
        do
        {
          if ( v13 == *(_WORD *)(v14 + 14) )
          {
            if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_25;
          }
          else if ( v13 > *(_WORD *)(v14 + 14) )
          {
            goto LABEL_25;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v14 + 16) && *(_WORD *)(v14 + 18) >= v11 )
            break;
LABEL_25:
          --v12;
          v14 -= 24;
          *(_DWORD *)(a1 + 2792) = v12;
        }
        while ( v12 );
      }
      *(_WORD *)(a1 + 92) = v11 - 1;
    }
LABEL_16:
    v9 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v9, (int *)(a1 + 16));
    return *(unsigned int *)(a1 + 40);
  }
  if ( (unsigned __int16)(v3 - 14) <= 1u || (unsigned __int16)(v3 - 17) <= 2u )
    goto LABEL_16;
  if ( v3 == 3 )
  {
    if ( a2 )
      goto LABEL_16;
    return sub_1566D30(a1);
  }
  else
  {
    v17 = (int *)(a1 + 16);
    if ( sub_10CCDE0(v3) )
    {
      v18 = *(_DWORD *)(a1 + 20);
      v19 = *(_DWORD *)(a1 + 16);
      v20 = *(__int64 **)(a1 + 8);
      if ( !v18 )
        v18 = v19;
      *(_DWORD *)(a1 + 40) = v18;
      sub_14634E0(v20, v17);
      return v19;
    }
    else
    {
      v21 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v21, v17);
      return *(unsigned int *)(a1 + 40);
    }
  }
}
