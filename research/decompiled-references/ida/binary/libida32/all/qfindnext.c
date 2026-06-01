__int64 __fastcall qfindnext(__int64 a1)
{
  __int64 v1; // rax

  do
  {
    v1 = *(int *)(a1 + 8240);
    if ( (int)v1 >= *(_DWORD *)(a1 + 8244) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 8240) = v1 + 1;
  }
  while ( (unsigned int)sub_81A090(
                          a1 + 4120,
                          (_QWORD *)(a1 + 4104),
                          (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8232) + 8 * v1) + 19LL)) );
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 4120);
  qustrncpy(a1 + 4, a1 + 4124, 4096);
  *(_DWORD *)(a1 + 4112) = *(_DWORD *)(a1 + 8224);
  return 0;
}

