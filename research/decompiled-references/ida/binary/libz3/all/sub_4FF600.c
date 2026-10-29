__int64 __fastcall sub_4FF600(__int64 a1, __int64 a2, __int64 *a3)
{
  _BYTE *v4; // rsi
  unsigned int v5; // edx
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // r15
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 **v38; // [rsp+8h] [rbp-50h]
  __int64 *v39; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+18h] [rbp-40h]

  v4 = (_BYTE *)*a3;
  if ( !*a3 )
    goto LABEL_4;
  v5 = *((_DWORD *)v4 - 1);
  v6 = 32 * v5;
  if ( !(32 * v5) )
  {
    if ( !v5 || (*v4 & 1) == 0 )
      goto LABEL_4;
LABEL_24:
    v39 = a3;
    v7 = 0;
    goto LABEL_5;
  }
  if ( !v5 )
  {
LABEL_4:
    v39 = a3;
    v7 = 0;
    v6 = 0;
    goto LABEL_5;
  }
  v7 = *(_DWORD *)v4 & 1;
  if ( v7 )
    goto LABEL_24;
  v34 = v4;
  while ( !*v34 )
  {
    v7 += 32;
    ++v34;
    if ( v7 == v6 )
      goto LABEL_110;
  }
  if ( v6 != v7 )
  {
    v35 = v7 >> 5;
    if ( (unsigned int)v35 < v5 )
      v7 += (*(_DWORD *)&v4[4 * v35] & 1) == 0;
    else
      ++v7;
    do
    {
      v36 = v7 >> 5;
      if ( (unsigned int)v36 < v5 && (*(_DWORD *)&v4[4 * v36] & (1 << (v7 & 0x1F))) != 0 )
        break;
      if ( (v7 & 0x1F) == 0 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
  }
LABEL_110:
  v39 = a3;
LABEL_5:
  v38 = &v39;
  v40 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 224).m128i_u64[0];
  sub_313A20(&v39);
  LODWORD(v37) = v40;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v8 = (_DWORD *)*a3;
  if ( *a3 )
  {
    v9 = &v8[*(v8 - 1)];
    do
    {
      if ( v8 == v9 )
        goto LABEL_9;
    }
    while ( !*v8++ );
    std::__ostream_insert<char,std::char_traits<char>>();
    while ( 1 )
    {
LABEL_63:
      if ( v7 == (_DWORD)v37 )
        goto LABEL_9;
      ++v7;
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v29 = *a3;
      if ( v7 == v6 )
        break;
      if ( v29 )
      {
        while ( 1 )
        {
          v30 = v7 >> 5;
          if ( v7 >> 5 < *(_DWORD *)(v29 - 4) && (*(_DWORD *)(v29 + 4LL * v30) & (1 << (v7 & 0x1F))) != 0 )
            break;
          if ( (v7 & 0x1F) == 0 )
            break;
          if ( v6 == ++v7 )
          {
            v30 = v6 >> 5;
            if ( v6 >> 5 < *(_DWORD *)(v29 - 4) )
              goto LABEL_92;
            goto LABEL_63;
          }
        }
        if ( v30 >= *(_DWORD *)(v29 - 4) )
        {
          if ( v6 == v7 )
            continue;
          goto LABEL_72;
        }
LABEL_92:
        v31 = *(_DWORD *)(v29 + 4LL * v30);
        if ( (v31 & (1 << v7)) == 0 && v6 != v7 )
        {
LABEL_73:
          while ( !v31 )
          {
            v7 += 32;
            ++v30;
            if ( v7 == v6 )
              goto LABEL_63;
LABEL_72:
            v31 = *(_DWORD *)(v29 + 4LL * v30);
          }
          if ( v6 == v7 )
            continue;
          v32 = v7 >> 5;
          if ( v29 )
          {
            if ( (unsigned int)v32 < *(_DWORD *)(v29 - 4) )
            {
              if ( (*(_DWORD *)(v29 + 4 * v32) & (1 << v7)) == 0 && ++v7 == v6 )
                continue;
            }
            else if ( v6 == ++v7 )
            {
              continue;
            }
            do
            {
              v33 = v7 >> 5;
              if ( (unsigned int)v33 < *(_DWORD *)(v29 - 4) && (*(_DWORD *)(v29 + 4 * v33) & (1 << (v7 & 0x1F))) != 0 )
                break;
              if ( (v7 & 0x1F) == 0 )
                break;
              ++v7;
            }
            while ( v6 != v7 );
          }
          else
          {
            do
              ++v7;
            while ( v6 != v7 && (v7 & 0x1F) != 0 );
          }
        }
      }
      else
      {
        while ( (v7 & 0x1F) != 0 )
        {
          if ( ++v7 == v6 )
            goto LABEL_63;
        }
        if ( v6 != v7 )
        {
          v30 = v7 >> 5;
          v31 = *(_DWORD *)(4LL * (v7 >> 5));
          goto LABEL_73;
        }
      }
    }
    if ( !v29 )
      goto LABEL_63;
    v30 = v7 >> 5;
    if ( v7 >> 5 >= *(_DWORD *)(v29 - 4) )
      goto LABEL_63;
    goto LABEL_92;
  }
LABEL_9:
  v11 = a3[1];
  if ( v11 )
  {
    v12 = (_DWORD *)a3[1];
    v13 = *(unsigned int *)(v11 - 4);
    while ( (_DWORD *)(v11 + 4 * v13) != v12 )
    {
      if ( *v12++ )
      {
        v22 = 32 * v13;
        LODWORD(v40) = 0;
        v39 = a3 + 1;
        HIDWORD(v40) = v22;
        v37 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v22), 224).m128i_u64[0];
        sub_313A20(v38);
        v23 = v40;
        v39 = a3 + 1;
        v40 = v37;
        sub_313A20(v38);
        LODWORD(v37) = v40;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v23 == (_DWORD)v37 )
        {
LABEL_43:
          v15 = (_DWORD *)*a3;
          if ( !*a3 )
            goto LABEL_17;
          goto LABEL_14;
        }
        while ( 2 )
        {
          ++v23;
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v24 = a3[1];
          if ( v23 != v22 )
          {
            if ( v24 )
            {
              while ( 1 )
              {
                v25 = v23 >> 5;
                if ( v23 >> 5 < *(_DWORD *)(v24 - 4) && (*(_DWORD *)(v24 + 4LL * v25) & (1 << (v23 & 0x1F))) != 0 )
                  break;
                if ( (v23 & 0x1F) == 0 )
                  break;
                if ( v22 == ++v23 )
                {
                  v25 = v22 >> 5;
                  if ( v22 >> 5 < *(_DWORD *)(v24 - 4) )
                    goto LABEL_51;
                  goto LABEL_42;
                }
              }
              if ( v25 >= *(_DWORD *)(v24 - 4) )
              {
                if ( v22 == v23 )
                  goto LABEL_42;
                goto LABEL_34;
              }
LABEL_51:
              v26 = *(_DWORD *)(v24 + 4LL * v25);
              if ( (v26 & (1 << v23)) != 0 || v22 == v23 )
                goto LABEL_42;
LABEL_35:
              while ( !v26 )
              {
                v23 += 32;
                ++v25;
                if ( v23 == v22 )
                  goto LABEL_42;
LABEL_34:
                v26 = *(_DWORD *)(v24 + 4LL * v25);
              }
              if ( v23 != v22 )
              {
                v27 = v23 >> 5;
                if ( !v24 )
                {
                  if ( v22 != ++v23 )
                  {
                    do
                    {
                      if ( (v23 & 0x1F) == 0 )
                        break;
                      ++v23;
                    }
                    while ( v23 != v22 );
                  }
                  goto LABEL_42;
                }
                if ( (unsigned int)v27 < *(_DWORD *)(v24 - 4) )
                {
                  if ( (*(_DWORD *)(v24 + 4 * v27) & (1 << v23)) != 0 || (++v23, v23 != v22) )
                  {
                    do
                    {
LABEL_40:
                      v28 = v23 >> 5;
                      if ( (unsigned int)v28 < *(_DWORD *)(v24 - 4)
                        && (*(_DWORD *)(v24 + 4 * v28) & (1 << (v23 & 0x1F))) != 0 )
                      {
                        break;
                      }
                      if ( (v23 & 0x1F) == 0 )
                        break;
                      ++v23;
                    }
                    while ( v22 != v23 );
                  }
                }
                else if ( v22 != ++v23 )
                {
                  goto LABEL_40;
                }
              }
            }
            else
            {
              do
              {
                if ( (v23 & 0x1F) == 0 )
                {
                  if ( v23 != v22 )
                  {
                    v25 = v23 >> 5;
                    v26 = *(_DWORD *)(4LL * (v23 >> 5));
                    goto LABEL_35;
                  }
                  break;
                }
                ++v23;
              }
              while ( v23 != v22 );
            }
LABEL_42:
            if ( (_DWORD)v37 == v23 )
              goto LABEL_43;
            continue;
          }
          break;
        }
        if ( !v24 )
          goto LABEL_42;
        v25 = v23 >> 5;
        if ( v23 >> 5 >= *(_DWORD *)(v24 - 4) )
          goto LABEL_42;
        goto LABEL_51;
      }
    }
    v15 = (_DWORD *)*a3;
    if ( !*a3 )
    {
      v18 = (_DWORD *)a3[1];
LABEL_18:
      v19 = &v18[*(v18 - 1)];
      while ( v19 != v18 )
      {
        if ( *v18++ )
          return std::__ostream_insert<char,std::char_traits<char>>();
      }
      goto LABEL_21;
    }
  }
  else
  {
    v15 = (_DWORD *)*a3;
    if ( !*a3 )
      goto LABEL_21;
  }
LABEL_14:
  v16 = &v15[*(v15 - 1)];
  while ( v16 != v15 )
  {
    if ( *v15++ )
      return std::__ostream_insert<char,std::char_traits<char>>();
  }
LABEL_17:
  v18 = (_DWORD *)a3[1];
  if ( v18 )
    goto LABEL_18;
LABEL_21:
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

