/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x00075A54

//----- (00075A54) --------------------------------------------------------
int __fastcall qerrstr(int errnum)
{
  int v1; // r4
  char *v2; // r0
  char *v3; // r5
  size_t v4; // r0
  size_t v5; // r6
  unsigned int v6; // r7
  _DWORD *v7; // r0
  _DWORD *v8; // r7
  _DWORD *address; // r0
  _DWORD *v11; // [sp+0h] [bp-Ch]
  unsigned int v12; // [sp+4h] [bp-8h]
  void *ptr; // [sp+8h] [bp-4h]

  v1 = errnum;
  if ( errnum == -1 )
    v1 = *(_DWORD *)_errno(0);
  v2 = strerror(v1);
  if ( !v2 || (v3 = v2, (v4 = strlen(v2)) == 0) )
  {
    _emutls_get_address((size_t *)dword_DE26C)[23] = 0;
LABEL_10:
    address = _emutls_get_address((size_t *)dword_DE26C);
    sub_1DA58((int)(address + 22), "unknown error code %d", v1);
    return _emutls_get_address((size_t *)dword_DE26C)[22];
  }
  v5 = v4;
  v6 = v4 + 1;
  v7 = _emutls_get_address((size_t *)dword_DE26C);
  ptr = (void *)v7[22];
  v12 = v6;
  if ( v7[24] < v6 )
  {
    v11 = _emutls_get_address((size_t *)dword_DE26C);
    ptr = qvector_reserve((int)(v11 + 22), ptr, v6, 1u);
    v11[22] = ptr;
  }
  v8 = _emutls_get_address((size_t *)dword_DE26C);
  v8[23] = v12;
  memmove(ptr, v3, v5);
  *(_BYTE *)(v8[22] + v5) = 0;
  if ( v8[23] <= 1u )
    goto LABEL_10;
  return _emutls_get_address((size_t *)dword_DE26C)[22];
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DE26C: using guessed type int dword_DE26C[4];
