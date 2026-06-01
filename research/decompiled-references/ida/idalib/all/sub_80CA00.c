unsigned __int64 __fastcall sub_80CA00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  __int64 v4; // r13
  size_t v5; // rax
  __int64 v6; // rbx
  size_t v7; // rdx
  const char *v8; // r15
  __int64 v9; // rax
  _BYTE v11[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v12[0] = __readfsqword(0x28u);
  v3 = pack_dd(v11, v12, v2) - (_QWORD)v11;
  if ( v3 )
    sub_80AD70(a2, v11, v3);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = pack_dd(v11, v12, (unsigned int)v4) - (_QWORD)v11;
  if ( v5 )
    sub_80AD70(a2, v11, v5);
  v6 = 0;
  if ( v4 )
  {
    do
    {
      v8 = haystack;
      v9 = *(_QWORD *)(a1 + 16) + 24 * v6;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      if ( v8 )
      {
        v7 = strlen(v8) + 1;
      }
      else
      {
        v7 = 1;
        v8 = &byte_22F0C30;
      }
      ++v6;
      sub_80AD70(a2, v8, v7);
    }
    while ( v4 != v6 );
  }
  return v12[0] - __readfsqword(0x28u);
}
