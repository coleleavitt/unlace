__int64 __fastcall sub_8DFC30(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v4; // rdx
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 24) == 0;
  v8[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 16);
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = &byte_22F0C30;
  }
  sub_8D77E0(a2, v2, v4);
  v5 = pack_dd(v7, v8, *(unsigned int *)(a1 + 40)) - (_QWORD)v7;
  if ( v5 )
    sub_8D77E0(a2, v7, v5);
  sub_3A0970(a2, *(_DWORD *)(a1 + 44));
  return sub_8D6E80(a2, *(_BYTE *)(a1 + 48));
}
