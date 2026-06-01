void __fastcall sub_8531C0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 i; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rsi

  v6 = a2[1];
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      qsnprintf(*(_DWORD *)a1 + 5128, 256, (unsigned int)"%u", i, a5, a6);
      v9 = 0;
      v10 = *a2 + 24 * i;
      v11 = (char *)haystack;
      v12 = *(_QWORD *)(v10 + 8);
      if ( v12 )
      {
        v11 = *(char **)v10;
        v9 = v12 - 1;
      }
      sub_852B10(*a1, 1, v11, v9);
    }
  }
}
