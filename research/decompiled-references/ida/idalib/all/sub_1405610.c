void __fastcall sub_1405610(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  size_t v4; // r14
  __m128i si128; // xmm0
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+0h] [rbp-198h] BYREF
  __int16 v14; // [rsp+20h] [rbp-178h]
  _BYTE v15[32]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v16; // [rsp+50h] [rbp-148h]
  _BYTE v17[32]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v18; // [rsp+80h] [rbp-118h]
  _QWORD *v19; // [rsp+90h] [rbp-108h] BYREF
  size_t v20; // [rsp+98h] [rbp-100h]
  __int16 v21; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+C8h] [rbp-D0h]
  _BYTE v24[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v3 = *(_QWORD **)(a2 + 104);
  v4 = *(_QWORD *)(a2 + 112);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v21 = 261;
  v19 = v3;
  ptr = v24;
  v23 = si128;
  v20 = v4;
  if ( (unsigned __int8)sub_228B190(&v19, 0) )
  {
    sub_A1FE50(
      &ptr,
      (_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL),
      (_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL + **(_QWORD **)(a1 + 32)));
    v11 = *(_QWORD *)(a2 + 104);
    v21 = 257;
    v13[0] = v11;
    v12 = *(_QWORD *)(a2 + 112);
    v18 = 257;
    v16 = 257;
    v14 = 261;
    v13[1] = v12;
    sub_228A3B0(&ptr, v13, v15, v17, &v19);
    v4 = v23.m128i_i64[0];
    v3 = ptr;
  }
  sub_FD9C70((__int64)&v19, *(_QWORD *)(*(_QWORD *)a1 + 16LL), v3, v4, 0, 1, 1);
  if ( (v20 & 1) != 0 )
  {
    v9 = sub_13F8200(&v19);
    if ( !v10 )
    {
      sub_A04D90((__int64 *)&v19);
      goto LABEL_9;
    }
    v6 = (_QWORD *)v9;
  }
  else
  {
    v6 = v19;
  }
  sub_A04D90((__int64 *)&v19);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(**(_QWORD **)(v7 + 32) + 280LL) & 4) != 0 )
      v8 = *(_QWORD *)(a1 + 32);
    else
      v8 = v6[2];
    sub_1405000((const __m128i *)v7, (unsigned __int64)v6, *(_BYTE *)(a1 + 40), v8, 0, 0, si128, *(_DWORD *)a2);
  }
LABEL_9:
  if ( ptr != v24 )
    free(ptr);
}
