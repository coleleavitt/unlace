void __fastcall sub_C23C00(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp

  *(_QWORD *)a1 = &off_2B4B4E0;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = *(_QWORD *)(a1 + 16);
  operator delete(*(_QWORD *)(a1 + 168), 16LL * *(unsigned int *)(a1 + 184), 8);
  v2 = *(void **)(a1 + 136);
  if ( v2 != (void *)(a1 + 152) )
    free(v2);
  v3 = a1 + 72;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    while ( 1 )
    {
      sub_C23B90(v3, *(_QWORD *)(v4 + 24));
      v5 = *(_QWORD *)(v4 + 16);
      if ( *(_DWORD *)(v4 + 48) > 1u )
      {
        sub_A4F8E0((int *)(v4 + 48));
        operator delete((void *)v4);
        if ( !v5 )
          return;
      }
      else
      {
        operator delete((void *)v4);
        if ( !v5 )
          return;
      }
      v4 = v5;
    }
  }
}
