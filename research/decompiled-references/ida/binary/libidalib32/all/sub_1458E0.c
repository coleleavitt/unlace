__int64 __fastcall sub_1458E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 result; // rax
  unsigned __int64 v10; // r12
  const void *v11; // rbp
  void *v12; // rax
  const void *v13; // r15
  void *v14; // rdi
  _BYTE *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 192) + 56 * a5;
  if ( v7 == *a2 )
  {
LABEL_4:
    if ( !*(_DWORD *)(v7 + 48) )
      goto LABEL_5;
    goto LABEL_15;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 <= 1 )
  {
    *(_QWORD *)(v6 + 8) = 0;
    v6 = *a2;
    goto LABEL_4;
  }
  v13 = *(const void **)v7;
  v14 = *(void **)v6;
  if ( *(_QWORD *)(v6 + 16) < v8 )
  {
    v17 = qvector_reserve();
    *(_QWORD *)v6 = v17;
    v14 = (void *)v17;
  }
  *(_QWORD *)(v6 + 8) = v8;
  memmove(v14, v13, v8 - 1);
  *(_BYTE *)(*(_QWORD *)v6 + v8 - 1) = 0;
  v6 = *a2;
  if ( *(_DWORD *)(v7 + 48) )
  {
LABEL_15:
    v15 = *(_BYTE **)(v6 + 24);
    if ( *(_QWORD *)(v6 + 40) <= 1u )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(v6 + 24) = v16;
      v15 = (_BYTE *)v16;
    }
    *(_QWORD *)(v6 + 32) = 2;
    *v15 = 42;
    *(_BYTE *)(*(_QWORD *)(v6 + 24) + 1LL) = 0;
    v6 = *a2;
  }
LABEL_5:
  result = v7 + 24;
  if ( v6 + 48 != v7 + 24 )
  {
    v10 = *(_QWORD *)(v7 + 32);
    if ( v10 > 1 )
    {
      v11 = *(const void **)(v7 + 24);
      v12 = *(void **)(v6 + 48);
      if ( *(_QWORD *)(v6 + 64) < v10 )
      {
        v12 = (void *)qvector_reserve();
        *(_QWORD *)(v6 + 48) = v12;
      }
      *(_QWORD *)(v6 + 56) = v10;
      memmove(v12, v11, v10 - 1);
      result = *(_QWORD *)(v6 + 48);
      *(_BYTE *)(result + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v6 + 56) = 0;
    }
  }
  return result;
}

