/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B430
// Address: 0x000000000004B430

//----- (000000000004B430) ----------------------------------------------------
void __fastcall sub_4B430(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v4; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = a2;
    return;
  }
  if ( v4 < a2 )
  {
    v6 = *(char **)a1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &v6[8 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        v6 = (char *)qvector_reserve(a1, *(char **)a1, a2, 8u);
        *(_QWORD *)a1 = v6;
        v4 = *(_QWORD *)(a1 + 8);
      }
      if ( v4 < a2 )
      {
        *(_QWORD *)&v6[8 * v4] = *(_QWORD *)a3;
        v14 = v4 + 1;
        if ( v4 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 3) != 0 )
          {
            v15 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 3);
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v14++) = *(_QWORD *)a3;
              ++v15;
            }
            while ( v15 );
          }
          if ( a2 - 2 - v4 >= 3 )
          {
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v14) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v14 + 8) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v14 + 16) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v14 + 24) = *(_QWORD *)a3;
              v14 += 4LL;
            }
            while ( a2 != v14 );
          }
        }
      }
    }
    else
    {
      v8 = *(_QWORD *)a3;
      if ( v7 < a2 )
      {
        v6 = (char *)qvector_reserve(a1, *(char **)a1, a2, 8u);
        *(_QWORD *)a1 = v6;
        v4 = *(_QWORD *)(a1 + 8);
      }
      if ( v4 < a2 )
      {
        *(_QWORD *)&v6[8 * v4] = v8;
        v9 = v4 + 1;
        if ( v4 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 7) != 0 )
          {
            v10 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 7);
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9++) = v8;
              ++v10;
            }
            while ( v10 );
          }
          if ( a2 - 2 - v4 >= 7 )
          {
            v11 = a2 - v9;
            v12 = 8 * v9;
            v13 = 0;
            do
            {
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 8) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 16) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 24) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 32) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 40) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 48) = v8;
              *(_QWORD *)(v12 + *(_QWORD *)a1 + 8 * v13 + 56) = v8;
              v13 += 8;
            }
            while ( v11 != v13 );
          }
        }
      }
    }
    goto LABEL_2;
  }
}
