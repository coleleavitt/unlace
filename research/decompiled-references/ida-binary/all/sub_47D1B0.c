__int64 __fastcall sub_47D1B0(_QWORD *a1, QT::QMenu **a2, __int64 a3, double a4)
{
  void (*v6)(); // rax
  QT::QMenu *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  QT::QMenu *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  const char *v14; // rdi
  char *v15; // rax

  v6 = *(void (**)())(*a1 + 176LL);
  if ( v6 != nullsub_255 )
    ((void (__fastcall *)(_QWORD *, QT::QMenu **, __int64))v6)(a1, a2, a3);
  v7 = *a2;
  result = QT::QMenu::isEmpty(*a2);
  if ( !(_BYTE)result )
  {
    v10 = (unsigned int)(*(_DWORD *)a3 - 1);
    if ( (unsigned int)v10 > 1 )
    {
      sub_478440(a4, (__int64)v7, (__int64)a2, v10, v9);
      return sub_47D2D0();
    }
    else
    {
      if ( *(_DWORD *)a3 == 1 )
        v11 = *(QT::QMenu **)(*(_QWORD *)(a3 + 8) + 48LL);
      else
        v11 = *(QT::QMenu **)(a3 + 16);
      a2[2] = v11;
      sub_47CEE0((__int64)a2);
      a1[16] = a2;
      QT::QMenu::exec(*a2, a2 + 2, 0);
      sub_47CEE0((__int64)a2);
      result = (__int64)a2[4];
      if ( (int)result > 0 )
      {
        v12 = 0;
        v13 = 8 * (3LL * (unsigned int)(result - 1) + 3);
        do
        {
          v14 = &s1;
          v15 = (char *)a2[3] + v12;
          if ( *((_QWORD *)v15 + 1) )
            v14 = *(const char **)v15;
          result = sub_5344B0(v14);
          v12 += 24;
        }
        while ( v12 != v13 );
      }
      a1[16] = 0;
    }
  }
  return result;
}
