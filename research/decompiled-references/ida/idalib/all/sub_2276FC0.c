void __fastcall sub_2276FC0(__int64 a1)
{
  void (*v1)(void); // rax
  __int64 v2; // r12
  void **v3; // rbp
  void **v4; // rbx

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 104LL);
  if ( (char *)v1 == (char *)sub_2276E10 )
  {
    if ( !*(_DWORD *)(a1 + 96) )
    {
      v2 = *(_QWORD *)(a1 + 672);
      if ( v2 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v2 + 32LL) == 4 )
        {
          v3 = *(void ***)(v2 + 32);
          v4 = &v3[4 * *(unsigned int *)(v2 + 40)];
          while ( v3 != v4 )
          {
            while ( 1 )
            {
              v4 -= 4;
              if ( *v4 == v4 + 2 )
                break;
              operator delete(*v4);
              if ( v3 == v4 )
                goto LABEL_9;
            }
          }
LABEL_9:
          *(_DWORD *)(v2 + 40) = 0;
        }
      }
    }
  }
  else
  {
    v1();
  }
}
