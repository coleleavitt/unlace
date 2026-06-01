__int64 __fastcall sub_1984AA0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int16 *v4; // r13
  unsigned __int16 *v5; // r15
  unsigned __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // r14
  __m128 v10; // xmm0
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rbp
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __int64 v26; // [rsp+8h] [rbp-100h]
  unsigned __int64 *v27; // [rsp+10h] [rbp-F8h] BYREF
  char v28; // [rsp+1Fh] [rbp-E9h]
  unsigned __int64 v29; // [rsp+20h] [rbp-E8h]
  __m128 *v30; // [rsp+28h] [rbp-E0h]
  _QWORD *v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  __m128 v33; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v36; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v40[16]; // [rsp+90h] [rbp-78h] BYREF
  __m128 v41; // [rsp+A0h] [rbp-68h] BYREF
  char v42; // [rsp+B0h] [rbp-58h]
  __m128 *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]

  sub_C93B20((__int64)&v35, a2);
  v4 = v36;
  v5 = v37;
  v6 = sub_190CCA0(a1, v36, a3, a4);
  if ( v6 == 1 )
    return 1;
  v8 = v6;
  v29 = sub_190CCA0(a1, v5, a3, a4);
  if ( v29 == 1 )
    return 1;
  v9 = (unsigned __int64 *)&v33;
  v28 = 0;
  ptr[0] = v40;
  v10 = _mm_loadh_ps((const double *)&v38);
  ptr[1] = (void *)0x200000000LL;
  v27 = (unsigned __int64 *)&v34;
  v30 = &v41;
  v33 = v10;
  do
  {
    v11 = sub_BFB900(*v9);
    if ( (*(_WORD *)v11 & 0x1FF) == 0x5B )
    {
      v12 = (_QWORD *)sub_BFB900(*(_QWORD *)(v11 + 32));
      if ( (*(_WORD *)v12 & 0x1FF) == 0x47 )
      {
        v13 = v12[2];
        if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 35 > 3 )
        {
          if ( (*v12 & 0x200000LL) != 0 )
            v13 = v12[2 * ((*v12 & 0x80000LL) != 0) + 4];
          v31 = v12;
          v32 = v13;
          sub_C93B20((__int64)v30, a2);
          v14 = sub_18CBE40((__int64)a1, v32);
          if ( !v14 )
          {
            result = 1;
            goto LABEL_21;
          }
          if ( (*v31 & 0x200000LL) != 0 )
            v15 = v31[2 * ((*v31 & 0x80000LL) != 0) + 4];
          else
            v15 = v31[2];
          v16 = v28;
          if ( v14 != v15 )
            v16 = 1;
          v41.m128_u64[0] = v14 | 3;
          v28 = v16;
          sub_1743080((__int64)ptr, v14 | 3);
        }
      }
    }
    ++v9;
  }
  while ( v27 != v9 );
  v17 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v28 && v4 == (unsigned __int16 *)v17 && v5 == (unsigned __int16 *)(v29 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v27 = (unsigned __int64 *)v4;
    v23 = *a1;
    v27 = (unsigned __int64 *)v5;
    v24 = _mm_loadh_ps((const double *)&v27);
    v27 = (unsigned __int64 *)v23;
    v34 = v24;
    v43 = &v34;
    v25 = _mm_loadh_ps((const double *)&v27);
    v42 = 0;
    v41 = v25;
    v44 = 2;
    sub_1911FF0((__int64)v30, a2, v25, a4);
    result = a2;
  }
  else
  {
    v27 = (unsigned __int64 *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    v18 = v35;
    sub_C93B20((__int64)v30, a2);
    v22 = sub_C00A40((unsigned __int64)v43, a2, v19, v20, v21);
    result = sub_1C07820(*a1, v22, v18, (unsigned int)ptr, v17, (unsigned int)v29 & 0xFFFFFFFE, 0, 1, 0);
  }
LABEL_21:
  if ( ptr[0] != v40 )
  {
    v26 = result;
    free(ptr[0]);
    return v26;
  }
  return result;
}
