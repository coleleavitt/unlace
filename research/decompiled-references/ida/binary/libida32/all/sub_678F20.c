__int64 __fastcall sub_678F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r9d
  __int64 v7; // r12
  __int64 v9; // rbx
  unsigned int v10; // r11d
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx

  v6 = a4;
  v7 = a3 & 1;
  v9 = (a3 - 1) / 2;
  v10 = HIDWORD(a4);
  if ( a2 < v9 )
  {
    for ( i = a2; ; i = v12 )
    {
      v12 = 2 * (i + 1);
      v13 = 16 * (i + 1);
      v14 = (_DWORD *)(a1 + v13 - 8);
      result = a1 + v13;
      if ( *v14 < *(_DWORD *)result || *v14 == *(_DWORD *)result && *(_DWORD *)(result + 4) >= v14[1] )
      {
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)result;
        if ( v9 <= v12 )
          goto LABEL_9;
      }
      else
      {
        --v12;
        result = a1 + 8 * v12;
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)result;
        if ( v9 <= v12 )
        {
LABEL_9:
          if ( !v7 && (a3 - 2) / 2 == v12 )
          {
LABEL_19:
            v17 = 2 * v12 + 2;
            v18 = *(_QWORD *)(a1 + 8 * v17 - 8);
            v12 = v17 - 1;
            *(_QWORD *)result = v18;
            result = a1 + 8 * v12;
          }
          v16 = (v12 - 1) / 2;
          if ( v12 > a2 )
          {
            while ( 1 )
            {
              result = a1 + 8 * v16;
              if ( v6 < *(_DWORD *)result || *(_DWORD *)result == v6 && *(_DWORD *)(result + 4) >= v10 )
                break;
              *(_QWORD *)(a1 + 8 * v12) = *(_QWORD *)result;
              v12 = v16;
              if ( a2 >= v16 )
                goto LABEL_15;
              v16 = (v16 - 1) / 2;
            }
            result = a1 + 8 * v12;
          }
          goto LABEL_15;
        }
      }
    }
  }
  result = a1 + 8 * a2;
  if ( (a3 & 1) == 0 && a2 == (a3 - 2) / 2 )
  {
    v12 = a2;
    goto LABEL_19;
  }
LABEL_15:
  *(_QWORD *)result = a4;
  return result;
}

