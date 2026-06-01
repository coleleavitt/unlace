void __fastcall sub_6441F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // rbp
  void (*v3)(); // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    for ( i = v1 + 8LL * *(unsigned int *)(v1 - 4); i != v1; v1 += 8 )
    {
      while ( 1 )
      {
        v3 = *(void (**)())(**(_QWORD **)v1 + 16LL);
        if ( v3 != nullsub_262 )
          break;
        v1 += 8;
        if ( i == v1 )
          return;
      }
      v3();
    }
  }
}

