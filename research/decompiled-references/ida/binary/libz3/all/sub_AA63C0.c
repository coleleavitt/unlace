void __fastcall sub_AA63C0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(); // rax

  v2 = *(__int64 **)(a1 + 8688);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = *(__int64 (__fastcall **)())(*(_QWORD *)*v2 + 272LL);
        if ( v5 != nullsub_620 )
          break;
        if ( v3 == ++v2 )
          return;
      }
      ++v2;
      ((void (__fastcall *)(__int64, __int64))v5)(v4, a2);
    }
  }
}

