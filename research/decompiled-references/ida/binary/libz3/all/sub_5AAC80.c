__int64 __fastcall sub_5AAC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  void (__fastcall ***v10)(_QWORD); // rbx
  __int64 result; // rax
  __int64 v12; // rax
  void (***v13)(void); // rdi

  v7 = *(_QWORD *)(a3 + 8);
  v8 = sub_5A3B70(v7, a3, a5);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = (void (__fastcall ***)(_QWORD))v8;
  if ( !v9 )
  {
    v12 = sub_4C4940(*(_QWORD *)(v7 + 24), a2, v8, a4);
    v13 = *(void (****)(void))(a1 + 8);
    v9 = v12;
    if ( v13 != (void (***)(void))v12 )
    {
      sub_54D7B0(v13);
      *(_QWORD *)(a1 + 8) = v9;
    }
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD), __int64))(*(_QWORD *)v9 + 16LL))(
             v9,
             a2,
             v10,
             a4);
  if ( v10 )
  {
    (**v10)(v10);
    return sub_186B220(v10);
  }
  return result;
}

