void *__fastcall sub_503B10(__int64 a1, __int64 *a2, const void *a3)
{
  __int64 (__fastcall *v3)(const void *, _BYTE *, _BYTE *); // rcx
  size_t v4; // rax
  _BYTE v6[1024]; // [rsp+0h] [rbp-428h] BYREF
  _BYTE v7[8]; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v3 = *(__int64 (__fastcall **)(const void *, _BYTE *, _BYTE *))(a1 + 64);
  v8 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = v3(a3, v6, v7);
    if ( v4 > 0x400 )
    {
      v4 = 1024;
    }
    else if ( !v4 )
    {
      return (void *)(v8 - __readfsqword(0x28u));
    }
    sub_5039B0(a2, v6, v4);
    return (void *)(v8 - __readfsqword(0x28u));
  }
  if ( !*(_WORD *)(a1 + 8) )
    return (void *)(v8 - __readfsqword(0x28u));
  return sub_5039B0(a2, a3, *(unsigned __int16 *)(a1 + 8));
}
