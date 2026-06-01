__int64 __fastcall sub_C0600(_BYTE *a1, _QWORD *a2)
{
  __int64 (*v2)(void); // rax
  int v3; // r13d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v2 != (char *)sub_C0580 )
    return v2();
  if ( !a2[1] )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(_QWORD *)(*a2 + 8 * v4++);
    v3 |= (unsigned __int8)sub_C0470((unsigned int *)(qword_252450 + 56 * v5));
  }
  while ( v4 < a2[1] );
  if ( v3 != 1 )
    return 0;
  a1[180] = 1;
  return 1;
}

