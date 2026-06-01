__int64 __fastcall sub_B64640(__int64 a1, unsigned int *a2, char *a3, char **a4)
{
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // ecx
  char *v10; // rbx
  char *v11; // rsi
  char *v12; // r12
  unsigned __int64 v14; // rdx
  char *v15; // r14
  unsigned int v16; // r9d
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // ecx
  char *v20; // rax
  char *v21; // rdx
  __int64 v22; // rbx
  int v23; // edi
  unsigned int v24; // r8d
  __int64 v25; // r12
  char v26; // al
  __int64 v28; // rcx
  unsigned int v29; // r14d
  int v30; // r9d
  char *v31; // rsi
  unsigned int v32; // r14d
  char *v33; // rax
  char *v34; // rdx
  char *v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rax
  char *v38; // rdi
  __int64 v39; // rax
  unsigned int v41; // [rsp+10h] [rbp-48h]
  unsigned int v42; // [rsp+10h] [rbp-48h]

  v7 = *a2;
  v8 = 4 * v7;
  v9 = *a2;
  v10 = &a3[4 * v7];
  if ( v10 != a3 )
  {
    v11 = &a3[4 * v7];
    v12 = a3 + 4;
    _BitScanReverse64(&v14, v8 >> 2);
    sub_B63E00(a3, v11, 2LL * (int)v14);
    if ( (unsigned __int64)v8 <= 0x40 )
    {
      if ( v8 != 4 )
      {
        do
        {
          v32 = *(_DWORD *)v12;
          if ( *(_DWORD *)v12 < *(_DWORD *)a3 )
          {
            if ( v12 - a3 <= 4 )
            {
              if ( v12 - a3 == 4 )
                *(_DWORD *)v12 = *(_DWORD *)a3;
            }
            else
            {
              memmove(a3 + 4, a3, v12 - a3);
            }
            *(_DWORD *)a3 = v32;
          }
          else
          {
            v33 = v12 - 4;
            if ( v32 >= *((_DWORD *)v12 - 1) )
            {
              *(_DWORD *)v12 = v32;
            }
            else
            {
              do
              {
                *((_DWORD *)v33 + 1) = *(_DWORD *)v33;
                v34 = v33;
                v33 -= 4;
              }
              while ( v32 < *(_DWORD *)v33 );
              *(_DWORD *)v34 = v32;
            }
          }
          v12 += 4;
        }
        while ( v10 != v12 );
      }
    }
    else
    {
      v15 = a3 + 64;
      do
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)v12;
          if ( *(_DWORD *)v12 < *(_DWORD *)a3 )
            break;
          v17 = v12 - 4;
          if ( v16 >= *((_DWORD *)v12 - 1) )
          {
            *(_DWORD *)v12 = v16;
          }
          else
          {
            do
            {
              *((_DWORD *)v17 + 1) = *(_DWORD *)v17;
              v18 = v17;
              v17 -= 4;
            }
            while ( v16 < *(_DWORD *)v17 );
            *(_DWORD *)v18 = v16;
          }
          v12 += 4;
          if ( v15 == v12 )
            goto LABEL_12;
        }
        if ( v12 - a3 <= 4 )
        {
          if ( v12 - a3 == 4 )
            *(_DWORD *)v12 = *(_DWORD *)a3;
        }
        else
        {
          v41 = *(_DWORD *)v12;
          memmove(a3 + 4, a3, v12 - a3);
          v16 = v41;
        }
        v12 += 4;
        *(_DWORD *)a3 = v16;
      }
      while ( v15 != v12 );
      do
      {
LABEL_12:
        while ( 1 )
        {
          v19 = *(_DWORD *)v15;
          v20 = v15 - 4;
          if ( *(_DWORD *)v15 < *((_DWORD *)v15 - 1) )
            break;
          v35 = v15;
          v15 += 4;
          *(_DWORD *)v35 = v19;
          if ( v10 == v15 )
            goto LABEL_15;
        }
        do
        {
          *((_DWORD *)v20 + 1) = *(_DWORD *)v20;
          v21 = v20;
          v20 -= 4;
        }
        while ( v19 < *(_DWORD *)v20 );
        v15 += 4;
        *(_DWORD *)v21 = v19;
      }
      while ( v10 != v15 );
    }
LABEL_15:
    v9 = *a2;
  }
  v22 = 0;
  v23 = -2;
  v24 = 0;
  if ( !v9 )
  {
LABEL_22:
    *a2 = v24;
    return 1;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v25 = *(unsigned int *)&a3[4 * v22];
      v26 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v25);
      if ( !v26 )
        break;
      if ( v26 == 1 )
        return 0;
      if ( v26 == -1 && (_DWORD)v25 != v23 )
      {
        v28 = *((unsigned int *)a4 + 2);
        v29 = *((_DWORD *)a4 + 3);
        v30 = v25 ^ 1;
        if ( (unsigned int)v28 >= v29 )
        {
          v36 = 2 * v29;
          v42 = v24;
          v37 = sub_186B270(4 * v36);
          v38 = *a4;
          v31 = (char *)v37;
          v39 = 0;
          v24 = v42;
          v30 = v25 ^ 1;
          v28 = *((unsigned int *)a4 + 2);
          if ( (_DWORD)v28 )
          {
            do
            {
              *(_DWORD *)&v31[v39] = *(_DWORD *)&v38[v39];
              v39 += 4;
            }
            while ( v39 != 4 * v28 );
          }
          if ( v38 != (char *)(a4 + 2) )
          {
            if ( v38 )
            {
              sub_186B220(v38);
              v28 = *((unsigned int *)a4 + 2);
              v30 = v25 ^ 1;
              v24 = v42;
            }
          }
          *a4 = v31;
          *((_DWORD *)a4 + 3) = v36;
        }
        else
        {
          v31 = *a4;
        }
        *(_DWORD *)&v31[4 * v28] = v30;
        ++v22;
        v23 = v25;
        ++*((_DWORD *)a4 + 2);
        v9 = *a2;
        if ( (unsigned int)v22 >= *a2 )
          goto LABEL_22;
      }
      else
      {
LABEL_21:
        if ( (unsigned int)++v22 >= v9 )
          goto LABEL_22;
      }
    }
    if ( (v23 ^ 1) == (_DWORD)v25 )
      return 0;
    if ( (_DWORD)v25 == v23 )
      goto LABEL_21;
    if ( v24 != (_DWORD)v22 )
    {
      *(_DWORD *)&a3[4 * v24] = v25;
      v9 = *a2;
    }
    ++v22;
    ++v24;
    v23 = v25;
    if ( (unsigned int)v22 >= v9 )
      goto LABEL_22;
  }
}

