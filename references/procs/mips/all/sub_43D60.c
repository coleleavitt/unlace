__int64 __fastcall sub_43D60(_QWORD *a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-30h]

  if ( *(_WORD *)(a5 + 8) != a2 )
  {
    v10 = a1[9];
    v11 = v10 + 16LL * a1[10];
    if ( v10 == v11 )
    {
LABEL_11:
      v13 = a1[10] + 1LL;
      if ( a1[11] < v13 )
      {
        v14 = qvector_reserve(a1 + 9, v10, v13, 16);
        v15 = a1[10];
        a1[9] = v14;
        v16 = v15;
        v13 = v15 + 1;
        v11 = v14 + 16 * v16;
      }
      a1[10] = v13;
      a5 = v11;
      *(_WORD *)(v11 + 8) = a2;
      if ( a2 != 29 )
        goto LABEL_3;
      goto LABEL_14;
    }
    v12 = v10;
    while ( 1 )
    {
      a5 = v12;
      if ( a2 == *(_WORD *)(v12 + 8) )
        break;
      v12 += 16;
      if ( v11 == v12 )
        goto LABEL_11;
    }
  }
  if ( a2 != 29 )
  {
LABEL_3:
    v8 = 1LL << a2;
    if ( a2 >= 0x40u )
      v8 = 0;
LABEL_5:
    a1[15] |= v8;
    result = 1;
    *(_QWORD *)a5 = a3;
    return result;
  }
LABEL_14:
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 32LL) + 24LL) != 8 )
    a3 = (int)a3;
  result = 0;
  if ( *(_QWORD *)a5 >= a3 )
  {
    if ( *(_QWORD *)a5 > a3 )
    {
      v17 = (_QWORD *)a1[6];
      v18 = a1[7];
      v19 = &v17[v18];
      if ( v17 == v19 )
        goto LABEL_24;
      v20 = (_QWORD *)a1[6];
      while ( *v20 != a4 )
      {
        if ( v19 == ++v20 )
          goto LABEL_24;
      }
      if ( v20 == v19 )
      {
LABEL_24:
        if ( a1[8] < (unsigned __int64)(v18 + 1) )
        {
          v23 = a5;
          v21 = qvector_reserve(a1 + 6, v17, v18 + 1, 8);
          v22 = a1[7];
          a5 = v23;
          a1[6] = v21;
          v19 = (_QWORD *)(v21 + 8 * v22);
        }
        *v19 = a4;
        ++a1[7];
      }
    }
    v8 = 0x20000000;
    goto LABEL_5;
  }
  return result;
}
