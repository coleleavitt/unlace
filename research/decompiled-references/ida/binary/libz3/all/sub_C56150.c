__int64 __fastcall sub_C56150(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int *a5, __int64 *a6)
{
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // r12d
  bool v17; // zf
  char v19; // al
  char v20; // al
  int v21; // eax
  void *v22; // r15
  void *v23; // rdi
  void *v24; // r12
  void *v25; // rdi
  __m128 v26; // xmm3
  bool v27; // al
  bool v28; // al
  int *v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+8h] [rbp-C0h] BYREF
  void *v31; // [rsp+10h] [rbp-B8h]
  void *v32; // [rsp+18h] [rbp-B0h]
  int *v33; // [rsp+20h] [rbp-A8h]
  __m128 *v34; // [rsp+28h] [rbp-A0h]
  __m128 v35; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+40h] [rbp-88h] BYREF
  __int64 v37; // [rsp+50h] [rbp-78h] BYREF
  __int64 v38; // [rsp+58h] [rbp-70h]
  int v39; // [rsp+60h] [rbp-68h] BYREF
  char v40; // [rsp+64h] [rbp-64h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  __m128 v42; // [rsp+70h] [rbp-58h] BYREF
  __int64 v43; // [rsp+80h] [rbp-48h] BYREF
  __int64 v44; // [rsp+88h] [rbp-40h]

  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)a1;
  v33 = a5;
  v30 = v11;
  if ( a2 )
    ++a2[2];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v12 = qword_1C7F2C0;
  v29 = (int *)(a1 + 224);
  if ( (*(_BYTE *)(a1 + 244) & 1) != 0
    || *(_DWORD *)(a1 + 240) != 1
    || (v20 = *(_BYTE *)(a4 + 20), (v20 & 1) != 0)
    || *(_DWORD *)(a4 + 16) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v29, a4) )
      goto LABEL_8;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 228) & 1) == 0 && (*(_BYTE *)(a4 + 4) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 224) < *(_DWORD *)a4 )
      {
        v42 = 0u;
        v26 = _mm_loadh_ps((const double *)&v30);
        v43 = 1;
        v44 = 0;
        v35 = v26;
        goto LABEL_22;
      }
LABEL_8:
      v13 = v30;
      goto LABEL_9;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, v29, a4) >= 0 )
      goto LABEL_8;
  }
  v42 = 0u;
  v12 = qword_1C7F2C0;
  v19 = *(_BYTE *)(a4 + 4);
  v35 = _mm_loadh_ps((const double *)&v30);
  v43 = 1;
  v44 = 0;
  if ( (v19 & 1) == 0 )
  {
    v20 = *(_BYTE *)(a4 + 20);
LABEL_22:
    v42.m128_i32[0] = *(_DWORD *)a4;
    goto LABEL_23;
  }
  v31 = qword_1C7F2C0;
  sub_182C690(qword_1C7F2C0, &v42, a4);
  v20 = *(_BYTE *)(a4 + 20);
  v12 = v31;
LABEL_23:
  if ( (v20 & 1) != 0 )
  {
    sub_182C690(v12, &v43, a4 + 16);
  }
  else
  {
    v21 = *(_DWORD *)(a4 + 16);
    BYTE4(v43) &= ~1u;
    LODWORD(v43) = v21;
  }
  v32 = qword_1C7F2C0;
  if ( v42.m128_i32[0]
    && ((*(_BYTE *)(a1 + 228) & 1) != 0
     || *(_DWORD *)(a1 + 224) != 1
     || (*(_BYTE *)(a1 + 244) & 1) != 0
     || *(_DWORD *)(a1 + 240) != 1) )
  {
    v34 = &v42;
    sub_1831650(v32, &v42, a1 + 240);
    sub_1831650(v32, &v43, v29);
    if ( (int)v43 < 0 )
    {
      sub_1831620(v32, v34);
      sub_1831620(v32, &v43);
    }
    v31 = &v37;
    v37 = 0;
    v38 = 0;
    sub_1832C70(v32, v34, &v43, &v37);
    if ( (v37 & 0x100000000LL) == 0 && (_DWORD)v37 == 1 )
    {
      sub_182CBA0(v32, v31);
    }
    else
    {
      sub_1833EB0(v32, v34, v31, v34);
      v22 = v32;
      sub_1833EB0(v32, &v43, v31, &v43);
      sub_182CBA0(v22, v31);
    }
  }
  else
  {
    v34 = &v42;
    sub_27B950((__int64)v32, (__int64)&v42, (int *)&v42);
  }
  BYTE4(v37) &= 0xFCu;
  v40 &= 0xFCu;
  LODWORD(v37) = 0;
  v23 = qword_1C7F2C0;
  v38 = 0;
  v39 = 1;
  v41 = 0;
  if ( (v42.m128_i8[4] & 1) != 0 )
  {
    v31 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v37, v34);
    v23 = v31;
    if ( (v43 & 0x100000000LL) == 0 )
      goto LABEL_34;
  }
  else
  {
    LODWORD(v37) = v42.m128_i32[0];
    if ( (v43 & 0x100000000LL) == 0 )
    {
LABEL_34:
      v40 &= ~1u;
      v39 = v43;
      goto LABEL_35;
    }
  }
  sub_182C690(v23, &v39, &v43);
LABEL_35:
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  sub_182CBA0(v31, &v43);
  v13 = v30;
  v31 = &v37;
  if ( (v40 & 1) != 0
    || v39 != 1
    || (si128 = _mm_load_si128((const __m128i *)&v35),
        v27 = sub_C517B0((__int64 *)a1, si128.m128i_i64, (__int64)&v37),
        v13 = si128.m128i_i64[1],
        v10 = (_DWORD *)si128.m128i_i64[0],
        !v27)
    || (v42 = _mm_loadh_ps((const double *)&v30),
        v28 = sub_C517B0((__int64 *)a1, (__int64 *)v34, (__int64)v31),
        v30 = v42.m128_i64[1],
        v9 = v42.m128_u64[0],
        !v28) )
  {
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v31);
    v25 = v24;
    v16 = 0;
    sub_182CBA0(v25, &v39);
    goto LABEL_12;
  }
  sub_27B950((__int64)qword_1C7F2C0, a4, v29);
  sub_25A130((char *)v31);
LABEL_9:
  v14 = sub_C552F0((__int64 *)a1, v10, v9, (int *)a4, v33);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  sub_C4E2C0(*a6, a6[1]);
  *a6 = v15;
  v16 = 1;
LABEL_12:
  if ( v9 )
  {
    v17 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v30, v9);
  }
  if ( v10 )
  {
    v17 = v10[2]-- == 1;
    if ( v17 )
      sub_15D7BC0(v13, v10);
  }
  return v16;
}

