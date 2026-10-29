char __fastcall rangeset_t_contains(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // r10
  __int64 v3; // rax
  unsigned __int64 *v4; // rbx
  __int64 *v5; // r11
  char result; // al
  __int64 v7; // r10

  v2 = *(unsigned __int64 **)a2;
  v3 = 16LL * *(_QWORD *)(a2 + 8);
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + v3);
  if ( !v3 )
    return 1;
  v5 = a1;
  do
  {
    result = sub_844C20(v5, *v2, v2[1]);
    if ( !result )
      break;
    v2 = (unsigned __int64 *)(v7 + 16);
  }
  while ( v2 != v4 );
  return result;
}
