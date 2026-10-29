__int64 __fastcall sub_156FF30(
        const __m128i *a1,
        __int64 *a2,
        int *a3,
        __m128i a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int16 v11; // bx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int32 v15; // eax
  __int64 *v16; // rdi
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int16 v20; // r12
  __int64 v21; // rax
  unsigned int v22; // edx
  _QWORD *v23; // rax
  __int32 v24; // eax
  __int64 *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // r13
  void *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r12
  void *v34; // rdi
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  __int16 v46; // dx
  __int64 v47; // r12
  unsigned __int16 v48; // bx
  char v49; // al
  __int64 v50; // r12
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int16 v53; // ax
  __int64 v54; // rax
  int v55; // edx
  __int16 v56; // ax
  __int64 v57; // rax
  __int64 v58; // rsi
  char v59; // dl
  __int64 v60; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+10h] [rbp-D8h] BYREF
  void *v62; // [rsp+18h] [rbp-D0h]
  __int64 v63; // [rsp+20h] [rbp-C8h]
  _BYTE v64[16]; // [rsp+28h] [rbp-C0h] BYREF
  __int8 *v65; // [rsp+38h] [rbp-B0h] BYREF
  void *v66; // [rsp+40h] [rbp-A8h]
  __int64 v67; // [rsp+48h] [rbp-A0h]
  _BYTE v68[16]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 *v69; // [rsp+60h] [rbp-88h] BYREF
  void *v70; // [rsp+68h] [rbp-80h]
  __int64 v71; // [rsp+70h] [rbp-78h]
  _BYTE v72[16]; // [rsp+78h] [rbp-70h] BYREF
  __int8 *v73; // [rsp+88h] [rbp-60h] BYREF
  void *ptr; // [rsp+90h] [rbp-58h]
  __int64 v75; // [rsp+98h] [rbp-50h]
  _BYTE v76[72]; // [rsp+A0h] [rbp-48h] BYREF

  v11 = a1[2].m128i_i16[0];
  *a2 = 0;
  if ( v11 == 172 )
    goto LABEL_68;
  if ( (unsigned __int16)v11 <= 0xACu )
  {
    v20 = v11;
    if ( v11 != 5 )
    {
      if ( (unsigned __int16)v11 <= 5u )
      {
        if ( v11 != 1 )
          goto LABEL_33;
        goto LABEL_24;
      }
      if ( v11 != 134 )
      {
        if ( v11 != 171 )
          goto LABEL_33;
        goto LABEL_22;
      }
      v44 = a1->m128i_i64[1];
      v45 = *(_QWORD *)(v44 + 2944);
      if ( *(unsigned int *)(v44 + 2912) <= v45 )
      {
        v56 = *(_WORD *)(sub_14180A0(v44, 1u) + 16);
        if ( v56 != 5 )
        {
          if ( v56 == 171 )
            goto LABEL_22;
          v20 = a1[2].m128i_u16[0];
          goto LABEL_72;
        }
        v44 = a1->m128i_i64[1];
        v45 = *(_QWORD *)(v44 + 2944);
        if ( *(unsigned int *)(v44 + 2912) <= v45 )
        {
          v47 = sub_14180A0(v44, 1u);
          goto LABEL_79;
        }
      }
      else
      {
        v46 = *(_WORD *)(*(_QWORD *)(v44 + 2904) + 24 * v45 + 16);
        if ( v46 != 5 )
        {
          if ( v46 == 171 )
            goto LABEL_22;
LABEL_72:
          v11 = v20;
          goto LABEL_33;
        }
      }
      v47 = *(_QWORD *)(v44 + 2904) + 24 * v45;
LABEL_79:
      v48 = *(_WORD *)(v47 + 16);
      v49 = sub_141A630(v48);
      if ( v48 == 1 || v49 )
        v50 = 0;
      else
        v50 = *(_QWORD *)(v47 + 8);
      v11 = a1[2].m128i_i16[0];
      if ( a1[22].m128i_i64[0] != v50 && a1[21].m128i_i64[1] != v50 )
        goto LABEL_33;
      if ( v11 != 1 )
      {
        v51 = a1->m128i_i64[1];
        v52 = *(_QWORD *)(v51 + 2944) + 1LL;
        v53 = v52 >= *(unsigned int *)(v51 + 2912)
            ? *(_WORD *)(sub_14180A0(v51, 2u) + 16)
            : *(_WORD *)(*(_QWORD *)(v51 + 2904) + 24 * v52 + 16);
        if ( v53 == 72 )
        {
          v11 = a1[2].m128i_i16[0];
          goto LABEL_33;
        }
      }
      if ( a1[22].m128i_i64[0] == v50 )
      {
LABEL_22:
        v17 = 0;
        *a2 = sub_156F920(a1, a3, a4, a5);
        goto LABEL_13;
      }
      goto LABEL_68;
    }
    v35 = sub_141A630(5u);
    v36 = a1[22].m128i_i64[0];
    if ( v35 )
    {
      v37 = 0;
      if ( v36 )
      {
LABEL_60:
        if ( a1[21].m128i_i64[1] != v37 )
          goto LABEL_33;
      }
    }
    else
    {
      v37 = a1[1].m128i_i64[1];
      if ( v36 != v37 )
        goto LABEL_60;
    }
    v38 = a1->m128i_i64[1];
    v39 = *(_QWORD *)(v38 + 2944);
    if ( v39 >= *(unsigned int *)(v38 + 2912) )
    {
      v40 = sub_14180A0(v38, 1u);
      v20 = a1[2].m128i_u16[0];
    }
    else
    {
      v40 = *(_QWORD *)(v38 + 2904) + 24 * v39;
    }
    if ( *(_WORD *)(v40 + 16) == 72 )
      goto LABEL_72;
    v41 = sub_141A630(v20);
    if ( v20 == 1 || v41 )
      v42 = 0;
    else
      v42 = a1[1].m128i_i64[1];
    if ( a1[22].m128i_i64[0] == v42 )
      goto LABEL_22;
LABEL_68:
    v17 = 0;
    v43 = sub_156D770(a1, 0, a3, a4, a5);
    *a2 = sub_17A2530(a1[6].m128i_i64[0], v43, 0);
    goto LABEL_13;
  }
  if ( v11 == 457 )
  {
    sub_1A80410(a1[6].m128i_i64[0], a1[1].m128i_u32[0], a1[1].m128i_i64[1]);
    goto LABEL_29;
  }
  if ( (unsigned __int16)v11 <= 0x1C9u )
  {
    if ( v11 == 426 )
    {
      sub_1526EC0((__int64)a1);
      v17 = 0;
      goto LABEL_13;
    }
    if ( v11 == 456 )
    {
      v12 = a1[1].m128i_u32[0];
      v13 = a1[1].m128i_i64[1];
      v14 = a1[6].m128i_i64[0];
      if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 21LL) & 4) != 0 && *(_DWORD *)(v13 + 36) == 1 )
      {
        v57 = sub_1A84440(v14, v12, 0, v12, v13, a8, 0, 0);
        v58 = 0;
        if ( !v59 )
          v58 = v57;
        *a2 = sub_17A2530(a1[6].m128i_i64[0], v58, 0);
      }
      else
      {
        sub_1A7E790(v14, v12, v13);
      }
      v15 = a1[1].m128i_i32[1];
      v16 = (__int64 *)a1->m128i_i64[1];
      if ( !v15 )
        v15 = a1[1].m128i_i32[0];
      v17 = 0;
      a1[2].m128i_i32[2] = v15;
      sub_14634E0(v16, a1[1].m128i_i32);
      goto LABEL_13;
    }
    goto LABEL_33;
  }
  if ( v11 == 458 )
  {
    sub_1A7E7D0(a1[6].m128i_i64[0], a1[1].m128i_u32[0], a1[1].m128i_i64[1]);
LABEL_29:
    v24 = a1[1].m128i_i32[1];
    v25 = (__int64 *)a1->m128i_i64[1];
    if ( !v24 )
      v24 = a1[1].m128i_i32[0];
    v17 = 0;
    a1[2].m128i_i32[2] = v24;
    sub_14634E0(v25, a1[1].m128i_i32);
    *a3 = 6;
    goto LABEL_13;
  }
  if ( v11 != 460 )
  {
LABEL_33:
    v61 = 0;
    v65 = &a1[31].m128i_i8[8];
    v62 = v64;
    v66 = v68;
    v73 = &a1[31].m128i_i8[8];
    v63 = 0x200000000LL;
    v67 = 0x200000000LL;
    v69 = nullptr;
    v70 = v72;
    v71 = 0x200000000LL;
    ptr = v76;
    v75 = 0x200000000LL;
    while ( 1 )
    {
      while ( (unsigned __int16)(v11 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      {
        sub_14AB020((__int64)a1, (unsigned int *)&v61, a4, a5);
        v11 = a1[2].m128i_i16[0];
      }
      if ( a1[2].m128i_i16[0] != 189 )
        break;
      sub_1490230(a1, (__int64)&v69, 0, 0, a4, a5);
      v11 = a1[2].m128i_i16[0];
    }
    v28 = sub_156E800((__int64)a1, &v61, (__int64 *)&v69, 0, a4, a5, v26, v27);
    *a2 = v28;
    if ( v28 )
    {
      v29 = *a3;
      if ( *a3 )
      {
        if ( v29 == 2 )
        {
          *a3 = 3;
        }
        else if ( v29 == 4 )
        {
          *a3 = 5;
        }
      }
      else
      {
        *a3 = 6;
      }
    }
    sub_15DCED0(v73, &v73);
    if ( ptr != v76 )
      free(ptr);
    if ( v70 != v72 )
      free(v70);
    sub_15DCED0(v65, &v65);
    if ( v66 != v68 )
      free(v66);
    if ( v62 != v64 )
      free(v62);
    v17 = 0;
    goto LABEL_13;
  }
LABEL_24:
  v21 = a1->m128i_i64[1];
  v22 = *(_DWORD *)(v21 + 1024);
  if ( v22 )
  {
    if ( *(_DWORD *)(v21 + 1016) > v22 )
    {
      sub_FC70B0((__int64)&v69, *(_QWORD *)(v21 + 48), a1[1].m128i_i32[0], 2148);
      sub_AE9DF0(&v69, *(unsigned int *)(a1->m128i_i64[1] + 1016), 3u);
      sub_AE9DF0(&v69, *(unsigned int *)(a1->m128i_i64[1] + 1024), 3u);
      sub_AEA040((__int64)&v69);
      v54 = a1->m128i_i64[1];
      v55 = *(_DWORD *)(v54 + 1028);
      if ( v55 )
      {
        sub_FC70B0((__int64)&v69, *(_QWORD *)(v54 + 48), v55, 2033);
        sub_AEA040((__int64)&v69);
      }
    }
  }
  v23 = (_QWORD *)a1[6].m128i_i64[0];
  v17 = 1;
  v23[55] = sub_154FF30;
  v23[56] = 0;
  v23[57] = a1;
  sub_160ED40(a1[6].m128i_i64[0]);
LABEL_13:
  if ( !a1[168].m128i_i8[8] )
  {
    v18 = a1[160].m128i_u32[0];
    if ( (_DWORD)v18 )
    {
      if ( a1[2].m128i_i16[0] == 1
        || *(__int64 (__fastcall **)(__int64, __int64, __m128i, double))(a1->m128i_i64[1] + 1152) == sub_1436060 )
      {
        v30 = a1[159].m128i_i64[1];
        v60 = v30 + 8 * v18;
        do
        {
          v31 = *(void **)v30;
          v32 = *(_QWORD *)v30 + 56LL;
          v33 = *(_QWORD *)v30 + 72LL * *(unsigned int *)(*(_QWORD *)v30 + 44LL) + 56;
          while ( v33 != v32 )
          {
            while ( !*(_DWORD *)(v32 + 44) )
            {
              v32 += 72;
              if ( v33 == v32 )
                goto LABEL_54;
            }
            v34 = *(void **)(v32 + 32);
            v32 += 72;
            free(v34);
          }
LABEL_54:
          v30 += 8;
          free(v31);
        }
        while ( v60 != v30 );
        a1[160].m128i_i32[0] = 0;
      }
    }
  }
  return v17;
}
