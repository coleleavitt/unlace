__int64 __fastcall sub_1392470(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rbp
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  for ( i = *(_QWORD **)(a1 + 24); i != v2; ++v2 )
  {
    if ( *(_BYTE *)(*v2 + 8LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 176LL))(*v2, a2);
  }
  return result;
}
