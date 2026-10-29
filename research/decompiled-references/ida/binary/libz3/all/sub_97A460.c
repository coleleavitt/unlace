__int64 __fastcall sub_97A460(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 result; // rax
  __m128i *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  __m128i *v16; // rdx
  _QWORD *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r11
  __int64 v23; // r8
  __m128i *v24; // r9
  _QWORD *v25; // rbp
  char v26; // r10
  _BYTE *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // esi
  int v31; // eax
  _QWORD *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdi

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 == -1 )
    v3 = sub_979FE0(a1, (_DWORD *)a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 8LL * v3) & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *(_QWORD *)(v4 + 8LL * v3) & 7LL;
  if ( (_DWORD)v6 == 1 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
    v29 = *(_QWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    v30 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
    v31 = (*(_DWORD *)(*(_QWORD *)v28 + 12LL) - v30) ^ (v30 << 8);
    result = *(_QWORD *)v5
           + 16LL
           * (((v31 - v30 + (v31 ^ ((v30 - v31) << 16)))
             ^ ((v30 - v31) << 10))
            & (unsigned int)(*(_DWORD *)(v5 + 20) - 1));
    v9 = *(__m128i **)result;
    if ( (*(_QWORD *)result & 7LL) == 1 )
      return result;
    v32 = nullptr;
    while ( 1 )
    {
      v33 = *(_QWORD *)(result + 8);
      if ( *(_QWORD *)(*(_QWORD *)(v33 + 112) + 8LL) == v29 && *(_QWORD *)(*(_QWORD *)(v33 + 120) + 8LL) == v28 )
        break;
      ++*(_DWORD *)(v5 + 32);
      if ( !v9 )
        return result;
      v32 = (_QWORD *)result;
      result = (__int64)v9;
      v9 = (__m128i *)v9->m128i_i64[0];
    }
    --*(_DWORD *)(v5 + 28);
    if ( v32 )
    {
      *v32 = v9;
      *(_QWORD *)result = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 48) = result;
      return result;
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v6 != 2 )
  {
    if ( (_DWORD)v6 )
    {
      v21 = sub_979080(v5, a2);
      v23 = *(_QWORD *)v22 + 16LL * (v21 & (unsigned int)(*(_DWORD *)(v22 + 20) - 1));
      v24 = *(__m128i **)v23;
      result = *(_QWORD *)v23 & 7LL;
      if ( result == 1 )
        return result;
      v25 = nullptr;
      v26 = *(_BYTE *)(a2 + 44) & 8;
      while ( 1 )
      {
        v27 = *(_BYTE **)(v23 + 8);
        if ( (v27[44] & 8) != 0 )
        {
          if ( v26 || (result = *(unsigned int *)(*(_QWORD *)a2 + 24LL), !(_DWORD)result) )
          {
LABEL_26:
            --*(_DWORD *)(v22 + 28);
            if ( v25 )
            {
              result = *(_QWORD *)(v22 + 48);
              *v25 = v24;
              *(_QWORD *)v23 = result;
              *(_QWORD *)(v22 + 48) = v23;
            }
            else if ( v24 )
            {
              result = *(_QWORD *)(v22 + 48);
              *(__m128i *)v23 = _mm_loadu_si128(v24);
              v24->m128i_i64[0] = result;
              *(_QWORD *)(v22 + 48) = v24;
            }
            else
            {
              --*(_DWORD *)(v22 + 24);
              *(_QWORD *)v23 = 1;
            }
            return result;
          }
        }
        else
        {
          result = *(unsigned int *)(*(_QWORD *)v27 + 24LL);
          if ( v26 )
          {
            if ( !(_DWORD)result )
              goto LABEL_26;
          }
          else if ( (_DWORD)result == *(_DWORD *)(*(_QWORD *)a2 + 24LL) )
          {
            if ( !(_DWORD)result )
              goto LABEL_26;
            v34 = 8 * result + 112;
            result = 112;
            while ( *(_QWORD *)(*(_QWORD *)&v27[result] + 8LL) == *(_QWORD *)(*(_QWORD *)(a2 + result) + 8LL) )
            {
              result += 8;
              if ( result == v34 )
                goto LABEL_26;
            }
          }
        }
        ++*(_DWORD *)(v22 + 32);
        if ( !v24 )
          return result;
        v25 = (_QWORD *)v23;
        v23 = (__int64)v24;
        v24 = (__m128i *)v24->m128i_i64[0];
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    result = *(_QWORD *)v5 + 16LL * (*(_DWORD *)(*(_QWORD *)v7 + 12LL) & (unsigned int)(*(_DWORD *)(v5 + 20) - 1));
    v9 = *(__m128i **)result;
    if ( (*(_QWORD *)result & 7LL) == 1 )
      return result;
    v10 = nullptr;
    while ( v7 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 8) + 112LL) + 8LL) )
    {
      ++*(_DWORD *)(v5 + 32);
      if ( !v9 )
        return result;
      v10 = (_QWORD *)result;
      result = (__int64)v9;
      v9 = (__m128i *)v9->m128i_i64[0];
    }
    --*(_DWORD *)(v5 + 28);
    if ( v10 )
    {
      *v10 = v9;
      *(_QWORD *)result = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 48) = result;
      return result;
    }
LABEL_53:
    if ( v9 )
    {
      *(__m128i *)result = _mm_loadu_si128(v9);
      result = *(_QWORD *)(v5 + 48);
      v9->m128i_i64[0] = result;
      *(_QWORD *)(v5 + 48) = v9;
    }
    else
    {
      --*(_DWORD *)(v5 + 24);
      *(_QWORD *)result = 1;
    }
    return result;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
  v12 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
  v14 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
  if ( v14 >= v12 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
    LOWORD(v12) = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
  }
  v15 = 4097 * ((unsigned __int16)v12 | (v14 << 16)) + 2127912214;
  result = *(_QWORD *)(v5 + 8)
         + 16LL
         * ((*(_DWORD *)(v5 + 28) - 1)
          & ((9
            * (((33 * (v15 ^ (v15 >> 19) ^ 0xC761C23C) + 374761393) << 9)
             ^ (33 * (v15 ^ (v15 >> 19) ^ 0xC761C23C) - 369570787))
            - 42973499)
           ^ ((9
             * (((33 * (v15 ^ (v15 >> 19) ^ 0xC761C23C) + 374761393) << 9)
              ^ (33 * (v15 ^ (v15 >> 19) ^ 0xC761C23C) - 369570787))
             - 42973499) >> 16)
           ^ 0xB55A4F09));
  v16 = *(__m128i **)result;
  if ( (*(_QWORD *)result & 7LL) != 1 )
  {
    v17 = nullptr;
    while ( 1 )
    {
      v18 = *(_QWORD *)(result + 8);
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 112) + 8LL);
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + 120) + 8LL);
      if ( v11 == v19 && v13 == v20 )
        break;
      if ( v13 == v19 && v11 == v20 )
      {
        **(_BYTE **)v5 = 1;
        break;
      }
      ++*(_DWORD *)(v5 + 40);
      if ( !v16 )
        return result;
      v17 = (_QWORD *)result;
      result = (__int64)v16;
      v16 = (__m128i *)v16->m128i_i64[0];
    }
    --*(_DWORD *)(v5 + 36);
    if ( v17 )
    {
      *v17 = v16;
      *(_QWORD *)result = *(_QWORD *)(v5 + 56);
      *(_QWORD *)(v5 + 56) = result;
    }
    else if ( v16 )
    {
      *(__m128i *)result = _mm_loadu_si128(v16);
      result = *(_QWORD *)(v5 + 56);
      v16->m128i_i64[0] = result;
      *(_QWORD *)(v5 + 56) = v16;
    }
    else
    {
      --*(_DWORD *)(v5 + 32);
      *(_QWORD *)result = 1;
    }
  }
  return result;
}

