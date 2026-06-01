/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E9A8
// Address: 0x000000000045E9A8

//----- (000000000045E9A8) ----------------------------------------------------
__int64 __fastcall sub_45E9A8(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // x19
  char *v5; // x1
  unsigned __int64 v6; // x4
  __int64 v7; // x24
  char *v8; // x22
  __int64 v9; // x26
  int v10; // w0
  size_t v11; // x28
  char *v12; // x0
  __int64 v14; // x22
  unsigned __int64 v15; // x24
  __int64 v16; // x1
  void *v17; // x0
  void *v18; // x0
  __int64 v19; // x24
  char *v20; // x22
  __int64 v21; // x25
  int v22; // w0
  size_t v23; // x28
  void *v24; // x0
  char *v25; // x0
  int v26; // w0
  int v27; // [xsp+68h] [xbp-48h] BYREF
  void *ptr; // [xsp+70h] [xbp-40h]
  size_t v29; // [xsp+78h] [xbp-38h]
  __int64 v30; // [xsp+80h] [xbp-30h]
  int v31; // [xsp+88h] [xbp-28h] BYREF
  void *src; // [xsp+90h] [xbp-20h]
  size_t v33; // [xsp+98h] [xbp-18h]
  __int64 v34; // [xsp+A0h] [xbp-10h]
  __int64 v35; // [xsp+A8h] [xbp-8h]

  v3 = (unsigned __int64)a1[1];
  if ( v3 == a2 )
    return v35 ^ _stack_chk_guard;
  ptr = (void *)-1LL;
  v29 = 0;
  v30 = 0;
  v27 = -2;
  if ( v3 > a2 )
  {
    v14 = 32 * a2;
    v15 = a2;
    do
    {
      v16 = (__int64)&(*a1)[v14];
      if ( *(int *)v16 >= -1 )
      {
        v17 = *(void **)(v16 + 8);
        if ( v17 )
        {
          *(_QWORD *)(v16 + 16) = 0;
          j__free(v17);
        }
      }
      ++v15;
      v14 += 32;
    }
    while ( v3 != v15 );
  }
  else
  {
    if ( v3 >= a2 )
      return v35 ^ _stack_chk_guard;
    v5 = *a1;
    v6 = (unsigned __int64)a1[2];
    if ( *a1 <= (char *)&v27 && &v27 < (int *)&v5[32 * v6] )
    {
      v31 = -2;
      src = (void *)-1LL;
      v33 = 0;
      v34 = 0;
      if ( a2 <= v6
        || (v25 = (char *)sub_491288((__int64)a1, v5, a2, 0x20u),
            v3 = (unsigned __int64)a1[1],
            v5 = v25,
            *a1 = v25,
            a2 > v3) )
      {
        v19 = 32 * v3;
        while ( 1 )
        {
          v20 = &v5[v19];
          *(_DWORD *)&v5[v19] = -2;
          v21 = (__int64)&v5[v19 + 8];
          *((_QWORD *)v20 + 1) = 0;
          *((_QWORD *)v20 + 2) = 0;
          *(_QWORD *)&v5[v19 + 24] = 0;
          if ( &v5[v19] != (char *)&v31 )
          {
            v22 = v31;
            if ( v31 < -1 )
            {
              *((_QWORD *)v20 + 1) = src;
            }
            else
            {
              *((_QWORD *)v20 + 1) = 0;
              *(_QWORD *)&v5[v19 + 16] = 0;
              v23 = v33;
              if ( v33 )
              {
                v24 = sub_491248(v33);
                *((_QWORD *)v20 + 1) = v24;
                *(_QWORD *)(v21 + 16) = v23;
                memcpy(v24, src, v23);
                *((_QWORD *)v20 + 2) = v23;
                v22 = v31;
              }
            }
            *(_DWORD *)v20 = v22;
          }
          ++v3;
          v19 += 32;
          if ( a2 <= v3 )
            break;
          v5 = *a1;
        }
      }
      v26 = v31;
      a1[1] = (char *)a2;
      if ( v26 >= -1 && src )
      {
        v33 = 0;
        j__free(src);
      }
      goto LABEL_17;
    }
    if ( a2 <= v6
      || (v12 = (char *)sub_491288((__int64)a1, v5, a2, 0x20u),
          v3 = (unsigned __int64)a1[1],
          v5 = v12,
          *a1 = v12,
          a2 > v3) )
    {
      v7 = 32 * v3;
      while ( 1 )
      {
        v8 = &v5[v7];
        *(_DWORD *)&v5[v7] = -2;
        v9 = (__int64)&v5[v7 + 8];
        *((_QWORD *)v8 + 1) = 0;
        *((_QWORD *)v8 + 2) = 0;
        *(_QWORD *)&v5[v7 + 24] = 0;
        if ( &v5[v7] != (char *)&v27 )
        {
          v10 = v27;
          if ( v27 < -1 )
          {
            *((_QWORD *)v8 + 1) = ptr;
          }
          else
          {
            *((_QWORD *)v8 + 1) = 0;
            *(_QWORD *)&v5[v7 + 16] = 0;
            v11 = v29;
            if ( v29 )
            {
              v18 = sub_491248(v29);
              *((_QWORD *)v8 + 1) = v18;
              *(_QWORD *)(v9 + 16) = v11;
              memcpy(v18, ptr, v11);
              *((_QWORD *)v8 + 2) = v11;
              v10 = v27;
            }
          }
          *(_DWORD *)v8 = v10;
        }
        ++v3;
        v7 += 32;
        if ( a2 <= v3 )
          break;
        v5 = *a1;
      }
    }
  }
  a1[1] = (char *)a2;
LABEL_17:
  if ( v27 >= -1 && ptr )
  {
    v29 = 0;
    j__free(ptr);
  }
  return v35 ^ _stack_chk_guard;
}
// 45E9A8: could not find valid save-restore pair for x25
