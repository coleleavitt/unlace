__int64 __fastcall sub_C7420(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rbp
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  int i; // ecx
  __int64 v10; // rdx
  int v11; // eax
  size_t v12; // r14
  int v13; // edx
  char v14; // cl
  void *v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  char v18; // cl
  void *v19; // rax
  void *v20; // rax
  int v21; // [rsp+0h] [rbp-58h]
  void *src; // [rsp+8h] [rbp-50h]
  unsigned __int64 srca; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]

  if ( !(unsigned __int8)sub_C72E0(a2) )
  {
    *(_DWORD *)a1 = -2;
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( a3 != a1 )
    {
      if ( *(int *)a3 < -1 )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(a3 + 8);
        *(_DWORD *)a1 = *(_DWORD *)a3;
      }
      else
      {
        v4 = *(_QWORD *)(a3 + 16);
        if ( v4 )
        {
          v20 = (void *)qalloc_or_throw();
          *(_QWORD *)(a1 + 24) = v4;
          *(_QWORD *)(a1 + 8) = v20;
          memcpy(v20, *(const void **)(a3 + 8), v4);
          *(_QWORD *)(a1 + 16) = v4;
        }
        *(_DWORD *)a1 = *(_DWORD *)a3;
      }
    }
    return a1;
  }
  v6 = *(_DWORD *)(a2 + 44);
  if ( v6 < 0 )
  {
    v7 = -1;
  }
  else
  {
    v7 = -1;
    if ( v6 < *(_DWORD *)(dbg + 64LL) )
    {
      v8 = sub_C7350(a2);
      v7 = 0;
      if ( v8 > 0 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = 1LL << i;
          v7 |= v10;
        }
      }
    }
  }
  v11 = *(_DWORD *)a3;
  if ( *(int *)a3 < -1 )
  {
    v17 = *(_QWORD *)(a3 + 8);
    v18 = *(_BYTE *)(a2 + 32);
    v21 = *(_DWORD *)a3;
    if ( v18 == -1 )
    {
      v16 = v17 & v7;
      *(_OWORD *)(a1 + 16) = 0;
      goto LABEL_27;
    }
    *(_OWORD *)(a1 + 16) = 0;
    v16 = (v17 >> v18) & v7;
LABEL_26:
    v11 = v21;
LABEL_27:
    *(_QWORD *)(a1 + 8) = v16;
    *(_DWORD *)a1 = v11;
    return a1;
  }
  v12 = *(_QWORD *)(a3 + 16);
  src = nullptr;
  n = 0;
  if ( v12 )
  {
    srca = qalloc_or_throw();
    memcpy((void *)srca, *(const void **)(a3 + 8), v12);
    v13 = *(_DWORD *)a3;
    v14 = *(_BYTE *)(a2 + 32);
    n = v12;
    v21 = *(_DWORD *)a3;
    v15 = (void *)(srca & v7);
    *(_DWORD *)a1 = -2;
    *(_QWORD *)(a1 + 24) = 0;
    if ( v14 != -1 )
      v15 = (void *)(v7 & (srca >> v14));
    *(_OWORD *)(a1 + 8) = 0;
    src = v15;
    v16 = (__int64)v15;
    if ( v13 >= -1 )
      goto LABEL_20;
    goto LABEL_26;
  }
  v21 = *(_DWORD *)a3;
  if ( *(_BYTE *)(a2 + 32) == 0xFF )
  {
    *(_OWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    goto LABEL_21;
  }
  *(_DWORD *)a1 = -2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_20:
  *(_OWORD *)(a1 + 16) = 0;
  if ( n )
  {
    v19 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 24) = n;
    memcpy(v19, src, n);
    *(_QWORD *)(a1 + 16) = n;
    *(_DWORD *)a1 = v21;
    if ( v21 < -1 )
      return a1;
    goto LABEL_22;
  }
LABEL_21:
  *(_DWORD *)a1 = v21;
LABEL_22:
  if ( src )
    qfree();
  return a1;
}

