_BYTE *__fastcall sub_ADF340(__int64 *a1, int a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r12
  _BYTE *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  _BYTE *result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // [rsp+8h] [rbp-D0h]
  _BYTE *v20; // [rsp+10h] [rbp-C8h]
  __int64 v21; // [rsp+18h] [rbp-C0h]
  _BYTE v22[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *(_QWORD **)a3;
  v20 = v22;
  v21 = 0x1000000000LL;
  v4 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      if ( (_QWORD *)v4 == ++v3 )
        goto LABEL_13;
    }
    if ( (_QWORD *)v4 != v3 )
    {
      do
      {
        v5 = sub_15E1B70(*a1);
        v6 = v21;
        v7 = v5;
        if ( (unsigned int)v21 >= HIDWORD(v21) )
        {
          v16 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v21)));
          v6 = v21;
          v8 = (_BYTE *)v16;
          if ( (_DWORD)v21 )
          {
            if ( (unsigned int)(v21 - 1) <= 2 || (_BYTE *)v16 == v20 + 8 )
            {
              v18 = 0;
              do
              {
                *(_QWORD *)&v8[v18] = *(_QWORD *)&v20[v18];
                v18 += 8;
              }
              while ( 8LL * (unsigned int)v21 != v18 );
            }
            else
            {
              v17 = 0;
              do
              {
                *(__m128i *)&v8[v17] = _mm_loadu_si128((const __m128i *)&v20[v17]);
                v17 += 16;
              }
              while ( 16LL * ((unsigned int)v21 >> 1) != v17 );
              if ( (v21 & 1) != 0 )
                *(_QWORD *)&v8[8 * (v21 & 0xFFFFFFFE)] = *(_QWORD *)&v20[8 * (v21 & 0xFFFFFFFE)];
            }
          }
          if ( v20 != v22 && v20 )
          {
            v19 = v8;
            sub_186B220(v20);
            v6 = v21;
            v8 = v19;
          }
          v20 = v8;
          HIDWORD(v21) *= 2;
        }
        else
        {
          v8 = v20;
        }
        *(_QWORD *)&v8[8 * v6] = v7;
        v9 = v3 + 1;
        LODWORD(v21) = v6 + 1;
        if ( (_QWORD *)v4 == v3 + 1 )
          break;
        while ( 1 )
        {
          v3 = v9;
          if ( *v9 > 1u )
            break;
          if ( (_QWORD *)v4 == ++v9 )
            goto LABEL_13;
        }
      }
      while ( (_QWORD *)v4 != v9 );
    }
  }
LABEL_13:
  v10 = *a1;
  v11 = sub_15E1AF0(*a1);
  v12 = a1[9];
  v13 = v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 8);
    sub_8F8A20(v12);
    if ( (*(_DWORD *)(v13 + 8))-- == 1 )
      sub_15D7BC0(v10, v13);
  }
  else
  {
    sub_8F8A20(v12);
  }
  result = v22;
  if ( v20 != v22 )
  {
    if ( v20 )
      return (_BYTE *)sub_186B220(v20);
  }
  return result;
}

