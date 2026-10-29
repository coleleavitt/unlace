__int64 __fastcall sub_368DA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+4h] [rbp-14h]

  v2 = *(unsigned int *)(a1 + 8);
  if ( v2 >= (unsigned __int64)xmmword_2CA1588 || !*(_QWORD *)(qword_2CA1580 + 8 * v2) || (unsigned int)freadbytes() )
    v3 = -1;
  else
    v3 = v5;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

