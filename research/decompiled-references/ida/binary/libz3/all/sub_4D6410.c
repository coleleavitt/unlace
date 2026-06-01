void __fastcall sub_4D6410(__int64 ***a1)
{
  __int64 **v1; // rbx
  __int64 **i; // r12
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 (__fastcall *v6)(void (__fastcall ***)(_QWORD)); // rdx

  v1 = *a1;
  if ( *a1 )
  {
    for ( i = &v1[*((unsigned int *)v1 - 1)]; i != v1; ++v1 )
    {
      while ( 1 )
      {
        v3 = *v1;
        v4 = **v1;
        v5 = *v1;
        v6 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(v4 + 16);
        if ( v6 != sub_4C9C10 )
          break;
        (*(void (__fastcall **)(__int64 *))v4)(v5);
        ++v1;
        sub_186B220(v3);
        if ( i == v1 )
          return;
      }
      v6((void (__fastcall ***)(_QWORD))v5);
    }
  }
}

