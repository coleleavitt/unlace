_QWORD *__fastcall sub_BDBE20(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-E0h]
  _BYTE *v22; // [rsp+20h] [rbp-C8h]
  __int64 v23; // [rsp+28h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = *(_DWORD *)(a2 + 24);
  v22 = v24;
  v23 = 0x1000000000LL;
  if ( v7 )
  {
    v8 = a2;
    do
    {
      v10 = sub_BDB000(a1, *(unsigned int **)(v8 + 32), a3, a4, a5, a6);
      if ( !v10 )
        goto LABEL_21;
      v11 = v23;
      if ( (unsigned int)v23 < HIDWORD(v23) )
      {
        a4 = (unsigned __int64)v22;
      }
      else
      {
        v12 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v23)));
        v11 = v23;
        a4 = v12;
        if ( (_DWORD)v23 )
        {
          if ( (unsigned int)(v23 - 1) <= 2 || (_BYTE *)v12 == v22 + 8 )
          {
            v20 = 0;
            do
            {
              a6 = *(_QWORD *)&v22[v20];
              *(_QWORD *)(a4 + v20) = a6;
              v20 += 8;
            }
            while ( 8LL * (unsigned int)v23 != v20 );
          }
          else
          {
            v13 = 0;
            a6 = 16LL * ((unsigned int)v23 >> 1);
            do
            {
              *(__m128i *)(a4 + v13) = _mm_loadu_si128((const __m128i *)&v22[v13]);
              v13 += 16;
            }
            while ( a6 != v13 );
            if ( (v23 & 1) != 0 )
            {
              v14 = (unsigned int)v23 & 0xFFFFFFFE;
              a6 = *(_QWORD *)&v22[8 * v14];
              *(_QWORD *)(a4 + 8 * v14) = a6;
            }
          }
        }
        if ( v22 != v24 && v22 )
        {
          v21 = a4;
          sub_186B220(v22);
          v11 = v23;
          a4 = v21;
        }
        v22 = (_BYTE *)a4;
        HIDWORD(v23) *= 2;
      }
      v9 = v11;
      v8 += 8;
      a3 = v11 + 1;
      *(_QWORD *)(a4 + 8 * v9) = v10;
      LODWORD(v23) = a3;
    }
    while ( v8 != a2 + 8LL * v7 );
  }
  v15 = (_QWORD *)sub_8E7DB0(*a1);
  v16 = v15;
  if ( !v15
    || (v17 = *a1, v18 = *v15, (unsigned int)sub_8E7030(*a1))
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v17 + 7488) + 56LL))(
          *(_QWORD *)(v17 + 7488),
          v18) )
  {
LABEL_21:
    v16 = nullptr;
  }
  if ( v22 != v24 && v22 )
    sub_186B220(v22);
  return v16;
}

