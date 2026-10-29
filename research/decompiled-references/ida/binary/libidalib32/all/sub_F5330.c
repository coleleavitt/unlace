unsigned __int64 __fastcall sub_F5330(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbp
  _QWORD *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // [rsp+8h] [rbp-40h]

  result = (unsigned __int64)&TProgram::application;
  v3 = TProgram::application;
  if ( TProgram::application )
  {
    result = xmmword_251678;
    v4 = (_QWORD *)(qword_251670 + 8 * xmmword_251678);
    if ( (_QWORD *)qword_251670 != v4 )
    {
      v5 = (_QWORD *)qword_251670;
      v7 = TProgram::application + 136LL;
      do
      {
        v6 = *v5;
        result = sub_15E0E0(*v5);
        if ( result )
        {
          if ( *(_BYTE *)(result + 21) )
          {
            result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 136) + 56LL))(v7, v6);
            if ( (_DWORD)result != -1 )
            {
              result = a2 & ((unsigned __int64)((result & 0x40) != 0) << result)
                     | a1 & ((unsigned __int64)((result & 0x40) == 0) << result);
              if ( result )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 384LL))(v6);
                result = sub_163DC0(v6);
                if ( result )
                {
                  if ( (*(_BYTE *)(result + 504) & 1) != 0 )
                    *(_BYTE *)(result + 536) = 1;
                }
              }
            }
          }
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
  }
  return result;
}

