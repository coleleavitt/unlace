__int64 __fastcall sub_4EFF30(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5, double a6, double a7)
{
  __int64 v8; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rbx

  v8 = *(_QWORD *)(a1 + 232);
  if ( !v8 )
    return 0;
  v10 = *(__int64 **)(a1 + 224);
  v11 = &v10[v8];
  if ( v11 == v10 )
    return 0;
  do
  {
    v12 = *v10;
    if ( *(_DWORD *)*v10 == a2 && !*(_BYTE *)(*(_QWORD *)(v12 + 24) + 36LL) )
    {
      sub_4EFD10(*v10, a6, a7, (__int64)&byte_22CD811, a3, a4, a5);
      *(_QWORD *)(*(_QWORD *)(v12 + 24) + 24LL) = **(_QWORD **)(v12 + 24)
                                                + 16LL * *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL);
      return 1;
    }
    ++v10;
  }
  while ( v11 != v10 );
  return 0;
}

