__int64 __fastcall sub_7B1DD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = *(_BYTE *)(a1 + 6016) & 1;
  if ( (*(_BYTE *)(a1 + 6016) & 1) == 0 )
  {
    if ( !under_debugger )
      interr(1229);
    BUG();
  }
  v3 = swap64(*(_QWORD *)(a2 + 1));
  v4 = v3;
  if ( v3 >= *(_QWORD *)(a1 + 5928) )
    return 0;
  v5 = *(_QWORD *)(a1 + 5920) + 24 * v3;
  if ( *(_QWORD *)(v5 + 8) <= 1u )
    return 0;
  sub_7AE4F0(3, v4, *(const char **)v5);
  sub_7B1B60(a1, v4);
  return v2;
}
