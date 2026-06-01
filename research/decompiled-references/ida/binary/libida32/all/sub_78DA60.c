bool __fastcall sub_78DA60(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 *v7; // rsi

  v5 = **(_QWORD **)(a1 + 1544);
  v6 = *(unsigned int *)(a2 + 4);
  v7 = *(unsigned __int8 **)(a2 + 8);
  if ( a3 )
    return !v6 || sub_7229C0(v5, v7, v6);
  else
    return !v6 || sub_722830(v5, v7, v6);
}

