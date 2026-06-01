__int64 __fastcall dwarf_set_harmless_error_list_size(char *a1, int a2)
{
  __int64 result; // rax
  int v3; // r12d
  unsigned int v4; // ebp
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  result = 0;
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)a1 == 3959286781LL )
  {
    v3 = *((_DWORD *)a1 + 2694);
    if ( a2 && v3 != a2 + 1 )
    {
      v6 = *((_QWORD *)a1 + 1349);
      v5 = _mm_loadu_si128((const __m128i *)(a1 + 10776));
      _dwarf_harmless_init(a1 + 10776);
      v4 = v5.m128i_u32[2];
      if ( v5.m128i_i32[1] != v5.m128i_i32[2] )
      {
        do
        {
          dwarf_insert_harmless_error((Dwarf_Debug)a1, *(char **)(v6 + 8LL * v4));
          v4 = (v4 + 1) % v5.m128i_i32[0];
        }
        while ( v5.m128i_i32[1] != v4 );
        if ( *((_DWORD *)a1 + 2697) < v5.m128i_i32[3] )
          *((_DWORD *)a1 + 2697) = v5.m128i_i32[3];
      }
      _dwarf_harmless_cleanout(&v5);
      return (unsigned int)(v3 - 1);
    }
    else
    {
      return (unsigned int)(v3 - 1);
    }
  }
  return result;
}

