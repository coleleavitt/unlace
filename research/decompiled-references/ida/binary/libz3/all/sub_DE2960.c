__int64 __fastcall sub_DE2960(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // r8
  _QWORD **v6; // r14
  _QWORD **v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rbx
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rax
  _QWORD *v19; // [rsp+10h] [rbp-F8h]
  _BYTE v21[32]; // [rsp+20h] [rbp-E8h] BYREF
  void *v22; // [rsp+40h] [rbp-C8h]
  void *v23; // [rsp+48h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+50h] [rbp-B8h] BYREF

  v5 = *(_QWORD ***)(a1 + 48);
  v22 = v24;
  v23 = (void *)0x1000000000LL;
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      v7 = v5;
      do
      {
        v9 = sub_DE26C0(*v7, a2);
        v10 = (unsigned int)v23;
        v11 = v9;
        if ( (unsigned int)v23 < HIDWORD(v23) )
        {
          v8 = v22;
        }
        else
        {
          v12 = (unsigned int)(2 * HIDWORD(v23));
          v13 = (char *)sub_186B270(8 * v12);
          v10 = (unsigned int)v23;
          v14 = (char *)v22;
          v8 = v13;
          if ( (_DWORD)v23 )
          {
            if ( (unsigned int)((_DWORD)v23 - 1) <= 2 || v13 == (char *)v22 + 8 )
            {
              v18 = 0;
              do
              {
                v8[v18] = *(_QWORD *)&v14[v18 * 8];
                ++v18;
              }
              while ( v10 != v18 );
            }
            else
            {
              v15 = 0;
              do
              {
                *(__m128i *)&v8[v15] = _mm_loadu_si128((const __m128i *)&v14[v15 * 8]);
                v15 += 2;
              }
              while ( 2LL * (v10 >> 1) != v15 );
              if ( (v10 & 1) != 0 )
                v8[v10 & 0xFFFFFFFE] = *(_QWORD *)&v14[8 * (v10 & 0xFFFFFFFE)];
            }
          }
          if ( v14 != v24 && v14 )
          {
            v19 = v8;
            sub_186B220(v14);
            v10 = (unsigned int)v23;
            v8 = v19;
          }
          v22 = v8;
          HIDWORD(v23) = v12;
        }
        ++v7;
        v8[v10] = v11;
        LODWORD(v23) = v10 + 1;
      }
      while ( v6 != v7 );
    }
  }
  sub_15F01E0(v21, *a2);
  v16 = sub_15F3050(v21, a1 + 24, *(unsigned int *)(a1 + 12), a4, (unsigned int)v23, v22);
  if ( v22 != v24 && v22 )
    sub_186B220(v22);
  return v16;
}

