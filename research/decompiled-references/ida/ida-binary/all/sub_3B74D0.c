unsigned __int64 __fastcall sub_3B74D0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  size_t v8; // r14
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v13; // rax
  const void *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v6 = operator new(0x90u);
  *(_DWORD *)(v6 + 8) = 10;
  v7 = v6;
  *(_DWORD *)(v6 + 12) = a4;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v6 = &forms::push_button_t___vtable;
  *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_QWORD *)(v6 + 104) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 88) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  if ( v8 )
  {
    v13 = (void *)qalloc_or_throw(v8);
    *(_QWORD *)(v7 + 104) = v13;
    v14 = *(const void **)a2;
    *(_QWORD *)(v7 + 120) = v8;
    memcpy(v13, v14, v8);
    *(_QWORD *)(v7 + 112) = v8;
  }
  v9 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(v7 + 128) = 0;
  *(_QWORD *)v7 = &forms::dialog_button_t___vtable;
  v10 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(v7 + 136) = a3;
  *(_DWORD *)(v7 + 8) = 14;
  if ( v9 < 0 && !v10 )
    *(_DWORD *)(a1 + 24) = 0;
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v10 + 1) )
  {
    v15 = qvector_reserve(a1, v11, v10 + 1, 8);
    *(_QWORD *)a1 = v15;
    v11 = v15;
    v10 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v11 + 8 * v10) = v7;
  ++*(_QWORD *)(a1 + 8);
  return v16 - __readfsqword(0x28u);
}
