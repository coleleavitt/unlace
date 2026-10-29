/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C188
// Address: 0x000000000048C188

//----- (000000000048C188) ----------------------------------------------------
__int64 __fastcall sub_48C188(__int64 a1, __off64_t a2, char *a3, size_t a4)
{
  __int64 v7; // x3
  FILE *v9; // x0
  size_t v10; // x3
  size_t v11; // x20
  size_t v12; // x0
  __int64 v13; // x23
  __int64 v14; // x0
  size_t v15; // x0
  __int64 v16; // x20
  FILE *v18; // x0
  __off64_t v19; // x1
  __int64 v20; // x20
  unsigned __int64 v21; // x20
  void *v22; // x24
  size_t v23; // x2
  size_t v24; // x3
  __int64 v25; // x26
  FILE *v26; // x0
  __off64_t v27; // x1

  if ( a2 < 0 )
    goto LABEL_47;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 > a2 )
  {
    v9 = *(FILE **)(a1 + 32);
    if ( v9 )
    {
      v10 = v7 - a2;
      if ( v10 > a4 )
        v11 = a4;
      else
        v11 = v10;
      if ( !(unsigned int)sub_490650(v9, a2, 0) )
      {
        v12 = sub_4904B8(*(FILE **)(a1 + 32), a3, v11);
        v13 = v12;
        if ( v12 == a4 )
          return v13;
        if ( v12 == v11 )
        {
          a4 -= v12;
          a3 += v12;
          v14 = *(_QWORD *)(a1 + 8);
LABEL_11:
          if ( v14 )
          {
            v15 = v14 - *(_QWORD *)(a1 + 40);
            if ( a4 > v15 )
              a4 = v15;
          }
          v16 = sub_48C160(*(_QWORD *)(a1 + 24), a3, a4);
          if ( v16 <= 0 )
            goto LABEL_15;
          v18 = *(FILE **)(a1 + 32);
          v19 = *(_QWORD *)(a1 + 40);
          if ( v18 )
          {
            if ( (unsigned int)sub_490650(v18, v19, 0) || v16 != sub_490560(*(FILE **)(a1 + 32), a3, v16) )
            {
              v16 = -1;
LABEL_15:
              if ( v13 <= 0 )
                return v16;
              return v13;
            }
            v19 = *(_QWORD *)(a1 + 40);
          }
          *(_QWORD *)(a1 + 40) = v19 + v16;
          return v13 + v16;
        }
      }
      return -1;
    }
LABEL_47:
    v13 = -1;
    sub_4869C8(3);
    return v13;
  }
  if ( v7 >= a2 )
  {
    v13 = 0;
    v14 = *(_QWORD *)(a1 + 8);
    goto LABEL_11;
  }
  v20 = a1 + 48;
  if ( *(_QWORD *)(a1 + 64) <= 0x3FFFFu )
  {
    *(_QWORD *)(a1 + 48) = sub_491288(v20, *(void **)(a1 + 48), 0x40000u, 1u);
    v7 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)(v20 + 8) = 0x40000;
  v14 = *(_QWORD *)(a1 + 8);
  if ( a2 == v7 )
  {
LABEL_44:
    v13 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v21 = a2 - v7;
    v22 = *(void **)(a1 + 48);
    if ( (unsigned __int64)(a2 - v7) > 0x40000 )
      v21 = 0x40000;
    v23 = v21;
    if ( v14 )
    {
      v24 = v14 - v7;
      if ( v24 > v21 )
        v23 = v21;
      else
        v23 = v24;
    }
    v25 = sub_48C160(*(_QWORD *)(a1 + 24), *(void **)(a1 + 48), v23);
    if ( v25 > 0 )
      break;
LABEL_42:
    if ( v25 != v21 )
      return 0;
    v7 = *(_QWORD *)(a1 + 40);
    v14 = *(_QWORD *)(a1 + 8);
    if ( a2 == v7 )
      goto LABEL_44;
  }
  v26 = *(FILE **)(a1 + 32);
  v27 = *(_QWORD *)(a1 + 40);
  if ( !v26 )
  {
LABEL_41:
    *(_QWORD *)(a1 + 40) = v27 + v25;
    goto LABEL_42;
  }
  if ( !(unsigned int)sub_490650(v26, v27, 0) && v25 == sub_490560(*(FILE **)(a1 + 32), v22, v25) )
  {
    v27 = *(_QWORD *)(a1 + 40);
    goto LABEL_41;
  }
  return 0;
}
