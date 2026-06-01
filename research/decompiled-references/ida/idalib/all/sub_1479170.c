__int64 __fastcall sub_1479170(__int64 a1)
{
  __int16 v2; // ax
  unsigned __int16 v3; // cx
  unsigned int v4; // eax
  unsigned __int16 v5; // si
  __int64 v6; // rdx
  unsigned __int16 v7; // cx
  __int64 *v8; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int *v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 *v15; // rdi
  __int64 *v16; // rdi

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
    v10 = *(_DWORD *)(a1 + 2792);
    if ( !v10 )
    {
LABEL_29:
      *(_WORD *)(a1 + 88) = v7 - 1;
      goto LABEL_16;
    }
    v11 = *(_QWORD *)(a1 + 2784) + 24LL * v10 - 24;
    while ( 1 )
    {
      if ( v7 == *(_WORD *)(v11 + 14) )
      {
        if ( *(_DWORD *)(v11 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_24;
      }
      else if ( v7 > *(_WORD *)(v11 + 14) )
      {
        goto LABEL_24;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v11 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v11 + 18) )
        goto LABEL_29;
LABEL_24:
      --v10;
      v11 -= 24;
      *(_DWORD *)(a1 + 2792) = v10;
      if ( !v10 )
        goto LABEL_29;
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
          if ( *(_WORD *)(v6 + 16) >= v3 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v6 + 18) )
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
    return sub_1478A90(a1);
  if ( (unsigned __int16)(v2 - 14) <= 1u || (unsigned __int16)(v2 - 17) <= 2u )
  {
LABEL_16:
    v8 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v8, (int *)(a1 + 16));
    return *(unsigned int *)(a1 + 40);
  }
  if ( v2 == 3 )
    return sub_1566D30(a1);
  v12 = (int *)(a1 + 16);
  if ( sub_10CCDE0(v2) )
  {
    v13 = *(_DWORD *)(a1 + 20);
    v14 = *(_DWORD *)(a1 + 16);
    v15 = *(__int64 **)(a1 + 8);
    if ( !v13 )
      v13 = v14;
    *(_DWORD *)(a1 + 40) = v13;
    sub_14634E0(v15, v12);
    return v14;
  }
  else
  {
    v16 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v16, v12);
    return *(unsigned int *)(a1 + 40);
  }
}
