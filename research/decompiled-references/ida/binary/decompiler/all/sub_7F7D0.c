__int64 __fastcall sub_7F7D0(__int64 *a1, __int64 *a2)
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
  char v17; // r12
  __int64 v18; // r12
  char v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  char v24; // [rsp+17h] [rbp-41h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  sub_7EBE0(a2);
  result = a1[1];
  v4 = (unsigned __int64)(result + 7) >> 3;
  if ( !(_DWORD)v4 )
    return result;
  v5 = (_BYTE *)*a1;
  v6 = a2[1];
  v7 = a2[2];
  v8 = *a2;
  v9 = (_BYTE *)(*a1 + (int)v4);
  v10 = (_BYTE *)*a1;
  v11 = *a1;
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
      v18 = (__int64)&v5[-v11];
      if ( &v5[-v11] != (_BYTE *)&qword_80 )
      {
        v10 = v5;
        if ( v9 != v5 )
          break;
      }
      if ( v7 < v14 )
      {
        v23 = v11;
        v21 = qvector_reserve();
        v11 = v23;
        *a2 = v21;
        v15 = v21;
        v13 = a2[1];
      }
      *(_BYTE *)(v15 + v13) = v18 - 1;
      ++a2[1];
      result = sub_7EA60(a2, v11, v18);
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
    v19 = v16 - 1;
    if ( v7 < v14 )
    {
      v25 = v11;
      v24 = v16 - 1;
      v22 = &v10[-v11];
      v20 = qvector_reserve();
      v11 = v25;
      v19 = v24;
      *a2 = v20;
      v15 = v20;
      v16 = (__int64)v22;
      v13 = a2[1];
    }
    *(_BYTE *)(v15 + v13) = v19;
    ++a2[1];
    sub_7EA60(a2, v11, v16);
    v6 = a2[1];
    v8 = *a2;
  }
  result = 4294967232LL;
  if ( *v10 != 0xFF )
    result = 4294967168LL;
  v17 = result | (v12 - 2);
  if ( a2[2] < (unsigned __int64)(v6 + 1) )
  {
    result = qvector_reserve();
    v6 = a2[1];
    *a2 = result;
    v8 = result;
  }
  *(_BYTE *)(v8 + v6) = v17;
  ++a2[1];
  if ( v9 != v5 )
    goto LABEL_14;
  return result;
}
