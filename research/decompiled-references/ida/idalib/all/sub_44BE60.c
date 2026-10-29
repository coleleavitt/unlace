__int64 __fastcall sub_44BE60(__int64 a1, unsigned __int16 *a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rcx
  _DWORD *v9; // r15
  unsigned __int16 *v10; // r14
  unsigned __int16 *v11; // r9
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rax
  __int64 v14; // rsi
  unsigned int v15; // [rsp+4h] [rbp-44h]
  unsigned __int16 *v16; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16);
  result = a2[20];
  v6 = *(_DWORD *)(v4 + 104);
  if ( (int)result >= v6 && (int)result < *(_DWORD *)(v4 + 108) )
  {
    result = *(_QWORD *)(v4 + 112) + 16LL * ((int)result - v6);
    v7 = *(unsigned int *)(result + 8);
    if ( (_DWORD)v7 )
    {
      v9 = dword_23AD9C0;
      v10 = a2 + 28;
      v11 = a2 + 188;
      while ( 1 )
      {
        result = *v9 & (unsigned int)v7;
        if ( (*v9 & (unsigned int)v7) != 0 && *((_BYTE *)v10 + 1) && a3[1] )
          break;
LABEL_5:
        v10 += 20;
        ++v9;
        if ( v10 == v11 )
          return result;
      }
      v12 = 0;
      while ( 1 )
      {
        v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL);
        v14 = 40 * v12 + *a3;
        if ( v13 != sub_449EC0 )
          break;
        result = *(unsigned __int8 *)(v14 + 1);
        if ( (_BYTE)result == *((_BYTE *)v10 + 1) )
        {
          if ( (_BYTE)result != 99 )
          {
            if ( (_BYTE)result == 100 )
            {
              result = *((_QWORD *)v10 + 1);
              if ( *(_QWORD *)(v14 + 8) != result )
                goto LABEL_16;
            }
            else
            {
              if ( (_BYTE)result != 1 )
                goto LABEL_16;
              result = v10[3];
              if ( *(_WORD *)(v14 + 6) != (_WORD)result )
                goto LABEL_16;
            }
          }
LABEL_15:
          *(_BYTE *)(v14 + 1) = 0;
        }
LABEL_16:
        if ( (unsigned __int64)++v12 >= a3[1] )
          goto LABEL_5;
      }
      v16 = v11;
      v15 = v7;
      result = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, unsigned __int16 *, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v13)(
                 a2,
                 v14,
                 v10,
                 v7,
                 sub_449EC0);
      v7 = v15;
      v11 = v16;
      if ( !(_BYTE)result )
        goto LABEL_16;
      v14 = 40 * v12 + *a3;
      goto LABEL_15;
    }
  }
  return result;
}
