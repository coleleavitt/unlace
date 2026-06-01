__int64 __fastcall sub_426E00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  size_t v4; // r12
  int v5; // r13d
  const void *v6; // r14
  void *v7; // rdi
  __int16 v8; // ax
  void *v10; // rdi
  _BYTE *v11; // rax
  size_t v12; // r12
  void *v13; // rax
  void *v14; // rsi
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = operator new(0x58u);
  src = nullptr;
  v3 = v2;
  *(_OWORD *)n = 0;
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = *(const void **)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v10 = nullptr;
    if ( v4 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v4 + 1, 1);
      v10 = src;
    }
    n[0] = v4 + 1;
    memmove(v10, v6, v4);
    v11 = src;
    *(_QWORD *)(v3 + 8) = 0;
    *(_OWORD *)(v3 + 16) = 0;
    v11[v4] = 0;
    v12 = n[0];
    *(_QWORD *)v3 = &off_2AFE708;
    if ( v12 )
    {
      v13 = (void *)qalloc_or_throw(v12, (const char *)v6);
      *(_QWORD *)(v3 + 8) = v13;
      v14 = src;
      *(_QWORD *)(v3 + 24) = v12;
      memcpy(v13, v14, v12);
      *(_QWORD *)(v3 + 16) = v12;
    }
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0;
    *(_OWORD *)(v2 + 16) = 0;
  }
  v7 = src;
  *(_QWORD *)(v3 + 32) = 2;
  *(_QWORD *)v3 = &off_2AFE768;
  v8 = *(_WORD *)(a1 + 36);
  *(_QWORD *)(v3 + 40) = 0;
  *(_WORD *)(v3 + 68) = v8;
  *(_DWORD *)(v3 + 72) = v5;
  *(_BYTE *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_OWORD *)(v3 + 48) = 0;
  if ( v7 )
  {
    n[0] = 0;
    qfree(v7);
  }
  return v3;
}

