/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000C8A0
// Address: 0x000000014000C8A0

//----- (000000014000C8A0) ----------------------------------------------------
__int64 __fastcall sub_14000C8A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rdi
  __int64 *v5; // r11
  __int64 v6; // r14
  __int64 v7; // rbp
  char v8; // r10
  __int64 j; // rax
  __int64 *i; // r8
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 k; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE *v16; // r8
  __int64 v17; // rax
  __int64 m; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  char v21; // dl
  __int64 v22; // r10
  _BYTE *v23; // rcx
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  _QWORD *v26; // rax
  _BYTE *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 result; // rax

  v2 = a2 + 16;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (__int64 *)a2;
  v6 = a2;
  v7 = a2;
  v8 = *(_BYTE *)(v4 + 25);
  if ( v8 )
  {
    j = *(_QWORD *)(a2 + 8);
    for ( i = (__int64 *)(a2 + 8); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
    {
      if ( a2 != *(_QWORD *)(j + 16) )
        break;
      a2 = j;
    }
  }
  else
  {
    v11 = *(_QWORD *)v4;
    for ( j = v4; !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
      j = v11;
    i = (__int64 *)(v7 + 8);
  }
  if ( !*(_BYTE *)(*v5 + 25) )
  {
    if ( v8 )
    {
      v4 = *v5;
    }
    else
    {
      v4 = *(_QWORD *)(j + 16);
      if ( j != v6 )
      {
        *(_QWORD *)(*v5 + 8) = j;
        *(_QWORD *)j = *v5;
        if ( j == *(_QWORD *)v2 )
        {
          v12 = j;
        }
        else
        {
          v12 = *(_QWORD *)(j + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v12;
          *(_QWORD *)v12 = v4;
          *(_QWORD *)(j + 16) = *(_QWORD *)v2;
          *(_QWORD *)(*(_QWORD *)v2 + 8LL) = j;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = j;
        }
        else
        {
          v19 = (_QWORD *)*i;
          if ( *(_QWORD *)*i == v6 )
            *v19 = j;
          else
            v19[2] = j;
        }
        v20 = (_QWORD *)*i;
        v16 = (_BYTE *)(v6 + 24);
        v21 = *(_BYTE *)(j + 24);
        *(_QWORD *)(j + 8) = v20;
        *(_BYTE *)(j + 24) = *(_BYTE *)(v6 + 24);
        *(_BYTE *)(v6 + 24) = v21;
        goto LABEL_44;
      }
    }
  }
  v12 = *i;
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v12;
  if ( *(_QWORD *)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *(_QWORD *)v12 == v6 )
  {
    *(_QWORD *)v12 = v4;
  }
  else
  {
    *(_QWORD *)(v12 + 16) = v4;
  }
  if ( *(_QWORD *)*a1 == v6 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      k = v12;
    }
    else
    {
      v14 = *(_QWORD *)v4;
      for ( k = v4; !*(_BYTE *)(v14 + 25); v14 = *(_QWORD *)v14 )
        k = v14;
    }
    *(_QWORD *)*a1 = k;
  }
  v15 = *a1;
  if ( *(_QWORD *)(*a1 + 16LL) != v6 )
    goto LABEL_32;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    v17 = *(_QWORD *)(v4 + 16);
    for ( m = v4; !*(_BYTE *)(v17 + 25); v17 = *(_QWORD *)(v17 + 16) )
      m = v17;
    *(_QWORD *)(v15 + 16) = m;
LABEL_32:
    v16 = (_BYTE *)(v7 + 24);
    goto LABEL_44;
  }
  *(_QWORD *)(v15 + 16) = v12;
  v16 = (_BYTE *)(v7 + 24);
LABEL_44:
  if ( *v16 != 1 )
    goto LABEL_85;
  if ( v4 == *(_QWORD *)(*a1 + 8LL) )
    goto LABEL_84;
  v22 = v12;
  if ( *(_BYTE *)(v4 + 24) != 1 )
    goto LABEL_84;
  while ( 1 )
  {
    v23 = *(_BYTE **)v12;
    if ( v4 != *(_QWORD *)v12 )
      break;
    v23 = *(_BYTE **)(v12 + 16);
    if ( v23[24] )
    {
      v25 = (__int64 *)(v12 + 8);
    }
    else
    {
      v23[24] = 1;
      v24 = *(__int64 **)(v12 + 16);
      *(_BYTE *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 16) = *v24;
      if ( !*(_BYTE *)(*v24 + 25) )
        *(_QWORD *)(*v24 + 8) = v12;
      v25 = (__int64 *)(v12 + 8);
      v24[1] = *(_QWORD *)(v12 + 8);
      if ( v12 == *(_QWORD *)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v24;
        *v24 = v12;
        *v25 = (__int64)v24;
        v23 = *(_BYTE **)(v12 + 16);
      }
      else
      {
        v26 = (_QWORD *)*v25;
        if ( v12 == *(_QWORD *)*v25 )
          *v26 = v24;
        else
          v26[2] = v24;
        *v24 = v12;
        *v25 = (__int64)v24;
        v23 = *(_BYTE **)(v12 + 16);
      }
    }
    if ( v23[25] )
      goto LABEL_78;
    if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) != 1 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) == 1 )
      {
        *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
        v23[24] = 0;
        sub_14000D0B0((__int64)a1, v23);
        v23 = *(_BYTE **)(v12 + 16);
      }
      v23[24] = *(_BYTE *)(v12 + 24);
      *(_BYTE *)(v12 + 24) = 1;
      *(_BYTE *)(*((_QWORD *)v23 + 2) + 24LL) = 1;
      sub_14000D050((__int64)a1, v12);
      goto LABEL_84;
    }
LABEL_77:
    v23[24] = 0;
LABEL_78:
    v4 = v22;
    v12 = *v25;
    if ( v22 != *(_QWORD *)(*a1 + 8LL) )
    {
      v22 = *v25;
      if ( *(_BYTE *)(v4 + 24) == 1 )
        continue;
    }
    goto LABEL_84;
  }
  if ( v23[24] )
  {
    v25 = (__int64 *)(v12 + 8);
  }
  else
  {
    v23[24] = 1;
    v27 = *(_BYTE **)v12;
    *(_BYTE *)(v12 + 24) = 0;
    *(_QWORD *)v12 = *((_QWORD *)v27 + 2);
    v28 = *((_QWORD *)v27 + 2);
    if ( !*(_BYTE *)(v28 + 25) )
      *(_QWORD *)(v28 + 8) = v12;
    v25 = (__int64 *)(v12 + 8);
    *((_QWORD *)v27 + 1) = *(_QWORD *)(v12 + 8);
    if ( v12 == *(_QWORD *)(*a1 + 8LL) )
    {
      *(_QWORD *)(*a1 + 8LL) = v27;
      *((_QWORD *)v27 + 2) = v12;
      *v25 = (__int64)v27;
      v23 = *(_BYTE **)v12;
    }
    else
    {
      v29 = (_QWORD *)*v25;
      if ( v12 == *(_QWORD *)(*v25 + 16) )
        v29[2] = v27;
      else
        *v29 = v27;
      *((_QWORD *)v27 + 2) = v12;
      *v25 = (__int64)v27;
      v23 = *(_BYTE **)v12;
    }
  }
  if ( v23[25] )
    goto LABEL_78;
  v30 = *((_QWORD *)v23 + 2);
  if ( *(_BYTE *)(v30 + 24) == 1 && *(_BYTE *)(*(_QWORD *)v23 + 24LL) == 1 )
    goto LABEL_77;
  if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) == 1 )
  {
    *(_BYTE *)(v30 + 24) = 1;
    v23[24] = 0;
    sub_14000D050((__int64)a1, (__int64)v23);
    v23 = *(_BYTE **)v12;
  }
  v23[24] = *(_BYTE *)(v12 + 24);
  *(_BYTE *)(v12 + 24) = 1;
  *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
  sub_14000D0B0((__int64)a1, (_QWORD *)v12);
LABEL_84:
  *(_BYTE *)(v4 + 24) = 1;
LABEL_85:
  v31 = a1[1];
  result = v6;
  if ( v31 )
    a1[1] = v31 - 1;
  return result;
}
