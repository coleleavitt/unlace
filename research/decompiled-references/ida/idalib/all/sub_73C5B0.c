__int64 __fastcall sub_73C5B0(unsigned int *a1, unsigned int *a2, unsigned int a3)
{
  __m128i v5; // xmm0
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v14; // r14d
  _QWORD *v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  int v20; // r9d
  __int64 (__fastcall *v21)(_QWORD, _QWORD); // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  _DWORD *v26; // r12
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  void *v34; // rbp
  __int64 v35; // [rsp+8h] [rbp-40h]

  v5 = _mm_cvtsi32_si128(xmmword_2CCC600);
  a1[6] = *(_DWORD *)((char *)&xmmword_2CCC600 + 14);
  a1[7] = *(_DWORD *)((char *)&xmmword_2CCC600 + 10);
  *a1 = SWORD2(xmmword_2CCC600);
  *((_QWORD *)a1 + 4) = _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(*(unsigned int *)((char *)&xmmword_2CCC600 + 6))).m128i_u64[0];
  v6 = sub_73B620(a2);
  v7 = *a1;
  if ( *a1 - 45 > 0x7FD3 )
    goto LABEL_12;
  v8 = a1[9];
  if ( v8 < a1[6] )
    v8 = a1[6];
  if ( v6 / v7 < v8 )
  {
LABEL_12:
    dword_2CCC638 = 12;
    qword_2CCC630(12, 0);
    return 0;
  }
  v9 = v7 >> 2;
  if ( v7 >= 0x1838 )
    v9 = 1549;
  v10 = a3 - 1;
  a1[407] = v9;
  if ( (a1[405] & 7) != 0 )
  {
    if ( v10 <= 0x1E )
    {
      if ( (a1[405] & 7) != 7 )
      {
        v11 = 32;
        goto LABEL_9;
      }
      a3 = 32;
    }
    v35 = 32;
    v14 = 32;
  }
  else
  {
    v11 = 64;
    if ( v10 <= 0x3E )
    {
LABEL_9:
      dword_2CCC638 = 4;
      qword_2CCC630(4, v11);
      return 0;
    }
    v35 = 64;
    v14 = 64;
  }
  v15 = (_QWORD *)operator new(0x250u);
  sub_738800(v15, (__int64)a2, *a1, a3, (__int64)qword_2CCC630);
  *((_QWORD *)a1 + 1) = v15;
  LOBYTE(v16) = sub_7385D0(v15);
  v12 = v16;
  if ( !(_BYTE)v16 )
  {
    qword_2CCC630(37, 0);
    v34 = *((void **)a1 + 1);
    if ( v34 )
    {
      sub_738C80(*((_QWORD *)a1 + 1), 0, v30, v31, v32, v33);
      operator delete(v34, 0x250u);
    }
    *((_QWORD *)a1 + 1) = 0;
    return 0;
  }
  if ( *((_WORD *)a1 + 816) == 1 )
    sub_73AC50(a1, (__int64)a2, v17, v18, v19, v20);
  else
    sub_73C320(a1, 0, nullptr, v18, v19, v20);
  v21 = qword_2CCC630;
  sub_739040(*((_QWORD **)a1 + 1), (__int64)qword_2CCC630);
  v26 = *((_DWORD **)a1 + 1);
  if ( v26[2] < v14 )
  {
    if ( v26 )
    {
      sub_738C80(*((_QWORD *)a1 + 1), (__int64)v21, v22, v23, v24, v25);
      operator delete(v26, 0x250u);
    }
    *((_QWORD *)a1 + 1) = 0;
    dword_2CCC638 = 4;
    qword_2CCC630(4, v35);
    return 0;
  }
  v27 = a1[405];
  v28 = 0;
  if ( (~(_BYTE)v27 & 7) != 0 && (v27 & 0x4000) == 0 )
    v28 = 4 * *a1;
  v26[146] = v28;
  v29 = a1[405];
  if ( (~(_BYTE)v29 & 7) != 0
    && (v29 & 0x4000) == 0
    && (unsigned int)sub_73C020((__int64)a1, 1, ~(unsigned __int8)a1[405] & 7, ~(_BYTE)v27 & 7, v24, v25) == 2 )
  {
    sub_73BBC0((__int64)a1, 0);
  }
  return v12;
}
