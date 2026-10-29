void __fastcall sub_20309B0(_QWORD *a1, const void *a2, size_t a3, unsigned int a4)
{
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // [rsp+Ch] [rbp-84h]
  char *s; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-60h]
  _BYTE v14[88]; // [rsp+38h] [rbp-58h] BYREF

  if ( a4 )
  {
    v7 = *((_BYTE *)a1 + 8) == 0;
    v8 = *a1;
    if ( v7 )
      v8 = sub_202F8E0(v8, (const char **)a1 + 2);
    else
      *((_BYTE *)a1 + 8) = 0;
    v9 = sub_9954E0(v8, a2, a3);
    sub_995540(v9, ": ");
    ptr = v14;
    v13 = 0x800000000LL;
    v10 = sub_206E080(a4);
    s = " | ";
    sub_227B910(*a1, v10);
    if ( ptr != v14 )
      free(ptr);
  }
}
