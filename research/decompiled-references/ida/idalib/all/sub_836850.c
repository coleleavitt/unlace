char __fastcall sub_836850(__int64 a1)
{
  _QWORD *v1; // r13
  unsigned int v2; // eax
  char result; // al
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax

  v1 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = a1 + 136;
    while ( 1 )
    {
      v6 = v4 - v5;
      if ( v6 + *(unsigned int *)(a1 + 56) != 0x8000 )
      {
        if ( !under_debugger )
          interr(3334);
        BUG();
      }
      if ( v6
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(
             *(_QWORD *)(a1 + 16),
             v5) )
      {
        *(_QWORD *)(a1 + 48) = v5;
        *(_DWORD *)(a1 + 56) = 0x8000;
      }
      v1 = (_QWORD *)(a1 + 24);
      v7 = sub_74C760(a1 + 24, 4u);
      if ( v7 < 0 )
        break;
      v4 = *(_QWORD *)(a1 + 48);
      if ( v4 == v5 )
        goto LABEL_2;
    }
    sub_8366D0(a1, -v7);
  }
LABEL_2:
  v2 = sub_74D9D0(v1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u && v2 )
    sub_8366D0(a1, v2);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  if ( result )
    return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u;
  return result;
}
