__int64 __fastcall set_ida_state(int a1)
{
  char v1; // dl
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = sub_3FB5F0();
  result = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL);
    result = *(unsigned int *)(v3 + 24);
    *(_DWORD *)(v3 + 24) = a1;
  }
  return result;
}
