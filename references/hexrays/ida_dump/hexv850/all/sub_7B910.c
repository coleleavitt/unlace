__int64 __fastcall sub_7B910(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r15
  _BYTE *v5; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  _BYTE *v9; // r15
  _BYTE *v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  char v18; // r12
  __int64 v19; // r12
  char v20; // r10
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  char v25; // [rsp+17h] [rbp-41h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  sub_7ADE0(a2, *(_DWORD *)(a1 + 8));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned __int64)(result + 7) >> 3;
  if ( !(_DWORD)v4 )
    return result;
  v5 = *(_BYTE **)a1;
  v6 = a2[1];
  v7 = a2[2];
  v8 = *a2;
  v9 = (_BYTE *)(*(_QWORD *)a1 + (int)v4);
  v10 = *(_BYTE **)a1;
  v11 = *(_QWORD *)a1;
  while ( 1 )
  {
    do
    {
      v12 = ++v5 - v10;
      if ( v5 >= v9 )
        break;
LABEL_4:
      ;
    }
    while ( v12 <= 0x40 && (unsigned __int8)(*v5 - 1) > 0xFDu && *v5 == *v10 );
    v13 = v6;
    v14 = v6 + 1;
    v15 = v8;
    if ( v12 > 1 )
      break;
    while ( 1 )
    {
      v19 = (__int64)&v5[-v11];
      if ( &v5[-v11] != (_BYTE *)&qword_80 )
      {
        v10 = v5;
        if ( v9 != v5 )
          break;
      }
      if ( v7 < v14 )
      {
        v24 = v11;
        v22 = qvector_reserve(a2, v8, v14, 1);
        v11 = v24;
        *a2 = v22;
        v15 = v22;
        v13 = a2[1];
      }
      *(_BYTE *)(v15 + v13) = v19 - 1;
      ++a2[1];
      result = sub_7AC60(a2, v11, v19);
      if ( v9 == v5 )
        return result;
LABEL_14:
      v10 = v5;
      v11 = (__int64)v5++;
      v6 = a2[1];
      v7 = a2[2];
      v8 = *a2;
      v12 = v5 - v10;
      if ( v5 < v9 )
        goto LABEL_4;
      v13 = a2[1];
      v14 = v6 + 1;
      v15 = *a2;
      if ( v12 > 1 )
        goto LABEL_8;
    }
  }
LABEL_8:
  v16 = (__int64)&v10[-v11];
  if ( v10 != (_BYTE *)v11 )
  {
    v20 = v16 - 1;
    if ( v7 < v14 )
    {
      v26 = v11;
      v25 = v16 - 1;
      v23 = &v10[-v11];
      v21 = qvector_reserve(a2, v8, v14, 1);
      v11 = v26;
      v20 = v25;
      *a2 = v21;
      v15 = v21;
      v16 = (__int64)v23;
      v13 = a2[1];
    }
    *(_BYTE *)(v15 + v13) = v20;
    ++a2[1];
    sub_7AC60(a2, v11, v16);
    v6 = a2[1];
    v8 = *a2;
  }
  result = 4294967232LL;
  v17 = v6 + 1;
  if ( *v10 != 0xFF )
    result = 4294967168LL;
  v18 = result | (v12 - 2);
  if ( a2[2] < v17 )
  {
    result = qvector_reserve(a2, v8, v17, 1);
    v6 = a2[1];
    *a2 = result;
    v8 = result;
  }
  *(_BYTE *)(v8 + v6) = v18;
  ++a2[1];
  if ( v9 != v5 )
    goto LABEL_14;
  return result;
}
