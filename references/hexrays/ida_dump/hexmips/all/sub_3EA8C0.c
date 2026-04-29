__int64 __fastcall sub_3EA8C0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  char v7; // si
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ecx

  result = a1;
  v7 = *(_BYTE *)(a1 + 40LL * a4 + 65);
  if ( v7 != 4 )
  {
    if ( v7 == 9 )
    {
      v9 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v9 <= 0x38u )
      {
        v10 = 0x12A000000000000LL;
        if ( _bittest64(&v10, v9) )
        {
          if ( a4 == 1 )
            goto LABEL_6;
          v8 = *(unsigned __int8 *)(result + 40LL * a4 + 69);
          if ( (_BYTE)v8 == 10 )
          {
LABEL_5:
            result = *(_QWORD *)(result + 832);
            a4 = *(_DWORD *)(result + 80);
LABEL_6:
            *(_BYTE *)a2 = 1;
            *(_DWORD *)(a2 + 8) = a3;
            *(_DWORD *)(a2 + 4) = a4;
            return result;
          }
          goto LABEL_11;
        }
      }
LABEL_4:
      v8 = *(unsigned __int8 *)(result + 40LL * a4 + 69);
      if ( (_BYTE)v8 == 10 )
        goto LABEL_5;
LABEL_11:
      result = get_dtype_size(v8);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = a3;
      *(_DWORD *)(a2 + 4) = result;
      return result;
    }
    if ( v7 != 2 )
      goto LABEL_4;
  }
  result = *(_QWORD *)(a1 + 832);
  v11 = *(_DWORD *)(result + 84);
  *(_BYTE *)a2 = 1;
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 4) = v11;
  return result;
}
