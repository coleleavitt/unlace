__int64 __fastcall sub_DE26C0(_QWORD *a1, unsigned __int64 *a2)
{
  char **exception; // rbp
  __int64 *v3; // r8
  __int64 *v4; // r14
  __int64 *v5; // rbp
  __int64 *v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // rax
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 *v19; // rbp
  __int64 *v20; // rbx
  unsigned int v21; // eax
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  __int64 v29; // rax
  __int64 v31[4]; // [rsp+30h] [rbp-E8h] BYREF
  void *v32; // [rsp+50h] [rbp-C8h]
  __int64 v33; // [rsp+58h] [rbp-C0h]
  _BYTE v34[184]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1[5];
  v32 = v34;
  v33 = 0x1000000000LL;
  if ( !v3 || (v4 = &v3[*((unsigned int *)v3 - 1)], v4 == v3) )
  {
    v6 = (__int64 *)v34;
    v7 = 0;
  }
  else
  {
    v5 = v3;
    do
    {
      v8 = sub_DDF8E0(*v5, a2);
      v9 = v33;
      v10 = v8;
      if ( (unsigned int)v33 < HIDWORD(v33) )
      {
        v6 = (__int64 *)v32;
      }
      else
      {
        v11 = (unsigned int)(2 * HIDWORD(v33));
        v12 = (__int64 *)sub_186B270(8 * v11);
        v9 = v33;
        v13 = (char *)v32;
        v6 = v12;
        if ( (_DWORD)v33 )
        {
          if ( (unsigned int)(v33 - 1) <= 2 || v12 == (__int64 *)((char *)v32 + 8) )
          {
            v29 = 0;
            do
            {
              v6[v29] = *(_QWORD *)&v13[v29 * 8];
              ++v29;
            }
            while ( v9 != v29 );
          }
          else
          {
            v14 = 0;
            do
            {
              *(__m128i *)&v6[v14] = _mm_loadu_si128((const __m128i *)&v13[v14 * 8]);
              v14 += 2;
            }
            while ( v14 != 2LL * (v9 >> 1) );
            if ( (v9 & 1) != 0 )
              v6[v9 & 0xFFFFFFFE] = *(_QWORD *)&v13[8 * (v9 & 0xFFFFFFFE)];
          }
        }
        if ( v13 != v34 && v13 )
        {
          sub_186B220(v13);
          v9 = v33;
        }
        v32 = v6;
        HIDWORD(v33) = v11;
      }
      v7 = v9 + 1;
      ++v5;
      v6[v9] = v10;
      LODWORD(v33) = v9 + 1;
    }
    while ( v4 != v5 );
  }
  v15 = sub_186B270(0x20u);
  *(_OWORD *)(v15 + 16) = 0;
  *(_QWORD *)v15 = a1[3];
  *(_QWORD *)(v15 + 8) = a1[4];
  if ( v7 )
  {
    v16 = *v6;
    v17 = (_QWORD *)sub_186B270(0x18u);
    v18 = v17 + 1;
    *v17 = 2;
    v19 = v6;
    *(_QWORD *)(v15 + 16) = v17 + 1;
    v20 = &v6[v7];
    v21 = 1;
    v22 = v18;
    while ( 1 )
    {
      ++v19;
      *v18 = v16;
      *(v22 - 1) = v21;
      *(_QWORD *)(v16 + 32) = v15;
      if ( v20 == v19 )
        break;
      v16 = *v19;
      if ( *(v22 - 2) == v21 )
      {
        v24 = (3 * v21 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v25 || v21 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v22 - 2, v25);
        v27 = v26[1];
        v22 = v26 + 2;
        *v26 = v24;
        *(_QWORD *)(v15 + 16) = v26 + 2;
        LODWORD(v26) = v27;
        v18 = &v22[2 * v27];
        v21 = (_DWORD)v26 + 1;
      }
      else
      {
        v23 = v21++;
        v18 = &v22[2 * v23];
      }
    }
  }
  if ( v32 != v34 && v32 )
    sub_186B220(v32);
  return v15;
}

