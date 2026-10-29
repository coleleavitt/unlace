__int64 __fastcall sub_D1C20(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // r15
  _QWORD *v10; // rdi
  int v11; // eax
  _QWORD *v12; // rdi
  int v13; // edx
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 eah; // [rsp+0h] [rbp-48h]

  eah = get_eah();
  v4 = dbg;
  result = *(unsigned int *)(dbg + 64LL);
  if ( (int)result > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( dword_245174 == (_DWORD)v6 )
        goto LABEL_28;
      if ( (v6 & 0x80000000) != 0LL )
        goto LABEL_28;
      if ( v6 >= (unsigned __int64)xmmword_2524F8 )
        goto LABEL_28;
      v7 = qword_2524F0 + 56 * v6;
      if ( !v7 )
        goto LABEL_28;
      result = sub_C72E0(v7);
      if ( !(_BYTE)result )
        goto LABEL_28;
      v8 = v6;
      if ( !a1 )
        break;
      v9 = *(_QWORD *)(a1 + 32 * v6 + 8);
      if ( v4 )
      {
        if ( (*(_BYTE *)(v4 + 37) & 0x40) != 0 )
        {
          v10 = qword_252758;
          if ( qword_252758 )
          {
            *(_QWORD *)qword_252758 = v9;
            v10[1] = a1;
            *((_DWORD *)v10 + 4) = v6;
            v11 = sub_CDCF0((__int64)v10, 11);
            v8 = v6;
            if ( v11 != 1 )
              break;
            v9 = *(_QWORD *)qword_252758;
          }
        }
      }
LABEL_14:
      if ( a2 )
      {
        result = *(_QWORD *)(a2 + 32 * v6 + 8);
        if ( dbg )
        {
          if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
          {
            v12 = qword_252758;
            if ( qword_252758 )
            {
              *(_QWORD *)qword_252758 = result;
              v12[1] = a2;
              *((_DWORD *)v12 + 4) = v8;
              v13 = sub_CDCF0((__int64)v12, 11);
              result = -1;
              if ( v13 == 1 )
                result = *(_QWORD *)qword_252758;
            }
          }
        }
        if ( v9 == result )
          goto LABEL_28;
      }
      result = eah;
      if ( *(_QWORD *)(eah + 16) >= v9 )
      {
        result = is_mapped();
        if ( !(_BYTE)result )
          goto LABEL_28;
      }
      if ( v6 >= (unsigned __int64)xmmword_2524F8 )
        goto LABEL_28;
      v14 = qword_2524F0 + 56 * v6;
      if ( !v14 )
        goto LABEL_28;
      if ( *(_QWORD *)(v14 + 8) )
      {
        result = sub_164DE0(*(char **)v14);
        v15 = result;
        if ( !result )
          goto LABEL_28;
LABEL_27:
        result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)result + 704LL))(
                   v15,
                   v9,
                   0,
                   0);
        goto LABEL_28;
      }
      result = sub_164DE0((char *)s1);
      v15 = result;
      if ( result )
        goto LABEL_27;
LABEL_28:
      v4 = dbg;
      if ( *(_DWORD *)(dbg + 64LL) <= (int)++v6 )
        return result;
    }
    v9 = -1;
    goto LABEL_14;
  }
  return result;
}

