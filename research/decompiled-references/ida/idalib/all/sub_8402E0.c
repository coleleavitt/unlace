char __fastcall sub_8402E0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *i; // r12
  _DWORD *v9; // rax
  int v10; // edx
  unsigned int *v11; // rbx
  int v12; // ecx
  bool v13; // sf
  bool v14; // of
  int v15; // edi
  int v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // sf
  bool v20; // of
  int v21; // edi
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 *j; // rax
  int v25; // ecx
  unsigned int v26; // edx
  bool v27; // sf
  bool v28; // of
  int v29; // edi
  bool v30; // sf
  bool v31; // of
  int v32; // edi
  __m128i v33; // xmm1
  __int64 k; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx

  v3 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 128 )
  {
    v4 = v3 >> 4;
    v5 = a3;
    v6 = ((__int64)a2 - a1) >> 3;
    for ( i = a2; v5; v6 = ((__int64)v11 - a1) >> 3 )
    {
      v9 = (_DWORD *)(a1 + 8 * v4);
      v10 = *(_DWORD *)(a1 + 8);
      --v5;
      v11 = (unsigned int *)(a1 + 8);
      v12 = *v9;
      v14 = __OFSUB__(v10, *v9);
      v13 = v10 - *v9 < 0;
      if ( v10 == *v9 )
      {
        v15 = v9[1];
        v14 = __OFSUB__(*(_DWORD *)(a1 + 12), v15);
        v13 = *(_DWORD *)(a1 + 12) - v15 < 0;
      }
      v16 = *((_DWORD *)i - 2);
      if ( v13 != v14 )
      {
        if ( v12 == v16 )
        {
          if ( v9[1] < *((_DWORD *)i - 1) )
          {
LABEL_38:
            v36 = *(_QWORD *)a1;
            *(_QWORD *)a1 = *(_QWORD *)v9;
            *(_QWORD *)v9 = v36;
            goto LABEL_15;
          }
        }
        else if ( v12 < v16 )
        {
          goto LABEL_38;
        }
        if ( v10 == v16 )
        {
          v17 = *(_QWORD *)a1;
          if ( *(_DWORD *)(a1 + 12) < *((_DWORD *)i - 1) )
          {
LABEL_42:
            *(_QWORD *)a1 = *(i - 1);
            *(i - 1) = v17;
            goto LABEL_15;
          }
        }
        else
        {
          v17 = *(_QWORD *)a1;
          if ( v10 < v16 )
            goto LABEL_42;
        }
        v18 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = v18;
      }
      else
      {
        v20 = __OFSUB__(v10, v16);
        v19 = v10 - v16 < 0;
        if ( v10 == v16 )
        {
          v21 = *((_DWORD *)i - 1);
          v20 = __OFSUB__(*(_DWORD *)(a1 + 12), v21);
          v19 = *(_DWORD *)(a1 + 12) - v21 < 0;
        }
        v22 = *(_QWORD *)a1;
        if ( v19 != v20 )
        {
          v23 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 8) = v22;
          *(_QWORD *)a1 = v23;
        }
        else
        {
          if ( v12 == v16 )
          {
            if ( v9[1] >= *((_DWORD *)i - 1) )
            {
LABEL_39:
              *(_QWORD *)a1 = *(_QWORD *)v9;
              *(_QWORD *)v9 = v22;
              goto LABEL_15;
            }
          }
          else if ( v12 >= v16 )
          {
            goto LABEL_39;
          }
          *(_QWORD *)a1 = *(i - 1);
          *(i - 1) = v22;
        }
      }
LABEL_15:
      for ( j = i; ; *j = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), v33).m128i_u64[0] )
      {
        v25 = *(_DWORD *)a1;
        while ( 1 )
        {
          v26 = *v11;
          v28 = __OFSUB__(*v11, v25);
          v27 = (int)(*v11 - v25) < 0;
          if ( *v11 == v25 )
          {
            v29 = *(_DWORD *)(a1 + 4);
            v28 = __OFSUB__(v11[1], v29);
            v27 = (int)(v11[1] - v29) < 0;
          }
          if ( v27 == v28 )
            break;
          v11 += 2;
        }
        do
        {
          v31 = __OFSUB__(v25, *(_DWORD *)--j);
          v30 = v25 - *(_DWORD *)j < 0;
          if ( v25 == *(_DWORD *)j )
          {
            v32 = *((_DWORD *)j + 1);
            v31 = __OFSUB__(*(_DWORD *)(a1 + 4), v32);
            v30 = *(_DWORD *)(a1 + 4) - v32 < 0;
          }
        }
        while ( v30 != v31 );
        if ( v11 >= (unsigned int *)j )
          break;
        v33 = _mm_cvtsi32_si128(v11[1]);
        v11 += 2;
        *((_QWORD *)v11 - 1) = *j;
      }
      sub_8402E0(v11, i, v5);
      v3 = (__int64)v11 - a1;
      if ( (__int64)v11 - a1 <= 128 )
        return v3;
      i = (unsigned __int64 *)v11;
      v4 = v3 >> 4;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_840150(a1, k, v6, *(_QWORD *)(a1 + 8 * k));
      if ( !k )
        break;
    }
    for ( LOBYTE(v3) = (_BYTE)i - a1; (__int64)i - a1 > 8; LOBYTE(v3) = sub_840150(a1, 0, ((__int64)i - a1) >> 3, v35) )
    {
      v35 = *--i;
      *i = *(_QWORD *)a1;
    }
  }
  return v3;
}
