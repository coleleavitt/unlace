__int64 __fastcall sub_1700A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  __int64 v7; // r14
  int v8; // r12d
  __int64 v9; // r10
  __int16 v10; // r13
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // bl
  __int64 i; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int8 v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 v23; // [rsp+0h] [rbp-32h]

  v6 = a4;
  v7 = a3 & 1;
  v8 = a4;
  v9 = (a3 - 1) / 2;
  v10 = WORD2(a4);
  v11 = BYTE4(a4);
  v12 = BYTE5(a4);
  if ( a2 < v9 )
  {
    v23 = WORD2(a4);
    for ( i = a2; ; i = v14 )
    {
      v14 = 2 * (i + 1);
      v15 = 16 * (i + 1);
      v16 = a1 + v15 - 8;
      result = a1 + v15;
      if ( *(_DWORD *)result < *(_DWORD *)v16
        || *(_DWORD *)v16 >= *(_DWORD *)result && *(_WORD *)(result + 4) < *(_WORD *)(v16 + 4) )
      {
        --v14;
        result = a1 + 8 * v14;
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)result;
        if ( v14 >= v9 )
        {
LABEL_9:
          v10 = v23;
          if ( !v7 && v14 == (a3 - 2) / 2 )
          {
LABEL_22:
            v21 = 2 * v14 + 2;
            v22 = *(_QWORD *)(a1 + 8 * v21 - 8);
            v14 = v21 - 1;
            *(_QWORD *)result = v22;
            result = a1 + 8 * v14;
          }
          v18 = (v14 - 1) / 2;
          if ( v14 > a2 )
          {
            v19 = v14;
            while ( 1 )
            {
              result = a1 + 8 * v18;
              if ( *(_DWORD *)result >= v6 )
              {
                if ( v6 < *(_DWORD *)result )
                  break;
                v20 = *(_BYTE *)(result + 5);
                if ( v20 >= v12 && (v12 < v20 || *(_BYTE *)(result + 4) >= v11) )
                  break;
              }
              *(_QWORD *)(a1 + 8 * v19) = *(_QWORD *)result;
              v19 = v18;
              if ( a2 >= v18 )
                goto LABEL_18;
              v18 = (v18 - 1) / 2;
            }
            result = a1 + 8 * v19;
          }
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)result;
        if ( v14 >= v9 )
          goto LABEL_9;
      }
    }
  }
  result = a1 + 8 * a2;
  if ( (a3 & 1) == 0 && a2 == (a3 - 2) / 2 )
  {
    v14 = a2;
    goto LABEL_22;
  }
LABEL_18:
  *(_DWORD *)result = v8;
  *(_WORD *)(result + 4) = v10;
  return result;
}

