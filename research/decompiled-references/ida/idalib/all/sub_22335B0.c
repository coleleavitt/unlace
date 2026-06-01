__int64 __fastcall sub_22335B0(char *a1)
{
  __int64 result; // rax
  _QWORD *v2; // r15
  __int64 v3; // rbp
  void *v4; // rdx
  const char *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  __int64 i; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rax
  _WORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+0h] [rbp-58h]
  _QWORD *v18; // [rsp+8h] [rbp-50h]
  _BYTE v19[57]; // [rsp+1Fh] [rbp-39h] BYREF

  result = __tls_get_addr(&stru_2C77838);
  v2 = *(_QWORD **)(result + 296);
  if ( v2 )
  {
    v3 = result;
    v4 = *((void **)a1 + 4);
    if ( *((_QWORD *)a1 + 3) - (_QWORD)v4 > 0xBu )
    {
      qmemcpy(v4, "Stack dump:\n", 12);
      *(_QWORD *)(result + 296) = 0;
      *((_QWORD *)a1 + 4) += 12LL;
    }
    else
    {
      v5 = "Stack dump:\n";
      sub_227BF10(a1, "Stack dump:\n", 12);
      v2 = *(_QWORD **)(v3 + 296);
      *(_QWORD *)(v3 + 296) = 0;
      if ( !v2 )
      {
        v18 = nullptr;
LABEL_15:
        *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 296) = v18;
        result = *((_QWORD *)a1 + 2);
        if ( *((_QWORD *)a1 + 4) != result )
          return sub_227B9F0(a1, v5, v14, v18, v15, v16, v17);
        return result;
      }
    }
    v18 = v2;
    v6 = nullptr;
    while ( 1 )
    {
      v7 = (_QWORD *)v2[1];
      v2[1] = v6;
      v6 = v2;
      if ( !v7 )
        break;
      v2 = v7;
    }
    v8 = v2;
    for ( i = 0; ; i = v10 )
    {
      v10 = i + 1;
      v11 = sub_227B910(a1, i);
      v12 = *(_WORD **)(v11 + 32);
      if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 <= 1u )
      {
        sub_227BF10(v11, ".\t", 2);
      }
      else
      {
        *v12 = 2350;
        *(_QWORD *)(v11 + 32) += 2LL;
      }
      sub_2297ED0(v19, 5);
      v5 = a1;
      (*(void (__fastcall **)(_QWORD *, char *))(*v8 + 16LL))(v8, a1);
      sub_2297EE0(v19);
      v8 = (_QWORD *)v8[1];
      if ( !v8 )
        break;
    }
    while ( 1 )
    {
      v13 = (_QWORD *)v2[1];
      v2[1] = v7;
      v7 = v2;
      if ( !v13 )
        break;
      v2 = v13;
    }
    goto LABEL_15;
  }
  return result;
}
