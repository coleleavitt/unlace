__int64 __fastcall sub_84FC60(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        int a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128 *v15; // rax
  __m128 *v16; // rax
  int v17; // r13d
  int v18; // r13d
  int v19; // r9d
  int v20; // ebp
  _QWORD *v21; // r15
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int i; // r14d
  int v28; // edx
  _QWORD *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __m128 *v33; // rax
  __m128 *v34; // rax
  int v35; // r15d
  int v36; // edx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128 *v43; // rax
  __m128 *v44; // rax
  int v46; // r9d
  int v47; // r9d
  int v48; // r9d
  char *v49; // rax
  int v50; // r9d
  __int64 v51; // [rsp+0h] [rbp-78h]
  __int64 v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  unsigned int v54; // [rsp+18h] [rbp-60h]
  _QWORD *v55; // [rsp+18h] [rbp-60h]
  int v56; // [rsp+28h] [rbp-50h]
  int v57; // [rsp+30h] [rbp-48h]
  unsigned __int64 v58; // [rsp+38h] [rbp-40h]

  v10 = *(int *)(a1 + 100);
  v58 = __readfsqword(0x28u);
  v11 = *(_QWORD *)a1;
  v54 = a2 - a5;
  if ( (_DWORD)v10 )
  {
    sub_847F60((unsigned int *)v11, 32, 1, 0, 142, v10);
    sub_847F60((unsigned int *)v11, 32, 3, 0, 13, 0);
    sub_849F80((unsigned int *)v11, 0x40u, 1, 0, 1, 0, 0x7Fu, a2 + 1);
    if ( !*(_DWORD *)v11 )
    {
      *(_DWORD *)(v11 + 144) = 0;
      v49 = sub_844340(v11, 1u, 1, 0, 13, 0);
      if ( v49 )
        *v49 = 59;
    }
    sub_847920((unsigned int *)v11, 2, 13, 1, 0, 13);
  }
  sub_849F80((unsigned int *)v11, 0x40u, 2, 0, 2, 0, 0x7Fu, a2);
  sub_84A700((unsigned int *)v11, 3, 2, 0, 13, 0);
  if ( *(_DWORD *)v11 )
    goto LABEL_7;
  v12 = *(_QWORD *)(v11 + 80);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = v13 + 16;
  if ( (unsigned __int64)(v13 + 16) > 0xFF0 )
  {
    v15 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64, __int64, __int64))(v11 + 56))(
                      4096,
                      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 16LL),
                      v12,
                      v14,
                      v51,
                      v52);
    if ( v15 )
    {
      v15->m128_u64[0] = *(_QWORD *)(v11 + 80);
      *(_QWORD *)(v11 + 80) = v15;
      v16 = v15 + 1;
      v16[-1].m128_u64[1] = 16;
LABEL_6:
      *v16 = _mm_loadh_ps((const double *)(a1 + 368));
      *(_QWORD *)(a1 + 368) = v16;
      goto LABEL_7;
    }
    *(_DWORD *)v11 = 2;
LABEL_7:
    if ( a3 != a4 )
      goto LABEL_8;
    goto LABEL_69;
  }
  v16 = (__m128 *)(v12 + v13 + 16);
  *(_QWORD *)(v12 + 8) = v14;
  if ( v16 )
    goto LABEL_6;
  if ( a3 != a4 )
  {
LABEL_8:
    v17 = (unsigned __int8)(a3 ^ a4);
    if ( (v17 & (v17 - 1)) != 0 )
    {
      v18 = 2;
      sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * a3);
      sub_847F60((unsigned int *)v11, 32, 4, 0, 127, 16843009 * a4);
    }
    else
    {
      sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * (unsigned __int8)(a3 | a4));
      v46 = 16843009 * v17;
      v18 = 1;
      sub_847F60((unsigned int *)v11, 32, 4, 0, 127, v46);
    }
    sub_848B50((unsigned int *)v11, 3, 1, 0);
    sub_848B50((unsigned int *)v11, 5, 4, 0);
    if ( a6 == a7 )
    {
      v47 = 16843009 * a6;
      v20 = 0;
      sub_847F60((unsigned int *)v11, 32, 1, 0, 127, v47);
      sub_848B50((unsigned int *)v11, 4, 1, 0);
      sub_847EA0(v11, 3, 3);
      sub_847EA0(v11, 5, 5);
      sub_847EA0(v11, 4, 4);
      goto LABEL_16;
    }
    goto LABEL_11;
  }
LABEL_69:
  sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * a3);
  sub_848B50((unsigned int *)v11, 3, 1, 0);
  if ( a6 == a7 )
  {
    v50 = a6;
    v18 = 0;
    v20 = 0;
    sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * v50);
    sub_848B50((unsigned int *)v11, 4, 1, 0);
    sub_847EA0(v11, 3, 3);
    sub_847EA0(v11, 4, 4);
    goto LABEL_16;
  }
  v18 = 0;
LABEL_11:
  v56 = (unsigned __int8)(a6 ^ a7);
  if ( ((unsigned __int8)v56 & (v56 - 1)) != 0 )
  {
    v48 = a6;
    v20 = 2;
    sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * v48);
    sub_847F60((unsigned int *)v11, 32, 4, 0, 127, 16843009 * a7);
  }
  else
  {
    v19 = (unsigned __int8)(a7 | a6);
    v20 = 1;
    sub_847F60((unsigned int *)v11, 32, 1, 0, 127, 16843009 * v19);
    sub_847F60((unsigned int *)v11, 32, 4, 0, 127, 16843009 * v56);
  }
  sub_848B50((unsigned int *)v11, 4, 1, 0);
  sub_848B50((unsigned int *)v11, 6, 4, 0);
  sub_847EA0(v11, 3, 3);
  if ( a3 != a4 )
    sub_847EA0(v11, 5, 5);
  sub_847EA0(v11, 4, 4);
  sub_847EA0(v11, 6, 6);
LABEL_16:
  sub_849F80((unsigned int *)v11, 0x42u, 1, 0, 2, 0, 0x7Fu, v54);
  sub_847F60((unsigned int *)v11, 32, 4, 0, 2, 0);
  if ( !*(_DWORD *)v11 )
  {
    *(_DWORD *)(v11 + 144) = 0;
    sub_8498A0((unsigned int *)v11, 0x25232120u, 2, 0, 2, 0, 127, -16);
  }
  sub_847A70(v11, 67125248, 1, 0);
  v53 = -(__int64)v54;
  v21 = sub_84A700((unsigned int *)v11, 3, 1, 0, 2, 0);
  sub_847A70(v11, 0x4000, 2, v53);
  v22 = sub_8452F0(v11, 36);
  v23 = sub_845240(v11);
  if ( v23 && v21 )
  {
    v21[2] &= ~1uLL;
    v21[3] = v23;
  }
  LOWORD(v57) = 3942;
  if ( !*(_DWORD *)v11 )
  {
    v24 = sub_8441E0(v11, 5);
    if ( v24 )
    {
      *(_BYTE *)v24 = 4;
      *(_QWORD *)(v11 + 120) += 4LL;
      *(_DWORD *)((char *)v24 + 1) = -932245658;
    }
    HIWORD(v57) = -1677;
    if ( !*(_DWORD *)v11 )
    {
      v25 = sub_8441E0(v11, 6);
      if ( v25 )
      {
        *(_BYTE *)v25 = 5;
        *(_QWORD *)(v11 + 120) += 5LL;
        *(_DWORD *)((char *)v25 + 1) = v57;
        *((_BYTE *)v25 + 5) = v54;
      }
    }
  }
  v26 = sub_845240(v11);
  if ( v26 && v22 )
  {
    v22[2] &= ~1uLL;
    v22[3] = v26;
  }
  if ( !*(_DWORD *)v11 )
  {
    *(_DWORD *)(v11 + 144) = 0;
    sub_8498A0((unsigned int *)v11, 0x25232120u, 4, 0, 4, 0, 127, 15);
  }
  for ( i = 0; i != 4; ++i )
  {
    sub_848E80((unsigned int *)v11, v20, i, 1u, 3u, 6u, 4u);
    v28 = i;
    sub_848E80((unsigned int *)v11, v18, v28, 0, 2u, 5u, 7u);
  }
  sub_847E10((unsigned int *)v11);
  sub_848FF0((unsigned int *)v11);
  sub_849F80((unsigned int *)v11, 0x40u, 2, 0, 2, 0, 4u, 0);
  if ( !*(_DWORD *)v11 )
  {
    *(_DWORD *)(v11 + 144) = 0;
    sub_849DA0((unsigned int *)v11, 40, 0, 1, 0, 1, 0, 4, 0);
  }
  v29 = sub_84A700((unsigned int *)v11, 1, 1, 0, 127, 0);
  sub_849F80((unsigned int *)v11, 0x42u, 2, 0, 2, 0, 4u, 0);
  v55 = sub_845240(v11);
  sub_849F80((unsigned int *)v11, 0x40u, 2, 0, 2, 0, 0x7Fu, 16);
  sub_84A700((unsigned int *)v11, 3, 2, 0, 13, 0);
  if ( !*(_DWORD *)v11 )
  {
    v30 = *(_QWORD *)(v11 + 80);
    v31 = *(_QWORD *)(v30 + 8);
    v32 = v31 + 16;
    if ( (unsigned __int64)(v31 + 16) <= 0xFF0 )
    {
      v34 = (__m128 *)(v30 + v31 + 16);
      *(_QWORD *)(v30 + 8) = v32;
      if ( !v34 )
        goto LABEL_41;
    }
    else
    {
      v33 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v11 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 16LL));
      if ( !v33 )
      {
        *(_DWORD *)v11 = 2;
        goto LABEL_41;
      }
      v33->m128_u64[0] = *(_QWORD *)(v11 + 80);
      *(_QWORD *)(v11 + 80) = v33;
      v34 = v33 + 1;
      v34[-1].m128_u64[1] = 16;
    }
    *v34 = _mm_loadh_ps((const double *)(a1 + 368));
    *(_QWORD *)(a1 + 368) = v34;
  }
LABEL_41:
  sub_847A70(v11, 67125248, 1, 0);
  v35 = 0;
  sub_847A70(v11, 0x4000, 2, v53);
  do
  {
    sub_848E80((unsigned int *)v11, v18, v35, 0, 2u, 5u, 7u);
    v36 = v35++;
    sub_848E80((unsigned int *)v11, v20, v36, 1u, 3u, 6u, 4u);
  }
  while ( v35 != 4 );
  sub_847E10((unsigned int *)v11);
  sub_848FF0((unsigned int *)v11);
  v37 = sub_84A700((unsigned int *)v11, 0, 1, 0, 127, 0);
  if ( v37 && v55 )
  {
    v37[2] &= ~1uLL;
    v37[3] = v55;
  }
  v38 = sub_845240(v11);
  if ( v38 && v29 )
  {
    v29[2] &= ~1uLL;
    v29[3] = v38;
  }
  if ( !*(_DWORD *)v11 )
  {
    v39 = sub_8441E0(v11, 4);
    if ( v39 )
    {
      *(_BYTE *)v39 = 3;
      *(_QWORD *)(v11 + 120) += 3LL;
      *(_WORD *)((char *)v39 + 1) = -17393;
      *((_BYTE *)v39 + 3) = -64;
    }
  }
  sub_849F80((unsigned int *)v11, 0x40u, 2, 0, 2, 0, 1u, 0);
  sub_84A700((unsigned int *)v11, 3, 2, 0, 13, 0);
  if ( !*(_DWORD *)v11 )
  {
    v40 = *(_QWORD *)(v11 + 80);
    v41 = *(_QWORD *)(v40 + 8);
    v42 = v41 + 16;
    if ( (unsigned __int64)(v41 + 16) <= 0xFF0 )
    {
      v44 = (__m128 *)(v40 + v41 + 16);
      *(_QWORD *)(v40 + 8) = v42;
      if ( v44 )
        goto LABEL_56;
    }
    else
    {
      v43 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v11 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 16LL));
      if ( v43 )
      {
        v43->m128_u64[0] = *(_QWORD *)(v11 + 80);
        *(_QWORD *)(v11 + 80) = v43;
        v44 = v43 + 1;
        v44[-1].m128_u64[1] = 16;
LABEL_56:
        *v44 = _mm_loadh_ps((const double *)(a1 + 368));
        *(_QWORD *)(a1 + 368) = v44;
        goto LABEL_57;
      }
      *(_DWORD *)v11 = 2;
    }
  }
LABEL_57:
  sub_849F80((unsigned int *)v11, 0x42u, 2, 0, 2, 0, 0x7Fu, a2);
  if ( *(_DWORD *)(a1 + 100) )
    return sub_847F60((unsigned int *)v11, 32, 13, 0, 3, 0);
  else
    return v58 - __readfsqword(0x28u);
}

