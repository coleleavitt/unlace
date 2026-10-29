__int64 __fastcall print_tinfo(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 *a6,
        char *a7,
        const char *a8)
{
  char v9; // bh
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(__int64, __int64, const char *, _BYTE *); // rsi
  unsigned int v15; // r15d
  void *v16; // rsi
  _BYTE *v17; // rdi
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  char *v20; // rax
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  int v24; // esi
  int v25; // edi
  int v26; // edx
  __int64 v27; // [rsp+8h] [rbp-98h]
  __int64 v28; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int8 v29; // [rsp+18h] [rbp-88h]
  int v30; // [rsp+1Ch] [rbp-84h]
  void *ptr; // [rsp+20h] [rbp-80h] BYREF
  __m128i v32; // [rsp+28h] [rbp-78h] BYREF
  __int64 v33; // [rsp+38h] [rbp-68h]
  int v34; // [rsp+40h] [rbp-60h]
  int v35; // [rsp+44h] [rbp-5Ch]
  __int64 v36; // [rsp+48h] [rbp-58h]
  __int64 v37; // [rsp+50h] [rbp-50h]
  __int64 v38; // [rsp+58h] [rbp-48h]
  unsigned __int64 v39; // [rsp+68h] [rbp-38h]

  v9 = BYTE1(a5);
  v39 = __readfsqword(0x28u);
  v35 = a4;
  v29 = 0;
  v10 = qword_2CA1698;
  ptr = nullptr;
  v11 = (a5 >> 13) & 1;
  v33 = 0;
  v37 = 0;
  v38 = 0;
  v34 = a3;
  v36 = a2;
  v32 = 0;
  if ( (a5 & 0x800) != 0 )
    v11 |= 2u;
  v30 = v11;
  v12 = -(__int64)((a5 & 0x10000) == 0);
  BYTE1(v12) |= 4u;
  v28 = v12;
  v13 = a5 & 0x8006DBEA | 0x14;
  if ( (a5 & 4) != 0 )
    v13 = a5 & 0x8006DBEA | 4;
  if ( (*(_BYTE *)a6 & 0xF) != 0xC )
    goto LABEL_6;
  v24 = v30;
  v25 = a5 & 0x20000;
  v26 = v30 | 4;
  v30 |= 4u;
  if ( (a5 & 0x4000) == 0 )
  {
    if ( !v25 )
    {
      v14 = sub_643630;
      if ( (a5 & 0x24001) == 0 )
        goto LABEL_8;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v30 = v24 | 0xC;
  v26 = v24 | 0xC;
  if ( v25 )
LABEL_25:
    v30 = v26 | 0x10;
LABEL_26:
  v13 |= 0x10000u;
LABEL_6:
  v14 = sub_643630;
  if ( (a5 & 1) != 0 )
    v14 = (__int64 (__fastcall *)(__int64, __int64, const char *, _BYTE *))&sub_64F640;
LABEL_8:
  v15 = sub_64DF50(*(__int64 **)(qword_2CA1698 + 1632), (__int64)v14, (__int64)&v28, a6, a7, a8, v13);
  v16 = ptr;
  v17 = ptr;
  if ( (_BYTE)v15 )
  {
    if ( !a1 )
      goto LABEL_20;
    if ( !v29 )
      goto LABEL_18;
  }
  else
  {
    v15 = v29;
    if ( !v29 || !a1 )
      goto LABEL_20;
  }
  v27 = v32.m128i_i64[0];
  if ( v32.m128i_i64[0] )
  {
    v18 = v32.m128i_i64[0] + 2;
    v19 = v32.m128i_i64[0] + 3;
    v27 = v32.m128i_i64[0] - 1;
  }
  else
  {
    v19 = 4;
    v18 = 3;
  }
  if ( v32.m128i_i64[1] < v19 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
    v17 = ptr;
  }
  v32.m128i_i64[0] = v19;
  v17[v18] = 0;
  v20 = (char *)ptr + v27;
  *(_WORD *)v20 = -32542;
  v20[2] = -90;
  v16 = ptr;
LABEL_18:
  v17 = *(_BYTE **)a1;
  v21 = _mm_loadu_si128(&v32);
  *(_QWORD *)a1 = v16;
  v15 = 1;
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  ptr = v17;
  *(__m128i *)(a1 + 8) = v21;
  v32 = v22;
  if ( (v9 & 4) == 0 )
  {
    sub_4B8BE0(v10, a1);
    v17 = ptr;
  }
LABEL_20:
  if ( v17 )
  {
    v32.m128i_i64[0] = 0;
    qfree(v17);
  }
  return v15;
}

