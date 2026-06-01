__int64 __fastcall sub_C6B50(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rdi
  int v11; // r15d
  unsigned int v13; // [rsp+4h] [rbp-44h]

  v3 = dbg;
  if ( *(int *)(dbg + 64LL) > 0 )
  {
    v13 = 0;
    v6 = 0;
    while ( 1 )
    {
      while ( (*(_BYTE *)(*(_QWORD *)(v3 + 56) + 32LL * *(int *)(qword_251370 + 56 * v6 + 44) + 12) & a2) == 0 )
      {
LABEL_18:
        v3 = dbg;
        if ( *(_DWORD *)(dbg + 64LL) <= (int)++v6 )
          return v13;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 16LL))(a3, (unsigned int)v6) )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, (unsigned int)v6);
        if ( v13 )
          return v13;
      }
      v7 = qword_251370;
      v3 = dbg;
      v8 = *(int *)(qword_251370 + 56 * v6 + 44);
      v9 = *(_DWORD *)(dbg + 64LL);
      if ( (int)v8 < v9 )
      {
        v10 = *(_QWORD *)(dbg + 56LL) + 32 * v8;
        if ( (*(_BYTE *)(v10 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v10 + 16) )
          {
            v11 = xmmword_251378 - 1;
            if ( (int)xmmword_251378 - 1 >= v9 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v7 + 56LL * v11 + 44) == (_DWORD)v6 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 16LL))(
                         a3,
                         (unsigned int)v11) )
                  {
                    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, (unsigned int)v11);
                    if ( v13 )
                      goto LABEL_18;
                  }
                }
                v3 = dbg;
                --v11;
                v9 = *(_DWORD *)(dbg + 64LL);
                if ( v9 > v11 )
                  break;
                v7 = qword_251370;
              }
            }
          }
        }
      }
      if ( v9 <= (int)++v6 )
        return v13;
    }
  }
  return 0;
}

