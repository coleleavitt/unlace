__int64 __fastcall sub_B11320(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 result; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 **v13; // rbx
  __int64 *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rdi
  __int64 *v18; // rcx
  __int64 *v19; // r14
  int v20; // eax
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-48h]
  __int64 *v26; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v27 = a3 + 2 * a2;
  v5 = a1[8];
  if ( !v5 || a2 >= *(_DWORD *)(v5 - 4) )
  {
    sub_B09720((__int64)a1, a2);
    v5 = a1[8];
  }
  v6 = 48LL * a2;
  result = v6 + v5;
  v25 = v27 & 1;
  v8 = *(__int64 **)(result + 8 * v25);
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= *(_DWORD *)(v9 - 4) )
          break;
        v11 = sub_B0FF50((__int64)a1, a2, v4, v8, v10);
        v9 = *v8;
        v10 = v10 + 1 - v11;
      }
      while ( *v8 );
      result = v6 + a1[8];
    }
  }
  v12 = *(_QWORD *)(result + 16);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 12) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1011);
    }
    sub_B107F0(a1, *(_QWORD *)(result + 16), a3);
    result = v6 + a1[8];
  }
  v13 = *(__int64 ***)(result + 8 * v25 + 24);
  if ( !v13 || (v14 = *v13) == nullptr || (v15 = *((unsigned int *)v14 - 1), !(_DWORD)v15) )
  {
LABEL_21:
    v17 = *(unsigned int **)(result + 40);
    if ( v17 )
    {
      result = a1[2];
      if ( *(_QWORD *)(result + 8984) == qword_1C7ED18 && !*(_BYTE *)(result + 2416) )
        return sub_B0F4A0(v17, (__int64)a1, a3);
    }
    return result;
  }
  result = a1[2];
  if ( *(_QWORD *)(result + 8984) != qword_1C7ED18 || *(_BYTE *)(result + 2416) )
    return result;
  v18 = &v14[v15];
  v19 = *v13;
  while ( 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(result + 8848) + *(unsigned int *)*v19) != 1 )
      goto LABEL_28;
    v26 = v18;
    v20 = sub_B0F310(*v19, (__int64)a1, v27);
    v18 = v26;
    if ( v20 == -1 )
      break;
    if ( v20 == 1 )
    {
      if ( v19 != v14 )
        *v14 = *v19;
      ++v14;
    }
LABEL_28:
    if ( ++v19 == v18 )
    {
      v16 = a1[8];
      if ( *v13 )
        *((_DWORD *)*v13 - 1) = v14 - *v13;
      result = v6 + v16;
      goto LABEL_21;
    }
    result = a1[2];
  }
  if ( v26 != v19 )
  {
    v21 = (char *)v26 - (char *)v19;
    if ( (unsigned __int64)((char *)v26 - (char *)v19 - 8) <= 0x10 || v14 == v19 + 1 )
    {
      v24 = 0;
      do
      {
        v14[v24 / 8] = v19[v24 / 8];
        v24 += 8LL;
      }
      while ( v24 != v21 );
    }
    else
    {
      v22 = ((unsigned __int64)(v21 - 8) >> 3) + 1;
      v23 = 0;
      do
      {
        *(__m128i *)&v14[v23] = _mm_loadu_si128((const __m128i *)&v19[v23]);
        v23 += 2;
      }
      while ( v23 != 2 * (v22 >> 1) );
      if ( (v22 & 1) != 0 )
        v14[v22 & 0xFFFFFFFFFFFFFFFELL] = v19[v22 & 0xFFFFFFFFFFFFFFFELL];
    }
    v14 = (__int64 *)((char *)v14 + v21);
  }
  result = (__int64)*v13;
  if ( *v13 )
    *(_DWORD *)(result - 4) = ((__int64)v14 - result) >> 3;
  return result;
}

