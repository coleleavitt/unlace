__int64 __fastcall sub_D1650(int a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  int v4; // eax
  _DWORD *v5; // rdi

  v1 = 56LL * a1;
  v2 = *(_DWORD *)(v1 + qword_252450 + 4);
  if ( !(unsigned __int8)sub_C0470((unsigned int *)(v1 + qword_252450))
    || *(_DWORD *)(qword_252450 + v1 + 4) == (unsigned __int16)v2 )
  {
    return 0;
  }
  v4 = xmmword_252458;
  v5 = qword_252758;
  if ( !qword_252758 )
  {
    sub_9E1E0();
    return 0;
  }
  *(_QWORD *)qword_252758 = qword_252450;
  v5[2] = v4;
  sub_CDCF0((__int64)v5, 24);
  return 0;
}

