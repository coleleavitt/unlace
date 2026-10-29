__int64 __fastcall register_custom_data_format(__int64 a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ebp

  if ( !*(_QWORD *)(a1 + 56) )
    return (unsigned int)-1;
  v1 = sub_3E5600(*(_QWORD *)(qword_2CA1698 + 1360) + 112LL, a1, nullptr);
  v4 = v1;
  if ( v1 == -1 )
  {
    return (unsigned int)-1;
  }
  else if ( *(_QWORD *)(a1 + 32) )
  {
    callui(94, v1, 1, (int)&callui, v2, v3);
  }
  return v4;
}

