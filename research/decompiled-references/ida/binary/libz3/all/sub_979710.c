__int64 __fastcall sub_979710(__int64 *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  void **v4; // r13
  void *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // rsi
  void *v15; // rdi
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rbp
  __int64 v20; // rcx

  v2 = (_QWORD *)a1[2];
  if ( !v2 )
    goto LABEL_24;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
  {
LABEL_23:
    *((_DWORD *)v2 - 1) = 0;
    goto LABEL_24;
  }
  do
  {
    v6 = *v2;
    v7 = *v2 & 7LL;
    if ( v7 == 2 )
    {
      v4 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6 > 7 )
      {
        v5 = v4[1];
        if ( !v5 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
    else if ( v7 <= 2 )
    {
      if ( v7 )
      {
        v4 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v6 <= 7 )
          goto LABEL_9;
        v5 = *v4;
        if ( !*v4 )
          goto LABEL_8;
LABEL_7:
        sub_186B220(v5);
        goto LABEL_8;
      }
      v4 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6 > 7 )
      {
        v5 = *v4;
        if ( !*v4 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
    else if ( v7 == 3 )
    {
      v4 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6 > 7 )
      {
        v5 = *v4;
        if ( *v4 )
          goto LABEL_7;
LABEL_8:
        sub_186B220(v4);
      }
    }
LABEL_9:
    ++v2;
  }
  while ( v3 != v2 );
  v2 = (_QWORD *)a1[2];
  if ( v2 )
    goto LABEL_23;
LABEL_24:
  result = a1[3];
  v9 = (__int64 *)result;
  v10 = (__int64 *)(result + 16LL * *((unsigned int *)a1 + 8));
  if ( (__int64 *)result == v10 )
  {
    if ( *((_DWORD *)a1 + 9) )
      goto LABEL_51;
  }
  else
  {
    while ( (unsigned __int64)*v9 <= 1 )
    {
      v9 += 2;
      if ( v10 == v9 )
        goto LABEL_56;
    }
    if ( v10 == v9 )
    {
LABEL_56:
      if ( !*((_DWORD *)a1 + 9) )
        goto LABEL_38;
      v15 = (void *)a1[3];
      v14 = *((unsigned int *)a1 + 8);
      v16 = result + 16 * v14;
      goto LABEL_40;
    }
    v11 = *v9;
    if ( *v9 )
      goto LABEL_35;
LABEL_30:
    for ( result = (__int64)(v9 + 2); v10 != v9 + 2; result = (__int64)(v9 + 2) )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)result;
        v9 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v10 == (__int64 *)result )
          goto LABEL_37;
      }
      if ( v10 == (__int64 *)result )
        break;
LABEL_35:
      v12 = *a1;
      if ( (*(_DWORD *)(v11 + 8))-- != 1 )
        goto LABEL_30;
      sub_15D7BC0(v12, v11);
    }
LABEL_37:
    if ( *((_DWORD *)a1 + 9) )
      goto LABEL_39;
  }
LABEL_38:
  if ( *((_DWORD *)a1 + 10) )
  {
LABEL_39:
    result = a1[3];
    v14 = *((unsigned int *)a1 + 8);
    v15 = (void *)result;
    v16 = result + 16 * v14;
    if ( result == v16 )
      goto LABEL_51;
LABEL_40:
    v17 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v16 == result )
          goto LABEL_44;
      }
      result += 16;
      ++v17;
    }
    while ( v16 != result );
LABEL_44:
    if ( (unsigned int)v14 > 0x10 )
    {
      result = (unsigned int)(3 * v14);
      if ( (unsigned int)result < 4 * v17 )
      {
        if ( v15 )
        {
          sub_186B220(v15);
          v18 = *((_DWORD *)a1 + 8);
          a1[3] = 0;
          v18 >>= 1;
          *((_DWORD *)a1 + 8) = v18;
          v19 = v18;
          result = sub_186B270(16LL * v18);
          v20 = result;
          if ( v18 )
          {
LABEL_48:
            result = v20;
            do
            {
              *(_QWORD *)result = 0;
              result += 16;
              *(_DWORD *)(result - 8) = 0;
            }
            while ( result != v20 + 16 * v19 );
          }
          a1[3] = v20;
          goto LABEL_51;
        }
        a1[3] = 0;
        *((_DWORD *)a1 + 8) = (unsigned int)v14 >> 1;
        v19 = (unsigned int)v14 >> 1;
        v20 = sub_186B270(16 * v19);
        goto LABEL_48;
      }
    }
LABEL_51:
    *(__int64 *)((char *)a1 + 36) = 0;
  }
  return result;
}

