__int64 __fastcall sub_1803C00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int16 v6; // ax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v3 = a2;
  result = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 49 >= 3 )
    v3 = 0;
  v5 = *(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFFCLL;
  if ( v5 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(a3 + 72) + 8LL);
    if ( v6 == 110 )
    {
      v7 = 0;
      v8 = 1;
    }
    else if ( v6 <= 0x6Eu )
    {
      if ( v6 != 109 )
        goto LABEL_16;
      v7 = 0;
      v8 = 0;
    }
    else
    {
      if ( v6 != 346 )
      {
        if ( v6 == 347 )
        {
          v7 = 1;
          v8 = 1;
          goto LABEL_9;
        }
LABEL_16:
        v9 = *(_QWORD *)(a2 + 16);
        if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x2B )
          return 1;
        if ( *(_BYTE *)(a1 + 36) )
        {
          v10 = *(_QWORD **)(a1 + 16);
          v11 = &v10[*(unsigned int *)(a1 + 28)];
          if ( v10 == v11 )
            return 1;
          while ( v9 != *v10 )
          {
            if ( v11 == ++v10 )
              return 1;
          }
        }
        else if ( !sub_2236570(a1 + 16, v9) )
        {
          return 1;
        }
        *(_BYTE *)(a1 + 168) = 1;
        return 0;
      }
      v7 = 1;
      v8 = 0;
    }
LABEL_9:
    result = sub_1697F80(a1, v3, *(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFFCLL, v7, v8);
    if ( !(_BYTE)result )
    {
      result = sub_1E5F880(a1, *(_QWORD *)(v3 + 48), v5, v7, v8);
      *(_QWORD *)(v3 + 48) = result;
    }
  }
  return result;
}
