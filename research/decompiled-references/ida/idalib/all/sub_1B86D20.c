__int64 __fastcall sub_1B86D20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // r12d
  __int64 v13; // rax
  int v14; // r14d
  unsigned __int64 *v15; // r15
  __m128 v16; // xmm0
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // [rsp+8h] [rbp-C0h]
  __int64 v27; // [rsp+18h] [rbp-B0h]
  __m128 v28; // [rsp+20h] [rbp-A8h] BYREF
  int v29; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 *v30; // [rsp+38h] [rbp-90h]
  unsigned __int16 *v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v34[16]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v35[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_C93B20((__int64)&v29, a2);
  v7 = sub_1B7CAD0(a1, v30, a3, a4, v4, v5, v6);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v13 = sub_1B7CAD0(a1, v31, a3, a4, v8, v9, v10);
  v14 = v13;
  if ( v13 == 1 )
    return 1;
  v15 = (unsigned __int64 *)&v28;
  ptr[0] = v34;
  v16 = _mm_loadh_ps((const double *)&v32);
  ptr[1] = (void *)0x200000000LL;
  v28 = v16;
  while ( 1 )
  {
    v17 = sub_BFB900(*v15);
    if ( (*(_WORD *)v17 & 0x1FF) != 0x5B )
      goto LABEL_13;
    v18 = sub_BFB900(*(_QWORD *)(v17 + 32));
    if ( (*(_WORD *)v18 & 0x1FF) != 0x47 )
      goto LABEL_13;
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 <= 3 )
      goto LABEL_13;
    if ( (*(_QWORD *)v18 & 0x200000LL) != 0 )
      v19 = *(_QWORD *)(v18 + 16LL * ((*(_QWORD *)v18 & 0x80000LL) != 0) + 32);
    v27 = v19;
    sub_C93B20((__int64)v35, a2);
    v20 = sub_1B04070((__int64)a1, v27);
    if ( !v20 )
      break;
    v35[0] = v20 | 3;
    sub_1743080((__int64)ptr, v20 | 3);
LABEL_13:
    if ( &v29 == (int *)++v15 )
    {
      v21 = v29;
      sub_C93B20((__int64)v35, a2);
      v25 = sub_C00A40(v35[3], a2, v22, v23, v24);
      result = sub_1C07820(*a1, v25, v21, (unsigned int)ptr, v12 & 0xFFFFFFFE, v14 & 0xFFFFFFFE, 0, 1, 0);
      goto LABEL_15;
    }
  }
  result = 1;
LABEL_15:
  if ( ptr[0] != v34 )
  {
    v26 = result;
    free(ptr[0]);
    return v26;
  }
  return result;
}
