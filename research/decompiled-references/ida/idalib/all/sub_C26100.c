__int64 __fastcall sub_C26100(unsigned int a1, __int64 a2, unsigned int *a3, _QWORD *a4, unsigned __int8 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  _BYTE *v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r12d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 *v34; // rdi
  unsigned __int64 v35; // r14
  unsigned __int8 **v36; // rbx
  unsigned int v37; // ebp
  unsigned __int64 v38; // r12
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbp
  __int64 v41; // rsi
  unsigned __int8 **v43; // rbx
  unsigned __int8 **v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r15d
  unsigned int *v48; // r14
  unsigned int v49; // ebx
  __int64 v50; // r15
  char v51; // al
  unsigned int v52; // r13d
  unsigned __int8 **v53; // rax
  unsigned __int8 **v54; // r15
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned __int8 **v57; // rax
  unsigned int v58; // eax
  __int64 v59; // r12
  unsigned __int8 **v60; // rax
  unsigned int *v61; // [rsp+8h] [rbp-80h] BYREF
  unsigned int v62; // [rsp+14h] [rbp-74h]
  __int64 v63; // [rsp+18h] [rbp-70h]
  unsigned int *v64; // [rsp+20h] [rbp-68h]
  unsigned __int8 v65; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v66; // [rsp+2Ch] [rbp-5Ch] BYREF
  __m128 v67; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 *v68; // [rsp+40h] [rbp-48h]

  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v66 = a1;
  v7 = v6 | a2;
  v64 = a3;
  v65 = a5;
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL | v7 & 7;
  v61 = &v66;
  v9 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v68 = &v65;
  v67 = _mm_loadh_ps((const double *)&v61);
  v10 = sub_F61420(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v10 )
  {
    if ( *(_QWORD *)v67.m128_u64[0] )
    {
      v43 = (unsigned __int8 **)sub_E33C80(*(_QWORD *)v67.m128_u64[0], *(unsigned int *)v67.m128_u64[1], 2387, 0);
      if ( v43 )
      {
        sub_C11320(v43, *v68);
        sub_C11320(v43, 0);
        sub_C11320(v43, 0);
      }
    }
    return 0;
  }
  v14 = v10;
  v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v15 == 42 )
  {
    if ( *(_QWORD *)v67.m128_u64[0] )
    {
      v44 = (unsigned __int8 **)sub_E33C80(*(_QWORD *)v67.m128_u64[0], *(unsigned int *)v67.m128_u64[1], 2387, 0);
      if ( v44 )
      {
        sub_C11320(v44, *v68);
        sub_C11320(v44, 0);
        sub_C11320(v44, 1);
        return v14;
      }
    }
    return 0;
  }
  if ( v15 == 33 )
    return (unsigned int)sub_C11560((__int64 **)&v67, 2);
  if ( (v8 & 4) != 0 || (v9[8] & 4) != 0 )
  {
    if ( !*(_QWORD *)v67.m128_u64[0] )
      return 0;
    v36 = (unsigned __int8 **)sub_E33C80(*(_QWORD *)v67.m128_u64[0], *(unsigned int *)v67.m128_u64[1], 2387, 0);
    if ( !v36 )
      return 0;
    sub_C11320(v36, *v68);
    sub_C11320(v36, 0);
    sub_C11320(v36, 3);
  }
  else
  {
    v16 = sub_F63240(*(_QWORD *)v9, v7, v11, v12, v13);
    v21 = v16;
    if ( v16 )
    {
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 59 <= 2 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104), v17, v18, v19, v20);
        v26 = *(_QWORD *)(v21 + 128);
        v27 = (*(_BYTE *)(v26 + 24) & 1) != 0 ? sub_B96980(v26) : *(_QWORD *)(v26 + 24);
        sub_7052B0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v22, v23, v24, v25);
        v7 = *(_QWORD *)(v21 + 104);
        v63 = v27 + 24LL * *(unsigned int *)(*(_QWORD *)(v21 + 128) + 16LL);
        sub_7052B0((__int64 *)(v7 + 96), v7, v28, v29, v30, v31);
        v32 = *(_QWORD *)(v21 + 128);
        v33 = (*(_BYTE *)(v32 + 24) & 1) != 0 ? sub_B96980(v32) : *(_QWORD *)(v32 + 24);
        if ( v63 != v33 )
        {
          while ( 1 )
          {
            v34 = *(__int64 **)(v33 + 16);
            v62 = v65;
            v61 = v64;
            v7 = sub_C11A50(v34);
            if ( !(unsigned __int8)sub_C26100(v66, v7, v61, a4, v62) )
              break;
            v33 += 24;
            if ( v63 == v33 )
              goto LABEL_15;
          }
          v37 = *(_DWORD *)v33;
          v38 = sub_C11A50(*(__int64 **)(v33 + 16));
          if ( !v64 )
            return 0;
          v39 = (unsigned __int8 **)sub_E33DB0(v64, v37, 2386);
          v40 = v39;
          if ( !v39 )
            return 0;
          sub_AE9DF0(v39, v38, 8u);
          v41 = 1;
LABEL_24:
          sub_C11320(v40, v41);
          sub_AE9DF0(v40, v8, 8u);
          return 0;
        }
      }
LABEL_15:
      v35 = sub_B7E900(v21, v7, v17, v18, v19, v20);
      if ( v35 )
      {
LABEL_16:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1 )
          return (unsigned int)sub_C11560((__int64 **)&v67, 4);
        v7 = *(_QWORD *)(v35 + 48);
        if ( !(unsigned __int8)sub_C26100(v66, v7, v64, a4, v65) )
        {
          v58 = sub_B73090(v35);
          v59 = *(_QWORD *)(v35 + 48);
          if ( !v64 )
            return 0;
          v60 = (unsigned __int8 **)sub_E33DB0(v64, v58, 2386);
          v40 = v60;
          if ( !v60 )
            return 0;
          sub_AE9DF0(v60, v59, 8u);
          v41 = 0;
          goto LABEL_24;
        }
        while ( 1 )
        {
          v45 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v35 = v45;
          if ( !v45 )
            break;
          if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_16;
        }
      }
    }
    v46 = *(_QWORD *)v9;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v47 = v65;
      v48 = v64;
      v7 = sub_A71450((__int64)a4, v8);
      if ( !(unsigned __int8)sub_C26100(v66, v7, v48, a4, v47) )
        return 0;
      v46 = *(_QWORD *)v9;
    }
    if ( (unsigned int)*(unsigned __int8 *)(v46 + 16) - 57 > 1 )
    {
      v46 = sub_C10A30(v46, v7, v17, v18);
      if ( !v46 )
        return 1;
    }
    v49 = *(_DWORD *)(v46 + 20);
    v50 = *(_QWORD *)(v46 + 32);
    v51 = sub_F579D0(v46, a4);
    LODWORD(v61) = 1;
    v52 = v49;
    if ( !v51 )
    {
      LODWORD(v61) = sub_A97D20((__int64)a4, *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL));
      v52 = v49 * (_DWORD)v61;
    }
    if ( v52 % (unsigned __int64)sub_A97D20((__int64)a4, *(_QWORD *)(a4[2331] & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      if ( !v64 )
        return 0;
      v53 = (unsigned __int8 **)sub_E33C80(v64, v66, 2388, 0);
      v54 = v53;
      if ( v53 )
      {
        sub_AE9DF0(v53, v46 & 0xFFFFFFFFFFFFFFF0LL, 8u);
        sub_AE9DF0(v54, (unsigned int)v61, 3u);
        sub_AE9DF0(v54, v49, 3u);
        v55 = sub_A97FD0((__int64)a4);
        sub_AE9DF0(v54, v55, 3u);
      }
      else
      {
        sub_A97FD0((__int64)a4);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_F58100(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL)) )
        return 1;
      v56 = sub_A62D20(a4, v50);
      if ( v56 != sub_21F90E0() )
        return 1;
      if ( !v64 )
        return 0;
      v57 = (unsigned __int8 **)sub_E33C80(v64, v66, 2391, 0);
      if ( v57 )
        sub_AE9DF0(v57, v50, 8u);
    }
  }
  return v14;
}
