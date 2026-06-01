__int64 __fastcall sub_9E9CE0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 i; // r11
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]

  result = (a3 - 1) / 2;
  v16 = result;
  v17 = a3 & 1;
  if ( a2 >= result )
  {
    v9 = a2;
    v11 = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_15;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      while ( 1 )
      {
        v15 = i;
        v8 = 2 * (i + 1);
        v9 = v8 - 1;
        v10 = (_QWORD *)(a1 + 16 * (i + 1));
        v11 = (_QWORD *)(a1 + 8 * (v8 - 1));
        if ( !(unsigned __int8)sub_10246C0(a5, *(unsigned int *)*v10, *(unsigned int *)*v11) )
          break;
        *(_QWORD *)(a1 + 8 * v15) = *v11;
        if ( v9 >= v16 )
          goto LABEL_9;
        i = v8 - 1;
      }
      *(_QWORD *)(a1 + 8 * v15) = *v10;
      if ( v8 >= v16 )
        break;
    }
    v11 = v10;
    v9 = v8;
LABEL_9:
    if ( v17 )
      goto LABEL_10;
  }
  if ( (a3 - 2) / 2 == v9 )
  {
    v9 = 2 * v9 + 1;
    *v11 = *(_QWORD *)(a1 + 8 * v9);
    v11 = (_QWORD *)(a1 + 8 * v9);
  }
LABEL_10:
  result = v9 - 1;
  v12 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)(a1 + 8 * v12);
      v11 = (_QWORD *)(a1 + 8 * v9);
      result = sub_10246C0(a5, *(unsigned int *)*v13, *a4);
      if ( !(_BYTE)result )
        break;
      v9 = v12;
      *v11 = *v13;
      result = (v12 - 1) / 2;
      if ( a2 >= v12 )
      {
        v11 = (_QWORD *)(a1 + 8 * v12);
        break;
      }
      v12 = (v12 - 1) / 2;
    }
  }
LABEL_15:
  *v11 = a4;
  return result;
}
