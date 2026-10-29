__int64 __fastcall sub_C5E6D0(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  __m128i v12; // xmm1
  unsigned int *v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  int v23; // r15d
  unsigned int *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rbx
  __int64 v32; // r15
  unsigned __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // r15d
  unsigned int v39; // ebx
  __int64 v40; // [rsp-8h] [rbp-530h]
  __int64 v42; // [rsp+10h] [rbp-518h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-510h]
  unsigned int *v44; // [rsp+20h] [rbp-508h]
  unsigned int v45; // [rsp+28h] [rbp-500h]
  int v46; // [rsp+2Ch] [rbp-4FCh]
  char v47; // [rsp+3Fh] [rbp-4E9h] BYREF
  __m128i v48; // [rsp+40h] [rbp-4E8h] BYREF
  __m128 *v49; // [rsp+50h] [rbp-4D8h] BYREF
  unsigned int v50; // [rsp+58h] [rbp-4D0h]
  _BYTE v51[32]; // [rsp+60h] [rbp-4C8h] BYREF
  int v52[16]; // [rsp+80h] [rbp-4A8h] BYREF
  __m128i v53; // [rsp+C0h] [rbp-468h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-458h]
  char v55; // [rsp+D8h] [rbp-450h]
  __int64 v56; // [rsp+E8h] [rbp-440h]
  void *ptr; // [rsp+F0h] [rbp-438h]
  __int64 v58; // [rsp+F8h] [rbp-430h]
  _BYTE v59[80]; // [rsp+100h] [rbp-428h] BYREF
  __m128 v60; // [rsp+150h] [rbp-3D8h] BYREF
  __int64 v61; // [rsp+160h] [rbp-3C8h]
  _BYTE *v62; // [rsp+168h] [rbp-3C0h]
  unsigned int *v63; // [rsp+170h] [rbp-3B8h]
  unsigned __int8 v64; // [rsp+184h] [rbp-3A4h]
  __int64 v65; // [rsp+258h] [rbp-2D0h]
  unsigned int v66; // [rsp+260h] [rbp-2C8h]
  __m128i v67; // [rsp+468h] [rbp-C0h]
  int v68; // [rsp+478h] [rbp-B0h]
  __int64 v69; // [rsp+480h] [rbp-A8h]
  __int64 v70; // [rsp+4C8h] [rbp-60h]

  v45 = a4;
  v7 = sub_BF9D30(a1, a2, a3, &v47, a5, a6);
  if ( (_BYTE)v7 )
  {
    v10 = v7;
    if ( *(_DWORD *)(a2 + 16) > 1u )
      return v10;
  }
  v42 = a3;
  v60 = _mm_loadh_ps((const double *)&v42);
  v42 = sub_22271F0("EvaluateAsConstantExpr", 22, sub_BEBB10, &v60, v8, v9);
  sub_BEEB30(&v60, a3, a2, 0);
  v10 = v64;
  v60.m128_i8[8] = 1;
  v44 = (unsigned int *)(a2 + 16);
  if ( v64 )
  {
    v22 = sub_A3B7E0(v61);
    v23 = v45;
    v17 = (__int64)&v60;
    v24 = v44;
    v10 = sub_CC1C90(v22, &v60, a1, v44, v45);
    if ( (_BYTE)v10 )
    {
      v25 = sub_BEC760(a3, a1);
      v29 = sub_BDCD00(a1, a1, v26, v27, v28);
      v17 = v29;
      v10 = sub_C07D20((__int64)&v60, v29, v25, v24, v23);
    }
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v43 = v11;
  if ( v45 == 2 )
    v43 = v11 & 0xFFFFFFFFFFFFFFF8LL | v11 & 7 | 1;
  sub_C71E10(v51, v43, a1, 1, 0);
  sub_A2B590((__int64)&v48, (__int64)v51, 0, 0);
  v12 = _mm_load_si128(&v48);
  v69 = a2 + 16;
  ptr = v59;
  v58 = 0x800000000LL;
  v67 = v12;
  v68 = 1;
  v53 = 0u;
  v54 = 0;
  v55 |= 1u;
  v56 = 0;
  v59[65] = 0;
  sub_C004D0((__int64)&v53, v48.m128i_i64[0], (__int64 *)v48.m128i_i64[1], 0);
  v13 = v63;
  v49 = &v60;
  v14 = v63[36];
  v15 = v63[37];
  v50 = v66;
  v16 = v63[40] + 1;
  v63[40] = v16;
  if ( v14 + 1 > v15 )
  {
    v46 = v16;
    sub_22134E0(v13 + 34, v13 + 38, v14 + 1, 4);
    v14 = v13[36];
    v16 = v46;
  }
  v17 = (__int64)&v60;
  *(_DWORD *)(*((_QWORD *)v13 + 17) + 4 * v14) = v16;
  ++v13[36];
  if ( (unsigned __int8)sub_C2BC60(a2 + 16, (__int64)&v60, &v53, a1) )
  {
    if ( !*(_BYTE *)a2 )
    {
      v17 = 1;
      v30 = sub_C316B0((__int64)v49, 1, v50, v19, v20);
      v50 = -1;
      if ( v30 )
      {
        if ( v65 != v65 + 32LL * v66 )
        {
          LOBYTE(v46) = v10;
          v31 = v65;
          v32 = v65 + 32LL * v66;
          do
          {
            if ( (unsigned int)sub_F41CF0(*(_QWORD *)(v31 + 24)) )
              *v62 = 1;
            v31 += 32;
          }
          while ( v32 != v31 );
          v10 = (unsigned __int8)v46;
        }
        v66 = 0;
        v33 = sub_BEC760(a3, a1);
        v37 = sub_BDCD00(a1, a1, v34, v35, v36);
        v17 = v37;
        v38 = sub_C07D20((__int64)&v60, v37, v33, v44, v45);
        if ( (_BYTE)v38 )
        {
          if ( v70 )
            sub_BEFC80((__int64)&v60);
          if ( v45 != 2 )
            goto LABEL_28;
          v39 = sub_EC7AA0(a1);
          sub_A2FF00((__int64)v52, (int *)v44);
          v17 = v48.m128i_i64[0];
          v10 = sub_C32B90(a3, v48.m128i_i64[0], (__int64 *)v48.m128i_i64[1], v52, v43, v39, (_BYTE *)a2, 1);
          v18 = v40;
          if ( !(_BYTE)v10 )
          {
            if ( v52[0] <= 1u )
            {
LABEL_31:
              v10 = 0;
              goto LABEL_10;
            }
            goto LABEL_34;
          }
          if ( *(_BYTE *)a2 )
          {
            if ( v52[0] <= 1u )
              goto LABEL_31;
LABEL_34:
            v10 = 0;
            sub_A2BBA0(v52);
            goto LABEL_10;
          }
          if ( v52[0] <= 1u )
          {
LABEL_28:
            v10 = v38;
            goto LABEL_10;
          }
          sub_A2BBA0(v52);
        }
      }
    }
  }
LABEL_10:
  sub_C31C60((__int64)&v49, v17, v18, v19, v20);
  if ( ptr != v59 )
    free(ptr);
LABEL_12:
  sub_C00040((__int64)&v60, v17);
  if ( v42 )
    sub_2229990(v42);
  return v10;
}

