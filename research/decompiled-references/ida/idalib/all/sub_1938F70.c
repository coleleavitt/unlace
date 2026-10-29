__int64 __fastcall sub_1938F70(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 *v10; // r14
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  int v19; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v20; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-C0h]
  _BYTE v23[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), a3, a4);
    LODWORD(v4) = v5 & 0xFFFFFFFE;
    if ( v5 == 1 )
      return 0;
  }
  v6 = *(_QWORD *)(a2 + 32);
  v19 = v6;
  if ( v6 )
  {
    v7 = sub_1933BC0(a1, v6, a3, a4);
    if ( v7 != 1 )
    {
      v19 = v7 & 0xFFFFFFFE;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v8 = *(unsigned int *)(a2 + 16);
  v22 = 0x1000000000LL;
  ptr = v23;
  if ( v8 > 0x10 )
  {
    sub_2237220(&ptr, v23, v8, 8);
    v8 = *(unsigned int *)(a2 + 16);
  }
  v9 = a2 + 8 * v8 + 72;
  if ( v9 == a2 + 72 )
  {
    v12 = v22;
LABEL_16:
    v17 = sub_1B3BC90(
            *(_QWORD *)(*a1 + 760),
            v4,
            v19,
            *(_DWORD *)(a2 + 52),
            *(_DWORD *)(a2 + 60),
            *(_DWORD *)(a2 + 56),
            *(_DWORD *)(a2 + 64),
            (__int64)ptr,
            v12,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    v10 = (unsigned __int64 *)(a2 + 72);
    while ( 1 )
    {
      v13 = sub_1933BC0(a1, *v10, a3, a4);
      if ( v13 == 1 )
        break;
      v14 = (unsigned int)v22;
      v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v22 + 1LL;
      if ( v16 <= HIDWORD(v22) )
      {
        v11 = ptr;
      }
      else
      {
        v20 = v15;
        sub_2237220(&ptr, v23, v16, 8);
        v14 = (unsigned int)v22;
        v11 = ptr;
        v15 = v20;
      }
      v11[v14] = v15;
      ++v10;
      v12 = v22 + 1;
      LODWORD(v22) = v22 + 1;
      if ( (unsigned __int64 *)v9 == v10 )
        goto LABEL_16;
    }
    v17 = 0;
  }
  if ( ptr != v23 )
    free(ptr);
  return v17;
}
