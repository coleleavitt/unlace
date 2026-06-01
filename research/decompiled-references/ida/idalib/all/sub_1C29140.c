__int64 __fastcall sub_1C29140(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  char *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rax
  char v19; // al
  __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (*v25)(); // rax
  unsigned int v26; // eax
  int v27; // eax
  __int64 *v28; // rsi
  __int64 *v29; // r14
  __int64 *v30; // rsi
  __int64 *v31; // r13
  __int64 v32; // rbp
  unsigned int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-100h] BYREF
  void *v46; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v47; // [rsp+18h] [rbp-F0h]
  char v48; // [rsp+1Ch] [rbp-ECh]
  void *v49; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  char v51; // [rsp+2Ch] [rbp-DCh]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v53; // [rsp+38h] [rbp-D0h]
  __int64 *v54[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v56; // [rsp+70h] [rbp-98h] BYREF
  char v57; // [rsp+C8h] [rbp-40h]
  unsigned int v58; // [rsp+D0h] [rbp-38h]
  char v59; // [rsp+D4h] [rbp-34h]

  v6 = sub_15F1640(**(_QWORD **)a1, 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v8 = *(_QWORD *)(a1 + 8);
  ptr = nullptr;
  v53 = si128;
  sub_A83E70(v8, (char **)&ptr, v6);
  v9 = *(__int64 **)(a1 + 16);
  v10 = *(__int64 **)a1;
  v47 = 1;
  v11 = *v9;
  v12 = *v10;
  v48 = 0;
  v46 = nullptr;
  v50 = 1;
  v49 = nullptr;
  v51 = 0;
  if ( (unsigned __int8)sub_16D4840(v12, v11, a2, (__int64)&v46)
    || (v19 = sub_16D4840(**(_QWORD **)a1, **(_QWORD **)(a1 + 16), a3, (__int64)&v49)) != 0 )
  {
LABEL_2:
    v13 = 1;
    goto LABEL_3;
  }
  if ( v47 <= 0x40 )
  {
    LODWORD(v20) = 0;
    if ( v47 )
    {
      v21 = v50;
      v22 = (__int64 *)v49;
      v20 = (__int64)((_QWORD)v46 << (64 - (unsigned __int8)v47)) >> (64 - (unsigned __int8)v47);
      if ( v50 <= 0x40 )
        goto LABEL_21;
LABEL_34:
      v23 = *v22;
      goto LABEL_23;
    }
  }
  else
  {
    LODWORD(v20) = *(_DWORD *)v46;
  }
  v21 = v50;
  v22 = (__int64 *)v49;
  if ( v50 > 0x40 )
    goto LABEL_34;
LABEL_21:
  if ( !v21 )
    goto LABEL_38;
  v23 = (__int64)((_QWORD)v22 << (64 - (unsigned __int8)v21)) >> (64 - (unsigned __int8)v21);
LABEL_23:
  if ( !(_DWORD)v20 && (_DWORD)v23 == 5 || (_DWORD)v20 == 1 && (_DWORD)v23 == 6 )
    goto LABEL_25;
  v19 = (_DWORD)v20 == 2 && (_DWORD)v23 == 7;
LABEL_38:
  if ( (_DWORD)v20 != 3 && !v19 )
    goto LABEL_30;
LABEL_25:
  v24 = *(_QWORD *)(a1 + 24);
  v25 = *(__int64 (**)())(*(_QWORD *)v24 + 584LL);
  if ( v25 != sub_A55EE0 && ((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v25)(v24, "zve64x", 6)
    || ((v26 = sub_2244B30("zve64x", 6), v27 = sub_2244E60(&ptr, "zve64x", 6, v26), v27 == -1)
      ? (v28 = (__int64 *)((char *)ptr + 8 * v53.m128i_u32[0]))
      : (v28 = (__int64 *)((char *)ptr + 8 * v27)),
        (sub_EC0F90(v54, v28, 1),
         v29 = v54[0],
         v30 = (__int64 *)((char *)ptr + 8 * v53.m128i_u32[0]),
         sub_EC0F90(v54, v30, 1),
         v54[0] != v29)
     && *(_BYTE *)(*v29 + 8)) )
  {
LABEL_30:
    if ( !(unsigned __int8)sub_16D5460(
                             **(_QWORD **)a1,
                             **(_QWORD **)(a1 + 16),
                             a2,
                             0,
                             3,
                             1u,
                             *(double *)si128.m128i_i64) )
    {
      v13 = sub_1C25980(*(__int64 **)a1, **(_QWORD **)(a1 + 16), a3, *(double *)si128.m128i_i64);
      goto LABEL_3;
    }
    goto LABEL_2;
  }
  v31 = *(__int64 **)a1;
  v32 = **(_QWORD **)(a1 + 16);
  if ( (*(_BYTE *)(v32 + 3) & 1) != 0 )
  {
    v33 = *(_DWORD *)(v32 + 24);
  }
  else if ( *(char *)(v32 + 2) >= 0
         || (v33 = sub_EEB7E0(
                     *(_QWORD *)(v32 + 8 * (((*(_BYTE *)(v32 + 2) & 8) != 0) + 1LL) + 32),
                     (__int64)v30,
                     *(double *)si128.m128i_i64)) == 0 )
  {
    v33 = sub_EEB7E0(*(_QWORD *)(v32 + 32), (__int64)v30, *(double *)si128.m128i_i64);
    if ( !v33 )
    {
      if ( *(_DWORD *)(v32 + 16) )
      {
        v37 = *(_QWORD *)(v32 + 8 * (((*(_BYTE *)(v32 + 2) & 8) != 0) + 1LL) + 32);
        if ( v37 )
          v33 = sub_EEB7E0(v37, (__int64)v30, *(double *)si128.m128i_i64);
      }
    }
  }
  v34 = (__int64)v31;
  sub_168B9F0((__int64)v54, v31, v33, 0x135Du, 0);
  if ( v57 )
  {
    v34 = 1;
    sub_AE9DF0(&v56, 1, 2u);
  }
  else if ( v59 )
  {
    v42 = sub_168B9E0(v54);
    v43 = v55;
    if ( v55 )
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
    v45 = v43;
    v44 = sub_1587BC0(v42, &v45, v38, v39, v40, v41);
    v34 = 1;
    sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v58 + 8), 1, 2u);
  }
  v45 = sub_EEC8C0(**(_QWORD **)(a1 + 16), v34, *(double *)si128.m128i_i64);
  v35 = sub_1587DB0((__int64)v54, &v45);
  v36 = v35;
  if ( *(_BYTE *)(v35 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v35 + 32), (__int64)"zve64x", 1u);
    v13 = *(unsigned __int8 *)(v36 + 120);
  }
  else
  {
    v13 = *(unsigned __int8 *)(v35 + 132);
    if ( (_BYTE)v13 )
    {
      sub_1C245B0((_QWORD *)v35, (__int64)"zve64x");
      v13 = *(unsigned __int8 *)(v36 + 120);
    }
  }
  sub_15F7200(v54);
LABEL_3:
  if ( v50 > 0x40 && v49 )
    operator delete[](v49);
  if ( v47 > 0x40 && v46 )
    operator delete[](v46);
  v14 = (char *)ptr;
  if ( v53.m128i_i32[1] && v53.m128i_i32[0] )
  {
    v15 = 0;
    v16 = 8LL * (unsigned int)(v53.m128i_i32[0] - 1) + 8;
    do
    {
      v17 = *(_QWORD **)&v14[v15];
      if ( v17 != (_QWORD *)-8LL && v17 )
      {
        operator delete(*(_QWORD *)&v14[v15], *v17 + 17LL, 8);
        v14 = (char *)ptr;
      }
      v15 += 8;
    }
    while ( v15 != v16 );
  }
  free(v14);
  return v13;
}
