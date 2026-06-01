unsigned __int64 __fastcall sub_8DEA00(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v3; // rax
  __int64 v4; // rbx
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax
  _BYTE v9[5]; // [rsp+3h] [rbp-45h] BYREF
  unsigned __int64 v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v10[0] = __readfsqword(0x28u);
  v3 = pack_dd(v9, v10, (unsigned int)v2) - (_QWORD)v9;
  if ( v3 )
    sub_8D77E0(a2, v9, v3);
  v4 = 0;
  if ( v2 )
  {
    do
    {
      v6 = haystack;
      v7 = *(_QWORD *)(a1 + 16) + 24 * v4;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 )
      {
        v5 = strlen(v6) + 1;
      }
      else
      {
        v5 = 1;
        v6 = &byte_22F0C30;
      }
      ++v4;
      sub_8D77E0(a2, v6, v5);
    }
    while ( v2 != v4 );
  }
  return v10[0] - __readfsqword(0x28u);
}
