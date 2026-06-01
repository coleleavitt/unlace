__int64 __fastcall sub_7F3990(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  void *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // esi

  result = *(_QWORD *)(a1 + 16);
  v3 = result;
  v4 = result + 16LL * *(unsigned int *)(a1 + 24);
  if ( result == v4 )
  {
    if ( *(_DWORD *)(a1 + 28) )
      goto LABEL_38;
  }
  else
  {
    while ( *(_DWORD *)(v3 + 4) != 2 )
    {
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_43;
    }
    if ( v4 == v3 )
    {
LABEL_43:
      if ( !*(_DWORD *)(a1 + 28) )
        goto LABEL_21;
      v12 = *(void **)(a1 + 16);
      v11 = *(unsigned int *)(a1 + 24);
      v13 = result + 16 * v11;
      goto LABEL_23;
    }
    do
    {
      v5 = *(_QWORD **)(v3 + 8);
      v6 = *(_QWORD *)(a1 + 8);
      v7 = v5[2];
      if ( v7 )
      {
        v8 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v6, v7);
          v6 = *(_QWORD *)(a1 + 8);
        }
      }
      v9 = v5[3];
      if ( v9 )
      {
        v8 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v6, v9);
          v6 = *(_QWORD *)(a1 + 8);
        }
      }
      v10 = v5[4];
      if ( v10 )
      {
        v8 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v6, v10);
      }
      sub_186B220(v5);
      result = v3 + 16;
      if ( v4 == v3 + 16 )
        break;
      while ( 1 )
      {
        v3 = result;
        if ( *(_DWORD *)(result + 4) == 2 )
          break;
        result += 16;
        if ( v4 == result )
          goto LABEL_20;
      }
    }
    while ( v4 != result );
LABEL_20:
    if ( *(_DWORD *)(a1 + 28) )
      goto LABEL_22;
  }
LABEL_21:
  if ( *(_DWORD *)(a1 + 32) )
  {
LABEL_22:
    result = *(_QWORD *)(a1 + 16);
    v11 = *(unsigned int *)(a1 + 24);
    v12 = (void *)result;
    v13 = result + 16 * v11;
    if ( result == v13 )
    {
LABEL_38:
      *(_QWORD *)(a1 + 28) = 0;
      goto LABEL_39;
    }
LABEL_23:
    v14 = 0;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 16;
        if ( result == v13 )
          goto LABEL_27;
      }
      result += 16;
      ++v14;
    }
    while ( result != v13 );
LABEL_27:
    if ( (unsigned int)v11 <= 0x10 )
      goto LABEL_38;
    result = (unsigned int)(3 * v11);
    if ( (unsigned int)result >= 4 * v14 )
      goto LABEL_38;
    if ( v12 )
    {
      sub_186B220(v12);
      v15 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v16 = v15 >> 1;
      *(_DWORD *)(a1 + 24) = v16;
      result = sub_186B270(16LL * v16);
      v17 = result;
      if ( !v16 )
      {
LABEL_37:
        *(_QWORD *)(a1 + 16) = v17;
        goto LABEL_38;
      }
      if ( v16 == 1 )
      {
LABEL_36:
        *(_QWORD *)result = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v18 = (unsigned int)v11 >> 1;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v18;
      v16 = v18;
      v17 = sub_186B270(16LL * v18);
    }
    result = v17;
    do
    {
      *(_QWORD *)result = 0;
      result += 32;
      *(_QWORD *)(result - 16) = 0;
    }
    while ( result != v17 + 32LL * (v16 >> 1) );
    if ( (v16 & 1) == 0 )
      goto LABEL_37;
    result = v17 + 16LL * (v16 & 0x7FFFFFFE);
    goto LABEL_36;
  }
LABEL_39:
  *(_QWORD *)(a1 + 40) = 0;
  return result;
}

