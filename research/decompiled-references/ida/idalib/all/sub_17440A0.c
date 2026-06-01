void __fastcall sub_17440A0(__int64 a1, const void *a2, __int64 a3)
{
  size_t v3; // r13
  unsigned __int64 v5; // rbx
  int v6; // eax
  char *v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  int v10; // edx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h]
  _BYTE v13[88]; // [rsp+10h] [rbp-58h] BYREF

  v3 = 8 * a3;
  v5 = (8 * a3) >> 3;
  v12 = 0x600000000LL;
  v6 = 0;
  v7 = v13;
  ptr = v13;
  if ( v5 > 6 )
  {
    sub_2237220(&ptr, v13, (8 * a3) >> 3, 8);
    v6 = v12;
    v7 = (char *)ptr + 8 * (unsigned int)v12;
  }
  if ( v3 )
  {
    memcpy(v7, a2, v3);
    v6 = v12;
  }
  v8 = v6 + v5;
  v9 = *(unsigned __int8 *)(a1 + 144);
  v10 = v8;
  LODWORD(v12) = v8;
  if ( (_BYTE)v9 != 0xFF )
  {
    if ( (_BYTE)v9 == 3 )
    {
      sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
      goto LABEL_11;
    }
    funcs_1576A39[v9]();
    v10 = v12;
  }
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x600000000LL;
  if ( v10 )
    sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
  *(_BYTE *)(a1 + 144) = 3;
LABEL_11:
  if ( ptr != v13 )
    free(ptr);
}
