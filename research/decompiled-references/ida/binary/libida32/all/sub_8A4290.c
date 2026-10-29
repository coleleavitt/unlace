_QWORD *__fastcall sub_8A4290(__int64 a1, __int64 *a2, const char *a3, const char *a4, __int64 a5, const char *a6)
{
  __int64 v10; // rax
  _QWORD *v11; // rbx

  v10 = sub_8A38C0(a1, a2);
  if ( !v10 )
    return nullptr;
  v11 = (_QWORD *)v10;
  if ( !(unsigned __int8)sub_8A1150(v10, a2, a3, a4, a6) )
  {
    (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    return nullptr;
  }
  v11[19] = a5;
  return v11;
}

