__int64 __fastcall sub_197B880(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int16 i; // ax
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int8 v21; // [rsp+Ch] [rbp-1Ch]

  while ( 1 )
  {
    for ( i = *(_WORD *)a2 & 0x1FF; i == 79; i = *(_WORD *)a2 & 0x1FF )
      a2 = *(_QWORD *)(a2 + 16);
    if ( i != 48 )
      break;
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 4) != 0 )
      a2 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    else
      a2 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( i != 61 || (*(_BYTE *)(a2 + 5) & 1) == 0 )
    return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
  a5 = *(_QWORD *)(a1 + 48);
  a6 = **(_QWORD **)(a1 + 40);
  v13 = (a5 - a6) >> 5;
  v14 = (a5 - a6) >> 3;
  if ( v13 > 0 )
  {
    a4 = *(_QWORD *)(a5 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2 == a4 )
    {
      v17 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      a4 = *(_QWORD *)(a5 - 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2 == a4 )
      {
        v17 = a5 - 8;
      }
      else
      {
        a4 = *(_QWORD *)(a5 - 24) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a2 == a4 )
        {
          v17 = a5 - 16;
        }
        else
        {
          a4 = *(_QWORD *)(a5 - 32) & 0xFFFFFFFFFFFFFFF8LL;
          if ( a2 == a4 )
          {
            v17 = a5 - 24;
          }
          else
          {
            v15 = *(_QWORD *)(a1 + 48);
            v16 = a5 - 32 * v13;
            while ( 1 )
            {
              v17 = v15 - 32;
              if ( v16 == v15 - 32 )
              {
                v14 = (v17 - a6) >> 3;
                goto LABEL_23;
              }
              a4 = *(_QWORD *)(v15 - 40) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a2 == a4 )
                goto LABEL_33;
              a4 = *(_QWORD *)(v15 - 48) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a2 == a4 )
              {
                v17 = v15 - 40;
                goto LABEL_33;
              }
              a4 = *(_QWORD *)(v15 - 56) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a2 == a4 )
              {
                v17 = v15 - 48;
                goto LABEL_33;
              }
              a4 = *(_QWORD *)(v15 - 64) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a2 == a4 )
                break;
              v15 -= 32;
            }
            v17 = v15 - 56;
          }
        }
      }
    }
LABEL_33:
    if ( a6 != v17 )
    {
      *(_QWORD *)(v17 - 8) |= 4uLL;
      return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
    }
    goto LABEL_26;
  }
  v17 = *(_QWORD *)(a1 + 48);
LABEL_23:
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      if ( v14 != 1 )
        goto LABEL_26;
      goto LABEL_42;
    }
    a4 = *(_QWORD *)(v17 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2 == a4 )
      goto LABEL_33;
    v17 -= 8;
  }
  a4 = *(_QWORD *)(v17 - 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 == a4 )
    goto LABEL_33;
  v17 -= 8;
LABEL_42:
  a4 = *(_QWORD *)(v17 - 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 == a4 )
    goto LABEL_33;
LABEL_26:
  v18 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 9772LL) )
  {
    v19 = *(_QWORD **)(v18 + 9752);
    a4 = (unsigned __int64)&v19[*(unsigned int *)(v18 + 9764)];
    if ( v19 == (_QWORD *)a4 )
      return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
    while ( a2 != *v19 )
    {
      if ( (_QWORD *)a4 == ++v19 )
        return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
    }
  }
  else
  {
    v21 = a3;
    v20 = sub_2236570(v18 + 9752, a2);
    a3 = v21;
    if ( !v20 )
      return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
    a5 = *(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)(a5 - 8) |= 4uLL;
  return sub_197B540((__int64 *)a1, a2, a3, a7, a8, a4, a5, a6);
}
