__int64 __fastcall sub_DE2320(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // r14d
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

  result = a1[14];
  v3 = (__int64 *)(result + 16LL * *((unsigned int *)a1 + 30));
  v4 = (__int64 *)result;
  if ( (__int64 *)result == v3 )
  {
    if ( *((_DWORD *)a1 + 31) )
      goto LABEL_30;
  }
  else
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v3 == v4 )
        goto LABEL_35;
    }
    if ( v3 == v4 )
    {
LABEL_35:
      if ( !*((_DWORD *)a1 + 31) )
        goto LABEL_16;
      v11 = (void *)a1[14];
      v10 = *((unsigned int *)a1 + 30);
      v12 = result + 16 * v10;
      goto LABEL_18;
    }
    v5 = *v4;
    v6 = v4[1];
    if ( *v4 )
      goto LABEL_13;
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, a1);
      (**(void (__fastcall ***)(__int64))v6)(v6);
      sub_17E9C40(a1[1], v7, v6);
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
          goto LABEL_15;
      }
      if ( v3 == (__int64 *)result )
        break;
      v6 = *(_QWORD *)(result + 8);
LABEL_13:
      v8 = *a1;
      if ( (*(_DWORD *)(v5 + 8))-- == 1 )
        sub_15D7BC0(v8, v5);
    }
LABEL_15:
    if ( *((_DWORD *)a1 + 31) )
      goto LABEL_17;
  }
LABEL_16:
  if ( !*((_DWORD *)a1 + 32) )
    return result;
LABEL_17:
  result = a1[14];
  v10 = *((unsigned int *)a1 + 30);
  v11 = (void *)result;
  v12 = result + 16 * v10;
  if ( result != v12 )
  {
LABEL_18:
    v13 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v12 )
          goto LABEL_22;
      }
      result += 16;
      ++v13;
    }
    while ( result != v12 );
LABEL_22:
    if ( (unsigned int)v10 <= 0x10 )
      goto LABEL_30;
    result = (unsigned int)(3 * v10);
    if ( (unsigned int)result >= 4 * v13 )
      goto LABEL_30;
    if ( v11 )
    {
      sub_186B220(v11);
      v14 = *((_DWORD *)a1 + 30);
      a1[14] = 0;
      v14 >>= 1;
      *((_DWORD *)a1 + 30) = v14;
      v15 = v14;
      result = sub_186B270(v15 * 16);
      v16 = (_OWORD *)result;
      if ( !v14 )
      {
LABEL_29:
        a1[14] = (__int64)v16;
        goto LABEL_30;
      }
    }
    else
    {
      a1[14] = 0;
      v18 = (unsigned int)v10 >> 1;
      *((_DWORD *)a1 + 30) = v18;
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
    goto LABEL_29;
  }
LABEL_30:
  *(__int64 *)((char *)a1 + 124) = 0;
  return result;
}

