void __fastcall sub_1A399A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // rbp
  char *v7; // rsi
  __int64 v8; // rbx
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r13
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  void *v16[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF

  v3 = sub_227D6D0(a1, a2);
  v4 = j__strlen("lookup results for ");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_227BF10(v3, "lookup results for ", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, "lookup results for ", v4);
    *(_QWORD *)(v3 + 32) += v6;
  }
  v15 = *(_QWORD *)(a1 + 120);
  sub_B86A00((__int64)v16, &v15);
  v7 = (char *)v16[0];
  v8 = sub_227BF10(v3, v16[0], v16[1]);
  v9 = j__strlen(":\n");
  v10 = *(void **)(v8 + 32);
  v11 = v9;
  if ( v9 > *(_QWORD *)(v8 + 24) - (_QWORD)v10 )
  {
    v7 = ":\n";
    sub_227BF10(v8, ":\n", v9);
  }
  else if ( v9 )
  {
    v7 = ":\n";
    memcpy(v10, ":\n", v9);
    *(_QWORD *)(v8 + 32) += v11;
  }
  if ( v16[0] != &v17 )
    operator delete(v16[0]);
  v12 = *(__int64 **)(a1 + 8);
  v13 = &v12[*(unsigned int *)(a1 + 16)];
  while ( v13 != v12 )
  {
    v14 = *v12++;
    sub_AE8B90(v14 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v7);
  }
}
