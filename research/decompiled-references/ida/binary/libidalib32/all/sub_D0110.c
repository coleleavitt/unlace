__int64 __fastcall sub_D0110(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rsi
  int v12; // edx
  char *v13; // rdi
  _QWORD *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rdi

  get_eah();
  v4 = dbg;
  result = *(unsigned int *)(dbg + 64LL);
  if ( (int)result > 0 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( dword_24411C != (_DWORD)v7 && (v7 & 0x80000000) == 0LL && v7 < (unsigned __int64)xmmword_251378 )
      {
        if ( qword_251370 + v6 )
        {
          result = sub_C5E50(qword_251370 + v6);
          if ( (_BYTE)result )
            break;
        }
      }
LABEL_22:
      v4 = dbg;
      ++v7;
      v6 += 56;
      if ( *(_DWORD *)(dbg + 64LL) <= (int)v7 )
        return result;
    }
    v8 = v7;
    if ( !a1 )
      goto LABEL_26;
    v9 = *(_QWORD *)(a1 + 32 * v7 + 8);
    v10 = v9;
    if ( !v4 )
      goto LABEL_11;
    if ( (*(_BYTE *)(v4 + 37) & 0x40) == 0 )
      goto LABEL_11;
    v14 = qword_2515B0;
    if ( !qword_2515B0 )
      goto LABEL_11;
    *(_DWORD *)qword_2515B0 = v9;
    v14[1] = a1;
    *((_DWORD *)v14 + 4) = v7;
    v15 = sub_CC780((__int64)v14, 11);
    v8 = v7;
    if ( v15 == 1 )
      v10 = *(_DWORD *)qword_2515B0;
    else
LABEL_26:
      v10 = -1;
LABEL_11:
    if ( !a2 )
      goto LABEL_15;
    v11 = *(_QWORD *)(a2 + 32 * v7 + 8);
    result = dbg;
    v12 = v11;
    if ( dbg )
    {
      if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
      {
        v16 = qword_2515B0;
        if ( qword_2515B0 )
        {
          *(_DWORD *)qword_2515B0 = v11;
          v16[1] = a2;
          *((_DWORD *)v16 + 4) = v8;
          result = sub_CC780((__int64)v16, 11);
          v12 = -1;
          if ( (_DWORD)result == 1 )
          {
            result = (__int64)qword_2515B0;
            v12 = *(_DWORD *)qword_2515B0;
          }
        }
      }
    }
    if ( v10 != v12 )
    {
LABEL_15:
      result = is_mapped();
      if ( (_BYTE)result )
      {
        if ( v7 < (unsigned __int64)xmmword_251378 )
        {
          result = qword_251370 + v6;
          if ( qword_251370 + v6 )
          {
            v13 = (char *)s1;
            if ( *(_QWORD *)(result + 8) )
              v13 = *(char **)result;
            result = sub_164480(v13);
            if ( result )
              result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)result + 704LL))(
                         result,
                         v10,
                         0,
                         0);
          }
        }
      }
    }
    goto LABEL_22;
  }
  return result;
}

