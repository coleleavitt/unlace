__int64 __fastcall sub_5F9340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 i; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rdx
  _QWORD *v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v22; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v23; // [rsp+1Ch] [rbp-5Ch]
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]

  v26 = a3 & 1;
  result = (a3 - 1) / 2;
  v25 = result;
  if ( a2 >= result )
  {
    v11 = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_16;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_16;
    v9 = a2;
    goto LABEL_18;
  }
  for ( i = a2; ; i = v9 )
  {
    v12 = 16 * (i + 1);
    v13 = *(_QWORD *)(a1 + v12);
    v14 = *(_QWORD *)(a1 + v12 - 8);
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v22 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) )
    {
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v8 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13) >> 32;
    }
    else
    {
      v8 = v22;
    }
    v9 = 2 * (i + 1) - (unsigned __int8)sub_CB1620(a5, v8);
    v10 = 8 * v9;
    v11 = (_QWORD *)(a1 + 8 * v9);
    *(_QWORD *)(a1 + 8 * i) = *v11;
    if ( v25 <= v9 )
      break;
  }
  if ( !v26 && (a3 - 2) / 2 == v9 )
  {
LABEL_18:
    v20 = *(_QWORD *)(a1 + 8 * (2 * v9 + 2) - 8);
    v9 = 2 * v9 + 1;
    v10 = 8 * v9;
    *v11 = v20;
    v11 = (_QWORD *)(a1 + 8 * v9);
  }
  result = a2;
  v15 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)(a1 + 8 * v15);
      v18 = *v17;
      v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
      if ( v23 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
        v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18) >> 32;
        result = sub_CB1620(a5, v19);
        v11 = (_QWORD *)(a1 + v10);
        if ( !(_BYTE)result )
          goto LABEL_16;
      }
      else
      {
        result = sub_CB1620(a5, v23);
        v11 = (_QWORD *)(a1 + v10);
        if ( !(_BYTE)result )
          goto LABEL_16;
      }
      *v11 = *v17;
      v16 = v15;
      result = (v15 - 1) / 2;
      if ( a2 >= v15 )
        break;
      v15 = (v15 - 1) / 2;
      v10 = 8 * v16;
    }
    v11 = (_QWORD *)(a1 + 8 * v15);
  }
LABEL_16:
  *v11 = a4;
  return result;
}

