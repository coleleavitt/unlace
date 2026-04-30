void __fastcall sub_4DE430(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rax
  _QWORD *v3; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)qword_8D1E60;
    v3 = (_QWORD *)(qword_8D1E60 + 16 * xmmword_8D1E68);
    if ( (_QWORD *)qword_8D1E60 != v3 )
    {
      while ( v1 != v2[1] )
      {
        v2 += 2;
        if ( v3 == v2 )
          return;
      }
      if ( v2 )
      {
        if ( *v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 256LL))(v1);
      }
    }
  }
}
