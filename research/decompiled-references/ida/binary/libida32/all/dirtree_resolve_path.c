unsigned __int64 __fastcall dirtree_resolve_path(__int64 a1, __int64 a2, const char *a3)
{
  unsigned __int64 v3; // rax
  char v4; // edx^3
  unsigned __int64 result; // rax

  v3 = sub_757CF0(a2, a3);
  *(_WORD *)a1 = v3;
  *(_BYTE *)(a1 + 2) = BYTE2(v3);
  v4 = BYTE3(v3);
  result = HIDWORD(v3);
  *(_BYTE *)(a1 + 4) = result;
  *(_BYTE *)(a1 + 3) = v4;
  return result;
}

