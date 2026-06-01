__int64 __fastcall sub_D46CC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r14
  __int64 v6; // rbp
  __int16 v7; // ax
  unsigned int v8; // r12d
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rsi

  result = sub_D46840(a1, a2);
  if ( !(_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 288);
    if ( v3 )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v3 - 4);
        if ( !(_DWORD)result )
          break;
        while ( 1 )
        {
          v4 = 0xFFFFFFFF0LL;
          if ( v3 )
            v4 = 16LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
          v5 = (_DWORD *)(v4 + v3);
          v6 = *(_QWORD *)v5;
          v7 = *(_WORD *)(*(_QWORD *)v5 + 4LL);
          if ( !v7 )
            break;
          if ( v7 != 2 )
          {
            sub_1872CE0("");
            sub_1873130(114, 75);
          }
          v11 = *(_QWORD *)(v6 + 24);
          ++v5[2];
          if ( (unsigned __int8)sub_D46840(a1, v11) )
            goto LABEL_13;
LABEL_15:
          v3 = *(_QWORD *)(a1 + 288);
        }
        v8 = *(_DWORD *)(v6 + 24);
        while ( 1 )
        {
          v10 = v5[2];
          if ( v10 >= v8 )
            break;
          v9 = *(_QWORD *)(v6 + 8LL * v10 + 32);
          v5[2] = v10 + 1;
          if ( !(unsigned __int8)sub_D46840(a1, v9) )
            goto LABEL_15;
        }
LABEL_13:
        v3 = *(_QWORD *)(a1 + 288);
        --*(_DWORD *)(v3 - 4);
      }
    }
  }
  return result;
}

