void __fastcall sub_73AC50(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  void *v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int32 v12; // ebx
  __m128i *v13; // rdi
  __int64 v14; // rsi
  char *v15; // rax
  char *v16; // r15
  _BYTE *v17; // rdx
  unsigned int v18; // ebp
  unsigned int v19; // eax
  unsigned int v20; // r14d
  int v21; // r10d
  unsigned int v22; // r10d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  unsigned int v30; // [rsp+14h] [rbp-44h]
  unsigned int v31; // [rsp+14h] [rbp-44h]
  unsigned int *v32; // [rsp+18h] [rbp-40h]

  v7 = *((void **)a1 + 727);
  if ( v7 )
  {
    *((_QWORD *)a1 + 728) = 0;
    qfree(v7);
    *((_QWORD *)a1 + 727) = 0;
    *((_QWORD *)a1 + 729) = 0;
  }
  a1[1452] = 0;
  if ( (a1[405] & 0x20) == 0 )
  {
    v8 = *a1;
    v32 = a1 + 1454;
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 560LL) / v8;
    v10 = *((_QWORD *)a1 + 728);
    v11 = (unsigned int)(v9 + 7) >> 3;
    if ( v10 < v11 )
    {
      v26 = *((_QWORD *)a1 + 727);
      if ( *((_QWORD *)a1 + 729) < v11 )
      {
        v27 = qvector_reserve(v32, v26, (unsigned int)(v9 + 7) >> 3, 1);
        *((_QWORD *)a1 + 727) = v27;
        v26 = v27;
        v10 = *((_QWORD *)a1 + 728);
      }
      memset((void *)(v26 + v10), 0, v11 - v10);
      *((_QWORD *)a1 + 728) = v11;
    }
    else if ( v11 != v10 )
    {
      *((_QWORD *)a1 + 728) = v11;
    }
    v12 = a1[8];
    a1[1452] = v9;
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *((__m128i **)a1 + 1);
        v14 = v12;
        v15 = sub_738E20(v13, v12, 0, v8, a5, a6);
        v16 = v15;
        if ( !v15 )
          break;
        v17 = (_BYTE *)*(unsigned int *)v15;
        if ( (*a1 >> 2) - 4 < (unsigned int)v17 )
LABEL_34:
          sub_743130(v13, v14, v17);
        if ( v12 < a1[1452] )
        {
          sub_73A9A0((__int64)a1, v12);
          LODWORD(v17) = *(_DWORD *)v16;
        }
        v18 = 0;
        if ( (_DWORD)v17 )
        {
          do
          {
            v8 = a1[1452];
            v19 = *(_DWORD *)&v16[4 * v18 + 8];
            if ( v19 < (unsigned int)v8 )
            {
              v14 = *((_QWORD *)a1 + 727);
              a5 = (unsigned __int64)v19 >> 3;
              v20 = *(_DWORD *)&v16[4 * v18 + 8] & 7;
              v17 = (_BYTE *)(v14 + a5);
              v21 = *(unsigned __int8 *)(v14 + a5);
              v13 = (__m128i *)*(unsigned __int8 *)(v14 + a5);
              if ( _bittest(&v21, v20) )
                goto LABEL_34;
              v22 = v19 + 1;
              if ( (unsigned int)v8 < v19 + 1 )
              {
                v23 = (v19 + 8) >> 3;
                v24 = *((_QWORD *)a1 + 728);
                if ( v24 < v23 )
                {
                  if ( *((_QWORD *)a1 + 729) < v23 )
                  {
                    v31 = v22;
                    v29 = a5;
                    v25 = qvector_reserve(v32, v14, v23, 1);
                    v22 = v31;
                    a5 = v29;
                    *((_QWORD *)a1 + 727) = v25;
                    v14 = v25;
                    v24 = *((_QWORD *)a1 + 728);
                  }
                  v30 = v22;
                  v28 = a5;
                  memset((void *)(v14 + v24), 0, v23 - v24);
                  v22 = v30;
                  *((_QWORD *)a1 + 728) = v23;
                  v17 = (_BYTE *)(*((_QWORD *)a1 + 727) + v28);
                }
                else if ( v23 != v24 )
                {
                  *((_QWORD *)a1 + 728) = v23;
                }
                a1[1452] = v22;
                LOBYTE(v13) = *v17;
              }
              v8 = v20;
              *v17 = (1 << v20) | (unsigned __int8)v13;
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)v16 );
        }
        v12 = *((_DWORD *)v16 + 1);
        if ( !v12 )
          return;
      }
      if ( v12 < a1[1452] )
        sub_73A9A0((__int64)a1, v12);
    }
  }
}
