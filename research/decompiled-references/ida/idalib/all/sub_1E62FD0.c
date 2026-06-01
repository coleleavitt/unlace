__int64 __fastcall sub_1E62FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v10; // eax
  __int64 v11; // r12
  const __m128i *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __m128i *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int8 v21[4]; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _WORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+14h] [rbp-B4h]
  int v25; // [rsp+18h] [rbp-B0h]
  int v26; // [rsp+1Ch] [rbp-ACh]
  __int64 v27; // [rsp+20h] [rbp-A8h]

  v5 = a3;
  v22 = a2;
  v21[0] = a4;
  if ( !sub_F6ACC0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) )
    return v22;
  v7 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v7 & 8) != 0 && (*(_WORD *)((_BYTE *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) != 0 )
    return v22;
  if ( (((unsigned __int8)v7 | (unsigned __int8)v22) & 1) != 0 || sub_F68080(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v8 = 64;
    return sub_A70F20(*(_QWORD *)(a1 + 248), v22, v8);
  }
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v10 != 3 && v10 > 1 )
  {
    v11 = *(_QWORD *)(a1 + 512);
    if ( v11 )
    {
      v24 = v5;
      v12 = (const __m128i *)v23;
      v23[0] = 2;
      v25 = 3027;
      v27 = v22;
      v26 = v21[0];
      v13 = *(unsigned int *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 8);
      v15 = v13 + 1;
      v16 = (__m128i *)(v14 + 80 * v13);
      if ( v15 > *(unsigned int *)(v11 + 20) )
      {
        v18 = v11 + 8;
        v19 = v11 + 24;
        if ( v14 > (unsigned __int64)v23 || v16 <= (__m128i *)v23 )
        {
          sub_2237220(v18, v19, v15, 80);
          v16 = (__m128i *)(*(_QWORD *)(v11 + 8) + 80LL * *(unsigned int *)(v11 + 16));
        }
        else
        {
          sub_2237220(v18, v19, v15, 80);
          v20 = *(_QWORD *)(v11 + 8);
          v12 = (const __m128i *)((char *)v23 + v20 - v14);
          v16 = (__m128i *)(80LL * *(unsigned int *)(v11 + 16) + v20);
        }
      }
      v8 = 128;
      *v16 = _mm_loadu_si128(v12);
      v16[1] = _mm_loadu_si128(v12 + 1);
      v16[2] = _mm_loadu_si128(v12 + 2);
      v16[3] = _mm_loadu_si128(v12 + 3);
      v16[4] = _mm_loadu_si128(v12 + 4);
      ++*(_DWORD *)(v11 + 16);
    }
    else
    {
      sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v5, 0xBD3u, 0);
      v17 = sub_1605D30((__int64)v23, &v22);
      sub_15890D0(v17, v21);
      sub_15F7200(v23);
      v8 = 128;
    }
    return sub_A70F20(*(_QWORD *)(a1 + 248), v22, v8);
  }
  return v22;
}
