void __fastcall sub_1FAA350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-30B8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-30B0h]
  __int64 v31; // [rsp+10h] [rbp-30A8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-30A0h]
  void *v33; // [rsp+20h] [rbp-3098h] BYREF
  __m128i si128; // [rsp+28h] [rbp-3090h]
  _BYTE v35[4104]; // [rsp+38h] [rbp-3080h] BYREF
  void *v36; // [rsp+1040h] [rbp-2078h] BYREF
  __m128i v37; // [rsp+1048h] [rbp-2070h]
  _BYTE v38[4104]; // [rsp+1058h] [rbp-2060h] BYREF
  void *ptr; // [rsp+2060h] [rbp-1058h] BYREF
  __m128i v40; // [rsp+2068h] [rbp-1050h]
  _BYTE v41[4160]; // [rsp+2078h] [rbp-1040h] BYREF

  v3 = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v33 = v35;
  v36 = v38;
  ptr = v41;
  v37 = si128;
  v40 = si128;
  sub_1FA92D0(a1, a3, (unsigned int *)&v33, (_DWORD **)&v36, (_DWORD **)&ptr);
  if ( (*(_BYTE *)(v3 + 8) & 0x7F) == 0x18 )
  {
    v26 = *(_QWORD *)(a1 + 48);
    v27 = sub_B8C1B0(v3);
    v28 = sub_1F75670(v26, v27);
    v3 = sub_B8D340(v28);
  }
  v29 = 28;
  v30 = 0;
  v5 = sub_B8C1B0(v3);
  v10 = sub_1F85DD0(a1, v5, v6, v7, v8, v9);
  v11 = *(_QWORD *)(a1 + 16);
  v30 = v10;
  sub_1F759B0(v11, *(_DWORD *)(a1 + 3472), (unsigned __int8 *)&v29, 2, (unsigned __int64)v33, si128.m128i_i64[0], 0);
  if ( v37.m128i_i64[0] )
  {
    v32 = 0;
    v31 = 76;
    v12 = sub_B8C1B0(v3);
    v17 = sub_1F85DD0(a1, v12, v13, v14, v15, v16);
    v18 = *(_DWORD *)(a1 + 3476);
    v32 = v17;
    sub_1F759B0(*(_QWORD *)(a1 + 16), v18, (unsigned __int8 *)&v31, 2, (unsigned __int64)v36, v37.m128i_i64[0], 0);
    if ( !v40.m128i_i64[0] )
      goto LABEL_5;
  }
  else if ( !v40.m128i_i64[0] )
  {
    goto LABEL_5;
  }
  v32 = 0;
  v31 = 77;
  v19 = sub_B8C1B0(v3);
  v24 = sub_1F85DD0(a1, v19, v20, v21, v22, v23);
  v25 = *(_QWORD *)(a1 + 16);
  v32 = v24;
  sub_1F759B0(v25, *(_DWORD *)(a1 + 3480), (unsigned __int8 *)&v31, 2, (unsigned __int64)ptr, v40.m128i_i64[0], 0);
LABEL_5:
  if ( ptr != v41 )
    free(ptr);
  if ( v36 != v38 )
    free(v36);
  if ( v33 != v35 )
    free(v33);
}
