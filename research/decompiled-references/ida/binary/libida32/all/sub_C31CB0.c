__int64 __fastcall sub_C31CB0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 v9; // rax
  void **v10; // rsi
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char *v21; // rax
  char *v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rax
  char v25; // r11
  __int64 v26; // r9
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  char v30; // al
  unsigned int v31; // eax
  size_t v32; // rsi
  _QWORD *v33; // [rsp+8h] [rbp-510h] BYREF
  __m128 *v34; // [rsp+10h] [rbp-508h]
  char *v35; // [rsp+18h] [rbp-500h]
  void **v36; // [rsp+20h] [rbp-4F8h]
  __int64 v37; // [rsp+28h] [rbp-4F0h]
  unsigned __int64 v38; // [rsp+30h] [rbp-4E8h]
  char v39; // [rsp+3Fh] [rbp-4D9h]
  __m128 *v40; // [rsp+40h] [rbp-4D8h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-4D0h]
  void *v42; // [rsp+50h] [rbp-4C8h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-4C0h]
  char v44; // [rsp+5Ch] [rbp-4BCh]
  void *v45; // [rsp+60h] [rbp-4B8h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-4B0h]
  char v47; // [rsp+6Ch] [rbp-4ACh]
  __m128 v48; // [rsp+70h] [rbp-4A8h] BYREF
  unsigned int v49; // [rsp+80h] [rbp-498h]
  char v50; // [rsp+84h] [rbp-494h]
  _QWORD v51[3]; // [rsp+B0h] [rbp-468h] BYREF
  char v52; // [rsp+C8h] [rbp-450h]
  __int64 v53; // [rsp+D8h] [rbp-440h]
  void *ptr; // [rsp+E0h] [rbp-438h]
  __int64 v55; // [rsp+E8h] [rbp-430h]
  _BYTE v56[80]; // [rsp+F0h] [rbp-428h] BYREF
  __m128 v57; // [rsp+140h] [rbp-3D8h] BYREF
  __int64 v58; // [rsp+150h] [rbp-3C8h]
  unsigned int *v59; // [rsp+160h] [rbp-3B8h]
  unsigned __int8 v60; // [rsp+174h] [rbp-3A4h]
  unsigned int v61; // [rsp+250h] [rbp-2C8h]
  __int64 v62; // [rsp+4B8h] [rbp-60h]

  sub_BEEB30(&v57, a4, a5, 0);
  v57.m128_i8[8] = 1;
  v8 = v60;
  if ( v60 )
  {
    v9 = sub_A3B7E0(v58);
    v10 = (void **)&v57;
    v8 = sub_CC3770(v9, &v57, a2, a3, a1);
    goto LABEL_3;
  }
  memset(v51, 0, sizeof(v51));
  v52 |= 1u;
  ptr = v56;
  v55 = 0x800000000LL;
  v41 = v61;
  v12 = (__int64)v59;
  v13 = v59[40];
  v14 = v59[36];
  v53 = 0;
  v56[65] = 0;
  v15 = v13 + 1;
  v16 = v59[37];
  v40 = &v57;
  v59[40] = v15;
  if ( v14 + 1 > v16 )
  {
    LODWORD(v34) = v15;
    v33 = (_QWORD *)v12;
    sub_22134E0(v12 + 136, v12 + 152, v14 + 1, 4);
    v12 = (__int64)v33;
    v15 = (unsigned int)v34;
    v14 = *((unsigned int *)v33 + 36);
  }
  v10 = &v42;
  *(_DWORD *)(*(_QWORD *)(v12 + 136) + 4 * v14) = v15;
  ++*(_DWORD *)(v12 + 144);
  v43 = 1;
  v42 = nullptr;
  v44 = 0;
  if ( !(unsigned __int8)sub_C23520(a2, (__int64)&v42, (__int64)&v57, v14, v15, v7) )
    goto LABEL_12;
  v21 = (char *)v42;
  if ( v43 > 0x40 )
    v21 = *(char **)v42;
  v35 = v21;
  if ( (unsigned __int64)v21 <= 0x7FFFFFFFFFFFFFFELL )
    sub_971EF0((__int64)a1, (unsigned __int64)v35);
  v10 = (void **)a3;
  v33 = v51;
  LOBYTE(v49) = 0;
  v34 = &v48;
  v48 = _mm_loadh_ps((const double *)&v33);
  if ( !(unsigned __int8)sub_C24FB0((__m128i *)&v48, a3, v17, v18, v19, v20) )
    goto LABEL_12;
  v33 = (_QWORD *)sub_F44710(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a3, v17, v18, v19);
  if ( !v35 )
  {
LABEL_36:
    v10 = (void **)(&dword_0 + 1);
    v31 = sub_C316B0((__int64)v40, 1, v41, v18, v19);
    v41 = -1;
    if ( (_BYTE)v31 )
    {
      v8 = v31;
      if ( v62 )
        sub_BEFC80((__int64)&v57);
    }
    goto LABEL_12;
  }
  v22 = nullptr;
  v36 = &v45;
  while ( 1 )
  {
    v10 = (void **)a3;
    v48.m128_i8[4] &= ~1u;
    v48.m128_i32[0] = 0;
    if ( !(unsigned __int8)sub_C12830((__int64)&v57, (_DWORD *)a3, (__int64)v33, (__int64)v51, (__int64)v34, 0) )
      break;
    v23 = v49;
    v46 = v49;
    if ( v49 > 0x40 )
    {
      sub_21E17D0(v36);
      v23 = v46;
      v24 = (__int64)v45;
      v47 = v50;
      if ( v50 )
      {
        if ( v46 > 0x40 )
          v24 = *(_QWORD *)v45;
LABEL_22:
        v25 = v24;
        goto LABEL_23;
      }
      if ( v46 > 0x40 )
      {
        v25 = *(_BYTE *)v45;
        goto LABEL_23;
      }
    }
    else
    {
      v24 = v48.m128_i64[1];
      v45 = (void *)v48.m128_u64[1];
      v47 = v50;
      if ( v50 )
        goto LABEL_22;
    }
    v25 = 0;
    if ( v23 )
      v25 = v24 << (64 - (unsigned __int8)v23) >> (64 - (unsigned __int8)v23);
LABEL_23:
    v26 = a1[1];
    v27 = (_QWORD *)*a1;
    v28 = v26 + 1;
    if ( (_QWORD *)*a1 == a1 + 2 )
      v29 = 15;
    else
      v29 = a1[2];
    if ( v28 > v29 )
    {
      v32 = a1[1];
      v39 = v25;
      v38 = v26 + 1;
      v37 = v26;
      sub_974DF0((__int64)a1, v32, 0, nullptr, 1u);
      v27 = (_QWORD *)*a1;
      v25 = v39;
      v28 = v38;
      v26 = v37;
    }
    *((_BYTE *)v27 + v26) = v25;
    a1[1] = v28;
    *(_BYTE *)(*a1 + v26 + 1) = 0;
    if ( v46 > 0x40 && v45 )
      operator delete[](v45);
    v10 = (void **)a3;
    v46 = 64;
    v45 = &dword_0 + 1;
    v47 = 0;
    v30 = sub_BF65F0((__int64)&v57, a3, (__int64)v51, (__int64)v33, (__int64)v36);
    if ( v46 > 0x40 && v45 )
    {
      LOBYTE(v37) = v30;
      operator delete[](v45);
      v30 = v37;
    }
    v17 = v48.m128_u32[0];
    if ( !v30 )
      goto LABEL_50;
    if ( v48.m128_i32[0] > 1u )
    {
      ++v22;
      sub_A2BBA0((int *)v34);
      if ( v35 == v22 )
        goto LABEL_36;
    }
    else if ( v35 == ++v22 )
    {
      goto LABEL_36;
    }
  }
  v17 = v48.m128_u32[0];
LABEL_50:
  if ( (unsigned int)v17 > 1 )
    sub_A2BBA0((int *)v34);
LABEL_12:
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  sub_C31C60((__int64)&v40, (__int64)v10, v17, v18, v19);
  if ( ptr != v56 )
    free(ptr);
LABEL_3:
  sub_C00040((__int64)&v57, (__int64)v10);
  return v8;
}

