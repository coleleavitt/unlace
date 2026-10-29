__int64 __fastcall dirtree_make_cursor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_758380(a2, a3);
  *(_DWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

