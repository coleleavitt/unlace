void __fastcall sub_128ED30(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  const void *v11; // r10
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // [rsp+8h] [rbp-100h]
  const void *v21; // [rsp+8h] [rbp-100h]
  __int64 v22; // [rsp+10h] [rbp-F8h]
  size_t v23; // [rsp+18h] [rbp-F0h]
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D8h] BYREF
  int v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+40h] [rbp-C8h]
  int v29; // [rsp+48h] [rbp-C0h]
  const char *v30; // [rsp+50h] [rbp-B8h]

  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(const void **)a5;
  v27 = 1;
  v12 = *(_QWORD *)(v10 + 4984);
  v13 = &v26;
  v28 = 0;
  ptr = &v26;
  v26 = v12;
  v30 = "nacl-arm-macros.s";
  v25 = 0x400000001LL;
  v14 = *(unsigned int *)(a5 + 8);
  v29 = 38;
  v15 = 5 * v14;
  v16 = 40 * v14;
  v17 = 0xCCCCCCCCCCCCCCCDLL * v15;
  if ( v17 + 1 > 4 )
  {
    v23 = v16;
    v22 = a6;
    v21 = v11;
    sub_2237220(&ptr, &v26, v17 + 1, 40);
    v19 = v25;
    v13 = (__int64 *)ptr;
    v11 = v21;
    a6 = v22;
    v16 = v23;
    v18 = 5LL * (unsigned int)v25;
  }
  else
  {
    v18 = 5;
    v19 = 1;
  }
  if ( v16 )
  {
    v20 = a6;
    memcpy(&v13[v18], v11, v16);
    v19 = v25;
    a6 = v20;
  }
  LODWORD(v25) = v19 + v17;
  sub_12230A0(a1, a2, a3, a4, (__int64)&ptr, a6);
  if ( ptr != &v26 )
    free(ptr);
}
