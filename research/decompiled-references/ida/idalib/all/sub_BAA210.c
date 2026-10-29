__int64 __fastcall sub_BAA210(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(); // r13
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rdi
  unsigned int *v7; // rsi
  size_t v8; // r14
  const void *v9; // rsi
  __int64 v10; // rbp
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-108h] BYREF
  int v13; // [rsp+8h] [rbp-100h]
  __int128 v14; // [rsp+10h] [rbp-F8h]
  _BYTE *v15; // [rsp+20h] [rbp-E8h]
  char v16; // [rsp+28h] [rbp-E0h]
  int v17; // [rsp+2Ch] [rbp-DCh]
  void **p_ptr; // [rsp+30h] [rbp-D8h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v21[176]; // [rsp+58h] [rbp-B0h] BYREF

  v13 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v21;
  v16 = 0;
  v17 = 1;
  v12 = &off_2BEBEE0;
  v15 = nullptr;
  v14 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v12, 0, 0, 0);
  v3 = v15;
  if ( (unsigned __int64)v15 >= *((_QWORD *)&v14 + 1) )
  {
    v4 = (__int64 (__fastcall ***)())sub_227BA10(&v12, 95);
  }
  else
  {
    v4 = &v12;
    ++v15;
    *v3 = 95;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 7) != 0 )
    BUG();
  v6 = v4[4];
  v7 = *(unsigned int **)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v8 = *v7;
  v9 = v7 + 4;
  if ( v8 > (char *)v4[3] - (char *)v6 )
  {
    sub_227BF10(v4, v9, v8);
  }
  else if ( v8 )
  {
    memcpy(v6, v9, v8);
    v4[4] = (__int64 (__fastcall **)())((char *)v4[4] + v8);
  }
  v12 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v12);
  v10 = sub_6F3470(*(_QWORD *)(a2 + 17504), ptr, si128.m128i_u64[0]);
  if ( ptr != v21 )
    free(ptr);
  return v10;
}
