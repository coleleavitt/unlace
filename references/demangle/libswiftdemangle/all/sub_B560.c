_QWORD **__fastcall sub_B560(__int64 a1)
{
  _QWORD **result; // rax
  _QWORD *v3; // rbx
  void *v4; // rdi

  result = *(_QWORD ***)(a1 + 24);
  if ( result )
  {
    v3 = *result;
    if ( *result )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        free(v4);
      }
      while ( v3 );
      result = *(_QWORD ***)(a1 + 24);
    }
    *result = nullptr;
    result = (_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
