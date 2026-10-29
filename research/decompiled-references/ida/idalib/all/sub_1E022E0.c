unsigned __int64 __fastcall sub_1E022E0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rdi
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned __int64 *v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v24; // [rsp+18h] [rbp-70h]
  _BYTE v25[104]; // [rsp+20h] [rbp-68h] BYREF

  v5 = *(unsigned int **)(a2 + 40);
  ptr = v25;
  v24 = 0x500000000LL;
  v6 = sub_EF5320(v5);
  v7 = *(unsigned int **)(a2 + 40);
  v8 = (unsigned __int64 *)(v6 + 8LL * v7[1]);
  v9 = sub_EF5320(v7);
  if ( v8 == (unsigned __int64 *)v9 )
  {
    v10 = (unsigned int)v24;
  }
  else
  {
    v13 = (unsigned __int64 *)v9;
    do
    {
      v14 = (unsigned __int64)sub_1DF2070(*(_QWORD *)a1, *v13, *(_QWORD *)(a1 + 32), v10, v11, v12, a3, a4)
          & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v24 + 1LL;
      if ( v15 > HIDWORD(v24) )
        sub_2237220(&ptr, v25, v15, 8);
      *((_QWORD *)ptr + (unsigned int)v24) = v14;
      ++v13;
      v10 = (unsigned int)(v24 + 1);
      LODWORD(v24) = v24 + 1;
    }
    while ( v8 != v13 );
  }
  v16 = sub_1B44F60(*(__int64 **)(*(_QWORD *)a1 + 760LL), *(unsigned int *)(a2 + 24), (__int64 *)ptr, v10, a3);
  *(_BYTE *)(v16 + 29) &= 0x9Fu;
  v17 = v16;
  sub_B94AD0(*(__m128i **)(a1 + 24), v16, v18, v19, v20, v21);
  if ( ptr != v25 )
    free(ptr);
  return v17;
}
