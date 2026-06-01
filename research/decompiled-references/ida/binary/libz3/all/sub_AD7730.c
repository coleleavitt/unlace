_QWORD *__fastcall sub_AD7730(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *result; // rax
  __int64 v11; // r12
  _DWORD **v12; // r14
  char v13; // dl
  __int64 v14; // rdx
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (a3 - 1) / 2;
  v18 = a5;
  v16 = a3 & 1;
  if ( a2 >= v5 )
  {
    result = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    v6 = a2;
  }
  else
  {
    v6 = a2;
    do
    {
      v7 = sub_AD6A30(&v18, *(_DWORD **)(a1 + 16 * (v6 + 1)), *(_DWORD **)(a1 + 16 * (v6 + 1) - 8));
      v8 = v6;
      v9 = 2 * (v6 + 1) - v7;
      result = (_QWORD *)(a1 + 8 * v9);
      v6 = v9;
      *(_QWORD *)(a1 + 8 * v8) = *result;
    }
    while ( v9 < v5 );
    if ( v16 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v6 )
  {
    v14 = *(_QWORD *)(a1 + 8 * (2 * v6 + 2) - 8);
    v6 = 2 * v6 + 1;
    *result = v14;
    result = (_QWORD *)(a1 + 8 * v6);
  }
LABEL_5:
  v19[0] = v18;
  v11 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v12 = (_DWORD **)(a1 + 8 * v11);
      v13 = sub_AD6A30(v19, *v12, a4);
      result = (_QWORD *)(a1 + 8 * v6);
      if ( !v13 )
        break;
      v6 = v11;
      *result = *v12;
      if ( a2 >= v11 )
      {
        result = (_QWORD *)(a1 + 8 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_10:
  *result = a4;
  return result;
}

