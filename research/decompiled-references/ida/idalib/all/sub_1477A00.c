void __fastcall sub_1477A00(_QWORD *a1)
{
  __int64 v1; // rax
  char v2; // cl
  __int64 v4; // rdi
  __int64 v5; // rbp

  if ( a1[2] )
  {
    v1 = *a1;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL) + 1LL) & 8) != 0 )
    {
      v2 = *((_BYTE *)a1 + 24);
      if ( *(_QWORD *)(a1[1] + 16LL) )
      {
        v4 = *(_QWORD *)(v1 + 96);
        v5 = *(_QWORD *)(v4 + 608);
        if ( v2 )
          sub_183E4C0(v4, *(_QWORD *)(v4 + 608));
        if ( v5 )
          sub_1564F70(*a1);
      }
      else if ( v2 )
      {
        sub_183E4C0(*(_QWORD *)(v1 + 96), 0);
      }
    }
  }
}
