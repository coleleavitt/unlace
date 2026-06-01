/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004993C
// Address: 0x000000010004993C

//----- (000000010004993C) ----------------------------------------------------
__int64 __fastcall sub_10004993C(__int64 a1, __int64 a2)
{
  __int64 v3; // x9
  __int64 v4; // x23
  unsigned __int64 v5; // x24
  int *v6; // x25
  __int64 v7; // x8
  __int64 v8; // x22
  _QWORD *v9; // x28
  unsigned __int64 v10; // x26
  int v11; // w27
  unsigned __int64 v12; // x8
  unsigned __int8 *v13; // x9
  size_t v14; // x21
  __int64 v15; // x8
  __int64 v16; // x20
  _QWORD *v17; // x0
  _QWORD *v18; // x8
  __int64 v20; // [xsp+0h] [xbp-80h]
  __int64 v21; // [xsp+8h] [xbp-78h]
  __int64 v22; // [xsp+10h] [xbp-70h]
  __int64 v23; // [xsp+18h] [xbp-68h]

  if ( (*(_QWORD *)(a1 + 4192) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 4240);
    v4 = a1 + v3;
    v5 = a1 + v3 + 48;
    v6 = *(int **)(a1 + 4184);
    v20 = v3;
    v21 = a1 + 4152;
    v23 = v3 + 1;
    do
    {
      v7 = *(_QWORD *)(a1 + 4240);
      v8 = a2 - v7;
      if ( a2 != v7 )
      {
        v9 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * *v6);
        v10 = v9[1];
        v11 = *(unsigned __int8 *)(*v9 + v10 - 1);
LABEL_6:
        v12 = v8 + 1;
        while ( 1 )
        {
          v13 = (unsigned __int8 *)(v4 + v8 + 47);
          if ( (unsigned __int64)v13 < v5 )
            break;
          --v12;
          --v8;
          if ( *v13 == v11 )
          {
            if ( v8 + 1 < v10 )
              v14 = v8 + 1;
            else
              v14 = v10;
            if ( v10 < v12 )
              v12 = v10;
            if ( !memcmp((const void *)(v4 - v12 + v8 + 49), (const void *)(*v9 + v10 - v14), v14) )
            {
              v15 = *(_QWORD *)(a1 + 4144);
              if ( v10 <= v8 + 1 )
              {
                **(_QWORD **)(a1 + 8) = v20 - v10 + v8 + v15 + 1;
                return 1;
              }
              v16 = v23 - v10 + v8 + v15;
              v22 = *v6;
              v17 = qalloc_or_throw(40);
              v17[2] = v16;
              v17[3] = v22;
              v17[4] = v14;
              *v17 = v21;
              v18 = *(_QWORD **)(a1 + 4160);
              v17[1] = v18;
              *v18 = v17;
              *(_QWORD *)(a1 + 4160) = v17;
              ++*(_QWORD *)(a1 + 4168);
              if ( v8 )
                goto LABEL_6;
            }
            else if ( v8 )
            {
              goto LABEL_6;
            }
            break;
          }
        }
      }
      ++v6;
    }
    while ( v6 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
  }
  return 0;
}
