void __fastcall sub_51EA50(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rbp
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  void (__fastcall *v20)(void *); // rax
  char v21; // [rsp+0h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 16) > 1u )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 80LL))(v10, 0);
    ++*(_DWORD *)(a1 + 32);
    v21 = v11;
    v12 = (void *)v11;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a1 + 8);
    --*(_DWORD *)(a1 + 32);
    if ( !v13 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        sub_169700(
          (int)"String \"%s\" not found\n",
          *(_QWORD *)(a1 + 8),
          v14,
          v15,
          v16,
          v17,
          a3,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v21);
      else
        sub_169700(
          (int)"String \"%s\" not found\n",
          (__int64)&s1,
          v14,
          v15,
          v16,
          v17,
          a3,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v21);
    }
    if ( v12 )
    {
      v20 = *(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL);
      if ( v20 == sub_51E9F0 )
        operator delete(v12, 8u);
      else
        v20(v12);
    }
  }
}
