__int64 __fastcall sub_6A9780(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // eax
  int v5; // r12d
  unsigned int v6; // ebx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = 0;
  while ( a2 != (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v6) )
  {
    if ( v5 == ++v6 )
      return 0;
  }
  *a3 = v6;
  return 1;
}

