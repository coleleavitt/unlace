__int64 __fastcall sub_3C7E20(__int64 a1, int *a2)
{
  int v3; // eax
  size_t v4; // r12
  size_t v5; // r12
  size_t v6; // r12
  __int64 result; // rax
  void *v8; // rax
  const void *v9; // rsi
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // rax
  const void *v13; // rsi

  v3 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v4 = *((_QWORD *)a2 + 2);
  *(_DWORD *)a1 = v3;
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw(v4);
    *(_QWORD *)(a1 + 24) = v4;
    v9 = *((const void **)a2 + 1);
    *(_QWORD *)(a1 + 8) = v8;
    memcpy(v8, v9, v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v5 = *((_QWORD *)a2 + 5);
  if ( v5 )
  {
    v12 = (void *)qalloc_or_throw(*((_QWORD *)a2 + 5));
    *(_QWORD *)(a1 + 32) = v12;
    v13 = *((const void **)a2 + 4);
    *(_QWORD *)(a1 + 48) = v5;
    memcpy(v12, v13, v5);
    *(_QWORD *)(a1 + 40) = v5;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v6 = *((_QWORD *)a2 + 8);
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw(*((_QWORD *)a2 + 8));
    *(_QWORD *)(a1 + 72) = v6;
    v11 = *((const void **)a2 + 7);
    *(_QWORD *)(a1 + 56) = v10;
    memcpy(v10, v11, v6);
    result = *((unsigned __int16 *)a2 + 40);
    *(_QWORD *)(a1 + 64) = v6;
  }
  else
  {
    result = *((unsigned __int16 *)a2 + 40);
  }
  *(_WORD *)(a1 + 80) = result;
  return result;
}
