void __fastcall sub_51EBE0(__int64 *a1, const char *a2, unsigned int a3)
{
  int v4; // r12d
  _BOOL4 v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebp
  void *v10; // r15
  __int64 v11; // rax
  char v12; // al
  void (__fastcall *v13)(void *); // rax
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v4 = (a3 >> 1) & 1;
  v5 = (a3 & 2) != 0;
  v18 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, 0);
  v9 = *((_DWORD *)a1 + 266) + v5;
  v16 = 0;
  v10 = (void *)v8;
  v17 = 0;
  if ( v9 )
  {
    v14 = nullptr;
    v15 = v9 + 1LL;
    if ( v9 != -1 )
    {
      v16 = qvector_reserve(&v16, 0, v15, 1);
      v15 = v9 + 1LL;
      v14 = (void *)v16;
    }
    *(_QWORD *)&v17 = v15;
    memmove(v14, a1 + 5, v9);
    *(_BYTE *)(v16 + v9) = 0;
  }
  v11 = *a1;
  ++*((_DWORD *)a1 + 8);
  v12 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64 *, _QWORD))(v11 + 24))(a1, a2, &v16, a3);
  --*((_DWORD *)a1 + 8);
  if ( (_BYTE)v4 && v12 )
    ++*((_DWORD *)a1 + 266);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, a2);
  }
  if ( v10 )
  {
    v13 = *(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL);
    if ( v13 == sub_51E9F0 )
      operator delete(v10, 8u);
    else
      v13(v10);
  }
}
