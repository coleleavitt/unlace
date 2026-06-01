void *__cdecl _platform_memmove(void *__dst, const void *__src, size_t __len)
{
  _QWORD *v3; // x3
  char *v4; // x3
  __int128 v5; // q2
  __int128 v6; // q3
  __int128 *v7; // x1
  __int128 v8; // q0
  __int128 v9; // q1
  __int128 *v10; // x1
  size_t v11; // x2
  bool v12; // cc
  unsigned __int64 k; // x2
  __int128 v14; // q2
  __int128 v15; // q3
  __int128 *v16; // x1
  size_t v17; // x2
  __int128 v18; // q2
  __int128 v19; // q3
  __int128 *v20; // x1
  size_t v21; // x2
  __int128 v22; // q2
  __int128 v23; // q3
  __int128 *v24; // x1
  size_t v25; // x2
  __int128 *v26; // x1
  __int128 v27; // q2
  __int128 v28; // q3
  char *v29; // x3
  __int64 v30; // t1
  bool v31; // cf
  size_t j; // x2
  char v33; // t1
  char *v34; // x4
  char *v35; // x1
  __int128 v36; // q2
  __int128 v37; // q3
  unsigned __int64 v38; // x3
  __int64 v39; // x1
  __int128 v40; // q0
  __int128 v41; // q1
  __int64 v42; // x1
  unsigned __int64 v43; // x2
  __int64 v44; // x1
  __int128 v45; // q2
  __int128 v46; // q3
  __int128 v47; // q2
  __int128 v48; // q3
  __int64 v49; // x1
  __int64 v50; // t1
  size_t i; // x2
  char v52; // t1

  if ( (_BYTE *)__dst - (_BYTE *)__src < __len )
  {
    if ( __dst != __src )
    {
      v34 = (char *)__dst + __len;
      v35 = (char *)__src + __len;
      if ( __len < 0x40 )
      {
        while ( 1 )
        {
          v31 = __len >= 8;
          __len -= 8LL;
          if ( !v31 )
            break;
          v50 = *((_QWORD *)v35 - 1);
          v35 -= 8;
          *((_QWORD *)v34 - 1) = v50;
          v34 -= 8;
        }
        for ( i = __len + 8; i; --i )
        {
          v52 = *--v35;
          *--v34 = v52;
        }
      }
      else
      {
        if ( __len < 0x4000 )
        {
          v47 = *((_OWORD *)v35 - 2);
          v48 = *((_OWORD *)v35 - 1);
          v38 = (unsigned __int64)(v34 - 1) & 0xFFFFFFFFFFFFFFE0LL;
          v49 = v35 - &v34[-v38];
          v40 = *(_OWORD *)(v49 - 32);
          v41 = *(_OWORD *)(v49 - 16);
          *((_OWORD *)v34 - 2) = v47;
          *((_OWORD *)v34 - 1) = v48;
          v42 = v49 - 32;
          v43 = v38 - (_QWORD)__dst - 64;
          if ( v38 - (unsigned __int64)__dst > 0x40 )
          {
            do
            {
              *(_OWORD *)(v38 - 32) = v40;
              *(_OWORD *)(v38 - 16) = v41;
              v38 -= 32LL;
              v40 = *(_OWORD *)(v42 - 32);
              v41 = *(_OWORD *)(v42 - 16);
              v42 -= 32;
              v12 = v43 > 0x20;
              v43 -= 32LL;
            }
            while ( v12 );
          }
        }
        else
        {
          v36 = *((_OWORD *)v35 - 2);
          v37 = *((_OWORD *)v35 - 1);
          v38 = (unsigned __int64)(v34 - 1) & 0xFFFFFFFFFFFFFFE0LL;
          v39 = v35 - &v34[-v38];
          v40 = *(_OWORD *)(v39 - 32);
          v41 = *(_OWORD *)(v39 - 16);
          *((_OWORD *)v34 - 2) = v36;
          *((_OWORD *)v34 - 1) = v37;
          v42 = v39 - 32;
          v43 = v38 - (_QWORD)__dst - 64;
          if ( v38 - (unsigned __int64)__dst > 0x40 )
          {
            do
            {
              *(_OWORD *)(v38 - 32) = v40;
              *(_OWORD *)(v38 - 16) = v41;
              v38 -= 32LL;
              v40 = *(_OWORD *)(v42 - 32);
              v41 = *(_OWORD *)(v42 - 16);
              v42 -= 32;
              v12 = v43 > 0x20;
              v43 -= 32LL;
            }
            while ( v12 );
          }
        }
        v44 = v42 - v43;
        v45 = *(_OWORD *)(v44 - 32);
        v46 = *(_OWORD *)(v44 - 16);
        *(_OWORD *)(v38 - 32) = v40;
        *(_OWORD *)(v38 - 16) = v41;
        *(_OWORD *)__dst = v45;
        *((_OWORD *)__dst + 1) = v46;
      }
    }
  }
  else
  {
    v3 = __dst;
    if ( __len < 0x40 )
    {
      while ( 1 )
      {
        v31 = __len >= 8;
        __len -= 8LL;
        if ( !v31 )
          break;
        v30 = *(_QWORD *)__src;
        __src = (char *)__src + 8;
        *v3++ = v30;
      }
      for ( j = __len + 8; j; --j )
      {
        v33 = *(_BYTE *)__src;
        __src = (char *)__src + 1;
        *(_BYTE *)v3 = v33;
        v3 = (_QWORD *)((char *)v3 + 1);
      }
    }
    else
    {
      if ( (_BYTE *)__src - (_BYTE *)__dst < __len )
      {
        if ( __len < 0x4000 )
        {
          v4 = (char *)(((unsigned __int64)__dst + 32) & 0xFFFFFFFFFFFFFFE0LL);
          v22 = *(_OWORD *)__src;
          v23 = *((_OWORD *)__src + 1);
          v24 = (__int128 *)((char *)__src + v4 - (_BYTE *)__dst);
          v8 = *v24;
          v9 = v24[1];
          v10 = v24 + 2;
          v25 = __len - (v4 - (_BYTE *)__dst);
          *(_OWORD *)__dst = v22;
          *((_OWORD *)__dst + 1) = v23;
          v12 = v25 > 0x40;
          for ( k = v25 - 64; v12; k -= 32LL )
          {
            *(_OWORD *)v4 = v8;
            *((_OWORD *)v4 + 1) = v9;
            v4 += 32;
            v8 = *v10;
            v9 = v10[1];
            v10 += 2;
            v12 = k > 0x20;
          }
        }
        else
        {
          v4 = (char *)(((unsigned __int64)__dst + 32) & 0xFFFFFFFFFFFFFFE0LL);
          v18 = *(_OWORD *)__src;
          v19 = *((_OWORD *)__src + 1);
          v20 = (__int128 *)((char *)__src + v4 - (_BYTE *)__dst);
          v8 = *v20;
          v9 = v20[1];
          v10 = v20 + 2;
          v21 = __len - (v4 - (_BYTE *)__dst);
          *(_OWORD *)__dst = v18;
          *((_OWORD *)__dst + 1) = v19;
          v12 = v21 > 0x40;
          for ( k = v21 - 64; v12; k -= 32LL )
          {
            *(_OWORD *)v4 = v8;
            *((_OWORD *)v4 + 1) = v9;
            v4 += 32;
            v8 = *v10;
            v9 = v10[1];
            v10 += 2;
            v12 = k > 0x20;
          }
        }
      }
      else if ( __len < 0x4000 )
      {
        v4 = (char *)(((unsigned __int64)__dst + 32) & 0xFFFFFFFFFFFFFFE0LL);
        v14 = *(_OWORD *)__src;
        v15 = *((_OWORD *)__src + 1);
        v16 = (__int128 *)((char *)__src + v4 - (_BYTE *)__dst);
        v8 = *v16;
        v9 = v16[1];
        v10 = v16 + 2;
        v17 = __len - (v4 - (_BYTE *)__dst);
        *(_OWORD *)__dst = v14;
        *((_OWORD *)__dst + 1) = v15;
        v12 = v17 > 0x40;
        for ( k = v17 - 64; v12; k -= 32LL )
        {
          *(_OWORD *)v4 = v8;
          *((_OWORD *)v4 + 1) = v9;
          v4 += 32;
          v8 = *v10;
          v9 = v10[1];
          v10 += 2;
          v12 = k > 0x20;
        }
      }
      else
      {
        v4 = (char *)(((unsigned __int64)__dst + 32) & 0xFFFFFFFFFFFFFFE0LL);
        v5 = *(_OWORD *)__src;
        v6 = *((_OWORD *)__src + 1);
        v7 = (__int128 *)((char *)__src + v4 - (_BYTE *)__dst);
        v8 = *v7;
        v9 = v7[1];
        v10 = v7 + 2;
        v11 = __len - (v4 - (_BYTE *)__dst);
        *(_OWORD *)__dst = v5;
        *((_OWORD *)__dst + 1) = v6;
        v12 = v11 > 0x40;
        for ( k = v11 - 64; v12; k -= 32LL )
        {
          *(_OWORD *)v4 = v8;
          *((_OWORD *)v4 + 1) = v9;
          v4 += 32;
          v8 = *v10;
          v9 = v10[1];
          v10 += 2;
          v12 = k > 0x20;
        }
      }
      v26 = (__int128 *)((char *)v10 + k);
      v27 = *v26;
      v28 = v26[1];
      *(_OWORD *)v4 = v8;
      *((_OWORD *)v4 + 1) = v9;
      v29 = &v4[k];
      *((_OWORD *)v29 + 2) = v27;
      *((_OWORD *)v29 + 3) = v28;
    }
  }
  return __dst;
}
