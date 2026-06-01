__int64 __fastcall sub_7B60E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v8; // rax
  __int64 **v9; // rbx
  __int64 *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int *v12; // rsi
  size_t v13; // r14
  const void *v14; // rsi
  __int64 v15; // rbx
  __int64 *v17; // [rsp+0h] [rbp-108h] BYREF
  int v18; // [rsp+8h] [rbp-100h]
  __int128 v19; // [rsp+10h] [rbp-F8h]
  _BYTE *v20; // [rsp+20h] [rbp-E8h]
  char v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+2Ch] [rbp-DCh]
  void **p_ptr; // [rsp+30h] [rbp-D8h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v26[176]; // [rsp+58h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v17 = (__int64 *)&off_49DA340;
  p_ptr = &ptr;
  ptr = v26;
  v18 = 2;
  v21 = 0;
  v22 = 1;
  v20 = nullptr;
  v19 = 0;
  sub_2623850(&v17, 0, 0, 0, a5, a6);
  v8 = v20;
  if ( (unsigned __int64)v20 >= *((_QWORD *)&v19 + 1) )
  {
    v9 = (__int64 **)sub_26239D0(&v17, 95);
  }
  else
  {
    v9 = &v17;
    ++v20;
    *v8 = 95;
  }
  v10 = v9[4];
  v11 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 40) & 7) != 0 )
    v11 = 0;
  v12 = *(unsigned int **)(v11 + 16);
  v13 = *v12;
  v14 = v12 + 4;
  if ( (char *)v9[3] - (char *)v10 < v13 )
  {
    sub_26240F0(v9, v14, v13);
  }
  else if ( v13 )
  {
    memcpy(v10, v14, v13);
    v9[4] = (__int64 *)((char *)v9[4] + v13);
  }
  v17 = &qword_4A6EA70[2];
  sub_2623770(&v17);
  v15 = sub_600210(*(_QWORD *)(a2 + 17344), ptr, si128.m128i_u64[0]);
  if ( ptr != v26 )
    free(ptr);
  return v15;
}

