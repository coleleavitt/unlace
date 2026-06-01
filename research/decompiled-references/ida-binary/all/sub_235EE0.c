__int64 __fastcall sub_235EE0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r12
  int v6; // eax
  __int64 v7; // r12
  int v8; // edx
  size_t v9; // r14
  char v10; // cl
  int v11; // edx
  void *v12; // rax
  unsigned __int64 v13; // rax
  char v14; // cl
  void *v15; // rax
  void *v16; // rax
  int v17; // [rsp+0h] [rbp-58h]
  void *src; // [rsp+8h] [rbp-50h]
  unsigned __int64 srca; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]

  if ( !(unsigned __int8)sub_235DE0(a2) )
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
          v16 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 16));
          *(_QWORD *)(a1 + 24) = v4;
          *(_QWORD *)(a1 + 8) = v16;
          memcpy(v16, *(const void **)(a3 + 8), v4);
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
    if ( v6 < *(_DWORD *)(dbg + 64) )
      v7 = sub_233C80(a2);
  }
  v8 = *(_DWORD *)a3;
  if ( *(int *)a3 < -1 )
  {
    v13 = *(_QWORD *)(a3 + 8);
    v14 = *(_BYTE *)(a2 + 32);
    v17 = *(_DWORD *)a3;
    if ( v14 == -1 )
    {
      v12 = (void *)(v7 & v13);
      *(_OWORD *)(a1 + 16) = 0;
      goto LABEL_25;
    }
    *(_OWORD *)(a1 + 16) = 0;
    v12 = (void *)(v7 & (v13 >> v14));
LABEL_24:
    v8 = v17;
LABEL_25:
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)a1 = v8;
    return a1;
  }
  v9 = *(_QWORD *)(a3 + 16);
  src = nullptr;
  n = 0;
  if ( v9 )
  {
    srca = qalloc_or_throw(v9);
    memcpy((void *)srca, *(const void **)(a3 + 8), v9);
    v10 = *(_BYTE *)(a2 + 32);
    v11 = *(_DWORD *)a3;
    n = v9;
    v17 = *(_DWORD *)a3;
    a2 = srca & v7;
    *(_DWORD *)a1 = -2;
    v12 = (void *)(v7 & (srca >> v10));
    *(_QWORD *)(a1 + 24) = 0;
    if ( v10 == -1 )
      v12 = (void *)(srca & v7);
    *(_OWORD *)(a1 + 8) = 0;
    src = v12;
    if ( v11 >= -1 )
      goto LABEL_18;
    goto LABEL_24;
  }
  v17 = *(_DWORD *)a3;
  if ( *(_BYTE *)(a2 + 32) == 0xFF )
  {
    *(_OWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    goto LABEL_19;
  }
  *(_DWORD *)a1 = -2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_18:
  *(_OWORD *)(a1 + 16) = 0;
  if ( n )
  {
    v15 = (void *)qalloc_or_throw(n);
    *(_QWORD *)(a1 + 8) = v15;
    a2 = (__int64)src;
    *(_QWORD *)(a1 + 24) = n;
    memcpy(v15, src, n);
    *(_QWORD *)(a1 + 16) = n;
    *(_DWORD *)a1 = v17;
    if ( v17 < -1 )
      return a1;
    goto LABEL_20;
  }
LABEL_19:
  *(_DWORD *)a1 = v17;
LABEL_20:
  if ( src )
    qfree(src, (const char *)a2);
  return a1;
}
