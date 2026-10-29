/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4716B8
// Address: 0x00000000004716B8

//----- (00000000004716B8) ----------------------------------------------------
_QWORD *__fastcall sub_4716B8(int a1, __int64 a2)
{
  __int64 v2; // x20
  _QWORD *v5; // x0
  __int64 v6; // x1
  _QWORD *v7; // x24
  _QWORD *v8; // x2
  __int64 v9; // x22
  __int64 v10; // x25
  unsigned __int8 *v11; // x20
  unsigned __int8 *v12; // x21
  unsigned __int8 *v13; // x19
  unsigned __int8 *v15; // x0
  size_t v18; // x0
  size_t v19; // x26
  unsigned __int64 v20; // x19
  void *v21; // x0
  size_t v22; // x0
  size_t v23; // x19
  unsigned __int64 v24; // x20
  void *v25; // x0

  if ( a1 > 0 )
  {
    v2 = a1;
    v5 = sub_49ECD8(56LL * a1 + 8);
    v6 = 0;
    *v5 = v2;
    v7 = v5 + 1;
    v8 = v5 + 1;
    do
    {
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = 0;
      ++v6;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      v8[4] = 0;
      v8[5] = 0;
      v8[6] = 0;
      v8 += 7;
    }
    while ( v2 != v6 );
    v9 = (__int64)(v5 + 2);
    v10 = (__int64)&v5[7 * (unsigned int)(a1 - 1) + 9];
    while ( 1 )
    {
      *(_DWORD *)(v9 - 8) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      *(_DWORD *)(v9 - 4) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      v12 = *(unsigned __int8 **)a2;
      v11 = *(unsigned __int8 **)(a2 + 8);
      if ( (unsigned __int64)v11 <= *(_QWORD *)a2 )
        goto LABEL_10;
      v13 = v12 + 1;
      if ( *v12 )
        break;
LABEL_19:
      *(_QWORD *)a2 = v13;
      if ( !v12 || (v18 = strlen((const char *)v12), (v19 = v18) == 0) )
      {
        v12 = v13;
LABEL_10:
        *(_QWORD *)(v9 + 8) = 0;
        goto LABEL_11;
      }
      v20 = v18 + 1;
      v21 = *(void **)v9;
      if ( v20 > *(_QWORD *)(v9 + 16) )
      {
        v21 = sub_491288(v9, *(void **)v9, v20, 1u);
        *(_QWORD *)v9 = v21;
      }
      *(_QWORD *)(v9 + 8) = v20;
      memmove(v21, v12, v19);
      *(_BYTE *)(*(_QWORD *)v9 + v19) = 0;
      v12 = *(unsigned __int8 **)a2;
      v11 = *(unsigned __int8 **)(a2 + 8);
LABEL_11:
      if ( v12 < v11 )
      {
        v15 = v12 + 1;
        if ( *v12 )
        {
          while ( v15 != v11 )
          {
            if ( !*v15++ )
              goto LABEL_25;
          }
        }
        else
        {
LABEL_25:
          *(_QWORD *)a2 = v15;
          if ( v12 )
          {
            v22 = strlen((const char *)v12);
            v23 = v22;
            if ( v22 )
            {
              v24 = v22 + 1;
              v25 = *(void **)(v9 + 24);
              if ( v24 > *(_QWORD *)(v9 + 40) )
              {
                v25 = sub_491288(v9 + 24, *(void **)(v9 + 24), v24, 1u);
                *(_QWORD *)(v9 + 24) = v25;
              }
              *(_QWORD *)(v9 + 32) = v24;
              memmove(v25, v12, v23);
              *(_BYTE *)(*(_QWORD *)(v9 + 24) + v23) = 0;
              goto LABEL_17;
            }
          }
        }
      }
      *(_QWORD *)(v9 + 32) = 0;
LABEL_17:
      v9 += 56;
      if ( v10 == v9 )
        return v7;
    }
    while ( v11 != v13 )
    {
      if ( !*v13++ )
        goto LABEL_19;
    }
    goto LABEL_10;
  }
  return nullptr;
}
