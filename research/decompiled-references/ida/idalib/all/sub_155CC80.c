__int64 __fastcall sub_155CC80(__int64 a1)
{
  int *i; // rbp
  __int16 v3; // ax
  unsigned __int16 v4; // dx
  __int64 *v5; // rdi
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 *v13; // rdi
  unsigned __int16 v14; // cx
  __int64 *v15; // rdi
  unsigned __int16 v16; // cx
  unsigned int v17; // eax
  unsigned __int16 v18; // si
  _WORD *v19; // rdx
  __int64 *v20; // rdi
  unsigned int v21; // eax
  unsigned __int16 v22; // si
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned __int16 v25; // si
  _WORD *v26; // rdx
  _WORD v27[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  for ( i = (int *)(a1 + 16); ; sub_14634E0(v20, i) )
  {
    while ( 1 )
    {
      v3 = *(_WORD *)(a1 + 32);
      if ( v3 == 20 )
        break;
      v4 = v3 - 406;
      if ( v3 != 189 && v3 != 320 && v3 != 158 )
      {
        if ( v4 > 8u )
          return 1;
LABEL_6:
        if ( v4 <= 6u && byte_261A630[v4] )
          goto LABEL_8;
        goto LABEL_30;
      }
      if ( v4 <= 8u )
        goto LABEL_6;
LABEL_8:
      v5 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v5, i);
      if ( *(_WORD *)(a1 + 32) == 22 )
      {
        v6 = *(_DWORD *)(a1 + 16);
        ++*(_WORD *)(a1 + 88);
        v7 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = v6;
        sub_14634E0(v7, i);
        v27[0] = 23;
        if ( (unsigned __int8)sub_15680D0(a1, v27, 1, 0) )
          continue;
      }
      return 0;
    }
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 2944);
    v11 = v10 >= *(unsigned int *)(v9 + 2912) ? sub_14180A0(v9, 1u) : *(_QWORD *)(v9 + 2904) + 24 * v10;
    if ( *(_WORD *)(v11 + 16) != 20 )
      break;
    v12 = *(_WORD *)(a1 + 90);
    if ( *(_WORD *)(a1 + 32) == 20 )
    {
      *(_WORD *)(a1 + 90) = v12 + 1;
    }
    else
    {
      if ( !v12 )
        goto LABEL_16;
      v21 = *(_DWORD *)(a1 + 2792);
      if ( v21 )
      {
        v22 = *(_WORD *)(a1 + 88);
        v23 = *(_QWORD *)(a1 + 2784) + 24LL * v21 - 24;
        do
        {
          if ( v22 == *(_WORD *)(v23 + 14) )
          {
            if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_39;
          }
          else if ( v22 > *(_WORD *)(v23 + 14) )
          {
            goto LABEL_39;
          }
          if ( *(_WORD *)(v23 + 16) >= v12 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v23 + 18) )
            break;
LABEL_39:
          --v21;
          v23 -= 24;
          *(_DWORD *)(a1 + 2792) = v21;
        }
        while ( v21 );
      }
      *(_WORD *)(a1 + 90) = v12 - 1;
    }
LABEL_16:
    v13 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v13, i);
    if ( *(_WORD *)(a1 + 32) == 20 )
    {
      ++*(_WORD *)(a1 + 90);
      goto LABEL_18;
    }
    v14 = *(_WORD *)(a1 + 90);
    if ( v14 )
    {
      v24 = *(_DWORD *)(a1 + 2792);
      if ( !v24 )
      {
LABEL_53:
        *(_WORD *)(a1 + 90) = v14 - 1;
        goto LABEL_18;
      }
      v25 = *(_WORD *)(a1 + 88);
      v26 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v24 - 24);
      while ( 2 )
      {
        if ( v25 == v26[7] )
        {
          if ( *((_DWORD *)v26 + 4) != *(_DWORD *)(a1 + 90) )
          {
LABEL_51:
            if ( v14 <= v26[8] && *(_WORD *)(a1 + 92) <= v26[9] )
              goto LABEL_53;
          }
        }
        else if ( v25 <= v26[7] )
        {
          goto LABEL_51;
        }
        --v24;
        v26 -= 12;
        *(_DWORD *)(a1 + 2792) = v24;
        if ( !v24 )
          goto LABEL_53;
        continue;
      }
    }
LABEL_18:
    v15 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v15, i);
    v27[0] = 21;
    if ( !(unsigned __int8)sub_15680D0(a1, v27, 1, 0) || *(_WORD *)(a1 + 32) != 21 )
      return 0;
    v16 = *(_WORD *)(a1 + 90);
    if ( v16 )
    {
      v17 = *(_DWORD *)(a1 + 2792);
      if ( !v17 )
      {
LABEL_29:
        *(_WORD *)(a1 + 90) = v16 - 1;
        goto LABEL_30;
      }
      v18 = *(_WORD *)(a1 + 88);
      v19 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v17 - 24);
      while ( 2 )
      {
        if ( v18 == v19[7] )
        {
          if ( *((_DWORD *)v19 + 4) != *(_DWORD *)(a1 + 90) )
          {
LABEL_27:
            if ( v16 <= v19[8] && *(_WORD *)(a1 + 92) <= v19[9] )
              goto LABEL_29;
          }
        }
        else if ( v18 <= v19[7] )
        {
          goto LABEL_27;
        }
        --v17;
        v19 -= 12;
        *(_DWORD *)(a1 + 2792) = v17;
        if ( !v17 )
          goto LABEL_29;
        continue;
      }
    }
LABEL_30:
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  }
  return 1;
}
