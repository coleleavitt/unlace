/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C51A0
// Address: 0x00000000000C51A0

//----- (00000000000C51A0) ----------------------------------------------------
__int64 __fastcall sub_C51A0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  _DWORD *v5; // rbp
  _DWORD *v6; // rax
  int v7; // r8d
  __int64 i; // rdx
  bool v9; // cc
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rbx
  _DWORD *v13; // r12
  __int64 *v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // cc
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx

  LOBYTE(v2) = 1;
  switch ( ((char *)a2 - (char *)a1) >> 3 )
  {
    case 0LL:
    case 1LL:
      return v2;
    case 2LL:
      if ( *(a2 - 2) == *a1 )
      {
        if ( *(a2 - 1) >= a1[1] )
          return v2;
      }
      else if ( *(a2 - 2) >= *a1 )
      {
        return v2;
      }
      v16 = *(_QWORD *)a1;
      *(_QWORD *)a1 = *((_QWORD *)a2 - 1);
      *((_QWORD *)a2 - 1) = v16;
      return v2;
    case 3LL:
      sub_C4FC0(a1, a1 + 2, a2 - 2);
      return v2;
    case 4LL:
      v13 = a1 + 2;
      v14 = (__int64 *)(a1 + 4);
      sub_C4FC0(a1, a1 + 2, a1 + 4);
      v15 = a1[4];
      if ( *(a2 - 2) == v15 )
      {
        if ( *(a2 - 1) >= a1[5] )
          return v2;
      }
      else if ( *(a2 - 2) >= v15 )
      {
        return v2;
      }
      v17 = *v14;
      *v14 = *((_QWORD *)a2 - 1);
      *((_QWORD *)a2 - 1) = v17;
      v18 = *(_DWORD *)v14 < *v13;
      if ( *(_DWORD *)v14 == *v13 )
        v18 = a1[5] < a1[3];
      if ( !v18 )
        return v2;
      v19 = *((_QWORD *)a1 + 1);
      v20 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 1) = v20;
      *((_QWORD *)a1 + 2) = v19;
      if ( *a1 == (_DWORD)v20 )
      {
        if ( a1[1] <= SHIDWORD(v20) )
          return v2;
      }
      else if ( *a1 <= (int)v20 )
      {
        return v2;
      }
      v21 = *(_QWORD *)a1;
      *(_QWORD *)a1 = v20;
      *((_QWORD *)a1 + 1) = v21;
      return v2;
    case 5LL:
      sub_C5070(a1, a1 + 2, a1 + 4, a1 + 6, a2 - 2);
      return v2;
    default:
      v5 = a1 + 4;
      sub_C4FC0(a1, a1 + 2, a1 + 4);
      v6 = a1 + 6;
      if ( a1 + 6 != a2 )
      {
        v7 = 0;
        for ( i = -16; ; i -= 8 )
        {
          v9 = *v6 < *v5;
          if ( *v6 == *v5 )
            v9 = v6[1] < v5[1];
          if ( v9 )
          {
            v10 = *(_QWORD *)v6;
            *(_QWORD *)v6 = *(_QWORD *)v5;
            if ( v5 == a1 )
            {
              v12 = v5;
            }
            else
            {
              v11 = 0;
              v12 = v5;
              do
              {
                if ( v5[v11 / 4 - 2] == (_DWORD)v10 )
                {
                  if ( v5[v11 / 4 - 1] <= SHIDWORD(v10) )
                  {
                    v12 = &v5[v11 / 4];
                    goto LABEL_19;
                  }
                }
                else if ( v5[v11 / 4 - 2] <= (int)v10 )
                {
                  goto LABEL_19;
                }
                --v12;
                *(_QWORD *)&v5[v11 / 4] = *(_QWORD *)&v5[v11 / 4 - 2];
                v11 -= 8LL;
              }
              while ( i != v11 );
              v12 = a1;
            }
LABEL_19:
            *v12 = v10;
            if ( ++v7 == 8 )
              break;
          }
          v6 += 2;
          v5 += 2;
          if ( v6 == a2 )
            return v2;
        }
        LOBYTE(v2) = v6 + 2 == a2;
      }
      return v2;
  }
}
// C5390: variable 'v2' is possibly undefined
