__int64 __fastcall sub_86F780(__int64 a1, __int64 a2, double *a3, int a4, int a5)
{
  unsigned int *v6; // rbp
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  double *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128 *v13; // rax
  __m128 *v14; // rax
  __int64 result; // rax
  __m128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r15
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  double *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128 *v30; // rax
  __m128 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128 *v35; // rax
  __m128 *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __m128 *v41; // rax
  __m128 *v42; // rax
  int v43; // r14d
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __m128 *v47; // rax
  __m128 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __m128 *v52; // rax
  __m128 *v53; // rax

  v6 = *(unsigned int **)a1;
  if ( (unsigned __int8)(*(_BYTE *)a2 - 114) <= 1u )
  {
    v43 = 16 * (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
    sub_86B8E0(v6, 32, 1, 0, 142, v43 + *(_DWORD *)(a1 + 76));
    if ( !a4 )
      goto LABEL_58;
    if ( *(_DWORD *)(a1 + 480) )
      goto LABEL_58;
    sub_86E080(v6, 0, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8);
    if ( *v6 )
      goto LABEL_58;
    v49 = *((_QWORD *)v6 + 10);
    v50 = *(_QWORD *)(v49 + 8);
    v51 = v50 + 16;
    if ( (unsigned __int64)(v50 + 16) <= 0xFF0 )
    {
      v53 = (__m128 *)(v49 + v50 + 16);
      *(_QWORD *)(v49 + 8) = v51;
      if ( !v53 )
        goto LABEL_58;
    }
    else
    {
      v52 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( !v52 )
      {
        *v6 = 2;
        goto LABEL_58;
      }
      v52->m128_u64[0] = *((_QWORD *)v6 + 10);
      *((_QWORD *)v6 + 10) = v52;
      v53 = v52 + 1;
      v53[-1].m128_u64[1] = 16;
    }
    *v53 = _mm_loadh_ps(a3);
    *(_QWORD *)a3 = v53;
LABEL_58:
    sub_86D900(v6, 0x242u, 4, 0, 142, v43 + *(_DWORD *)(a1 + 76) + 8, 1u, 0);
    goto LABEL_4;
  }
  sub_86B8E0(v6, 32, 1, 0, 132, 0);
  if ( !*v6 )
  {
    v6[36] = 0;
    sub_86CA20(v6, 0x2D2B2928u, 4, 0, 132, 8, 1, 0);
  }
LABEL_4:
  v7 = nullptr;
  if ( a4 )
    v7 = sub_868C70((__int64)v6, 0);
  sub_86D900(v6, 0x40u, 2, 0, 2, 0, 4u, 0);
  v8 = sub_86E080(v6, 4, 2, 0, 13, 0);
  if ( *(_DWORD *)(a1 + 168) == 1 && !*v6 )
  {
    v44 = *((_QWORD *)v6 + 10);
    v45 = *(_QWORD *)(v44 + 8);
    v46 = v45 + 16;
    if ( (unsigned __int64)(v45 + 16) <= 0xFF0 )
    {
      v48 = (__m128 *)(v44 + v45 + 16);
      *(_QWORD *)(v44 + 8) = v46;
      if ( v48 )
        goto LABEL_67;
    }
    else
    {
      v47 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( v47 )
      {
        v47->m128_u64[0] = *((_QWORD *)v6 + 10);
        *((_QWORD *)v6 + 10) = v47;
        v48 = v47 + 1;
        v48[-1].m128_u64[1] = 16;
LABEL_67:
        *v48 = _mm_loadh_ps(a3);
        *(_QWORD *)a3 = v48;
        goto LABEL_7;
      }
      *v6 = 2;
    }
  }
LABEL_7:
  v9 = (double *)(a1 + 456);
  sub_868C70((__int64)v6, 37);
  if ( ((*(_BYTE *)a2 - 114) & 0xFD) == 0 )
    v9 = (double *)(a1 + 448);
  if ( !*v6 )
  {
    v10 = *((_QWORD *)v6 + 10);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = v11 + 16;
    if ( (unsigned __int64)(v11 + 16) <= 0xFF0 )
    {
      v14 = (__m128 *)(v10 + v11 + 16);
      *(_QWORD *)(v10 + 8) = v12;
      if ( v14 )
        goto LABEL_13;
    }
    else
    {
      v13 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( v13 )
      {
        v13->m128_u64[0] = *((_QWORD *)v6 + 10);
        *((_QWORD *)v6 + 10) = v13;
        v14 = v13 + 1;
        v14[-1].m128_u64[1] = 16;
LABEL_13:
        *v14 = _mm_loadh_ps(v9);
        *(_QWORD *)v9 = v14;
        goto LABEL_14;
      }
      *v6 = 2;
    }
  }
LABEL_14:
  result = (__int64)sub_86E080(v6, 1, 4, 0, 127, 0);
  v16.m128_u64[0] = result;
  if ( *v6 )
    goto LABEL_19;
  v17 = *((_QWORD *)v6 + 10);
  v18 = *(_QWORD *)(v17 + 8);
  v19 = v18 + 16;
  if ( (unsigned __int64)(v18 + 16) <= 0xFF0 )
  {
    result = v17 + v18 + 16;
    *(_QWORD *)(v17 + 8) = v19;
    if ( result )
      goto LABEL_18;
  }
  else
  {
    result = (**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(4096, *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
    if ( result )
    {
      *(_QWORD *)result = *((_QWORD *)v6 + 10);
      *((_QWORD *)v6 + 10) = result;
      result += 16;
      *(_QWORD *)(result - 8) = 16;
LABEL_18:
      v16 = _mm_loadh_ps(a3);
      *(__m128 *)result = v16;
      *(_QWORD *)a3 = result;
      goto LABEL_19;
    }
    *v6 = 2;
  }
LABEL_19:
  if ( *(_DWORD *)(a1 + 168) == 1 )
    goto LABEL_20;
  v23 = sub_868C70((__int64)v6, 36);
  v24 = sub_868BC0((__int64)v6);
  if ( v8 && v24 )
  {
    v8[2] &= ~1uLL;
    v8[3] = v24;
  }
  sub_86D900(v6, 0x42u, 4, 0, 4, 0, 2u, 0);
  sub_86D900(v6, 0x40u, 4, 0, 4, 0, 0xDu, 0);
  v25 = sub_86E080(v6, 0, 4, 0, 127, 0);
  sub_86B8E0(v6, 32, 2, 0, 13, 0);
  sub_868C70((__int64)v6, 37);
  v26 = (double *)(a1 + 456);
  if ( ((*(_BYTE *)a2 - 114) & 0xFD) == 0 )
    v26 = (double *)(a1 + 448);
  if ( !*v6 )
  {
    v27 = *((_QWORD *)v6 + 10);
    v28 = *(_QWORD *)(v27 + 8);
    v29 = v28 + 16;
    if ( (unsigned __int64)(v28 + 16) <= 0xFF0 )
    {
      v31 = (__m128 *)(v27 + v28 + 16);
      *(_QWORD *)(v27 + 8) = v29;
      if ( v31 )
        goto LABEL_39;
    }
    else
    {
      v30 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( v30 )
      {
        v30->m128_u64[0] = *((_QWORD *)v6 + 10);
        *((_QWORD *)v6 + 10) = v30;
        v31 = v30 + 1;
        v31[-1].m128_u64[1] = 16;
LABEL_39:
        *v31 = _mm_loadh_ps(v26);
        *(_QWORD *)v26 = v31;
        goto LABEL_40;
      }
      *v6 = 2;
    }
  }
LABEL_40:
  sub_86E080(v6, 1, 4, 0, 127, 0);
  if ( !*v6 )
  {
    v32 = *((_QWORD *)v6 + 10);
    v33 = *(_QWORD *)(v32 + 8);
    v34 = v33 + 16;
    if ( (unsigned __int64)(v33 + 16) <= 0xFF0 )
    {
      v36 = (__m128 *)(v32 + v33 + 16);
      *(_QWORD *)(v32 + 8) = v34;
      if ( !v36 )
        goto LABEL_45;
    }
    else
    {
      v35 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( !v35 )
      {
        *v6 = 2;
        goto LABEL_45;
      }
      v35->m128_u64[0] = *((_QWORD *)v6 + 10);
      *((_QWORD *)v6 + 10) = v35;
      v36 = v35 + 1;
      v36[-1].m128_u64[1] = 16;
    }
    *v36 = _mm_loadh_ps(a3);
    *(_QWORD *)a3 = v36;
  }
LABEL_45:
  v37 = sub_868BC0((__int64)v6);
  if ( v25 && v37 )
  {
    v25[2] &= ~1uLL;
    v25[3] = v37;
  }
  sub_86E4B0(a1, 0);
  v16.m128_u64[0] = (unsigned __int64)sub_868C70((__int64)v6, 36);
  if ( *v6 )
    goto LABEL_53;
  v38 = *((_QWORD *)v6 + 10);
  v39 = *(_QWORD *)(v38 + 8);
  v40 = v39 + 16;
  if ( (unsigned __int64)(v39 + 16) <= 0xFF0 )
  {
    v42 = (__m128 *)(v38 + v39 + 16);
    *(_QWORD *)(v38 + 8) = v40;
    if ( !v42 )
      goto LABEL_53;
  }
  else
  {
    v41 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                      4096,
                      *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
    if ( !v41 )
    {
      *v6 = 2;
      goto LABEL_53;
    }
    v41->m128_u64[0] = *((_QWORD *)v6 + 10);
    *((_QWORD *)v6 + 10) = v41;
    v42 = v41 + 1;
    v42[-1].m128_u64[1] = 16;
  }
  v16 = _mm_loadh_ps(a3);
  *v42 = v16;
  *(_QWORD *)a3 = v42;
LABEL_53:
  result = (__int64)sub_868BC0((__int64)v6);
  if ( result && v23 )
  {
    v23[2] &= ~1uLL;
    v23[3] = result;
  }
LABEL_20:
  if ( !v7 )
    return result;
  if ( a5 )
  {
    result = *v6;
    if ( (_DWORD)result )
      return result;
    v20 = *((_QWORD *)v6 + 10);
    v21 = *(_QWORD *)(v20 + 8);
    v22 = v21 + 16;
    if ( (unsigned __int64)(v21 + 16) > 0xFF0 )
    {
      result = (**((__int64 (__fastcall ***)(__int64, _QWORD, double))v6 + 7))(
                 4096,
                 *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL),
                 *(double *)v16.m128_u64);
      if ( !result )
      {
        *v6 = 2;
        return result;
      }
      *(_QWORD *)result = *((_QWORD *)v6 + 10);
      *((_QWORD *)v6 + 10) = result;
      result += 16;
      *(_QWORD *)(result - 8) = 16;
      goto LABEL_26;
    }
    result = v20 + v21 + 16;
    *(_QWORD *)(v20 + 8) = v22;
    if ( result )
    {
LABEL_26:
      *(__m128 *)result = _mm_loadh_ps(a3);
      *(_QWORD *)a3 = result;
    }
  }
  else
  {
    result = (__int64)sub_868BC0((__int64)v6);
    if ( result )
    {
      v7[2] &= ~1uLL;
      v7[3] = result;
    }
  }
  return result;
}
