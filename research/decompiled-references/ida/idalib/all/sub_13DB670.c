__int64 __fastcall sub_13DB670(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // rax
  unsigned int *v8; // r13
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // ecx
  char v13; // r15
  __int64 v14; // r14
  char v15; // r12
  __int16 v16; // r13
  bool v17; // zf
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h]

  if ( *(_QWORD *)(a2 + 192) )
  {
    v5 = *(_QWORD **)(a2 + 184);
    v6 = *(unsigned int *)(a2 + 200);
    if ( v6 != v5[1] )
    {
      v8 = (unsigned int *)(*v5 + 12 * v6);
      v9 = *(_QWORD *)(a2 + 112) + *v8;
      v10 = sub_13D1500(a2, v9, 1);
      v11 = v8[1];
      v12 = v8[2];
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = v10;
      *(_DWORD *)(a1 + 4) = v11;
      *(_QWORD *)(a2 + 152) = v11 + v9;
      *(_DWORD *)(a1 + 16) = v12;
      *(_BYTE *)(a1 + 24) = 1;
      return a1;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 26) = 1;
    v13 = *(_BYTE *)(a2 + 24);
    v14 = *(_QWORD *)(a2 + 152);
    v15 = *(_BYTE *)(a2 + 162);
    v16 = *(_WORD *)(a2 + 160);
    sub_13DB5F0((_BYTE *)a2, (__int64)&v20, a3, a4);
    v17 = (_WORD)v21 == 1;
    *(_BYTE *)(a2 + 24) = v13;
    *(_QWORD *)(a2 + 152) = v14;
    *(_WORD *)(a2 + 160) = v16;
    *(_BYTE *)(a2 + 162) = v15;
    *(_BYTE *)(a2 + 26) = 0;
    if ( !v17 )
    {
      v18 = _mm_load_si128(&v20);
      v19 = v21;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)a1 = v18;
      *(_QWORD *)(a1 + 16) = v19;
      return a1;
    }
  }
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
