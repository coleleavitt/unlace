void __fastcall sub_1BD27A0(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 i; // rbp
  void *v5; // rdi

  v1 = *a1;
  v2 = *a1 + 168LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v2 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 48);
      for ( i = v3 + 152LL * *(_QWORD *)(v1 + 56); i != v3; v3 += 152 )
      {
        while ( 1 )
        {
          if ( (*(_DWORD *)v3 & 0x7FFFFFFF) == 3 )
          {
            v5 = *(void **)(v3 + 32);
            if ( v5 != (void *)(v3 + 48) )
              break;
          }
          v3 += 152;
          if ( i == v3 )
            goto LABEL_8;
        }
        free(v5);
      }
LABEL_8:
      if ( (*(_DWORD *)(v1 + 104) & 0x3FC01) == 0xC00 )
        sub_1BD2300((char *)(v1 + 112));
      v1 += 168;
    }
    while ( v1 != v2 );
  }
}
