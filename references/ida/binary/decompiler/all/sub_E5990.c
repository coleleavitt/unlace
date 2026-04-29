__int64 __fastcall sub_E5990(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdi
  int *v23; // rcx
  char v24; // r13
  __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // rax
  int *v33; // [rsp+0h] [rbp-80h]
  int *v34; // [rsp+0h] [rbp-80h]
  _QWORD v35[2]; // [rsp+8h] [rbp-78h] BYREF
  __m128 v36; // [rsp+18h] [rbp-68h] BYREF
  __int64 v37; // [rsp+28h] [rbp-58h] BYREF
  __int128 v38; // [rsp+30h] [rbp-50h]
  unsigned __int64 v39; // [rsp+40h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 64);
  v8 = a1[3];
  v39 = __readfsqword(0x28u);
  v38 = 0;
  v9 = *(_QWORD *)(v7 + 1440);
  v37 = 0;
  if ( v8 + v9 - 1 >= v9 )
  {
    v37 = qvector_reserve();
    *(__m128i *)(v37 + 16 * v38) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v8);
    *(_QWORD *)&v38 = v38 + 1;
  }
  if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
    v10 = *(_QWORD *)(a2 + 520);
  else
    v10 = *(_QWORD *)(a2 + 328);
  v11 = a1[4];
  v12 = (int)v10;
  v13 = v10 - v11;
  if ( v13 > 0 )
  {
    v14 = *(_QWORD *)(v7 + 1496);
    v15 = *(_QWORD *)(v7 + 1440) + v11;
    v35[1] = v13;
    v16 = *(_QWORD *)(v14 + 24);
    v35[0] = *(_QWORD *)(v16 + 16) & v15;
    sub_313630(&v37, v35, v35[0], v16, a5, a6);
  }
  sub_313730(&v37, *(_QWORD *)(a2 + 64) + 208LL);
  if ( (_QWORD)v38 )
  {
    v34 = a1 + 54;
    v36 = _mm_loadh_ps((const double *)(v7 + 128));
    if ( (unsigned __int8)sub_314920(a1 + 54, &v36, 0) )
    {
      v36 = _mm_loadh_ps((const double *)(v7 + 128));
      sub_313630(v34, &v36, v28, v29, v30, v31);
      sub_314710(v34, &v37);
    }
    v33 = a1 + 38;
    sub_314710(a1 + 38, &v37);
    sub_314710(a1 + 28, &v37);
    sub_314710(a1 + 64, &v37);
    if ( (int)v12 > a1[3] )
      v12 = a1[3];
    v19 = a1[4] - v12;
    if ( v19 <= 0 )
      goto LABEL_19;
    v24 = 1;
  }
  else
  {
    if ( (int)v12 > a1[3] )
      v12 = a1[3];
    v19 = a1[4] - v12;
    if ( v19 <= 0 )
      goto LABEL_11;
    v23 = a1 + 38;
    v24 = 0;
    v33 = a1 + 38;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL);
  v26 = *(_QWORD *)(v25 + 16) & (*(_QWORD *)(v7 + 1440) + v12);
  v36.m128_u64[1] = v19;
  v36.m128_u64[0] = v26;
  if ( (unsigned __int8)sub_313630(v33, &v36, v25, v23, v17, v18) )
  {
    v32.m128_u64[0] = sub_32C630(a1, *(_QWORD *)(a2 + 64));
    v36 = v32;
    sub_314680(v33, &v36);
  }
  else if ( !v24 )
  {
LABEL_11:
    v20 = 0;
    goto LABEL_12;
  }
LABEL_19:
  v27 = *(_DWORD *)(a2 + 24);
  BYTE1(v27) &= ~2u;
  LOBYTE(v27) = v27 | 0x80;
  *(_DWORD *)(a2 + 24) = v27;
  v20 = 1;
LABEL_12:
  v21 = v37;
  a1[70] |= 0x40u;
  if ( v21 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v20;
}
