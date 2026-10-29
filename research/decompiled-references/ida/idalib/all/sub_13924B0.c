__int64 __fastcall sub_13924B0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rbp
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  for ( i = *(_QWORD **)(a1 + 24); i != v1; ++v1 )
  {
    if ( *(_BYTE *)(*v1 + 8LL) )
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 184LL))(*v1);
  }
  return result;
}
