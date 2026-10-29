__int64 __fastcall sub_12EF090(__int64 a1, const void **a2)
{
  __int64 v2; // rbx
  size_t v3; // r15
  const void *v4; // rbp
  __int64 v5; // rax
  char v6; // cl
  size_t v7; // r14
  size_t v8; // rdx
  signed __int64 v9; // rax
  bool v10; // sf
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_19;
  }
  v3 = (size_t)a2[1];
  v4 = *a2;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 40);
    v8 = v7;
    if ( v3 <= v7 )
      v8 = v3;
    if ( !v8 || (LODWORD(v9) = memcmp(v4, *(const void **)(v2 + 32), v8), !(_DWORD)v9) )
    {
      v9 = v3 - v7;
      if ( (__int64)(v3 - v7) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v9 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v9 < 0 )
      break;
LABEL_3:
    v5 = *(_QWORD *)(v2 + 24);
    v6 = 0;
    if ( !v5 )
      goto LABEL_11;
LABEL_4:
    v2 = v5;
  }
  v5 = *(_QWORD *)(v2 + 16);
  v6 = 1;
  if ( v5 )
    goto LABEL_4;
LABEL_11:
  if ( !v6 )
  {
LABEL_12:
    v10 = sub_9C4B50(v2 + 32, (__int64)a2) < 0;
    result = v2;
    if ( v10 )
      return 0;
    return result;
  }
LABEL_19:
  result = 0;
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v2 = std::_Rb_tree_decrement(v2);
    goto LABEL_12;
  }
  return result;
}
