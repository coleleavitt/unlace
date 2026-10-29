__int64 __fastcall set_ida_state(int a1)
{
  char v1; // dl
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = sub_3E8690();
  result = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1344LL);
    result = *(unsigned int *)(v3 + 16);
    *(_DWORD *)(v3 + 16) = a1;
  }
  return result;
}

