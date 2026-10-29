/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F2F0
// Address: 0x000000014005F2F0

//----- (000000014005F2F0) ----------------------------------------------------
__int64 __fastcall sub_14005F2F0(const char **a1, const char *a2, const char *a3)
{
  const char *v6; // r12
  const char *v7; // rcx
  const char *v8; // rcx
  char *v9; // r15
  int v10; // ebx
  __int64 v11; // rbx
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // r15
  void *v17; // rax
  __int64 result; // rax
  const char **i; // rsi
  const char *v20; // rdx
  void *Block; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]

  v6 = Str1;
  if ( a1[1] )
    v7 = *a1;
  else
    v7 = Str1;
  if ( !strcmp(v7, a2) )
  {
    v8 = Str1;
    if ( a1[4] )
      v8 = a1[3];
    if ( !strcmp(v8, a3) )
      return (__int64)a1[6];
  }
  v9 = (char *)a1[6];
  if ( v9 != (char *)-1LL )
  {
    (*((void (__fastcall **)(_QWORD))v9 + 1))(*(_QWORD *)v9);
    v10 = *(_DWORD *)(*((__int64 (**)(void))v9 + 3))();
    free(v9);
    *errno() = v10;
    a1[6] = (const char *)-1LL;
  }
  v11 = 0;
  if ( a2 && (v12 = strlen(a2)) != 0 )
    sub_140001810((__int64)a1, a2, v12);
  else
    a1[1] = nullptr;
  if ( a3 && (v13 = strlen(a3)) != 0 )
    sub_140001810((__int64)(a1 + 3), a3, v13);
  else
    a1[4] = nullptr;
  v14 = sub_14005F560(a3, a2);
  a1[6] = (const char *)v14;
  if ( v14 == -1 && *a2 >= 0 && isdigit(*(unsigned __int8 *)a2) )
  {
    Block = nullptr;
    v22 = 0;
    v23 = 0;
    Block = sub_14005ABE0((__int64)&Block, nullptr, 3u, 1u);
    v22 = 3;
    strcpy((char *)Block, "CP");
    v15 = strlen(a2);
    v16 = v22 - 1;
    if ( !v22 )
      v16 = 0;
    if ( v15 + v16 + 1 <= v23 )
    {
      v17 = Block;
    }
    else
    {
      v17 = sub_14005ABE0((__int64)&Block, Block, v15 + v16 + 1, 1u);
      Block = v17;
    }
    v22 = v15 + v16 + 1;
    *((_BYTE *)v17 + v16 + v15) = 0;
    memcpy((char *)Block + v16, a2, v15);
    if ( v22 )
      v6 = (const char *)Block;
    a1[6] = (const char *)sub_14005F560(a3, v6);
    if ( Block )
    {
      v22 = 0;
      j_free(Block);
    }
  }
  result = (__int64)a1[6];
  if ( result == -1 )
  {
    for ( i = (const char **)off_1400AC740; strcmp(a2, *i); i += 2 )
    {
      if ( (unsigned __int64)++v11 >= 0xA )
        return (__int64)a1[6];
    }
    v20 = off_1400AC740[2 * v11 + 1];
    result = (__int64)a1[6];
    if ( v20 )
    {
      result = sub_14005F560(a3, v20);
      a1[6] = (const char *)result;
    }
  }
  return result;
}
// 1400AC740: using guessed type char *off_1400AC740[20];
