__int64 __fastcall dwarfstring_append_length(__int64 *a1, const void *a2, size_t a3)
{
  size_t v4; // r14
  __int64 v5; // r13
  size_t v6; // rdx
  size_t v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax

  if ( !a2 )
    return 1;
  if ( !a3 )
    return 1;
  v4 = a1[2];
  v5 = a1[1];
  if ( a3 < v4 || (result = sub_57810((__int64)a1, v5 + a3 + 2), (_DWORD)result) )
  {
    memcpy((void *)(*a1 + v5 - v4), a2, a3);
    v6 = a1[2] - a3;
    v7 = a1[1] + a3 - a1[2];
    v8 = *a1;
    a1[2] = v6;
    *(_BYTE *)(v8 + v7) = 0;
    return 1;
  }
  return result;
}

