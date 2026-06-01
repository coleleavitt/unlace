__int64 __fastcall sub_368E30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // eax
  unsigned __int16 v5; // [rsp+6h] [rbp-12h]

  v2 = *(unsigned int *)(a1 + 8);
  if ( v2 >= (unsigned __int64)xmmword_2CA1588 || !*(_QWORD *)(qword_2CA1580 + 8 * v2) || (unsigned int)freadbytes() )
    v3 = -1;
  else
    v3 = v5;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

