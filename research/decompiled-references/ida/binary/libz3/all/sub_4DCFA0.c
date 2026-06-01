__int64 __fastcall sub_4DCFA0(int a1, const __m128i *a2, unsigned int a3, int *a4, int a5)
{
  char **exception; // r12
  __int64 v6; // r13
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  int *v14; // r13
  _DWORD *v15; // rdx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v25[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a3;
  v9 = sub_186B270(0x70u);
  *(_OWORD *)(v9 + 8) = 0;
  sub_6299B0(v9 + 24);
  sub_6299B0(v9 + 32);
  *(_BYTE *)(v9 + 40) = 0;
  *(_QWORD *)v9 = off_1C66400;
  v10 = (_QWORD *)sub_186B270(0xC0u);
  v11 = _mm_loadu_si128(a2);
  *v10 = 0;
  v10[3] = 0;
  v10[6] = 0;
  v10[9] = 0;
  v10[12] = 0;
  v10[15] = 0;
  v10[18] = 0;
  v10[21] = 0;
  *(_QWORD *)(v9 + 48) = v10;
  *(_QWORD *)v9 = &off_1C4F770;
  *(_QWORD *)(v9 + 56) = 8;
  *(_DWORD *)(v9 + 64) = 0;
  *(_DWORD *)(v9 + 72) = a1;
  *(__m128i *)(v9 + 80) = v11;
  if ( v11.m128i_i64[0] )
    ++*(_DWORD *)(v11.m128i_i64[0] + 8);
  *(_QWORD *)(v9 + 96) = 0;
  if ( (_DWORD)v6 )
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    *v12 = 2;
    v13 = v12 + 1;
    v14 = &a4[v6];
    *(_QWORD *)(v9 + 96) = v13;
    v15 = v13;
    while ( 1 )
    {
      v16 = *a4++;
      *v13 = v16;
      v17 = *(v15 - 1);
      v18 = (unsigned int)(v17 + 1);
      *(v15 - 1) = v18;
      if ( v14 == a4 )
        break;
      v19 = *(v15 - 2);
      if ( v19 == (_DWORD)v18 )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 4 * v20 + 8;
        if ( 4 * v17 + 12 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v25, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v25);
          sub_233E40((__int64)v25);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v15 - 2, v21);
        v15 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        *(_QWORD *)(v9 + 96) = v15;
        v13 = &v15[v23];
      }
      else
      {
        v13 = &v15[v18];
      }
    }
  }
  *(_DWORD *)(v9 + 104) = a5;
  return v9;
}

