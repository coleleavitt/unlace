__int64 __fastcall dirtree_resolve_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // dl

  result = sub_7759C0(a2, a3);
  *(_QWORD *)a1 = result;
  *(_BYTE *)(a1 + 8) = v4;
  return result;
}
