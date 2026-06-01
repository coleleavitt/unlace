__int64 __fastcall sub_1954210(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 *v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int16 **v9; // r15
  _QWORD *v10; // rdx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  int v18; // r9d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdi
  unsigned __int64 v22; // [rsp+8h] [rbp-E0h]
  __m128i v23; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr = v26;
  v25 = 0x1000000000LL;
  v4 = (unsigned __int16 *)sub_EB5A20(a2);
  v5 = (int)v4;
  if ( v4 )
  {
    v6 = sub_1944E10(a1, v4, a3, a4);
    v5 = v6 & 0xFFFFFFFE;
    if ( v6 == 1 )
    {
LABEL_12:
      v16 = 0;
      goto LABEL_13;
    }
  }
  v7 = *(unsigned int *)(a2 + 16);
  if ( HIDWORD(v25) < *(_DWORD *)(a2 + 16) )
  {
    sub_2237220(&ptr, v26, v7, 8);
    v7 = *(unsigned int *)(a2 + 16);
  }
  v8 = a2 + 8 * v7 + 40;
  if ( v8 != a2 + 40 )
  {
    v9 = (unsigned __int16 **)(a2 + 40);
    while ( 1 )
    {
      v12 = sub_1944E10(a1, *v9, a3, a4);
      if ( v12 == 1 )
        goto LABEL_12;
      v13 = (unsigned int)v25;
      v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v25 + 1LL;
      if ( v15 <= HIDWORD(v25) )
      {
        v10 = ptr;
      }
      else
      {
        v22 = v14;
        sub_2237220(&ptr, v26, v15, 8);
        v13 = (unsigned int)v25;
        v10 = ptr;
        v14 = v22;
      }
      v10[v13] = v14;
      ++v9;
      v11 = v25 + 1;
      LODWORD(v25) = v25 + 1;
      if ( (unsigned __int16 **)v8 == v9 )
        goto LABEL_17;
    }
  }
  v11 = v25;
LABEL_17:
  v18 = *(_DWORD *)a2;
  v19 = *(_DWORD *)(a2 + 4);
  v20 = *(_DWORD *)(a2 + 12);
  v21 = *(_QWORD *)(*a1 + 760);
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 20));
  v16 = sub_1B39770(v21, (unsigned int)&v23, v5, (_DWORD)ptr, v11, v18, v20, v19);
LABEL_13:
  if ( ptr != v26 )
    free(ptr);
  return v16;
}
