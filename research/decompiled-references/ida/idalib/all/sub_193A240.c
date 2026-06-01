__int64 __fastcall sub_193A240(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int64 *v9; // r15
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v17; // [rsp+8h] [rbp-80h]
  __int16 v18; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h]
  _BYTE v21[96]; // [rsp+28h] [rbp-60h] BYREF

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 32), a3, a4);
  if ( v4 == 1 )
    return 0;
  v5 = v4;
  v18 = *(_WORD *)(a2 + 24);
  v20 = 0x400000000LL;
  v6 = *(unsigned int *)(a2 + 16);
  ptr = v21;
  v7 = (unsigned int)(v6 - 1);
  if ( (unsigned int)v7 > 4 )
  {
    sub_2237220(&ptr, v21, v7, 8);
    v6 = *(unsigned int *)(a2 + 16);
  }
  v8 = a2 + 8 * v6 + 32;
  v9 = (unsigned __int64 *)(a2 + 40);
  if ( v8 == a2 + 40 )
  {
LABEL_11:
    v15 = sub_1B33F80(
            *(_QWORD *)(*a1 + 760),
            v5 & 0xFFFFFFFE,
            (unsigned int)&v18,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    while ( 1 )
    {
      v11 = sub_1933BC0(a1, *v9, a3, a4);
      if ( v11 == 1 )
        break;
      v12 = (unsigned int)v20;
      v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v20 + 1LL;
      if ( v14 <= HIDWORD(v20) )
      {
        v10 = ptr;
      }
      else
      {
        v17 = v13;
        sub_2237220(&ptr, v21, v14, 8);
        v12 = (unsigned int)v20;
        v10 = ptr;
        v13 = v17;
      }
      ++v9;
      v10[v12] = v13;
      LODWORD(v20) = v20 + 1;
      if ( (unsigned __int64 *)v8 == v9 )
        goto LABEL_11;
    }
    v15 = 0;
  }
  if ( ptr != v21 )
    free(ptr);
  return v15;
}
