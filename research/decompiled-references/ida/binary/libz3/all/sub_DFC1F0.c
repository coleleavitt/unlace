bool __fastcall sub_DFC1F0(
        __int64 a1,
        unsigned __int64 *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  const __m128i *v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rax
  const __m128i *v17; // rsi
  __int64 v18; // rcx
  const __m128i *v19; // rdi
  const __m128i *i; // rax
  __int32 v21; // ecx
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r12
  bool v25; // zf
  __int32 v27; // eax
  int *v28; // rax
  int v29; // edi
  int v30; // ecx
  __m128i *j; // rax
  __m128i v32; // [rsp+10h] [rbp-48h] BYREF

  v11 = *a2;
  v12 = *(unsigned int *)(a1 + 544);
  v13 = *(const __m128i **)(a1 + 536);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v14 = v11 >> 3;
    else
      LODWORD(v14) = *(_DWORD *)(v11 - 8);
  }
  else
  {
    LODWORD(v14) = -1640531495;
  }
  v15 = v12 - 1;
  v16 = 32 * v12;
  v17 = &v13[(unsigned __int64)v16 / 0x10];
  v18 = 32LL * ((unsigned int)v14 & v15);
  v19 = &v13[(unsigned __int64)v18 / 0x10];
  if ( v18 != v16 )
  {
    for ( i = &v13[(unsigned __int64)v18 / 0x10]; v17 != i; i += 2 )
    {
      v21 = i->m128i_i32[1];
      if ( v21 == 2 )
      {
        if ( (_DWORD)v14 == i->m128i_i32[0] && v11 == i->m128i_i64[1] )
        {
LABEL_11:
          v32 = _mm_loadu_si128(i + 1);
          v22 = _mm_cvtsi128_si32(v32);
          if ( v32.m128i_i32[1] && a3 )
          {
            v28 = *(int **)(sub_15D1F10(*a4) + 24);
            if ( v28 )
              v29 = *v28;
            else
              v29 = -1;
            v30 = v22;
            for ( j = &v32; v29 != v30; v30 = j->m128i_i32[0] )
            {
              j = (__m128i *)j->m128i_i64[1];
              if ( !j )
                break;
            }
          }
          sub_DFBCB0(a1);
          v23 = sub_15DCAD0(*(_QWORD *)(a1 + 296), (int)a4, a7);
          v24 = v23;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          sub_DF6300(*a8, a8[1]);
          v25 = *(_BYTE *)(a1 + 188) == 0;
          *a8 = v24;
          if ( !v25 )
          {
            sub_DFBCB0(a1);
            sub_15D7B00(*(_QWORD *)(a1 + 296), *a8);
            v24 = *a8;
          }
          return v24 != 0;
        }
      }
      else if ( !v21 )
      {
        return 0;
      }
    }
  }
  for ( ; v19 != v13; v13 += 2 )
  {
    v27 = v13->m128i_i32[1];
    if ( v27 == 2 )
    {
      if ( (_DWORD)v14 == v13->m128i_i32[0] && v11 == v13->m128i_i64[1] )
      {
        i = v13;
        goto LABEL_11;
      }
    }
    else if ( !v27 )
    {
      return 0;
    }
  }
  return 0;
}

