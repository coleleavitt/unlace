__int64 __fastcall sub_1B3640(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  const char *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax

  sub_205300((QT::QAccessibleEvent *)a1);
  v2 = sub_1EB5B0(a1);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 176LL))(v2, 0);
  if ( !*(_BYTE *)(a1 + 1000) )
  {
    v4 = result;
    if ( *(_QWORD *)(result + 16) > 1u )
    {
      v5 = &s1;
      v6 = (unsigned int)*(__int16 *)(sub_1EA6A0(a1 + 384) + 28);
      if ( *(_QWORD *)(v4 + 16) )
        v5 = *(const char **)(v4 + 8);
      result = sub_330C70(v5, v6);
      if ( (_BYTE)result == 19 )
      {
        v8 = sub_1EA680(a1 + 384);
        result = (unsigned int)*((unsigned __int8 *)&unk_85D020
                               + 16
                               * (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 40) + 8LL))(
                                   *(_QWORD *)(v8 + 40),
                                   *(_QWORD *)(a1 + 728)))
               + 40;
      }
      v7 = 0;
      while ( byte_5DFF44[8 * v7] != (_BYTE)result )
      {
        if ( ++v7 == 49 )
          return result;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 336LL) = v7;
      *(_BYTE *)(*(_QWORD *)(a1 + 1008) + 344LL) = 1;
      QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(*(_QWORD *)(a1 + 1008) + 256LL) + 160LL), v7);
      result = *(_QWORD *)(a1 + 1008);
      *(_BYTE *)(result + 344) = 0;
    }
  }
  return result;
}
