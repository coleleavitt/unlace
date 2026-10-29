__int64 __fastcall sub_195D5C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // r12d
  __int64 v7; // rax
  int v8; // r14d
  unsigned __int64 *v9; // r15
  __m128 v10; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __m128 v22; // [rsp+20h] [rbp-A8h] BYREF
  int v23; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 *v24; // [rsp+38h] [rbp-90h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v29[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_C93B20((__int64)&v23, a2);
  v4 = sub_1944E10(a1, v24, a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_1944E10(a1, v25, a3, a4);
  v8 = v7;
  if ( v7 == 1 )
    return 1;
  v9 = (unsigned __int64 *)&v22;
  ptr[0] = v28;
  v10 = _mm_loadh_ps((const double *)&v26);
  ptr[1] = (void *)0x200000000LL;
  v22 = v10;
  while ( 1 )
  {
    v11 = sub_BFB900(*v9);
    if ( (*(_WORD *)v11 & 0x1FF) != 0x5B )
      goto LABEL_13;
    v12 = sub_BFB900(*(_QWORD *)(v11 + 32));
    if ( (*(_WORD *)v12 & 0x1FF) != 0x47 )
      goto LABEL_13;
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 35 <= 3 )
      goto LABEL_13;
    if ( (*(_QWORD *)v12 & 0x200000LL) != 0 )
      v13 = *(_QWORD *)(v12 + 16LL * ((*(_QWORD *)v12 & 0x80000LL) != 0) + 32);
    v21 = v13;
    sub_C93B20((__int64)v29, a2);
    v14 = sub_18CBA40((__int64)a1, v21);
    if ( !v14 )
      break;
    v29[0] = v14 | 3;
    sub_1743080((__int64)ptr, v14 | 3);
LABEL_13:
    if ( &v23 == (int *)++v9 )
    {
      v15 = v23;
      sub_C93B20((__int64)v29, a2);
      v19 = sub_C00A40(v29[3], a2, v16, v17, v18);
      result = sub_1C07820(*a1, v19, v15, (unsigned int)ptr, v6 & 0xFFFFFFFE, v8 & 0xFFFFFFFE, 0, 1, 0);
      goto LABEL_15;
    }
  }
  result = 1;
LABEL_15:
  if ( ptr[0] != v28 )
  {
    v20 = result;
    free(ptr[0]);
    return v20;
  }
  return result;
}
