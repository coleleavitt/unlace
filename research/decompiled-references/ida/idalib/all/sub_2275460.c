__int64 __fastcall sub_2275460(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 || (result = sub_2275030(a1, a2, a3, a4, a5, a6), (v7 = result) != 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v12 = *(_QWORD *)(a1 + 80);
    if ( v12 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    result = sub_2275200(a1, a2, v8, v9, v10, v11);
    v12 = result;
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  return result;
}
