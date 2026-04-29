unsigned __int64 __fastcall sub_1B2400(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4, double a5, double a6)
{
  __m128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rsi
  const char *v17; // rcx
  __int64 v18; // rdi
  __int64 v20; // r15
  __int64 v21; // rsi
  __m128 v22; // xmm0
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+0h] [rbp-C8h]
  const char *v31; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-B0h]
  __m128 v33; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+60h] [rbp-68h]
  __m128 v35; // [rsp+70h] [rbp-58h] BYREF
  __int64 v36; // [rsp+80h] [rbp-48h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_60680(a4) || a4[3] )
  {
    v31 = nullptr;
    v32 = 0;
    v10 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4CF8F8) + 1344));
    v34 = 0;
    v33 = v10;
    sub_1AF8C0(a3, (__int64 *)&v31, (__int64)&v33, *(double *)v10.m128_u64, a6);
    if ( sub_11EA30((__int64)a4, (__int64)a3) )
    {
      sub_60440(a4, a3, v11, v12, v13, v14);
      sub_312EE0(a4 + 2, a3 + 2);
      if ( !(unsigned __int8)sub_60680(a3) || a3[3] )
      {
        v26 = v32;
        v30 = 2;
        if ( (_QWORD)v32 )
        {
          v26 = v32 - 1;
          v30 = v32 + 1;
        }
        v27 = (__int64)v31;
        if ( *((_QWORD *)&v32 + 1) < v30 )
        {
          v31 = (const char *)qvector_reserve(&v31, v31, v30, 1);
          v27 = (__int64)v31;
        }
        *(_QWORD *)&v32 = v30;
        *(_BYTE *)(v27 + v26) = 44;
        v31[v26 + 1] = 0;
      }
      v20 = v32;
      v29 = 2;
      if ( (_QWORD)v32 )
      {
        v20 = v32 - 1;
        v29 = v32 + 1;
      }
      v21 = (__int64)v31;
      if ( *((_QWORD *)&v32 + 1) < v29 )
      {
        v31 = (const char *)qvector_reserve(&v31, v31, v29, 1);
        v21 = (__int64)v31;
      }
      *(_QWORD *)&v32 = v29;
      *(_BYTE *)(v21 + v20) = 40;
      v31[v20 + 1] = 0;
      v22 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4CF8F8) + 1344));
      v36 = 0;
      v35 = v22;
      sub_1AF8C0(a4, (__int64 *)&v31, (__int64)&v35, *(double *)v22.m128_u64, a6);
      v23 = v32;
      v24 = 2;
      if ( (_QWORD)v32 )
      {
        v24 = v32 + 1;
        v23 = v32 - 1;
      }
      v25 = (__int64)v31;
      if ( *((_QWORD *)&v32 + 1) < v24 )
      {
        v31 = (const char *)qvector_reserve(&v31, v31, v24, 1);
        v25 = (__int64)v31;
      }
      *(_QWORD *)&v32 = v24;
      *(_BYTE *)(v25 + v23) = 41;
      v31[v23 + 1] = 0;
    }
    v15 = a1[1];
    v16 = *a1;
    if ( a1[2] < (unsigned __int64)(v15 + 1) )
    {
      v28 = qvector_reserve(a1, v16, v15 + 1, 24);
      *a1 = v28;
      v15 = a1[1];
      v16 = v28;
    }
    v17 = s1;
    v18 = v16 + 24 * v15;
    *(_QWORD *)v18 = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++a1[1];
    if ( (_QWORD)v32 )
      v17 = v31;
    sub_67670((__int64 *)v18, (__int64)&unk_3FC715, a2, v17);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  return v37 - __readfsqword(0x28u);
}
