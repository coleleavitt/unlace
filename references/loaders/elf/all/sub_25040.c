unsigned int *__fastcall sub_25040(unsigned int *a1, unsigned __int16 *a2, int a3)
{
  unsigned int *result; // rax
  unsigned int v5; // esi
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // edi
  unsigned int v10; // r10d
  __int64 v11; // r9
  int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  _WORD *v15; // r8
  unsigned int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  __int64 v22; // rdi
  __int64 v23; // r8
  unsigned int v24; // edi

  result = a1;
  v5 = *a1;
  v6 = a1[1];
  if ( *a1 <= 0xFFFFFF )
  {
    v5 <<= 8;
    v7 = *((_QWORD *)a1 + 2);
    *a1 = v5;
    v8 = *((_QWORD *)a1 + 3);
    *((_QWORD *)result + 3) = v8 + 1;
    v6 = *(unsigned __int8 *)(v7 + v8) + (v6 << 8);
    result[1] = v6;
  }
  v9 = *a2 * (v5 >> 11);
  if ( v6 >= v9 )
  {
    *result = v5 - v9;
    result[1] = v6 - v9;
    *a2 -= *a2 >> 5;
    v20 = *result;
    v21 = result[1];
    if ( *result <= 0xFFFFFF )
    {
      v22 = *((_QWORD *)result + 3);
      v23 = *((_QWORD *)result + 2);
      v20 <<= 8;
      *result = v20;
      *((_QWORD *)result + 3) = v22 + 1;
      v21 = *(unsigned __int8 *)(v23 + v22) + (v21 << 8);
      result[1] = v21;
    }
    v24 = a2[1] * (v20 >> 11);
    if ( v21 >= v24 )
    {
      v11 = (__int64)(a2 + 258);
      v10 = 256;
      *result = v20 - v24;
      result[1] = v21 - v24;
      *(_WORD *)(v11 - 514) -= *(_WORD *)(v11 - 514) >> 5;
      v12 = 18;
    }
    else
    {
      *result = v24;
      v10 = 8;
      a2[1] += (2048 - a2[1]) >> 5;
      v11 = (__int64)&a2[8 * a3 + 130];
      v12 = 10;
    }
  }
  else
  {
    *result = v9;
    v10 = 8;
    *a2 += (2048 - *a2) >> 5;
    v11 = (__int64)&a2[8 * a3 + 2];
    v12 = 2;
  }
  result[36] = v12;
  v13 = 1;
  do
  {
    while ( 1 )
    {
      v14 = *result;
      v15 = (_WORD *)(v11 + 2LL * v13);
      v16 = result[1];
      if ( *result <= 0xFFFFFF )
      {
        v17 = *((_QWORD *)result + 3);
        v18 = *((_QWORD *)result + 2);
        v14 <<= 8;
        *result = v14;
        *((_QWORD *)result + 3) = v17 + 1;
        v16 = *(unsigned __int8 *)(v18 + v17) + (v16 << 8);
        result[1] = v16;
      }
      v13 *= 2;
      v19 = (unsigned __int16)*v15 * (v14 >> 11);
      if ( v16 >= v19 )
        break;
      *result = v19;
      *v15 += (2048 - (unsigned __int16)*v15) >> 5;
      if ( v13 >= v10 )
        goto LABEL_11;
    }
    ++v13;
    *result = v14 - v19;
    result[1] = v16 - v19;
    *v15 -= *v15 >> 5;
  }
  while ( v13 < v10 );
LABEL_11:
  result[36] = v13 + result[36] - v10;
  return result;
}
