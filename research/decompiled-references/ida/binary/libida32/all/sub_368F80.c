__int64 __fastcall sub_368F80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // eax

  v2 = *(unsigned int *)(a1 + 8);
  if ( v2 >= (unsigned __int64)xmmword_2CA1588 || !*(_QWORD *)(qword_2CA1580 + 8 * v2) || (v3 = qfgetc(), v3 == -1) )
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = (unsigned __int8)v3;
    return 0;
  }
}

