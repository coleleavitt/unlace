unsigned __int64 __fastcall sub_30D30(__int64 a1, char **a2)
{
  size_t v2; // rax
  _BYTE v4[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v5[4]; // [rsp+18h] [rbp-20h] BYREF

  v5[0] = __readfsqword(0x28u);
  sub_30190(a2, (const void *)(a1 + 9), 6u);
  v2 = sub_28F50(v4, (unsigned __int64)v5, *(_QWORD *)(a1 + 16)) - v4;
  if ( v2 )
    sub_30190(a2, v4, v2);
  return v5[0] - __readfsqword(0x28u);
}

