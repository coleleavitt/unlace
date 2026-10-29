__int64 __fastcall sub_F04DA0(_QWORD *a1, __int64 a2)
{
  int v2; // r14d
  int i; // ebx
  __int64 v4; // r12
  size_t v5; // rax
  __int64 v6; // rbx
  const char *v7; // rax
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *a1;
      v5 = j__strlen("  ");
      sub_9954E0(v4, "  ", v5);
    }
  }
  v6 = sub_995540(*a1, "goto ");
  v7 = sub_995750(*(_QWORD *)(a2 + 8));
  v9 = sub_9954E0(v6, v7, v8);
  result = sub_995540(v9, ";");
  if ( (*((_BYTE *)a1 + 28) & 8) != 0 )
    return sub_227BF10(*a1, a1[5], a1[6]);
  return result;
}
