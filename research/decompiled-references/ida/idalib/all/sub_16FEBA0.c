__int64 __fastcall sub_16FEBA0(__int64 a1, __int64 a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  const void *v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdi

  if ( !a1 )
    return 0;
  v6 = (const void *)a2;
  v8 = a1;
  do
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (v9 & 7) == 0 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 )
      {
        v11 = *(_DWORD **)(v10 + 16);
        if ( *v11 == a3 )
        {
          if ( !a3 )
            return 1;
          a2 = (__int64)v6;
          if ( !memcmp(v11 + 4, v6, a3) )
            return 1;
        }
      }
    }
    v8 = sub_BAB630(v8, a2, a3, a4, a5, a6);
  }
  while ( v8 );
  return 0;
}
