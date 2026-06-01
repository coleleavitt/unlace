__int64 __fastcall sub_369FC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax

  v2 = *(unsigned int *)(a1 + 40);
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CA1588 && *(_QWORD *)(qword_2CA1580 + 8 * v2) )
    v3 = gen_file();
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

