__int64 sub_279790()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 result; // rax

  v0 = sub_277DF0();
  if ( !*(_QWORD *)(v0 + 112) )
    return 0;
  v1 = *(_QWORD *)(v0 + 120);
  v2 = v0;
  result = 0;
  if ( v1 != -1 )
  {
    sub_278F80(v2, 2u, v1, v1 + 1, 0);
    return 1;
  }
  return result;
}
