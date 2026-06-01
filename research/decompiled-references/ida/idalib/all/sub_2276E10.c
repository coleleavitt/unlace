void __fastcall sub_2276E10(__int64 a1)
{
  __int64 v1; // r12
  void **v2; // rbp
  void **v3; // rbx

  if ( !*(_DWORD *)(a1 + 96) )
  {
    v1 = *(_QWORD *)(a1 + 672);
    if ( v1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v1 + 32LL) == 4 )
      {
        v2 = *(void ***)(v1 + 32);
        v3 = &v2[4 * *(unsigned int *)(v1 + 40)];
        while ( v2 != v3 )
        {
          while ( 1 )
          {
            v3 -= 4;
            if ( *v3 == v3 + 2 )
              break;
            operator delete(*v3);
            if ( v2 == v3 )
              goto LABEL_8;
          }
        }
LABEL_8:
        *(_DWORD *)(v1 + 40) = 0;
      }
    }
  }
}
