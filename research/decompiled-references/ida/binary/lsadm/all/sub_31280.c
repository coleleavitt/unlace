unsigned __int64 __fastcall sub_31280(__int64 a1, char **a2)
{
  unsigned int v2; // edx
  size_t v3; // rax
  _BYTE v5[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v6[0] = __readfsqword(0x28u);
  v3 = sub_28E10(v5, (unsigned __int64)v6, v2) - v5;
  if ( v3 )
    sub_30190(a2, v5, v3);
  return v6[0] - __readfsqword(0x28u);
}

