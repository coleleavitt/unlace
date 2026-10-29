__int64 __fastcall dirtree_find_entry(__m128i *a1, _QWORD *a2, int *a3)
{
  int v3; // ecx
  char v4; // dl
  __int64 result; // rax
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-38h] BYREF
  __m128i v7; // [rsp+8h] [rbp-30h] BYREF
  int v8; // [rsp+18h] [rbp-20h]
  char v9; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v6 = off_2B0F650;
  v3 = *a3;
  v4 = *((_BYTE *)a3 + 4);
  v7.m128i_i64[0] = 0xFFFFFFFFLL;
  v7.m128i_i64[1] = -1;
  v8 = v3;
  v9 = v4;
  dirtree_traverse(*a2, &v6);
  if ( a1 )
    *a1 = _mm_loadu_si128(&v7);
  result = 0;
  if ( v7.m128i_i32[0] == -1 )
  {
    LOBYTE(result) = v7.m128i_i64[1] != 0;
    return (unsigned int)(2 * result);
  }
  return result;
}

