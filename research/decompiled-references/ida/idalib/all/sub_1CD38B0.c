__int64 __fastcall sub_1CD38B0(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 *a4,
        unsigned int *a5,
        int a6,
        double a7,
        int a8,
        unsigned int a9)
{
  __int64 v10; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rbp
  __int64 *v17; // rax
  unsigned int *v18; // rbp
  __int64 *v19; // r15
  __int64 *v20; // rax
  __int64 *v21; // rbp
  __int64 *v22; // rbx
  __int64 *v23; // r15
  unsigned int *v24; // r8
  unsigned __int64 v25; // rdx
  char v26; // cl
  __m128 v27; // xmm0
  unsigned int **v28; // [rsp+8h] [rbp-A0h] BYREF
  __int64 *v29; // [rsp+10h] [rbp-98h]
  int v30; // [rsp+1Ch] [rbp-8Ch]
  unsigned int *v31; // [rsp+20h] [rbp-88h] BYREF
  unsigned int *v32[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-70h] BYREF
  __m128 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v36; // [rsp+58h] [rbp-50h]
  unsigned int **v37; // [rsp+60h] [rbp-48h]

  v10 = (__int64)a3;
  v12 = a5[5];
  v13 = a3[5];
  v32[0] = a3;
  v14 = v12 & 0x1FFFFFFF;
  v31 = a5;
  v30 = a6;
  if ( (_DWORD)v14 != (v13 & 0x1FFFFFFF) )
  {
    if ( (_BYTE)a6 )
    {
      sub_1CC57E0(a1, a3, a5, a8, a9);
      return 0;
    }
    return 0;
  }
  v16 = 8 * v14 + 24;
  v17 = (__int64 *)((char *)a3 + v16);
  v18 = (unsigned int *)((char *)a5 + v16);
  v19 = (__int64 *)(a3 + 6);
  v29 = v17;
  if ( v18 != a5 + 6 )
  {
    LODWORD(v28) = (unsigned __int8)v30;
    if ( v17 != v19 )
    {
      v20 = (__int64 *)v18;
      v21 = (__int64 *)(a5 + 6);
      v22 = (__int64 *)(a3 + 6);
      v23 = v20;
      do
      {
        v10 = *v22;
        if ( !(unsigned __int8)sub_1CD3170(a1, *v22, a2, *v21, a4, (unsigned __int8)v28, a7, a8, a9) )
          return 0;
        ++v21;
        ++v22;
        if ( v21 == v23 )
        {
          v19 = v22;
          goto LABEL_16;
        }
      }
      while ( v22 != v29 );
    }
LABEL_12:
    if ( (_BYTE)v30 )
    {
      sub_1CC57E0(a1, v32[0], v31, a8, a9);
      return 0;
    }
    return 0;
  }
LABEL_16:
  if ( v29 != v19 )
    goto LABEL_12;
  result = 1;
  if ( a8 != 2 )
  {
    if ( (*((_BYTE *)v32[0] + 23) & 0x40) != 0 )
    {
      v24 = *(unsigned int **)&v32[0][2 * (v32[0][5] & 0x1FFFFFFF) + 6];
      LOBYTE(v10) = v24 == nullptr;
    }
    else
    {
      v10 = 1;
      v24 = nullptr;
    }
    v32[1] = v24;
    if ( (*((_BYTE *)v31 + 23) & 0x40) != 0 )
    {
      v25 = *(_QWORD *)&v31[2 * (v31[5] & 0x1FFFFFFF) + 6];
      v26 = v25 == 0;
    }
    else
    {
      v26 = 1;
      v25 = 0;
    }
    v33 = v25;
    v28 = v32;
    v36 = &v33;
    v35 = a1;
    v27 = _mm_loadh_ps((const double *)&v28);
    v37 = &v31;
    v34 = v27;
    if ( (_BYTE)v10 == v26 )
    {
      if ( !v24 )
        return 1;
      v10 = (__int64)a4;
      if ( (unsigned __int8)sub_1743870(a1, a4, v25, a2, (unsigned __int64)v24) )
        return 1;
    }
    if ( (_BYTE)v30 )
      sub_1CC50F0((__int64)&v34, v10, *(double *)v27.m128_u64);
    return 0;
  }
  return result;
}
