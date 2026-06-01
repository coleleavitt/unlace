__int64 __fastcall sub_593CC0(__int64 a1, __int64 **a2)
{
  int v3; // ebx
  __int64 *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 i; // rax
  int v13; // ecx
  _QWORD *v14; // rcx
  __int64 *v15; // rsi
  __int64 v16; // r9
  _QWORD *v17; // r9
  int v19; // eax
  _QWORD *v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // xmm1_8
  __int64 *v26; // rax
  __int64 *v27; // rsi
  __int64 *v28; // r13
  size_t v29; // rdx
  __int64 *v30[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = 778;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 )
    {
      v24 = *((unsigned int *)v4 - 2);
      v25 = _mm_unpacklo_epi32((__m128i)v24, _mm_cvtsi32_si128(v5)).m128i_u64[0];
      v26 = (__int64 *)sub_186B270(8 * v24 + 8);
      v27 = *a2;
      *v26 = v25;
      v28 = v26;
      v30[0] = v26 + 1;
      if ( v27 )
      {
        v29 = 8LL * *((unsigned int *)v27 - 1);
        if ( v29 > 8 )
        {
          memmove(v26 + 1, v27, v29);
          v3 = sub_592970(v30, v5);
LABEL_33:
          sub_186B220(v28);
          goto LABEL_3;
        }
        if ( v29 == 8 )
        {
          v26[1] = *v27;
          v3 = sub_592970(v30, v5);
          goto LABEL_33;
        }
      }
      v3 = sub_592970(v30, v5);
      goto LABEL_33;
    }
  }
LABEL_3:
  v6 = *(unsigned int *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = v6 - 1;
  v6 *= 16;
  v9 = v7 + v6;
  v10 = 16LL * (v3 & v8);
  v11 = v7 + v10;
  if ( v10 != v6 )
  {
    for ( i = v7 + v10; v9 != i; i += 16 )
    {
      v13 = *(_DWORD *)(i + 4);
      if ( v13 == 2 )
      {
        if ( *(_DWORD *)i == v3 )
        {
          v14 = *(_QWORD **)(i + 8);
          v15 = *a2;
          if ( v14 )
          {
            v16 = *((unsigned int *)v14 - 1);
            if ( v15 )
            {
              if ( (_DWORD)v16 == *((_DWORD *)v15 - 1) )
              {
                v17 = &v14[v16];
                if ( v14 == v17 )
                  return 1;
                while ( *v14 == *v15 )
                {
                  ++v14;
                  ++v15;
                  if ( v17 == v14 )
                    return 1;
                }
              }
            }
            else if ( !(_DWORD)v16 )
            {
              return 1;
            }
          }
          else if ( !v15 || !*((_DWORD *)v15 - 1) )
          {
            return 1;
          }
        }
      }
      else if ( !v13 )
      {
        return 0;
      }
    }
  }
  for ( ; v11 != v7; v7 += 16 )
  {
    v19 = *(_DWORD *)(v7 + 4);
    if ( v19 == 2 )
    {
      if ( *(_DWORD *)v7 == v3 )
      {
        v20 = *(_QWORD **)(v7 + 8);
        v21 = *a2;
        if ( v20 )
        {
          v22 = *((unsigned int *)v20 - 1);
          if ( v21 )
          {
            if ( (_DWORD)v22 == *((_DWORD *)v21 - 1) )
            {
              v23 = &v20[v22];
              if ( v20 == v23 )
                return 1;
              while ( *v20 == *v21 )
              {
                ++v20;
                ++v21;
                if ( v23 == v20 )
                  return 1;
              }
            }
          }
          else if ( !(_DWORD)v22 )
          {
            return 1;
          }
        }
        else if ( !v21 || !*((_DWORD *)v21 - 1) )
        {
          return 1;
        }
      }
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  return 0;
}

