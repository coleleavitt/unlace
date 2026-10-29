/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CD560
// Address: 0x00000000000CD560

//----- (00000000000CD560) ----------------------------------------------------
void __fastcall sub_CD560(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v4; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi

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
        v11 = v4 + 1;
        if ( v4 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 3) != 0 )
          {
            v12 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 3);
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v11++) = *(_QWORD *)a3;
              ++v12;
            }
            while ( v12 );
          }
          if ( a2 - 2 - v4 >= 3 )
          {
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 + 8) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 + 16) = *(_QWORD *)a3;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 + 24) = *(_QWORD *)a3;
              v11 += 4LL;
            }
            while ( a2 != v11 );
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
          if ( (((_BYTE)a2 + ~(_BYTE)v4) & 3) != 0 )
          {
            v10 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v4) & 3);
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9++) = v8;
              ++v10;
            }
            while ( v10 );
          }
          if ( a2 - 2 - v4 >= 3 )
          {
            do
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9) = v8;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9 + 8) = v8;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9 + 16) = v8;
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v9 + 24) = v8;
              v9 += 4LL;
            }
            while ( a2 != v9 );
          }
        }
      }
    }
    goto LABEL_2;
  }
}
