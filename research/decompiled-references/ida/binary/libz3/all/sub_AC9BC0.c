__int64 __fastcall sub_AC9BC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebp
  bool v6; // cf
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // r10
  _QWORD *v10; // r15
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rsi
  _BYTE *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-100h]
  int v25; // [rsp+1Ch] [rbp-ECh]
  _BYTE *v27; // [rsp+30h] [rbp-D8h]
  _BYTE *v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  _BYTE v31[184]; // [rsp+50h] [rbp-B8h] BYREF

  v3 = *(_DWORD *)(a3 + 20);
  if ( v3 )
  {
    v4 = 0;
    v25 = v3 - 1;
    v5 = v3 - 1;
    do
    {
      while ( 1 )
      {
        v7 = sub_AC9730(a1, a3, v25 - v5);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 44) )
            break;
        }
        v6 = v5-- == 0;
        if ( v6 )
          return v4;
      }
      v8 = *(_QWORD **)(v7 + 32);
      v29 = v31;
      v9 = 2LL * *(unsigned int *)(v7 + 40);
      v10 = &v8[v9];
      v30 = 0x1000000000LL;
      if ( v8 != &v8[v9] )
      {
        while ( *v8 <= 1u )
        {
          v8 += 2;
          if ( v10 == v8 )
            goto LABEL_18;
        }
        if ( v10 != v8 )
        {
          do
          {
            v11 = sub_15E1B70(*(_QWORD *)(a1 + 8));
            v12 = v30;
            v13 = v11;
            if ( (unsigned int)v30 >= HIDWORD(v30) )
            {
              v24 = v11;
              v21 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v30)));
              v12 = v30;
              v14 = (_BYTE *)v21;
              v13 = v24;
              if ( (_DWORD)v30 )
              {
                if ( (unsigned int)(v30 - 1) <= 2 || (_BYTE *)v21 == v29 + 8 )
                {
                  v23 = 0;
                  do
                  {
                    *(_QWORD *)&v14[v23] = *(_QWORD *)&v29[v23];
                    v23 += 8;
                  }
                  while ( 8LL * (unsigned int)v30 != v23 );
                }
                else
                {
                  v22 = 0;
                  do
                  {
                    *(__m128i *)&v14[v22] = _mm_loadu_si128((const __m128i *)&v29[v22]);
                    v22 += 16;
                  }
                  while ( 16LL * ((unsigned int)v30 >> 1) != v22 );
                  if ( (v30 & 1) != 0 )
                    *(_QWORD *)&v14[8 * (v30 & 0xFFFFFFFE)] = *(_QWORD *)&v29[8 * (v30 & 0xFFFFFFFE)];
                }
              }
              if ( v29 != v31 && v29 )
              {
                v27 = v14;
                sub_186B220(v29);
                v12 = v30;
                v14 = v27;
              }
              v29 = v14;
              HIDWORD(v30) *= 2;
            }
            else
            {
              v14 = v29;
            }
            *(_QWORD *)&v14[8 * v12] = v13;
            v15 = v8 + 2;
            LODWORD(v30) = v12 + 1;
            if ( v10 == v8 + 2 )
              break;
            while ( 1 )
            {
              v8 = v15;
              if ( *v15 > 1u )
                break;
              v15 += 2;
              if ( v10 == v15 )
                goto LABEL_18;
            }
          }
          while ( v10 != v15 );
        }
      }
LABEL_18:
      v16 = *(_QWORD *)(a1 + 8);
      v17 = sub_15E1AF0(v16);
      v18 = v17;
      if ( v17 )
      {
        ++*(_DWORD *)(v17 + 8);
        sub_8F8A20(a2);
        if ( (*(_DWORD *)(v18 + 8))-- == 1 )
          sub_15D7BC0(v16, v18);
      }
      else
      {
        sub_8F8A20(a2);
      }
      if ( v29 && v29 != v31 )
        sub_186B220(v29);
      v4 = 1;
      v6 = v5-- == 0;
    }
    while ( !v6 );
  }
  else
  {
    return 0;
  }
  return v4;
}

