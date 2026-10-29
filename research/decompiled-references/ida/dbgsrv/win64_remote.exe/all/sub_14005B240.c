/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B240
// Address: 0x000000014005B240

//----- (000000014005B240) ----------------------------------------------------
size_t __fastcall sub_14005B240(struct __crt_locale_pointers *a1, signed __int64 BufferCount, char *Str, va_list a4)
{
  size_t v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  void *v12; // rsp
  unsigned __int8 *Format; // rsi
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // ecx
  unsigned __int8 v17[16]; // [rsp+40h] [rbp+0h] BYREF

  if ( !Str )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(539);
  }
  if ( a1 )
  {
    if ( BufferCount < 0 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1225);
    }
    if ( BufferCount <= 1 )
    {
      if ( BufferCount )
        LOBYTE(a1->locinfo) = 0;
      return 0;
    }
    LOBYTE(a1->locinfo) = 0;
  }
  else if ( BufferCount )
  {
    return 0;
  }
  v9 = strlen(Str);
  v10 = v9 + 100;
  v11 = v9 + 115;
  if ( v11 <= v10 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  Format = sub_14005ACB0((unsigned __int8 *)Str, v17, v10);
  v14 = *sub_1400207F0();
  if ( a1 )
    v15 = _stdio_common_vsnprintf_s(
            v14,
            (char *)a1,
            BufferCount,
            0xFFFFFFFFFFFFFFFFuLL,
            (const char *)Format,
            nullptr,
            a4);
  else
    v15 = common_vsprintf<__crt_stdio_output::standard_base,char>(
            (unsigned int)v14 | 2,
            0,
            0,
            (int)Format,
            nullptr,
            (__int64)a4);
  v16 = v15;
  if ( v15 < 0 )
    v16 = -1;
  if ( v16 < 0 )
  {
    if ( BufferCount )
      goto LABEL_22;
    return 0;
  }
  if ( v16 < (unsigned __int64)BufferCount || !BufferCount )
    return v16;
LABEL_22:
  if ( !a1 )
    return 0;
  v16 = BufferCount - 1;
  *((_BYTE *)a1 + (int)BufferCount - 1) = 0;
  if ( (int)BufferCount - 1 >= 0 )
    return v16;
  return strlen((const char *)a1);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
