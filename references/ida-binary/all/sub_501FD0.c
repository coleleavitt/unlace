__int64 (__fastcall *__fastcall sub_501FD0(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD, __int64),
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10))(_QWORD, __int64)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 (__fastcall *result)(_QWORD, __int64); // rax
  unsigned int v17; // ebp
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  void (*v21)(); // rdx

  if ( a2 == (__int64 (__fastcall *)(_QWORD, __int64))QT::QDialogButtonBox::button(a1[51], 0x4000) )
  {
    if ( (a1[27] & 1) != 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, __int64))sub_501F10(
                                                          a1,
                                                          a3,
                                                          a4,
                                                          a5,
                                                          a6,
                                                          v14,
                                                          v15,
                                                          a9,
                                                          a10,
                                                          0x4000,
                                                          v10,
                                                          v11,
                                                          v12,
                                                          v13);
      if ( !(_BYTE)result )
        return result;
    }
    v17 = -2;
  }
  else if ( a2 == (__int64 (__fastcall *)(_QWORD, __int64))QT::QDialogButtonBox::button(a1[51], &stru_10000) )
  {
    v17 = -6;
  }
  else
  {
    if ( a2 != (__int64 (__fastcall *)(_QWORD, __int64))QT::QDialogButtonBox::button(a1[51], 0x400000) )
    {
      result = (__int64 (__fastcall *)(_QWORD, __int64))QT::QDialogButtonBox::button(a1[51], 0x1000000);
      if ( a2 == result )
      {
        if ( a1[42] )
          return (__int64 (__fastcall *)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*QT::QCoreApplication::self + 368LL))(
                                                            QT::QCoreApplication::self,
                                                            a1 + 40);
        else
          return (__int64 (__fastcall *)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(QT::QCoreApplication::self[2] + 136LL))(
                                                            QT::QCoreApplication::self + 2,
                                                            a1 + 34);
      }
      return result;
    }
    v17 = -7;
  }
  result = (__int64 (__fastcall *)(_QWORD, __int64))a1[20];
  *((_BYTE *)a1 + 128) = 1;
  if ( result && *((_DWORD *)a1 + 44) == 1 )
  {
    v20 = *a1;
    *((_DWORD *)a1 + 44) = 2;
    v21 = *(void (**)())(v20 + 424);
    if ( v21 == nullsub_293 )
    {
      result = (__int64 (__fastcall *)(_QWORD, __int64))result(v17, (__int64)(a1 + 11));
    }
    else
    {
      ((void (__fastcall *)(__int64 *))v21)(a1);
      result = (__int64 (__fastcall *)(_QWORD, __int64))((__int64 (__fastcall *)(_QWORD, __int64 *))a1[20])(
                                                          v17,
                                                          a1 + 11);
    }
    *((_BYTE *)a1 + 128) = 0;
    *((_DWORD *)a1 + 44) = 1;
    if ( (int)result <= 0 )
      return result;
  }
  else
  {
    *((_BYTE *)a1 + 128) = 0;
  }
  v18 = (__int64 *)a1[46];
  if ( v18 )
  {
    v19 = *v18;
    if ( v17 == -2 )
    {
      return (__int64 (__fastcall *)(_QWORD, __int64))(*(__int64 (**)(void))(v19 + 440))();
    }
    else if ( v17 == -6 )
    {
      return (__int64 (__fastcall *)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64 *, __int64))(v19 + 432))(
                                                        v18,
                                                        0xFFFFFFFFLL);
    }
    else
    {
      return (__int64 (__fastcall *)(_QWORD, __int64))(*(__int64 (**)(void))(v19 + 448))();
    }
  }
  return result;
}
