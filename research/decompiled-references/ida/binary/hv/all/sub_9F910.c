_QWORD *__fastcall sub_9F910(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v3; // eax
  int i; // edx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  _QWORD *result; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // esi
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rax
  char *v23; // rax
  unsigned __int64 v24; // rbp
  void *v25; // rdi
  unsigned int v26; // ecx

  v1 = *(unsigned int *)(a1 + 80);
  v3 = *(_DWORD *)(a1 + 180);
  for ( i = *(_DWORD *)(a1 + 80); ; i = *(_DWORD *)(a1 + 80) )
  {
    v8 = *(_QWORD *)(a1 + 104);
    v9 = *(_DWORD *)(a1 + 172);
    v10 = v8 - v9 - v3;
    if ( v9 < (int)v1 - 262 + i )
    {
      v5 = *(_QWORD *)a1;
      if ( !*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        break;
    }
    else
    {
      memcpy(*(void **)(a1 + 96), (const void *)(*(_QWORD *)(a1 + 96) + v1), (_DWORD)v1 + v9 - (_DWORD)v8 + v3);
      v11 = *(_DWORD *)(a1 + 172);
      *(_DWORD *)(a1 + 176) -= v1;
      *(_QWORD *)(a1 + 152) -= v1;
      v12 = v11 - v1;
      *(_DWORD *)(a1 + 172) = v12;
      if ( v12 < *(_DWORD *)(a1 + 5932) )
        *(_DWORD *)(a1 + 5932) = v12;
      v10 += v1;
      sub_9F5D0(a1);
      v5 = *(_QWORD *)a1;
      if ( !*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        break;
    }
    v6 = sub_9F880(
           v5,
           (void *)(*(_QWORD *)(a1 + 96) + *(unsigned int *)(a1 + 180) + (unsigned __int64)*(unsigned int *)(a1 + 172)),
           v10);
    v7 = *(_DWORD *)(a1 + 5932);
    v3 = *(_DWORD *)(a1 + 180) + v6;
    *(_DWORD *)(a1 + 180) = v3;
    if ( v3 + v7 > 2 )
    {
      v18 = *(_QWORD *)(a1 + 96);
      v19 = *(_DWORD *)(a1 + 172) - v7;
      v20 = *(unsigned __int8 *)(v18 + v19);
      *(_DWORD *)(a1 + 128) = v20;
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a1 + 140)
                            & ((v20 << *(_DWORD *)(a1 + 144))
                             ^ *(unsigned __int8 *)(v18 + v19 + 1));
      while ( v7 )
      {
        v21 = *(_QWORD *)(a1 + 120);
        v22 = *(_DWORD *)(a1 + 140)
            & ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
             ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v19 + 2));
        *(_DWORD *)(a1 + 128) = v22;
        *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL * (*(_DWORD *)(a1 + 88) & v19)) = *(_WORD *)(v21 + 2 * v22);
        *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = v19++;
        v7 = *(_DWORD *)(a1 + 5932) - 1;
        v3 = *(_DWORD *)(a1 + 180);
        *(_DWORD *)(a1 + 5932) = v7;
        if ( v7 + v3 <= 2 )
          goto LABEL_4;
      }
      v3 = *(_DWORD *)(a1 + 180);
    }
LABEL_4:
    if ( v3 > 0x105 || !*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
      break;
  }
  v13 = *(_QWORD *)(a1 + 5944);
  result = *(_QWORD **)(a1 + 104);
  if ( v13 < (unsigned __int64)result )
  {
    v15 = *(unsigned int *)(a1 + 180) + (unsigned __int64)*(unsigned int *)(a1 + 172);
    if ( v13 >= v15 )
    {
      if ( v13 < v15 + 258 )
      {
        v23 = (char *)result - v13;
        v24 = v15 - v13 + 258;
        if ( (unsigned __int64)v23 <= v24 )
          v24 = (unsigned __int64)v23;
        result = memset((void *)(v13 + *(_QWORD *)(a1 + 96)), 0, (unsigned int)v24);
        *(_QWORD *)(a1 + 5944) += v24;
      }
    }
    else
    {
      v16 = (unsigned __int64)result - v15;
      v17 = 258;
      if ( v16 <= 0x102 )
        v17 = v16;
      result = (_QWORD *)(v15 + *(_QWORD *)(a1 + 96));
      if ( (unsigned int)v17 >= 8 )
      {
        *result = 0;
        *(_QWORD *)((char *)result + (unsigned int)v17 - 8) = 0;
        v25 = (void *)((unsigned __int64)(result + 1) & 0xFFFFFFFFFFFFFFF8LL);
        v26 = v17 + (_DWORD)result - (_DWORD)v25;
        result = nullptr;
        memset(v25, 0, 8LL * (v26 >> 3));
      }
      else if ( (v17 & 4) != 0 )
      {
        *(_DWORD *)result = 0;
        *(_DWORD *)((char *)result + (unsigned int)v17 - 4) = 0;
      }
      else if ( (_DWORD)v17 )
      {
        *(_BYTE *)result = 0;
        if ( (v17 & 2) != 0 )
          *(_WORD *)((char *)result + (unsigned int)v17 - 2) = 0;
      }
      *(_QWORD *)(a1 + 5944) = v15 + v17;
    }
  }
  return result;
}

