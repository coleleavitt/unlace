/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9EAC0
// Address: 0x000000000009EAC0

//----- (000000000009EAC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9EAC0(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rcx
  char *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // [rsp+0h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __readfsqword(0x28u);
    v5 = *(char **)a1;
    v6 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &v5[16 * v6] <= a3 )
    {
      if ( v6 < a2 )
      {
        v5 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x10u);
        *(_QWORD *)a1 = v5;
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( v3 < a2 )
      {
        *(_OWORD *)&v5[16 * v3] = *(_OWORD *)a3;
        v13 = v3 + 1;
        if ( v3 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v3) & 3) != 0 )
          {
            v14 = 16 * v3 + 16;
            v15 = 0;
            do
            {
              *(_OWORD *)(*(_QWORD *)a1 + v14) = *(_OWORD *)a3;
              --v15;
              v14 += 16;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v3) & 3) != v15 );
            v13 = v3 + 1 - v15;
          }
          if ( a2 - 2 - v3 >= 3 )
          {
            v16 = a2 - v13;
            v17 = 16 * v13;
            do
            {
              *(_OWORD *)(*(_QWORD *)a1 + v17) = *(_OWORD *)a3;
              *(_OWORD *)(*(_QWORD *)a1 + v17 + 16) = *(_OWORD *)a3;
              *(_OWORD *)(*(_QWORD *)a1 + v17 + 32) = *(_OWORD *)a3;
              *(_OWORD *)(*(_QWORD *)a1 + v17 + 48) = *(_OWORD *)a3;
              v17 += 64;
              v16 -= 4LL;
            }
            while ( v16 );
          }
        }
      }
    }
    else
    {
      v18 = *(_OWORD *)a3;
      if ( v6 < a2 )
      {
        v5 = (char *)qvector_reserve(a1, v5, a2, 0x10u);
        *(_QWORD *)a1 = v5;
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( v3 < a2 )
      {
        *(_OWORD *)&v5[16 * v3] = v18;
        v7 = v3 + 1;
        if ( v3 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v3) & 3) != 0 )
          {
            v8 = 16 * v3 + 16;
            v9 = 0;
            do
            {
              *(_OWORD *)(*(_QWORD *)a1 + v8) = v18;
              --v9;
              v8 += 16;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v3) & 3) != v9 );
            v7 = v3 + 1 - v9;
          }
          if ( a2 - 2 - v3 >= 3 )
          {
            v10 = a2 - v7;
            v11 = 16 * v7;
            do
            {
              *(_OWORD *)(*(_QWORD *)a1 + v11) = v18;
              *(_OWORD *)(*(_QWORD *)a1 + v11 + 16) = v18;
              *(_OWORD *)(*(_QWORD *)a1 + v11 + 32) = v18;
              *(_OWORD *)(*(_QWORD *)a1 + v11 + 48) = v18;
              v11 += 64;
              v10 -= 4LL;
            }
            while ( v10 );
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __readfsqword(0x28u);
}
