_QWORD *__fastcall sub_169FAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v11; // rdx
  const void *v12; // rsi

  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 248);
    v9 = v7[294];
    v10 = *(unsigned int *)(a2 + 24) + 8LL;
    v7[304] += v10;
    v6 = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7[295] >= (unsigned __int64)v6 + v10 && v9 )
      v7[294] = (char *)v6 + v10;
    else
      v6 = (_QWORD *)sub_986170((__int64)(v7 + 294), v10, v10, 3, a5, a6);
    v11 = *(unsigned int *)(a2 + 24);
    v12 = *(const void **)(a2 + 16);
    *v6 = *(_QWORD *)(a2 + 8);
    memcpy(v6 + 1, v12, v11);
  }
  return v6;
}
