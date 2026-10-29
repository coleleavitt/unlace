__int64 __fastcall sub_1D67610(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 *v11; // r15
  bool v12; // bl
  __int64 v13; // r13
  __m128 *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned int *v20; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  _BYTE v24[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = a2;
  v20 = sub_1D42A80(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v20 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  v9 = *(_DWORD *)(a2 + 12);
  v23 = 0x800000000LL;
  ptr = v24;
  if ( v9 )
  {
    v10 = (unsigned int)(v9 - 1);
    v11 = (__int64 *)(a2 + 24);
    v12 = 0;
    v13 = a2 + 8 * v10 + 32;
    while ( 1 )
    {
      v14 = sub_1D67490(a1, *v11, a3, a4, v10, v6, v7, v8);
      if ( v14 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v15 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v12 )
        v12 = *v11 != v15;
      v6 = (unsigned int)v23;
      v16 = (unsigned int)v23 + 1LL;
      if ( v16 <= HIDWORD(v23) )
      {
        v10 = (__int64)ptr;
      }
      else
      {
        v21 = v15;
        sub_2237220(&ptr, v24, v16, 8);
        v6 = (unsigned int)v23;
        v10 = (__int64)ptr;
        v15 = v21;
      }
      ++v11;
      *(_QWORD *)(v10 + 8 * v6) = v15;
      LODWORD(v23) = v23 + 1;
      if ( v11 == (__int64 *)v13 )
        goto LABEL_14;
    }
    v4 = 1;
  }
  else
  {
    v12 = 0;
LABEL_14:
    sub_1C3BC60((_QWORD *)*a1, *(_DWORD *)(a2 + 8), 1);
    v18 = *a1;
    v19 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v19 || v12 )
      v4 = sub_1C3BDD0(v18, *(unsigned int *)(a2 + 8), v19, ptr, (unsigned int)v23);
  }
  if ( ptr != v24 )
    free(ptr);
  return v4;
}
