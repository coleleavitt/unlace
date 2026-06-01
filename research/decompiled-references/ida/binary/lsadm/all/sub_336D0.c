unsigned __int64 __fastcall sub_336D0(__int64 a1, char **a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v7[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  sub_30190(a2, (const void *)a1, 6u);
  v2 = sub_28E10(v6, (unsigned __int64)v7, *(_DWORD *)(a1 + 8)) - v6;
  if ( v2 )
    sub_30190(a2, v6, v2);
  sub_30190(a2, (const void *)(a1 + 12), 6u);
  v3 = sub_28F50(v6, (unsigned __int64)v8, *(_QWORD *)(a1 + 24)) - v6;
  if ( v3 )
    sub_30190(a2, v6, v3);
  v4 = sub_28F50(v6, (unsigned __int64)v8, *(_QWORD *)(a1 + 32)) - v6;
  if ( v4 )
    sub_30190(a2, v6, v4);
  return v8[0] - __readfsqword(0x28u);
}

