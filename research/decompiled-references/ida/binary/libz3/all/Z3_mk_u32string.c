__int64 __fastcall Z3_mk_u32string(__int64 a1, unsigned int a2, int *a3)
{
  char v5; // r13
  int *v6; // r13
  __int64 v7; // rcx
  _BYTE *v8; // r15
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  char *v19; // rax
  _BYTE *v20; // rsi
  char *v21; // r10
  int v22; // r9d
  char v23; // [rsp+Fh] [rbp-89h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+18h] [rbp-80h]
  _BYTE v26[120]; // [rsp+20h] [rbp-78h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v23 = v5;
  if ( v5 )
    sub_297B80(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  ptr = v26;
  v25 = 0x1000000000LL;
  if ( a2 )
  {
    v6 = &a3[a2];
    v7 = 0;
    v8 = v26;
    while ( 1 )
    {
      v9 = *a3++;
      *(_DWORD *)&v8[4 * v7] = v9;
      v7 = (unsigned int)(v25 + 1);
      LODWORD(v25) = v25 + 1;
      if ( a3 == v6 )
        break;
      if ( (unsigned int)v7 >= HIDWORD(v25) )
      {
        v10 = (unsigned int)(2 * HIDWORD(v25));
        v11 = sub_186B270(4 * v10);
        v7 = (unsigned int)v25;
        v12 = (char *)ptr;
        v8 = (_BYTE *)v11;
        if ( (_DWORD)v25 )
        {
          if ( (unsigned int)(v25 - 1) <= 2 || (unsigned __int64)(v11 - ((_QWORD)ptr + 4)) <= 8 )
          {
            v19 = (char *)ptr;
            v20 = v8;
            v21 = (char *)ptr + 4 * (unsigned int)v25;
            do
            {
              v22 = *(_DWORD *)v19;
              v19 += 4;
              v20 += 4;
              *((_DWORD *)v20 - 1) = v22;
            }
            while ( v21 != v19 );
          }
          else
          {
            v13 = 0;
            do
            {
              *(__m128i *)&v8[v13] = _mm_loadu_si128((const __m128i *)&v12[v13]);
              v13 += 16;
            }
            while ( v13 != 16LL * ((unsigned int)v7 >> 2) );
            v14 = v7 & 0xFFFFFFFC;
            if ( (v7 & 3) != 0 )
            {
              *(_DWORD *)&v8[4 * v14] = *(_DWORD *)&v12[4 * v14];
              v15 = (unsigned int)(v14 + 1);
              if ( (unsigned int)v15 < (unsigned int)v7 )
              {
                v16 = (unsigned int)(v14 + 2);
                *(_DWORD *)&v8[4 * v15] = *(_DWORD *)&v12[4 * v15];
                if ( (unsigned int)v16 < (unsigned int)v7 )
                  *(_DWORD *)&v8[4 * v16] = *(_DWORD *)&v12[4 * v16];
              }
            }
          }
        }
        if ( v12 != v26 )
        {
          if ( v12 )
          {
            sub_186B220(v12);
            v7 = (unsigned int)v25;
          }
        }
        ptr = v8;
        HIDWORD(v25) = v10;
      }
    }
  }
  v17 = sub_1648610(a1 + 464, &ptr);
  sub_251FD0(a1, v17);
  if ( v23 )
  {
    sub_2BB620(v17);
    if ( ptr != v26 && ptr )
      sub_186B220(ptr);
    byte_1C7EBA0 = 1;
  }
  else if ( ptr != v26 && ptr )
  {
    sub_186B220(ptr);
  }
  return v17;
}

