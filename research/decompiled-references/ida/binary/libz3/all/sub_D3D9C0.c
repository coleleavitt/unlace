__int64 __fastcall sub_D3D9C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdi
  char *v6; // r13
  int v7; // ecx
  unsigned int v8; // esi
  char *v9; // rdx
  char *v10; // rbx
  char *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  _OWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int v23; // esi

  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  if ( !*(_DWORD *)(a1 + 116) )
  {
    result = *(unsigned int *)(a1 + 120);
    if ( !(_DWORD)result )
      goto LABEL_29;
  }
  v5 = *(unsigned int *)(a1 + 112);
  v6 = *(char **)(a1 + 104);
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = &v6[24 * v5];
  result = (__int64)v6;
  if ( v6 != v9 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v9 == (char *)result )
          goto LABEL_12;
      }
      result += 24;
      ++v7;
    }
    while ( v9 != (char *)result );
LABEL_12:
    if ( v8 > 0x10 )
    {
      result = 3 * v8;
      if ( (unsigned int)result < 4 * v7 )
      {
        if ( v6 )
        {
          v10 = v6;
          v11 = &v6[24 * v5];
          do
          {
            while ( 1 )
            {
              v12 = *((_QWORD *)v10 + 2);
              if ( v12 )
                sub_186B220((void *)(v12 - 8));
              v13 = *((_QWORD *)v10 + 1);
              if ( !v13 )
                break;
              v10 += 24;
              sub_186B220((void *)(v13 - 8));
              if ( v11 == v10 )
                goto LABEL_20;
            }
            v10 += 24;
          }
          while ( v10 != v11 );
LABEL_20:
          sub_186B220(v6);
          v14 = *(_DWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 104) = 0;
          v15 = v14 >> 1;
          *(_DWORD *)(a1 + 112) = v15;
          result = sub_186B270(24LL * v15);
          if ( !v15 )
            goto LABEL_27;
          if ( v15 == 1 )
          {
            v17 = result;
            goto LABEL_26;
          }
        }
        else
        {
          v23 = v8 >> 1;
          *(_QWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 112) = v23;
          v15 = v23;
          result = sub_186B270(24LL * v23);
        }
        v16 = (_OWORD *)result;
        do
        {
          *v16 = 0;
          v16 += 3;
          *(v16 - 2) = 0;
          *(v16 - 1) = 0;
        }
        while ( (_OWORD *)(result + 48LL * (v15 >> 1)) != v16 );
        if ( (v15 & 1) == 0 )
          goto LABEL_27;
        v17 = result + 24LL * (v15 & 0x7FFFFFFE);
LABEL_26:
        *(_QWORD *)(v17 + 16) = 0;
        *(_OWORD *)v17 = 0;
LABEL_27:
        *(_QWORD *)(a1 + 104) = result;
      }
    }
  }
  *(_QWORD *)(a1 + 116) = 0;
LABEL_29:
  v18 = *(_QWORD **)(a1 + 32);
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    v19 = &v18[result];
    if ( v18 >= v19 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 24);
          if ( (*(_DWORD *)(v20 + 8))-- == 1 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_36;
      }
      result = sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_36:
    v18 = *(_QWORD **)(a1 + 32);
    if ( v18 )
LABEL_37:
      *((_DWORD *)v18 - 1) = 0;
  }
  return result;
}

