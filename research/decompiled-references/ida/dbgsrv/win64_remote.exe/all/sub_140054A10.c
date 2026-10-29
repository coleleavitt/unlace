/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054A10
// Address: 0x0000000140054A10

//----- (0000000140054A10) ----------------------------------------------------
__int64 __fastcall sub_140054A10(__int64 a1, char *a2, va_list a3)
{
  int v6; // eax
  unsigned __int64 v7; // rbx
  struct __crt_locale_pointers *v8; // rax
  unsigned __int64 v9; // rax
  const char *v10; // r9
  __int64 result; // rax
  unsigned int v12; // ebx
  void *Block; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-60h]
  unsigned __int64 v15; // [rsp+30h] [rbp-58h]
  struct __crt_locale_pointers v16[2]; // [rsp+38h] [rbp-50h] BYREF

  Block = nullptr;
  v14 = 0;
  v15 = 0;
  v6 = sub_14005B240(nullptr, 0, a2, a3);
  if ( v6 )
  {
    v7 = v6 + 1LL;
    if ( v7 <= v15 )
    {
      v8 = (struct __crt_locale_pointers *)Block;
    }
    else
    {
      v8 = (struct __crt_locale_pointers *)sub_14005ABE0((__int64)&Block, Block, v7, 1u);
      Block = v8;
    }
    v14 = v7;
    sub_14005B240(v8, v7, a2, a3);
  }
  v9 = sub_14005A7C0();
  sub_140054690(v16, 25, v9, 0);
  v10 = Str1;
  if ( v14 )
    v10 = (const char *)Block;
  result = sub_1400542D0("%s [%u] %s", (const char *)v16, *(_DWORD *)(a1 + 168), v10);
  v12 = result;
  if ( Block )
  {
    v14 = 0;
    j_free(Block);
    return v12;
  }
  return result;
}
