__int64 __fastcall sub_199E720(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // rdx
  __int64 *v10; // r15
  bool v11; // bl
  __int64 v12; // r13
  __m128 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v17; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v18; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  _BYTE v21[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = a2;
  v17 = sub_1999380(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v17 == 1 )
    return 1;
  v8 = *(_DWORD *)(a2 + 12);
  v20 = 0x800000000LL;
  ptr = v21;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (__int64 *)(a2 + 24);
    v11 = 0;
    v12 = a2 + 8 * v9 + 32;
    while ( 1 )
    {
      v13 = sub_199E5B0(a1, *v10, a3, a4, v9, v5, v6, v7);
      if ( v13 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v14 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v11 )
        v11 = *v10 != v14;
      v5 = (unsigned int)v20;
      v15 = (unsigned int)v20 + 1LL;
      if ( v15 <= HIDWORD(v20) )
      {
        v9 = (__int64)ptr;
      }
      else
      {
        v18 = v14;
        sub_2237220(&ptr, v21, v15, 8);
        v5 = (unsigned int)v20;
        v9 = (__int64)ptr;
        v14 = v18;
      }
      ++v10;
      *(_QWORD *)(v9 + 8 * v5) = v14;
      LODWORD(v20) = v20 + 1;
      if ( v10 == (__int64 *)v12 )
        goto LABEL_14;
    }
    v4 = 1;
  }
  else
  {
    v11 = 0;
LABEL_14:
    sub_1C3BC60(*a1, *(unsigned int *)(a2 + 8), 1);
    if ( *(_QWORD *)(a2 + 16) != (v17 & 0xFFFFFFFFFFFFFFFELL) || v11 )
      v4 = sub_1C3BDD0(*a1, *(unsigned int *)(a2 + 8), v17 & 0xFFFFFFFFFFFFFFFELL, ptr);
  }
  if ( ptr != v21 )
    free(ptr);
  return v4;
}
