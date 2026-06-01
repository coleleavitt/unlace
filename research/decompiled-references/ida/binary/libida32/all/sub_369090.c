__int64 __fastcall sub_369090(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned int *)(a1 + 8);
  if ( v2 < (unsigned __int64)xmmword_2CA1588 && *(_QWORD *)(qword_2CA1580 + 8 * v2) )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = qfsize();
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}

