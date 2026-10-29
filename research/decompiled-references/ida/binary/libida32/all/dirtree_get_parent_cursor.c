__int64 __fastcall dirtree_get_parent_cursor(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_7593A0(a2, a3);
  *(_DWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

