__int64 __fastcall get_offset_expression(char **a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 *v8; // r12
  char v10; // dl
  __int64 result; // rax
  __m128i v13[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v8 = *(__int64 **)(qword_2CCB598 + 1672);
  v14 = __readfsqword(0x28u);
  v10 = sub_4E21C0(v8, v13, a2, a3);
  result = 0;
  if ( v10 )
    return sub_4E4B80(v8, a1, a2, a3, (__int64)v13, a4, a5, a6);
  return result;
}
