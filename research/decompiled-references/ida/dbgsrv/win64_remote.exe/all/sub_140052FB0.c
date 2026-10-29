/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052FB0
// Address: 0x0000000140052FB0

//----- (0000000140052FB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140052FB0(_BYTE *a1, int a2, char *a3, va_list a4)
{
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rbx
  struct __crt_locale_pointers *v10; // rax
  const char *v11; // rsi
  size_t v12; // rax
  size_t v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  char *v17; // rcx
  void *v18; // rax
  unsigned __int64 v19; // rbx
  void *Block; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]
  unsigned __int64 v23; // [rsp+30h] [rbp-20h]
  void *v24; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-10h]
  unsigned __int64 v26; // [rsp+48h] [rbp-8h]

  if ( a1[68] )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1621);
  }
  if ( a2 )
  {
    v7 = 52;
    if ( a2 > 0 )
      v7 = 54;
  }
  else
  {
    v7 = 53;
  }
  sub_140054B30((__int64 *)&v24, v7);
  Block = nullptr;
  v22 = 0;
  v23 = 0;
  v8 = sub_14005B240(nullptr, 0, a3, a4);
  if ( v8 )
  {
    v9 = v8 + 1LL;
    if ( v9 <= v23 )
    {
      v10 = (struct __crt_locale_pointers *)Block;
    }
    else
    {
      v10 = (struct __crt_locale_pointers *)sub_14005ABE0((__int64)&Block, Block, v9, 1u);
      Block = v10;
    }
    v22 = v9;
    sub_14005B240(v10, v9, a3, a4);
  }
  if ( v22 )
  {
    v11 = pNodeName;
    if ( Block )
      v11 = (const char *)Block;
  }
  else
  {
    v11 = Str1;
  }
  v12 = strlen(v11);
  v13 = v12 + 1;
  if ( v12 != -1 )
  {
    v14 = v25;
    v15 = v25;
    v16 = v13 + v25;
    if ( v13 + v25 < v25 )
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v16 <= v25 )
    {
      if ( v16 != v25 )
      {
        if ( v16 < v25 )
          v14 = v16;
        v25 = v14;
      }
    }
    else
    {
      if ( v16 <= v26 )
      {
        v17 = (char *)v24;
      }
      else
      {
        v17 = (char *)sub_14005ABE0((__int64)&v24, v24, v16, 1u);
        v24 = v17;
        v14 = v25;
      }
      memset(&v17[v14], 0, v16 - v14);
      v25 = v16;
    }
    memcpy((char *)v24 + v15, v11, v13);
  }
  v18 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 8LL))(
                  a1,
                  (unsigned __int8)v7,
                  &v24);
  j_free(v18);
  if ( v7 == 52 )
    exit(1);
  v19 = v22 - 1;
  if ( !v22 )
    v19 = 0;
  if ( Block )
  {
    v22 = 0;
    j_free(Block);
    Block = nullptr;
    v23 = 0;
  }
  if ( v24 )
  {
    v25 = 0;
    j_free(v24);
  }
  return v19;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
