void __fastcall sub_17441C0(__int64 a1, const void *a2, __int64 a3, char a4)
{
  size_t v5; // r13
  unsigned __int64 v6; // rbp
  int v8; // eax
  char *v9; // rdi
  int v10; // ebp
  __int64 v11; // rax
  int v12; // edx
  char v13; // al
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+8h] [rbp-80h]
  _BYTE v16[48]; // [rsp+10h] [rbp-78h] BYREF
  char v17; // [rsp+40h] [rbp-48h]

  v5 = 8 * a3;
  v6 = (8 * a3) >> 3;
  v15 = 0x600000000LL;
  v8 = 0;
  v9 = v16;
  ptr = v16;
  if ( v6 > 6 )
  {
    sub_2237220(&ptr, v16, (8 * a3) >> 3, 8);
    v8 = v15;
    v9 = (char *)ptr + 8 * (unsigned int)v15;
  }
  if ( v5 )
  {
    memcpy(v9, a2, v5);
    v8 = v15;
  }
  v10 = v8 + v6;
  v11 = *(unsigned __int8 *)(a1 + 144);
  v17 = a4;
  v12 = v10;
  LODWORD(v15) = v10;
  if ( (_BYTE)v11 != 0xFF )
  {
    if ( (_BYTE)v11 == 4 )
    {
      sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
      *(_BYTE *)(a1 + 80) = v17;
      goto LABEL_11;
    }
    funcs_1576A39[v11]();
    v12 = v15;
  }
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x600000000LL;
  if ( v12 )
    sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
  v13 = v17;
  *(_BYTE *)(a1 + 144) = 4;
  *(_BYTE *)(a1 + 80) = v13;
LABEL_11:
  if ( ptr != v16 )
    free(ptr);
}
