__int64 __fastcall sub_147CB40(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v4; // cx
  __int64 *v5; // rdi
  unsigned int v6; // r12d
  unsigned __int16 v7; // cx
  __int64 *v8; // rdi
  unsigned __int16 v9; // cx
  __int64 *v10; // rdi
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned __int16 v13; // si
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned __int16 v19; // si
  __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+4h] [rbp-84h] BYREF
  char v22; // [rsp+Ch] [rbp-7Ch]
  __int64 v23[15]; // [rsp+10h] [rbp-78h] BYREF

  v2 = sub_155CBC0(a1, 1, 0);
  if ( v2 == 1 )
  {
    v4 = *(_WORD *)(a1 + 90);
    if ( *(_WORD *)(a1 + 32) == 20 )
    {
      *(_WORD *)(a1 + 90) = v4 + 1;
      goto LABEL_7;
    }
    if ( !v4 )
    {
LABEL_7:
      v5 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v5, (int *)(a1 + 16));
      v6 = *(_DWORD *)(a1 + 40);
      if ( *(_WORD *)(a1 + 32) == 20 )
      {
        ++*(_WORD *)(a1 + 90);
        goto LABEL_9;
      }
      v7 = *(_WORD *)(a1 + 90);
      if ( !v7 )
      {
LABEL_9:
        v8 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v8, (int *)(a1 + 16));
        LOWORD(v23[0]) = 21;
        sub_15680D0(a1, v23, 1, 0);
        if ( *(_WORD *)(a1 + 32) == 20 )
        {
          ++*(_WORD *)(a1 + 90);
          goto LABEL_11;
        }
        v9 = *(_WORD *)(a1 + 90);
        if ( !v9 )
        {
LABEL_11:
          v10 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v10, (int *)(a1 + 16));
          v11 = *(_DWORD *)(a1 + 40);
          sub_1564820(v23, a1, v6, 1558);
          v21 = __PAIR64__(v11, v6);
          v22 = 1;
          sub_AEC610(v23, (__int64 *)&v21);
          sub_AEA040((__int64)v23);
          return 1;
        }
        v12 = *(_DWORD *)(a1 + 2792);
        if ( !v12 )
        {
LABEL_20:
          *(_WORD *)(a1 + 90) = v9 - 1;
          goto LABEL_11;
        }
        v13 = *(_WORD *)(a1 + 88);
        v14 = *(_QWORD *)(a1 + 2784) + 24LL * v12 - 24;
        while ( 1 )
        {
          if ( v13 == *(_WORD *)(v14 + 14) )
          {
            if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_15;
          }
          else if ( v13 > *(_WORD *)(v14 + 14) )
          {
            goto LABEL_15;
          }
          if ( v9 <= *(_WORD *)(v14 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v14 + 18) )
            goto LABEL_20;
LABEL_15:
          --v12;
          v14 -= 24;
          *(_DWORD *)(a1 + 2792) = v12;
          if ( !v12 )
            goto LABEL_20;
        }
      }
      v15 = *(_DWORD *)(a1 + 2792);
      if ( !v15 )
      {
LABEL_29:
        *(_WORD *)(a1 + 90) = v7 - 1;
        goto LABEL_9;
      }
      v16 = *(_WORD *)(a1 + 88);
      v17 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
      while ( 1 )
      {
        if ( v16 == *(_WORD *)(v17 + 14) )
        {
          if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_24;
        }
        else if ( v16 > *(_WORD *)(v17 + 14) )
        {
          goto LABEL_24;
        }
        if ( v7 <= *(_WORD *)(v17 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v17 + 18) )
          goto LABEL_29;
LABEL_24:
        --v15;
        v17 -= 24;
        *(_DWORD *)(a1 + 2792) = v15;
        if ( !v15 )
          goto LABEL_29;
      }
    }
    v18 = *(_DWORD *)(a1 + 2792);
    if ( !v18 )
    {
LABEL_38:
      *(_WORD *)(a1 + 90) = v4 - 1;
      goto LABEL_7;
    }
    v19 = *(_WORD *)(a1 + 88);
    v20 = *(_QWORD *)(a1 + 2784) + 24LL * v18 - 24;
    while ( 1 )
    {
      if ( v19 == *(_WORD *)(v20 + 14) )
      {
        if ( *(_DWORD *)(v20 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_33;
      }
      else if ( v19 > *(_WORD *)(v20 + 14) )
      {
        goto LABEL_33;
      }
      if ( *(_WORD *)(v20 + 16) >= v4 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v20 + 18) )
        goto LABEL_38;
LABEL_33:
      --v18;
      v20 -= 24;
      *(_DWORD *)(a1 + 2792) = v18;
      if ( !v18 )
        goto LABEL_38;
    }
  }
  if ( v2 == 2 )
  {
    sub_1564820(v23, a1, *(unsigned int *)(a1 + 16), 1719);
    sub_AEA040((__int64)v23);
  }
  return 0;
}
