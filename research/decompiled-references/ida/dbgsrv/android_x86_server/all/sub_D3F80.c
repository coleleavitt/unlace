/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3F80
// Address: 0x000D3F80

//----- (000D3F80) --------------------------------------------------------
int __cdecl sub_D3F80(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  int v6; // eax
  char *v7; // ecx
  unsigned int v8; // eax
  void *v9; // eax
  size_t v10; // eax
  _DWORD v12[9]; // [esp+8h] [ebp-24h] BYREF

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 10) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 10) )
      v5 = (size_t)(v2 + 10);
    a2[2] = (void *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = (char *)a2[1];
  }
  else
  {
    v4 = (char *)*a2;
  }
  qmemcpy(&v2[(_DWORD)v4], "sizeof...(", 10);
  a2[1] = (char *)a2[1] + 10;
  v6 = *(_DWORD *)(a1 + 8);
  v12[1] = 16843037;
  v12[0] = off_139F64;
  v12[2] = v6;
  sub_CFE80((int)v12, (char **)a2);
  v7 = (char *)a2[1];
  v8 = (unsigned int)a2[2];
  if ( (unsigned int)(v7 + 1) >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < (unsigned int)(v7 + 1) )
      v10 = (size_t)(v7 + 1);
    a2[2] = (void *)v10;
    v9 = realloc(*a2, v10);
    *a2 = v9;
    v7 = (char *)a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v7[(_DWORD)v9] = 41;
  a2[1] = (char *)a2[1] + 1;
  return _stack_chk_guard;
}
// 139F64: using guessed type int (*off_139F64[3])();
