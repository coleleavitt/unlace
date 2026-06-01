unsigned __int64 __fastcall sub_1844530(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  unsigned int v23; // eax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  const char *v35; // r12
  size_t v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // dl
  int v40; // ecx
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  unsigned __int64 v43; // rbx
  __m128i v45; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v46; // [rsp+18h] [rbp-120h]
  void *v47; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-110h]
  __m128i v49; // [rsp+30h] [rbp-108h]
  __int64 v50; // [rsp+40h] [rbp-F8h]
  __int64 v51; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v52; // [rsp+58h] [rbp-E0h]
  __int64 v53; // [rsp+60h] [rbp-D8h]
  _OWORD v54[5]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-80h]
  __int64 v56; // [rsp+C0h] [rbp-78h]
  __int64 v57; // [rsp+C8h] [rbp-70h]
  unsigned int v58; // [rsp+D0h] [rbp-68h]
  __int64 v59; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+E0h] [rbp-58h]
  __int64 v61; // [rsp+F0h] [rbp-48h]

  v10 = sub_A63CE0(*(_QWORD **)(a1 + 248));
  v11 = sub_AAE980(*(_QWORD *)(a1 + 248), a3);
  v12 = *(_QWORD *)(a1 + 248);
  v45.m128i_i64[0] = v11;
  v48 = sub_A97D20(v12, *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v48 > 0x40 )
    sub_2205470(&v47, v45.m128i_i64[0], 0);
  else
    v47 = (void *)v45.m128i_i64[0];
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a5 + 16LL))(a5, a1, a2);
  v14 = *(unsigned int *)(a1 + 1956);
  v15 = v13;
  v16 = *(_DWORD *)(a1 + 1952);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v14, v16) )
  {
    v14 = 0;
    v16 = 0;
  }
  v17 = *(_QWORD *)(v15 + 8);
  v45.m128i_i64[0] = v15;
  v18 = (v14 << 32) | v16;
  v19 = sub_A70010(*(_QWORD *)(a1 + 248), v17);
  v45.m128i_i64[0] = sub_C09D40(*(_QWORD **)(a1 + 248), v45.m128i_i64[0], 4, v19, 0, 0, a2, 0, v18);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 16LL))(a4, a1, a2);
  v21 = *(unsigned int *)(a1 + 1956);
  v22 = v20;
  v23 = *(_DWORD *)(a1 + 1952);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v21, v23) )
  {
    v21 = 0;
    v23 = 0;
  }
  v24 = (v21 << 32) | v23;
  v25 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(v22 + 8));
  v26 = sub_C09D40(*(_QWORD **)(a1 + 248), v22, 4, v25, 0, 0, a2, 0, v24);
  v30 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v46 = v26;
  while ( 1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v30 + 16) - 2) <= 4u )
      goto LABEL_8;
    v31 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v32) = *(unsigned __int8 *)(v31 + 16);
    v33 = (unsigned int)(v32 - 2);
    if ( (unsigned __int8)(v32 - 2) > 4u )
      goto LABEL_13;
    v34 = sub_F63050(v30, v22, v33, v27);
    if ( !v34 )
      break;
    v30 = v34;
LABEL_8:
    v30 = *(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v32 = *(unsigned __int8 *)(v31 + 16);
LABEL_13:
  if ( (_BYTE)v32 != 48
    || (v35 = "__builtin_objc_memmove_collectable", (*((_BYTE *)sub_F60F10(v31, v22, v33, v27, v28, v29) + 75) & 2) == 0) )
  {
    v35 = "__builtin_memcpy";
  }
  v36 = j__strlen(v35);
  v37 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), v35, v36);
  v52 = v54;
  v53 = 0x800000000LL;
  v54[4] = 0;
  v57 = v37;
  v51 = 0;
  v55 = 0;
  v56 = a1;
  v58 = a2;
  sub_B85890(&v59, v37);
  v60 = 0;
  v61 = 0x101010000LL;
  sub_1A395A0(&v51);
  sub_1A49A10(a1, &v51, *(_QWORD *)(a1 + 192), 1, 0);
  if ( (_DWORD)v51 != 2 )
    goto LABEL_25;
  v38 = *v52 & 0xFFFFFFFFFFFFFFF8LL;
  v39 = *(_BYTE *)(v38 + 28) & 0x7F;
  v40 = v39;
  if ( ((v39 + 52) & 0x7Fu) <= 1 || (unsigned int)v39 - 53 <= 1 )
  {
    v38 = sub_B72ED0(*v52 & 0xFFFFFFFFFFFFFFF8LL);
    v40 = *(_BYTE *)(v38 + 28) & 0x7F;
  }
  if ( (unsigned int)(v40 - 34) <= 5 )
  {
    v41 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19112LL);
    v45 = (__m128i)_mm_loadh_ps((const double *)v45.m128i_i64);
    sub_190BDA0(a1, v38, v41, 0, a2, 0);
    v42 = *(_QWORD **)(a1 + 248);
    v49 = _mm_load_si128(&v45);
    v50 = sub_C0C5D0(v42, (__int64)&v47, v10, a2);
    v43 = sub_192A5E0(a1, a2, 0, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
LABEL_25:
    v43 = 1;
  }
  sub_169D230((__int64)&v51);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  return v43;
}
