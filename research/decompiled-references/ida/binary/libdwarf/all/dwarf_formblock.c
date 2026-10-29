__int64 __fastcall dwarf_formblock(__int64 a1, __m128i **a2, __int64 a3)
{
  unsigned int v4; // ebp
  __m128i *alloc; // rax
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  __m128i v9; // [rsp+10h] [rbp-58h] BYREF
  __m128i v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned int)sub_1F170(&v8, &v7, a1, a3) )
  {
    v4 = _dwarf_formblock_internal(v8, a1, v7, &v9, a3);
    if ( v4 )
      return v4;
    alloc = (__m128i *)_dwarf_get_alloc(v8, 6, 1);
    if ( alloc )
    {
      *alloc = _mm_load_si128(&v9);
      alloc[1] = _mm_load_si128(&v10);
      *a2 = alloc;
      return v4;
    }
    _dwarf_error(v8, a3, 62);
  }
  return 1;
}

