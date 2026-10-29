void __fastcall sub_10FAF70(__int64 *a1, __int64 a2, _QWORD *a3, char *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // r10
  void *v11; // rax
  _QWORD *v12; // r11
  unsigned __int8 v13; // r9
  void *v14; // r14
  size_t v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 *v19; // rdi
  _QWORD *v20; // [rsp+10h] [rbp-108h]
  __int64 v21; // [rsp+18h] [rbp-100h]
  unsigned int v22; // [rsp+20h] [rbp-F8h]
  bool v23; // [rsp+24h] [rbp-F4h]
  _QWORD *v24; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-E0h]
  __int64 v27; // [rsp+40h] [rbp-D8h] BYREF

  v7 = *a1;
  v8 = a1[4];
  v9 = *(_DWORD *)(a2 + 64);
  v10 = *(_QWORD *)a1[2];
  v11 = nullptr;
  v12 = (_QWORD *)a1[3];
  v13 = a4 != nullptr;
  if ( a4 )
  {
    v24 = a3;
    v23 = a4 != nullptr;
    v21 = *(_QWORD *)a1[2];
    v20 = (_QWORD *)a1[3];
    v22 = *(_DWORD *)(a2 + 64);
    v11 = (void *)strlen(a4);
    a3 = v24;
    v13 = v23;
    v10 = v21;
    v12 = v20;
    v9 = v22;
  }
  sub_10FAD90((__int64)&src, v8, (__m128i *)a1[1], a2, a3, 0, a4, v11, v13, v10, v12, v9);
  v14 = src;
  v15 = 40LL * v26;
  v16 = v26;
  v17 = *(unsigned int *)(v7 + 8);
  v18 = v26 + v17;
  if ( v18 > *(unsigned int *)(v7 + 12) )
  {
    sub_2237220(v7, v7 + 16, v18, 40);
    v17 = *(unsigned int *)(v7 + 8);
  }
  if ( v15 )
  {
    memcpy((void *)(*(_QWORD *)v7 + 40 * v17), v14, v15);
    LODWORD(v17) = *(_DWORD *)(v7 + 8);
  }
  v19 = (__int64 *)src;
  *(_DWORD *)(v7 + 8) = v17 + v16;
  if ( v19 != &v27 )
    free(v19);
}
