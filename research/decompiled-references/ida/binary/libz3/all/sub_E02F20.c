__int64 __fastcall sub_E02F20(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  _DWORD *v5; // r14
  bool v6; // zf
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  void *v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // esi

  result = *(_QWORD *)(a1 + 568);
  v3 = result + 24LL * *(unsigned int *)(a1 + 576);
  v4 = result;
  if ( result == v3 )
  {
    if ( *(_DWORD *)(a1 + 580) )
      goto LABEL_31;
  }
  else
  {
    while ( *(_DWORD *)(v4 + 4) != 2 )
    {
      v4 += 24;
      if ( v3 == v4 )
        goto LABEL_37;
    }
    if ( v3 == v4 )
    {
LABEL_37:
      if ( !*(_DWORD *)(a1 + 580) )
        goto LABEL_18;
      v11 = *(void **)(a1 + 568);
      v10 = *(unsigned int *)(a1 + 576);
      v12 = result + 24 * v10;
      goto LABEL_20;
    }
    do
    {
      v5 = *(_DWORD **)(v4 + 16);
      v6 = v5[2]-- == 1;
      if ( v6 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL);
        if ( v7 == sub_DFC000 )
        {
          sub_DFBCB0(a1);
          v8 = *((_QWORD *)v5 + 2);
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 296);
            v6 = (*(_DWORD *)(v8 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v9, v8);
          }
        }
        else
        {
          v7((__int64)v5, a1);
        }
        (**(void (__fastcall ***)(void *))v5)(v5);
        sub_186B220(v5);
      }
      result = v4 + 24;
      if ( v3 == v4 + 24 )
        break;
      while ( 1 )
      {
        v4 = result;
        if ( *(_DWORD *)(result + 4) == 2 )
          break;
        result += 24;
        if ( v3 == result )
          goto LABEL_17;
      }
    }
    while ( v3 != result );
LABEL_17:
    if ( *(_DWORD *)(a1 + 580) )
      goto LABEL_19;
  }
LABEL_18:
  if ( !*(_DWORD *)(a1 + 584) )
    return result;
LABEL_19:
  result = *(_QWORD *)(a1 + 568);
  v10 = *(unsigned int *)(a1 + 576);
  v11 = (void *)result;
  v12 = result + 24 * v10;
  if ( result != v12 )
  {
LABEL_20:
    v13 = 0;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( result == v12 )
          goto LABEL_24;
      }
      result += 24;
      ++v13;
    }
    while ( result != v12 );
LABEL_24:
    if ( (unsigned int)v10 <= 0x10 )
      goto LABEL_31;
    result = (unsigned int)(3 * v10);
    if ( (unsigned int)result >= 4 * v13 )
      goto LABEL_31;
    if ( v11 )
    {
      sub_186B220(v11);
      v14 = *(_DWORD *)(a1 + 576);
      *(_QWORD *)(a1 + 568) = 0;
      v14 >>= 1;
      *(_DWORD *)(a1 + 576) = v14;
      v15 = v14;
      result = sub_186B270(24LL * v14);
      v16 = result;
      if ( !v14 )
      {
LABEL_30:
        *(_QWORD *)(a1 + 568) = v16;
        goto LABEL_31;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 568) = 0;
      v17 = (unsigned int)v10 >> 1;
      v15 = v17;
      *(_DWORD *)(a1 + 576) = v17;
      v16 = sub_186B270(24LL * v17);
    }
    result = v16;
    do
    {
      *(_QWORD *)result = 0;
      result += 24;
      *(_QWORD *)(result - 16) = 0;
    }
    while ( result != v16 + 24 * v15 );
    goto LABEL_30;
  }
LABEL_31:
  *(_QWORD *)(a1 + 580) = 0;
  return result;
}

