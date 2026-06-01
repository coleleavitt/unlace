void __fastcall sub_2205620(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  void *v5; // rdi

  v2 = *(unsigned int *)(a1 + 8);
  v3 = ((unsigned __int64)a2 + 63) >> 6;
  if ( (_DWORD)v3 == (unsigned int)((unsigned __int64)(v2 + 63) >> 6) )
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  else
  {
    if ( (unsigned int)v2 > 0x40 )
    {
      v5 = *(void **)a1;
      if ( v5 )
        operator delete[](v5);
    }
    *(_DWORD *)(a1 + 8) = a2;
    if ( a2 > 0x40 )
      *(_QWORD *)a1 = operator new[](8 * v3);
  }
}
