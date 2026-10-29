__int64 __fastcall sub_B22AC0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  __int64 *v14; // r14
  __int64 *v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  void *v20; // rdi
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // r12d
  size_t v24; // rbx
  _OWORD *v25; // rdx
  _OWORD *v26; // rcx
  size_t v27; // rsi

  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  sub_965AC0(a1);
  v2 = *(_QWORD **)(a1 + 96);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 88);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(a1 + 96);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD **)(a1 + 112);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 104);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(_QWORD **)(a1 + 112);
    if ( v7 )
LABEL_18:
      *((_DWORD *)v7 - 1) = 0;
  }
  result = *(_QWORD *)(a1 + 120);
  v12 = (_QWORD *)result;
  v13 = (_QWORD *)(result + 16LL * *(unsigned int *)(a1 + 128));
  if ( (_QWORD *)result == v13 )
  {
    if ( *(_DWORD *)(a1 + 132) )
      goto LABEL_55;
  }
  else
  {
    while ( *v12 <= 1u )
    {
      v12 += 2;
      if ( v13 == v12 )
        goto LABEL_60;
    }
    if ( v13 == v12 )
    {
LABEL_60:
      if ( !*(_DWORD *)(a1 + 132) )
        goto LABEL_41;
      v20 = *(void **)(a1 + 120);
      v19 = *(unsigned int *)(a1 + 128);
      v21 = result + 16 * v19;
      goto LABEL_43;
    }
    do
    {
      v14 = (__int64 *)v12[1];
      if ( v14 )
      {
        v15 = (__int64 *)v14[1];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_33;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *v14;
                v6 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_32;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_32:
          v15 = (__int64 *)v14[1];
          if ( v15 )
LABEL_33:
            sub_186B220(v15 - 1);
        }
        sub_186B220(v14);
      }
      result = (__int64)(v12 + 2);
      if ( v13 == v12 + 2 )
        break;
      while ( 1 )
      {
        v12 = (_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v13 == (_QWORD *)result )
          goto LABEL_40;
      }
    }
    while ( v13 != (_QWORD *)result );
LABEL_40:
    if ( *(_DWORD *)(a1 + 132) )
      goto LABEL_42;
  }
LABEL_41:
  if ( !*(_DWORD *)(a1 + 136) )
    return result;
LABEL_42:
  result = *(_QWORD *)(a1 + 120);
  v19 = *(unsigned int *)(a1 + 128);
  v20 = (void *)result;
  v21 = result + 16 * v19;
  if ( result != v21 )
  {
LABEL_43:
    v22 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v21 )
          goto LABEL_47;
      }
      result += 16;
      ++v22;
    }
    while ( result != v21 );
LABEL_47:
    if ( (unsigned int)v19 <= 0x10 )
      goto LABEL_55;
    result = (unsigned int)(3 * v19);
    if ( (unsigned int)result >= 4 * v22 )
      goto LABEL_55;
    if ( v20 )
    {
      sub_186B220(v20);
      v23 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v23 >>= 1;
      *(_DWORD *)(a1 + 128) = v23;
      v24 = v23;
      result = sub_186B270(v24 * 16);
      v25 = (_OWORD *)result;
      if ( !v23 )
      {
LABEL_54:
        *(_QWORD *)(a1 + 120) = v25;
        goto LABEL_55;
      }
    }
    else
    {
      v27 = (unsigned int)v19 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 128) = v27;
      v24 = v27;
      v25 = (_OWORD *)sub_186B270(16 * v27);
    }
    v26 = &v25[v24];
    result = (__int64)v25;
    if ( ((v24 * 16) & 0x10) == 0 || (result = (__int64)(v25 + 1), *v25 = 0, v26 != v25 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v26 != (_OWORD *)result );
    }
    goto LABEL_54;
  }
LABEL_55:
  *(_QWORD *)(a1 + 132) = 0;
  return result;
}

