__int64 __fastcall set_target_assembler(int a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int8 v2; // si
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v1 = a1;
  v2 = a1;
  v3 = *(_QWORD **)(qword_2CCB598 + 1672);
  v4 = 0;
  while ( *(_QWORD *)(*(_QWORD *)(v3[2] + 40LL) + 8 * v4) )
  {
    if ( v1 < ++v4 )
    {
      sub_39AA50(v3, v2);
      return 1;
    }
  }
  return 0;
}
