/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423E38
// Address: 0x0000000000423E38

//----- (0000000000423E38) ----------------------------------------------------
__int64 __fastcall sub_423E38(__int64 a1, _QWORD *a2, __int64 a3, size_t n, unsigned __int8 a5)
{
  unsigned int v9; // w27
  char v10; // w25
  int v11; // w26
  __int64 v12; // x4
  unsigned __int64 v13; // x23
  _BYTE *v14; // x0
  __int64 v15; // x20
  size_t v17; // x20
  char *v18; // x1
  size_t v19; // x3
  size_t v20; // x0
  size_t v21; // x2
  char *v22; // x0
  __int64 v23; // [xsp+68h] [xbp-18h]
  char v24; // [xsp+77h] [xbp-9h] BYREF

  if ( n > ~a3 || a3 + n > a2[1] )
  {
    return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v9 = a5;
    if ( a5 )
    {
      if ( n > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, n, 1u);
      if ( n )
      {
        v10 = *(_BYTE *)(*a2 + a3);
        if ( v10 )
        {
          v11 = 0;
          do
          {
            v15 = *(_QWORD *)(a1 + 8);
            if ( v15 )
            {
              v12 = v15 - 1;
              v13 = v15 + 1;
            }
            else
            {
              v15 = 1;
              v13 = 2;
              v12 = 0;
            }
            v14 = *(_BYTE **)a1;
            if ( *(_QWORD *)(a1 + 16) < v13 )
            {
              v23 = v12;
              v14 = sub_491288(a1, *(void **)a1, v13, 1u);
              v12 = v23;
              *(_QWORD *)a1 = v14;
            }
            *(_QWORD *)(a1 + 8) = v13;
            ++v11;
            v14[v12] = v10;
            *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
            if ( v11 >= n )
              break;
            v10 = *(_BYTE *)(*a2 + v11 + a3);
          }
          while ( v10 );
        }
      }
    }
    else
    {
      v24 = 0;
      v17 = n + 1;
      v18 = *(char **)a1;
      if ( n != -1 )
      {
        v19 = *(_QWORD *)(a1 + 16);
        if ( v18 <= &v24 && &v24 < &v18[v19] )
        {
          v21 = 0;
          if ( v19 >= v17
            || (v22 = (char *)sub_491288(a1, v18, n + 1, 1u),
                *(_QWORD *)a1 = v22,
                v21 = *(_QWORD *)(a1 + 8),
                v18 = v22,
                v21 < v17) )
          {
            while ( 1 )
            {
              v18[v21++] = 0;
              if ( v17 == v21 )
                break;
              v18 = *(char **)a1;
            }
          }
          v18 = *(char **)a1;
          *(_QWORD *)(a1 + 8) = v17;
        }
        else
        {
          if ( v19 < v17 )
            *(_QWORD *)a1 = sub_491288(a1, v18, n + 1, 1u);
          v20 = *(_QWORD *)(a1 + 8);
          if ( v17 > v20 )
          {
            do
              *(_BYTE *)(*(_QWORD *)a1 + v20++) = 0;
            while ( v17 != v20 );
          }
          v18 = *(char **)a1;
          *(_QWORD *)(a1 + 8) = v17;
        }
      }
      v18[n] = 0;
      v9 = 1;
      memcpy(*(void **)a1, (const void *)(*a2 + a3), n);
    }
  }
  return v9;
}
// 423E38: could not find valid save-restore pair for x23
// 423E38: could not find valid save-restore pair for x25
// 423E38: could not find valid save-restore pair for x26
