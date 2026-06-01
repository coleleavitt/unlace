__int64 __fastcall sub_B649F0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // edi
  unsigned int *v9; // r13
  char *v10; // rsi
  unsigned int *v11; // r15
  unsigned __int64 v13; // rdx
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int *v22; // r14
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  unsigned int *v26; // rdx
  unsigned int *v27; // rdx
  unsigned int *v28; // rax
  unsigned int *v29; // rdx
  unsigned int v30; // [rsp+Ch] [rbp-3Ch]

  v6 = *a2;
  v7 = 4 * v6;
  v8 = *a2;
  v9 = (unsigned int *)(a3 + 4 * v6);
  if ( v9 != (unsigned int *)a3 )
  {
    v10 = (char *)(a3 + 4 * v6);
    v11 = (unsigned int *)(a3 + 4);
    _BitScanReverse64(&v13, v7 >> 2);
    sub_B63E00((char *)a3, v10, 2LL * (int)v13);
    if ( (unsigned __int64)v7 > 0x40 )
    {
      v22 = (unsigned int *)(a3 + 64);
      do
      {
        v23 = *v11;
        if ( *v11 >= *(_DWORD *)a3 )
        {
          v28 = v11 - 1;
          if ( v23 >= *(v11 - 1) )
          {
            *v11 = v23;
          }
          else
          {
            do
            {
              v28[1] = *v28;
              v29 = v28--;
            }
            while ( v23 < *v28 );
            *v29 = v23;
          }
        }
        else
        {
          if ( (__int64)v11 - a3 <= 4 )
          {
            if ( (char *)v11 - a3 == byte_4 )
              *v11 = *(_DWORD *)a3;
          }
          else
          {
            v30 = *v11;
            memmove((void *)(a3 + 4), (const void *)a3, (size_t)v11 - a3);
            v23 = v30;
          }
          *(_DWORD *)a3 = v23;
        }
        ++v11;
      }
      while ( v22 != v11 );
      v24 = *v22;
      v25 = (unsigned int *)(a3 + 60);
      if ( *v22 >= *(_DWORD *)(a3 + 60) )
        goto LABEL_35;
      while ( 1 )
      {
        do
        {
          v25[1] = *v25;
          v26 = v25--;
        }
        while ( v24 < *v25 );
        ++v22;
        *v26 = v24;
        if ( v9 == v22 )
          break;
        while ( 1 )
        {
          v24 = *v22;
          v25 = v22 - 1;
          if ( *v22 < *(v22 - 1) )
            break;
LABEL_35:
          v27 = v22++;
          *v27 = v24;
          if ( v9 == v22 )
            goto LABEL_13;
        }
      }
    }
    else if ( v7 != 4 )
    {
      do
      {
        while ( 1 )
        {
          v14 = *v11;
          if ( *v11 < *(_DWORD *)a3 )
            break;
          v15 = v11 - 1;
          if ( v14 >= *(v11 - 1) )
          {
            *v11 = v14;
          }
          else
          {
            do
            {
              v15[1] = *v15;
              v16 = v15--;
            }
            while ( v14 < *v15 );
            *v16 = v14;
          }
          if ( v9 == ++v11 )
            goto LABEL_13;
        }
        if ( (__int64)v11 - a3 <= 4 )
        {
          if ( (char *)v11 - a3 == byte_4 )
            *v11 = *(_DWORD *)a3;
        }
        else
        {
          memmove((void *)(a3 + 4), (const void *)a3, (size_t)v11 - a3);
        }
        ++v11;
        *(_DWORD *)a3 = v14;
      }
      while ( v9 != v11 );
    }
LABEL_13:
    v8 = *a2;
  }
  if ( v8 )
  {
    v17 = *(_QWORD *)(a1 + 8872);
    v18 = 0;
    v19 = -2;
    v8 = 0;
    while ( 1 )
    {
      v20 = v19;
      v19 = *(_DWORD *)(a3 + 4 * v18);
      if ( *(_DWORD *)(a1 + 9468) >= (*(_DWORD *)(v17 + 16LL * (v19 >> 1) + 8) & 0xFFFFFFu)
        && *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v19) == 1 )
      {
        return 0;
      }
      if ( (v20 ^ 1) == v19 )
        return 0;
      if ( v19 != v20 )
      {
        if ( v8 != (_DWORD)v18 )
          *(_DWORD *)(a3 + 4LL * v8) = *(_DWORD *)(a3 + 4 * v18);
        ++v8;
      }
      if ( (unsigned int)++v18 >= *a2 )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    *a2 = v8;
    return 1;
  }
}

