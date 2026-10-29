void __fastcall sub_10FB210(__int64 *a1, __int64 a2, _QWORD *a3, char *a4)
{
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned __int8 v13; // r10
  __int64 v14; // r11
  _QWORD *v15; // rcx
  unsigned __int8 v16; // r9
  void *v17; // rax
  void *v18; // r14
  size_t v19; // r13
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 *v23; // rdi
  unsigned int v24; // [rsp+Ch] [rbp-10Ch]
  _QWORD *v25; // [rsp+10h] [rbp-108h]
  __int64 v26; // [rsp+18h] [rbp-100h]
  unsigned __int8 v27; // [rsp+20h] [rbp-F8h]
  unsigned __int8 v28; // [rsp+24h] [rbp-F4h]
  _QWORD *v29; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-E0h]
  __int64 v32; // [rsp+40h] [rbp-D8h] BYREF

  v9 = a4 == nullptr;
  v10 = *a1;
  v11 = a1[5];
  v12 = *(_DWORD *)(a2 + 64);
  v13 = a4 != nullptr;
  v14 = *(_QWORD *)a1[3];
  v15 = (_QWORD *)a1[4];
  v16 = *(_BYTE *)a1[2];
  if ( v9 )
  {
    v17 = nullptr;
  }
  else
  {
    v29 = a3;
    v28 = *(_BYTE *)a1[2];
    v27 = v13;
    v26 = *(_QWORD *)a1[3];
    v25 = (_QWORD *)a1[4];
    v24 = *(_DWORD *)(a2 + 64);
    v17 = (void *)strlen(a4);
    a3 = v29;
    v16 = v28;
    v13 = v27;
    v14 = v26;
    v15 = v25;
    v12 = v24;
  }
  sub_10FAD90((__int64)&src, v11, (__m128i *)a1[1], a2, a3, v16, a4, v17, v13, v14, v15, v12);
  v18 = src;
  v19 = 40LL * v31;
  v20 = v31;
  v21 = *(unsigned int *)(v10 + 8);
  v22 = v31 + v21;
  if ( v22 > *(unsigned int *)(v10 + 12) )
  {
    sub_2237220(v10, v10 + 16, v22, 40);
    v21 = *(unsigned int *)(v10 + 8);
  }
  if ( v19 )
  {
    memcpy((void *)(*(_QWORD *)v10 + 40 * v21), v18, v19);
    LODWORD(v21) = *(_DWORD *)(v10 + 8);
  }
  v23 = (__int64 *)src;
  *(_DWORD *)(v10 + 8) = v21 + v20;
  if ( v23 != &v32 )
    free(v23);
}
