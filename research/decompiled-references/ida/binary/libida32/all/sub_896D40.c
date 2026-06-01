__int64 __fastcall sub_896D40(__int64 **a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rcx
  unsigned int *v8; // r14
  __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int *v11; // rax
  char *v12; // r13
  unsigned int *v13; // rcx
  __int64 *v14; // r15
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  char *v27; // rax
  char *v28; // r13
  unsigned int *v29; // rax
  __int64 *v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int *dest; // [rsp+0h] [rbp-68h]
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v35[3] = __readfsqword(0x28u);
  if ( a2 >= a3 || !a1[3] )
    return 0;
  v6 = sub_8952A0(a1, a2);
  v7 = (unsigned int *)a1[10];
  v8 = v6;
  v9 = a1[2];
  v10 = ((char *)v8 - (char *)v9) >> 4;
  if ( v7 == v8 )
    v10 = 0;
  v11 = sub_8951C0(a1, a3, v10, ((char *)v7 - (char *)v9) >> 4);
  v12 = (char *)a1[10];
  v13 = v8 + 4;
  v14 = (__int64 *)v11;
  if ( v12 == (char *)v8 )
    v13 = (unsigned int *)a1[2];
  if ( v13 == v11 )
    return 0;
  if ( a1[2] != (__int64 *)v11 )
    v12 = (char *)(v11 - 4);
  v15 = a2;
  dest = v13;
  if ( *v13 >= a2 )
    v15 = *v13;
  v16 = *((_QWORD *)v13 + 1) + 4LL * (v15 - *v13);
  v17 = *((_DWORD *)v12 + 1);
  if ( a3 <= v17 )
    v17 = a3;
  v18 = sub_896BF0(a1, v16, *((_QWORD *)v12 + 1) + 4LL * (v17 - *(_DWORD *)v12));
  v19 = dest;
  v20 = v18;
  v21 = *dest;
  if ( dest == (unsigned int *)v12 )
  {
    v26 = *((_DWORD *)v12 + 1);
    if ( v21 >= a2 )
    {
      if ( a3 >= v26 )
      {
        if ( dest != (unsigned int *)a1[10] )
        {
          v31 = (__int64 *)memmove(dest, dest + 4, (char *)&a1[2][2 * (_QWORD)a1[3]] - (char *)dest - 16);
          v32 = (__int64)a1[3] - 1;
          a1[3] = (__int64 *)v32;
          v33 = (__int64)&a1[2][2 * v32];
          for ( a1[10] = (__int64 *)v33; v31 != a1[10]; v31 += 2 )
          {
            v31[1] -= v20;
            if ( (__int64 *)v33 == v31 )
              break;
          }
        }
      }
      else
      {
        *dest = a3;
        v29 = (unsigned int *)a1[10];
        if ( v29 != dest )
        {
          v30 = (__int64 *)(dest + 4);
          if ( v29 != dest + 4 )
          {
            do
            {
              v30[1] -= v20;
              if ( v29 == (unsigned int *)v30 )
                break;
              v30 += 2;
            }
            while ( v30 != a1[10] );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v12 + 1) = a2;
      if ( a3 < v26 )
      {
        v35[1] = v16;
        v35[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v26)).m128i_u64[0];
        v12 = sub_895360(a1, v35);
      }
      v27 = (char *)a1[10];
      if ( v27 != v12 )
      {
        v28 = v12 + 16;
        if ( v27 != v28 )
        {
          do
          {
            *((_QWORD *)v28 + 1) -= v20;
            if ( v27 == v28 )
              break;
            v28 += 16;
          }
          while ( v28 != (char *)a1[10] );
        }
      }
    }
  }
  else
  {
    if ( v21 < a2 )
    {
      dest[1] = a2;
      v19 = dest + 4;
    }
    if ( a3 < *((_DWORD *)v12 + 1) )
    {
      v22 = a3 - *(_DWORD *)v12;
      *(_DWORD *)v12 = a3;
      v14 = (__int64 *)v12;
      *((_QWORD *)v12 + 1) += 4 * v22;
    }
    v23 = a1[10];
    v24 = v14;
    if ( v23 != v14 )
    {
      do
      {
        v24[1] -= v20;
        if ( v23 == v24 )
          break;
        v24 += 2;
      }
      while ( v24 != a1[10] );
    }
    v25 = (__int64)a1[3]
        - (((char *)v14 - (_BYTE *)memmove(v19, v14, (char *)&a1[2][2 * (_QWORD)a1[3]] - (char *)v14)) >> 4);
    a1[3] = (__int64 *)v25;
    a1[10] = &a1[2][2 * v25];
  }
  return 1;
}

