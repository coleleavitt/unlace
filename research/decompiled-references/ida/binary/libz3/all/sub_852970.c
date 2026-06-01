__int64 __fastcall sub_852970(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  _DWORD *v6; // rax
  unsigned int **v7; // r14
  __int64 v8; // rax
  unsigned int **v9; // r13
  _QWORD **v10; // r15
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-D8h]
  __int64 v21; // [rsp+0h] [rbp-D8h]
  _BYTE *v22; // [rsp+10h] [rbp-C8h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v3 || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4)) || (result = *(_QWORD *)(v3 + 8 * v4)) == 0 )
  {
    if ( !*((_WORD *)a2 + 2) && (v6 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr && *v6 == 5 )
    {
      v22 = v24;
      v23 = 0x1000000000LL;
      if ( (*(_BYTE *)(sub_7E4EB0(a1) + 284)
         || (unsigned __int8)sub_1668690(a1 + 832, a2)
         || *((_WORD *)a2 + 2)
         || (v18 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr
         || *v18 != 5)
        && (v7 = (unsigned int **)(a2 + 8), v8 = 2LL * a2[6], v9 = (unsigned int **)&a2[v8 + 8], v8 * 4) )
      {
        do
        {
          v13 = sub_7E5940(a1, *v7);
          v14 = v23;
          v15 = (_QWORD *)v13;
          if ( (unsigned int)v23 < HIDWORD(v23) )
          {
            v10 = (_QWORD **)v22;
          }
          else
          {
            v20 = v13;
            v16 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v23)));
            v14 = v23;
            v10 = (_QWORD **)v16;
            v15 = (_QWORD *)v20;
            if ( (_DWORD)v23 )
            {
              if ( (unsigned int)(v23 - 1) <= 2 || (_BYTE *)v16 == v22 + 8 )
              {
                v19 = 0;
                do
                {
                  v10[v19] = *(_QWORD **)&v22[v19 * 8];
                  ++v19;
                }
                while ( v19 != (unsigned int)v23 );
              }
              else
              {
                v17 = 0;
                do
                {
                  *(__m128i *)&v10[v17] = _mm_loadu_si128((const __m128i *)&v22[v17 * 8]);
                  v17 += 2;
                }
                while ( 2LL * ((unsigned int)v23 >> 1) != v17 );
                if ( (v23 & 1) != 0 )
                  v10[(unsigned int)v23 & 0xFFFFFFFE] = *(_QWORD **)&v22[8 * (v23 & 0xFFFFFFFE)];
              }
            }
            if ( v22 != v24 && v22 )
            {
              sub_186B220(v22);
              v14 = v23;
            }
            v22 = v10;
            HIDWORD(v23) *= 2;
          }
          v11 = v14;
          ++v7;
          v12 = v14 + 1;
          v10[v11] = v15;
          LODWORD(v23) = v12;
        }
        while ( v9 != v7 );
      }
      else
      {
        v12 = 0;
        v10 = (_QWORD **)v24;
      }
      v21 = sub_79AF20(*(_QWORD *)(a1 + 80), (__int64)a2, v12, v10);
      sub_79D5A0(*(_QWORD *)(a1 + 80), v21);
      result = v21;
      if ( v22 )
      {
        if ( v22 != v24 )
        {
          sub_186B220(v22);
          return v21;
        }
      }
    }
    else
    {
      return sub_7E5940(a1, a2);
    }
  }
  return result;
}

