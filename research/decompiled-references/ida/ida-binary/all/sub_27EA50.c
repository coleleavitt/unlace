__int64 __fastcall sub_27EA50(__int64 a1, unsigned __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 *v8; // rbp
  unsigned __int64 v9; // r13
  __int64 *v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // [rsp+8h] [rbp-40h]

  result = (__int64)&QT::QCoreApplication::self;
  v6 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v7 = qword_8CC7D0;
    result = xmmword_8CC7D8;
    v8 = (__int64 *)(qword_8CC7D0 + 8 * xmmword_8CC7D8);
    if ( (__int64 *)qword_8CC7D0 != v8 )
    {
      v9 = a2;
      v10 = (__int64 *)qword_8CC7D0;
      v12 = QT::QCoreApplication::self + 2;
      do
      {
        v11 = *v10;
        result = sub_1EB5B0(*v10, a2, v7, a5, a3);
        if ( result )
        {
          if ( *(_BYTE *)(result + 29) )
          {
            a2 = v11;
            result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v6[2] + 56LL))(v12, v11);
            if ( (_DWORD)result != -1 )
            {
              a5 = (unsigned int)result;
              a2 = a1 & ((unsigned __int64)((result & 0x40) == 0) << result);
              result = v9 & ((unsigned __int64)((result & 0x40) != 0) << result) | a2;
              if ( result )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 664LL))(v11);
                result = sub_1F4320(v11);
                if ( result )
                {
                  if ( (*(_BYTE *)(result + 216) & 1) != 0 )
                    *(_BYTE *)(result + 256) = 1;
                }
              }
            }
          }
        }
        ++v10;
      }
      while ( v8 != v10 );
    }
  }
  return result;
}
