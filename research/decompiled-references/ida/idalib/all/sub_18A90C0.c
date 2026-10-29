_DWORD *__fastcall sub_18A90C0(__int64 *a1, __int64 a2, int a3, char *a4, __int64 a5, int a6)
{
  char *v6; // rbx
  char *v7; // r13
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  char v20; // r8
  _QWORD *v21; // r10
  unsigned int v22; // r9d
  __int64 v23; // rax
  int v24; // r11d
  unsigned __int64 v25; // rax
  char v26; // di
  __int64 v27; // r10
  _QWORD *v28; // rdx
  unsigned int v29; // ecx
  __int64 *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  _DWORD *result; // rax
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // rdx
  int i; // eax
  int v50; // r10d
  __int64 *v51; // r15
  unsigned int v52; // esi
  char *v53; // [rsp+0h] [rbp-178h]
  _DWORD *v54; // [rsp+0h] [rbp-178h]
  __int64 v56; // [rsp+10h] [rbp-168h] BYREF
  __m128 *v57; // [rsp+18h] [rbp-160h]
  __int64 v58; // [rsp+20h] [rbp-158h]
  char *v59; // [rsp+28h] [rbp-150h]
  __int64 v60; // [rsp+30h] [rbp-148h]
  __int64 v61; // [rsp+38h] [rbp-140h]
  __int64 v62; // [rsp+40h] [rbp-138h]
  int v63; // [rsp+48h] [rbp-130h]
  int v64; // [rsp+4Ch] [rbp-12Ch]
  __m128 v65; // [rsp+50h] [rbp-128h] BYREF
  __int64 v66; // [rsp+60h] [rbp-118h] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-108h]
  char v69; // [rsp+A8h] [rbp-D0h] BYREF
  __m128 v70; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 *v71; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v72; // [rsp+D0h] [rbp-A8h] BYREF
  char v73; // [rsp+128h] [rbp-50h]
  unsigned int v74; // [rsp+130h] [rbp-48h]
  char v75; // [rsp+134h] [rbp-44h]

  v63 = a3;
  v6 = (char *)&v67;
  v58 = a2;
  v59 = a4;
  v60 = a5;
  v64 = a6;
  v66 = 1;
  v62 = sub_168B6C0((__int64)a1);
  do
  {
    *(_QWORD *)v6 = -4096;
    v6 += 16;
  }
  while ( v6 != &v69 );
  v53 = &v59[8 * v60];
  if ( v53 != v59 )
  {
    v7 = v59;
    v57 = &v65;
    while ( 1 )
    {
      v18 = *(_QWORD *)v7;
      v19 = *(_QWORD *)(*(_QWORD *)v7 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(*(_QWORD *)v7 + 40LL) & 7) != 0 )
        v19 = 0;
      v20 = v66 & 1;
      if ( (v66 & 1) != 0 )
      {
        v8 = &v67;
        v9 = 8;
        LODWORD(v10) = ((unsigned __int8)((unsigned int)v19 >> 4) ^ (unsigned __int8)((unsigned int)v19 >> 9)) & 3;
        v11 = &(&v67)[2 * (((unsigned __int8)((unsigned int)v19 >> 4) ^ (unsigned __int8)((unsigned int)v19 >> 9)) & 3)];
        if ( v19 != *v11 )
        {
          v43 = 8;
          v24 = 3;
          if ( *v11 == -4096 )
            goto LABEL_41;
LABEL_52:
          for ( i = 1; ; ++i )
          {
            v10 = v24 & (unsigned int)(v10 + i);
            v11 = &v8[2 * v10];
            if ( v19 == *v11 )
              break;
            if ( *v11 == -4096 )
            {
              if ( !v20 )
              {
                v21 = v67;
                v22 = v68;
                goto LABEL_39;
              }
              v43 = 8;
              v8 = &v67;
              goto LABEL_41;
            }
          }
          if ( !v20 )
          {
            v8 = v67;
            v23 = v68;
            goto LABEL_20;
          }
          v9 = 8;
          v8 = &v67;
        }
      }
      else
      {
        v21 = v67;
        v22 = v68;
        v8 = v67;
        v23 = v68;
        if ( !v68 )
          goto LABEL_40;
        v24 = v68 - 1;
        LODWORD(v10) = (v68 - 1) & (((unsigned int)v19 >> 4) ^ ((unsigned int)v19 >> 9));
        v11 = &v67[2 * (unsigned int)v10];
        if ( v19 != *v11 )
        {
          if ( *v11 == -4096 )
          {
LABEL_39:
            v8 = v21;
LABEL_40:
            v43 = 2LL * v22;
LABEL_41:
            sub_1897380(&v70, &v8[v43], &v8[v43], (__int64)&v66, 1);
            v12 = v70.m128_u64[0];
            goto LABEL_7;
          }
          goto LABEL_52;
        }
LABEL_20:
        v9 = 2 * v23;
      }
      sub_1897380(&v70, v11, &v8[v9], (__int64)&v66, 1);
      v12 = v70.m128_u64[0];
LABEL_7:
      if ( (v66 & 1) != 0 )
      {
        v13 = 8;
        v14 = &v67;
      }
      else
      {
        v14 = v67;
        v13 = 2LL * v68;
      }
      sub_1897380(&v70, &v14[v13], &v14[v13], (__int64)&v66, 1);
      if ( v12 == v70.m128_u64[0] )
      {
        v25 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v18 + 40) & 7) != 0 )
          v25 = 0;
        v56 = v18;
        v65 = _mm_loadh_ps((const double *)&v56);
        v26 = v66 & 1;
        if ( (v66 & 1) != 0 )
        {
          v27 = 8;
          v16 = 3;
          v28 = &v67;
          v29 = ((unsigned __int8)((unsigned int)v25 >> 9) ^ (unsigned __int8)((unsigned int)v25 >> 4)) & 3;
          v30 = (__int64 *)&(&v67)[2
                                 * (((unsigned __int8)((unsigned int)v25 >> 9)
                                   ^ (unsigned __int8)((unsigned int)v25 >> 4))
                                  & 3)];
          v15 = *v30;
          if ( v25 == *v30 )
            goto LABEL_26;
        }
        else
        {
          v34 = v68;
          if ( !v68 )
          {
            v70.m128_u64[0] = 0;
            v44 = ((unsigned int)v66 >> 1) + 1;
            goto LABEL_43;
          }
          v16 = v68 - 1;
          v28 = v67;
          v29 = v16 & (((unsigned int)v25 >> 4) ^ ((unsigned int)v25 >> 9));
          v30 = &v67[2 * v29];
          v15 = *v30;
          if ( v25 == *v30 )
          {
LABEL_33:
            v27 = 2 * v34;
            goto LABEL_26;
          }
        }
        v50 = 1;
        v51 = nullptr;
        if ( v15 == -4096 )
        {
LABEL_57:
          v70.m128_u64[0] = (unsigned __int64)v30;
          v44 = ((unsigned int)v66 >> 1) + 1;
          if ( v26 )
          {
            v45 = (unsigned int)(4 * v44);
            LODWORD(v34) = 4;
            if ( (unsigned int)v45 >= 0xC )
            {
LABEL_59:
              v52 = 2 * v34;
              goto LABEL_60;
            }
LABEL_44:
            v56 = v18;
            v45 = (unsigned int)(v34 - HIDWORD(v66) - v44);
            if ( (unsigned int)v45 <= (unsigned int)v34 >> 3 )
            {
              v52 = v34;
LABEL_60:
              sub_18A8BB0((__int64)&v66, v52, v44, v45, v15, v16);
              sub_18973F0((__int64)&v66, (__int64 *)v57, &v70);
              v56 = v65.m128_i64[1];
              v25 = v65.m128_u64[0];
              LODWORD(v44) = ((unsigned int)v66 >> 1) + 1;
            }
            v46 = (_QWORD *)v70.m128_u64[0];
            LODWORD(v66) = v66 & 1 | (2 * v44);
            if ( *(_QWORD *)v70.m128_u64[0] != -4096 )
              --HIDWORD(v66);
            v61 = v25;
            *(__m128 *)v70.m128_u64[0] = _mm_loadh_ps((const double *)&v56);
            if ( (v66 & 1) != 0 )
            {
              v47 = 8;
              v48 = &v67;
            }
            else
            {
              v48 = v67;
              v47 = 2LL * v68;
            }
            sub_1897380(&v70, v46, &v48[v47], (__int64)&v66, 1);
            goto LABEL_27;
          }
          LODWORD(v34) = v68;
LABEL_43:
          v45 = (unsigned int)(4 * v44);
          if ( (unsigned int)v45 >= 3 * (int)v34 )
            goto LABEL_59;
          goto LABEL_44;
        }
        while ( 1 )
        {
          if ( v15 == -8192 && !v51 )
            v51 = v30;
          v29 = v16 & (v50 + v29);
          v30 = &v28[2 * v29];
          v15 = *v30;
          if ( v25 == *v30 )
            break;
          if ( v15 == -4096 )
          {
            if ( v51 )
              v30 = v51;
            goto LABEL_57;
          }
          ++v50;
        }
        if ( !v26 )
        {
          v28 = v67;
          v34 = v68;
          goto LABEL_33;
        }
        v27 = 8;
        v28 = &v67;
LABEL_26:
        sub_1897380(&v70, v30, &v28[v27], (__int64)&v66, 1);
LABEL_27:
        v7 += 8;
        sub_17B7670(*a1, v18, v58, 0, v31, v32);
        if ( v53 == v7 )
          break;
      }
      else
      {
        sub_168B9F0((__int64)&v70, a1, *(_DWORD *)(v18 + 24), 0x113Bu, 0);
        v17 = 0;
        if ( (*(_QWORD *)(v18 + 40) & 7) == 0 )
          v17 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v73 )
        {
          sub_AE9DF0(&v72, v17, 5u);
        }
        else if ( v75 )
        {
          v56 = v17;
          v35 = sub_168B9E0(&v70);
          v38 = v56;
          v39 = v35;
          v40 = (__int64)v71;
          if ( v71 )
          {
            v41 = *v71;
            v61 = v39;
            v40 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v41 + 32))(v71, v41, v39, v56);
            v39 = v61;
            v38 = v56;
          }
          v56 = v38;
          v65.m128_u64[0] = v40;
          v42 = sub_1587BC0(v39, (__int64 *)v57, v39, v38, v36, v37);
          sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v74 + 8), v56, 5u);
        }
        v7 += 8;
        v65.m128_i32[0] = *(_DWORD *)(*(_QWORD *)(v12 + 8) + 24LL);
        v65.m128_i32[1] = v65.m128_i32[0];
        sub_1587DB0((__int64)&v70, (__int64 *)v57);
        sub_15F7200(&v70);
        sub_B88650(v18, 1);
        if ( v53 == v7 )
          break;
      }
    }
  }
  result = sub_BA9D60(v62, v63, v59, v60, v64);
  if ( (v66 & 1) == 0 )
  {
    v54 = result;
    operator delete(v67, 16LL * v68, 8);
    return v54;
  }
  return result;
}
