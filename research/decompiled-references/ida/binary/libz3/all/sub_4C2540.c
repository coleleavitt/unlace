__int64 __fastcall sub_4C2540(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rsi
  void *v6; // r13
  __int64 (__fastcall *v7)(void *); // rdx
  __int64 v8; // rdi
  __int64 v10; // rsi
  void *v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // ebp
  size_t v15; // rbx
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  size_t v18; // rsi

  result = *(_QWORD *)(a1 + 120);
  v3 = (__int64 *)(result + 16LL * *(unsigned int *)(a1 + 128));
  v4 = (__int64 *)result;
  if ( (__int64 *)result == v3 )
  {
    if ( *(_DWORD *)(a1 + 132) )
      goto LABEL_31;
  }
  else
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v3 == v4 )
        goto LABEL_37;
    }
    if ( v3 == v4 )
    {
LABEL_37:
      if ( !*(_DWORD *)(a1 + 132) )
        goto LABEL_17;
      v11 = *(void **)(a1 + 120);
      v10 = *(unsigned int *)(a1 + 128);
      v12 = result + 16 * v10;
      goto LABEL_19;
    }
    v5 = *v4;
    if ( *v4 )
      goto LABEL_14;
    while ( 1 )
    {
      v6 = (void *)v4[1];
      v7 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL);
      if ( v7 == sub_4C9C10 )
      {
        (**(void (__fastcall ***)(void *))v6)(v6);
        sub_186B220(v6);
      }
      else
      {
        v7(v6);
      }
      result = (__int64)(v4 + 2);
      if ( v3 == v4 + 2 )
        break;
      while ( 1 )
      {
        v5 = *(_QWORD *)result;
        v4 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v3 == (__int64 *)result )
          goto LABEL_16;
      }
      if ( v3 == (__int64 *)result )
        break;
LABEL_14:
      v8 = **(_QWORD **)(a1 + 8);
      if ( (*(_DWORD *)(v5 + 8))-- == 1 )
        sub_15D7BC0(v8, v5);
    }
LABEL_16:
    if ( *(_DWORD *)(a1 + 132) )
      goto LABEL_18;
  }
LABEL_17:
  if ( !*(_DWORD *)(a1 + 136) )
    return result;
LABEL_18:
  result = *(_QWORD *)(a1 + 120);
  v10 = *(unsigned int *)(a1 + 128);
  v11 = (void *)result;
  v12 = result + 16 * v10;
  if ( result != v12 )
  {
LABEL_19:
    v13 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v12 )
          goto LABEL_23;
      }
      result += 16;
      ++v13;
    }
    while ( result != v12 );
LABEL_23:
    if ( (unsigned int)v10 <= 0x10 )
      goto LABEL_31;
    result = (unsigned int)(3 * v10);
    if ( (unsigned int)result >= 4 * v13 )
      goto LABEL_31;
    if ( v11 )
    {
      sub_186B220(v11);
      v14 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v14 >>= 1;
      *(_DWORD *)(a1 + 128) = v14;
      v15 = v14;
      result = sub_186B270(v15 * 16);
      v16 = (_OWORD *)result;
      if ( !v14 )
      {
LABEL_30:
        *(_QWORD *)(a1 + 120) = v16;
        goto LABEL_31;
      }
    }
    else
    {
      v18 = (unsigned int)v10 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 128) = v18;
      v15 = v18;
      v16 = (_OWORD *)sub_186B270(16 * v18);
    }
    v17 = &v16[v15];
    result = (__int64)v16;
    if ( ((v15 * 16) & 0x10) == 0 || (result = (__int64)(v16 + 1), *v16 = 0, v17 != v16 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v17 != (_OWORD *)result );
    }
    goto LABEL_30;
  }
LABEL_31:
  *(_QWORD *)(a1 + 132) = 0;
  return result;
}

