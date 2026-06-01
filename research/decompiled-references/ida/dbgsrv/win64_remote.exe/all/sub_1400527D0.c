/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400527D0
// Address: 0x00000001400527D0

//----- (00000001400527D0) ----------------------------------------------------
void sub_1400527D0(char *Str, ...)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  struct __crt_locale_pointers *v4; // rax
  const char *v5; // rbx
  const char *v6; // rdx
  void *Block; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-40h]
  unsigned __int64 v9; // [rsp+30h] [rbp-38h]
  va_list va; // [rsp+78h] [rbp+10h] BYREF

  va_start(va, Str);
  Block = nullptr;
  v8 = 0;
  v9 = 0;
  v2 = sub_14005B240(nullptr, 0, Str, va);
  if ( v2 )
  {
    v3 = v2 + 1LL;
    if ( v3 <= v9 )
    {
      v4 = (struct __crt_locale_pointers *)Block;
    }
    else
    {
      v4 = (struct __crt_locale_pointers *)sub_14005ABE0((__int64)&Block, Block, v3, 1u);
      Block = v4;
    }
    v8 = v3;
    sub_14005B240(v4, v3, Str, va);
  }
  v5 = Str1;
  v6 = Str1;
  if ( v8 )
    v6 = (const char *)Block;
  sub_1400542D0("%s\n", v6);
  if ( v8 )
    v5 = (const char *)Block;
  sub_14002E660((signed __int64)&dword_140091764, v5);
  if ( Block )
  {
    v8 = 0;
    j_free(Block);
  }
}
// 140091764: using guessed type int dword_140091764;
