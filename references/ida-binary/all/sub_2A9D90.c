__int64 (*__fastcall sub_2A9D90(__int64 a1))()
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 (*result)(); // rax
  unsigned int v4; // r12d
  int v5; // r13d

  v1 = *(_QWORD *)(a1 + 440);
  if ( !v1 )
  {
    result = (__int64 (*)())is_debugger_on();
    if ( *(_DWORD *)(a1 + 412) == -1 )
      return result;
LABEL_6:
    *(_DWORD *)(a1 + 412) = -1;
    *(_WORD *)(a1 + 408) = 0;
    return (__int64 (*)())QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 420));
  }
  v2 = *(_QWORD *)(v1 + 8);
  result = (__int64 (*)())is_debugger_on();
  if ( v2 )
  {
    if ( (_BYTE)result )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 288LL))(v2, qword_8BA5A8);
      result = *(__int64 (**)())(*(_QWORD *)v2 + 320LL);
      if ( result != proxim_graph_t__::vfunc_40 )
      {
        result = (__int64 (*)())((__int64 (__fastcall *)(__int64, _QWORD))result)(v2, v4);
        v5 = (int)result;
        if ( (_DWORD)result != -1 )
        {
          result = (__int64 (*)())(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 160LL))(
                                    v2,
                                    ((unsigned __int64)(unsigned int)result << 32) | v4);
          if ( result )
          {
            *(_DWORD *)(a1 + 412) = v4;
            *(_DWORD *)(a1 + 416) = v5;
            *(_WORD *)(a1 + 408) = 256;
            if ( v4 != -1 )
              return (__int64 (*)())QT::QBasicTimer::start(a1 + 420, *(int *)(a1 + 424), a1 + 392);
            return (__int64 (*)())QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 420));
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 412) != -1 )
    goto LABEL_6;
  return result;
}
