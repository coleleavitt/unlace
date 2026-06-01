__int64 __fastcall sub_679A60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 *v7; // r12
  unsigned int *v8; // rcx
  unsigned int v9; // eax
  unsigned int *v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  __int64 *v16; // rax
  __m128i v17; // xmm1
  unsigned int v18; // edx
  __int64 i; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rax

  result = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 128 )
  {
    v4 = result >> 4;
    v5 = a3;
    v6 = ((__int64)a2 - a1) >> 3;
    v7 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = (unsigned int *)(a1 + 8 * v4);
        v9 = *(_DWORD *)(a1 + 8);
        --v5;
        v10 = (unsigned int *)(a1 + 8);
        v11 = *v8;
        if ( *v8 < v9 )
        {
          v12 = *((_DWORD *)v7 - 2);
          if ( v12 >= v9 )
          {
LABEL_33:
            if ( v12 != v9 || *(_DWORD *)(a1 + 12) < *((_DWORD *)v7 - 1) )
              goto LABEL_35;
          }
          if ( v12 >= v11 && (v12 != v11 || v8[1] < *((_DWORD *)v7 - 1)) )
            goto LABEL_44;
          goto LABEL_8;
        }
        if ( v9 != v11 )
          break;
        if ( *(_DWORD *)(a1 + 12) < v8[1] )
        {
          v22 = *((_DWORD *)v7 - 2);
          if ( v22 < v9 )
            goto LABEL_35;
LABEL_40:
          if ( v11 == v22 && v8[1] >= *((_DWORD *)v7 - 1) )
            goto LABEL_42;
          goto LABEL_8;
        }
        v12 = *((_DWORD *)v7 - 2);
        if ( v12 >= v9 )
          goto LABEL_33;
LABEL_8:
        v13 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)v8;
        *(_QWORD *)v8 = v13;
        v14 = *(_DWORD *)(a1 + 8);
        v15 = *((_DWORD *)v7 - 2);
LABEL_9:
        v16 = v7;
        while ( 1 )
        {
          v18 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 >= v14 )
          {
            while ( v14 < v18 || v10[1] < *(_DWORD *)(a1 + 4) )
            {
              v14 = v10[2];
              v10 += 2;
              if ( v18 < v14 )
              {
                --v16;
                if ( v15 >= v18 )
                  goto LABEL_18;
                goto LABEL_11;
              }
            }
          }
          --v16;
          if ( v15 >= v18 )
          {
LABEL_18:
            while ( v18 < v15 || *(_DWORD *)(a1 + 4) < *((_DWORD *)v16 + 1) )
            {
              v15 = *((_DWORD *)v16-- - 2);
              if ( v15 < v18 )
              {
                if ( v10 < (unsigned int *)v16 )
                  goto LABEL_12;
                goto LABEL_22;
              }
            }
          }
LABEL_11:
          if ( v10 >= (unsigned int *)v16 )
            break;
LABEL_12:
          v17 = _mm_cvtsi32_si128(v10[1]);
          v10 += 2;
          *((_QWORD *)v10 - 1) = *v16;
          v15 = *((_DWORD *)v16 - 2);
          *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v17).m128i_u64[0];
          v14 = *v10;
        }
LABEL_22:
        sub_679A60(v10, v7, v5);
        result = (__int64)v10 - a1;
        if ( (__int64)v10 - a1 <= 128 )
          return result;
        v7 = (__int64 *)v10;
        v4 = result >> 4;
        v6 = ((__int64)v10 - a1) >> 3;
        if ( !v5 )
          goto LABEL_24;
      }
      v22 = *((_DWORD *)v7 - 2);
      if ( v22 < v11 )
      {
        if ( v22 >= v9 )
        {
LABEL_42:
          if ( v22 != v9 || *(_DWORD *)(a1 + 12) < *((_DWORD *)v7 - 1) )
          {
LABEL_44:
            v23 = *(_QWORD *)a1;
            v15 = *(_DWORD *)a1;
            *(_QWORD *)a1 = *(v7 - 1);
            *(v7 - 1) = v23;
            v14 = *(_DWORD *)(a1 + 8);
            goto LABEL_9;
          }
        }
LABEL_35:
        v21 = *(_QWORD *)(a1 + 8);
        v14 = *(_DWORD *)a1;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
        *(_QWORD *)a1 = v21;
        v15 = *((_DWORD *)v7 - 2);
        goto LABEL_9;
      }
      goto LABEL_40;
    }
LABEL_24:
    for ( i = v4 - 1; ; --i )
    {
      sub_678F20(a1, i, v6, *(_QWORD *)(a1 + 8 * i));
      if ( !i )
        break;
    }
    for ( result = (__int64)v7 - a1; (__int64)v7 - a1 > 8; result = sub_678F20(a1, 0, ((__int64)v7 - a1) >> 3, v20) )
    {
      v20 = *--v7;
      *v7 = *(_QWORD *)a1;
    }
  }
  return result;
}

