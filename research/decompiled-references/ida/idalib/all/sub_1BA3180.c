__int64 __fastcall sub_1BA3180(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 *v9; // r15
  __int64 v10; // rbp
  __m128 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-98h]
  unsigned __int64 v17; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  _BYTE v20[120]; // [rsp+20h] [rbp-78h] BYREF

  v16 = sub_1B7B360(a1, *(unsigned int **)(a2 + 16), a3, a4);
  if ( v16 == 1 )
    return 1;
  v19 = 0x800000000LL;
  v8 = *(_DWORD *)(a2 + 12);
  ptr = v20;
  if ( v8 )
  {
    v9 = (__int64 *)(a2 + 24);
    v10 = a2 + 8LL * (unsigned int)(v8 - 1) + 32;
    while ( 1 )
    {
      v11 = sub_1BA3040(a1, *v9, a3, a4, (__int64)v4, v5, v6, v7);
      if ( v11 == (__m128 *)((char *)&dword_0 + 1) )
        break;
      v5 = (unsigned int)v19;
      v12 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v19 + 1LL;
      if ( v13 <= HIDWORD(v19) )
      {
        v4 = ptr;
      }
      else
      {
        v17 = v12;
        sub_2237220(&ptr, v20, v13, 8);
        v5 = (unsigned int)v19;
        v4 = ptr;
        v12 = v17;
      }
      ++v9;
      v4[v5] = v12;
      LODWORD(v19) = v19 + 1;
      if ( (__int64 *)v10 == v9 )
        goto LABEL_11;
    }
    v14 = 1;
  }
  else
  {
LABEL_11:
    sub_1C3BC60(*a1, *(unsigned int *)(a2 + 8), 1);
    v14 = sub_1C3BDD0(*a1, *(unsigned int *)(a2 + 8), v16 & 0xFFFFFFFFFFFFFFFELL, ptr);
  }
  if ( ptr != v20 )
    free(ptr);
  return v14;
}
