__int64 __fastcall sub_631CC0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        double a6,
        double a7,
        __m128 a8)
{
  _QWORD *v9; // rbp
  unsigned int i; // ebx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 result; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // r13d
  __int64 *v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rsi
  bool v20; // zf
  _QWORD *v21; // rbp
  __int64 v22; // rsi
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v27; // [rsp+28h] [rbp-40h]

  v9 = a1 + 49;
  v24 = *a1;
  v26 = v24;
  v25 = nullptr;
  v27 = nullptr;
  sub_657BE0(a1 + 49);
  sub_657B90(a1 + 49, a5);
  sub_658180(a1 + 49, a2, a3, &v24, &v26);
  for ( i = 0; ; ++i )
  {
    result = *(_QWORD *)(sub_657FB0(v9) + 8);
    if ( !result || i >= *(_DWORD *)(result - 4) )
      break;
    v12 = a1[1];
    v13 = sub_657FB0(v9);
    sub_6511B0(v12, *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL * i), 0);
  }
  v15 = v25;
  v16 = 0;
  if ( v25 )
  {
    while ( 1 )
    {
      v17 = v27;
      if ( v16 >= *((_DWORD *)v15 - 1) )
        break;
      result = sub_631870((__int64)a1, v15[v16], v27[v16], a4, a5, a6, a7, a8);
      v15 = v25;
      ++v16;
      if ( !v25 )
        goto LABEL_8;
    }
    if ( !v27 )
      goto LABEL_18;
  }
  else
  {
LABEL_8:
    v17 = v27;
    if ( !v27 )
      return result;
  }
  result = *((unsigned int *)v17 - 1);
  v18 = &v17[result];
  if ( v17 >= v18 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v19 = *v17;
      if ( *v17 )
      {
        v20 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v20 )
          break;
      }
      if ( ++v17 >= v18 )
        goto LABEL_15;
    }
    result = sub_15D7BC0(v26, v19);
    ++v17;
  }
  while ( v17 < v18 );
LABEL_15:
  v17 = v27;
  if ( v27 )
LABEL_16:
    result = sub_186B220(v17 - 1);
  v15 = v25;
  if ( v25 )
  {
LABEL_18:
    result = *((unsigned int *)v15 - 1);
    v21 = &v15[result];
    if ( v15 >= v21 )
      return sub_186B220(v15 - 1);
    do
    {
      while ( 1 )
      {
        v22 = *v15;
        if ( *v15 )
        {
          v20 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v15 >= v21 )
          goto LABEL_24;
      }
      result = sub_15D7BC0(v24, v22);
      ++v15;
    }
    while ( v15 < v21 );
LABEL_24:
    v15 = v25;
    if ( v25 )
      return sub_186B220(v15 - 1);
  }
  return result;
}

