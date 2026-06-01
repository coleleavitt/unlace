__int64 __fastcall sub_175500(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 result; // rax
  _QWORD *i; // r12
  __int64 v4; // rbx

  v1 = *(_QWORD **)(a1 + 248);
  result = *(_QWORD *)(a1 + 256);
  for ( i = &v1[result]; i != v1; ++v1 )
  {
    v4 = *v1;
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*v1);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  *(_QWORD *)(a1 + 256) = 0;
  return result;
}

