_BOOL8 __fastcall dirtree_is_dir_ordered(__int64 a1, unsigned int a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 56) )
    return (*(_BYTE *)(*(_QWORD *)(a1 + 48) + 176LL * a2 + 164) & 4) != 0;
  return result;
}

