__int64 __fastcall sub_6B8C90(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned int v7; // esi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  unsigned int v11; // esi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  unsigned int v15; // esi
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  unsigned int v19; // esi
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 result; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdx
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  int v34; // eax
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _BYTE *v40; // rcx
  _BYTE *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _BYTE *v45; // rcx
  unsigned int v46; // r8d
  size_t v47; // rsi
  _DWORD *v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // ebp
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdx
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int v56; // r15d
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // ecx
  size_t v60; // rsi
  unsigned int v61; // r15d
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  char **exception; // rbp
  __m128i v70; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+28h] [rbp-D0h]
  __int64 v73; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+38h] [rbp-C0h]
  __int64 v75; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+48h] [rbp-B0h]
  _QWORD v77[2]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v78; // [rsp+60h] [rbp-98h] BYREF
  __m128 v79; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v80[2]; // [rsp+80h] [rbp-78h] BYREF
  __m128i v81; // [rsp+90h] [rbp-68h] BYREF
  _OWORD v82[5]; // [rsp+A0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_QWORD **)(a1 + 56);
  v81.m128i_i64[0] = v5;
  v9 = sub_6A98D0(v8, v7, v5);
  v10 = v9;
  if ( v9 )
  {
    v10 = (_QWORD *)v9[1];
  }
  else
  {
    sub_6ACBA0((_QWORD *)(a1 + 136), &v81);
    v41 = *(_BYTE **)(a1 + 144);
    if ( v41 )
    {
      v42 = *((_DWORD *)v41 - 1);
      if ( v42 == *((_DWORD *)v41 - 2) )
      {
        v54 = (3 * v42 + 1) >> 1;
        v55 = v54 + 8;
        v56 = v54;
        if ( v42 + 8 >= (unsigned int)v55 || v42 >= v54 )
          goto LABEL_49;
        v57 = (unsigned int *)sub_186B300(v41 - 8, v55);
        v58 = v57[1];
        v41 = v57 + 2;
        *v57 = v56;
        *(_QWORD *)(a1 + 144) = v57 + 2;
        LODWORD(v57) = v58;
        v45 = &v41[v58];
        v44 = (_DWORD)v57 + 1;
      }
      else
      {
        v43 = v42;
        v44 = v42 + 1;
        v45 = &v41[v43];
      }
    }
    else
    {
      v64 = (_QWORD *)sub_186B270(0xAu);
      v41 = v64 + 1;
      *v64 = 2;
      v44 = 1;
      *(_QWORD *)(a1 + 144) = v41;
      v45 = v41;
    }
    *v45 = 1;
    *((_DWORD *)v41 - 1) = v44;
  }
  v11 = *(_DWORD *)(a1 + 88);
  v12 = *(_QWORD **)(a1 + 80);
  v81.m128i_i64[0] = v5;
  v13 = sub_6A98D0(v12, v11, v5);
  v14 = v13;
  if ( v13 )
  {
    v14 = (_QWORD *)v13[1];
  }
  else
  {
    sub_6ACBA0((_QWORD *)(a1 + 136), &v81);
    v36 = *(_BYTE **)(a1 + 144);
    if ( v36 )
    {
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v59 = (3 * v37 + 1) >> 1;
        v60 = v59 + 8;
        v61 = v59;
        if ( v37 + 8 >= (unsigned int)v60 || v37 >= v59 )
          goto LABEL_49;
        v62 = (unsigned int *)sub_186B300(v36 - 8, v60);
        v63 = v62[1];
        v36 = v62 + 2;
        *v62 = v61;
        *(_QWORD *)(a1 + 144) = v62 + 2;
        LODWORD(v62) = v63;
        v40 = &v36[v63];
        v39 = (_DWORD)v62 + 1;
      }
      else
      {
        v38 = v37;
        v39 = v37 + 1;
        v40 = &v36[v38];
      }
    }
    else
    {
      v67 = (_QWORD *)sub_186B270(0xAu);
      v36 = v67 + 1;
      *v67 = 2;
      v39 = 1;
      *(_QWORD *)(a1 + 144) = v36;
      v40 = v36;
    }
    *v40 = 0;
    *((_DWORD *)v36 - 1) = v39;
  }
  v15 = *(_DWORD *)(a1 + 64);
  v16 = *(_QWORD **)(a1 + 56);
  v81.m128i_i64[0] = v6;
  v17 = sub_6A98D0(v16, v15, v6);
  v18 = v17;
  if ( v17 )
  {
    v18 = (_QWORD *)v17[1];
  }
  else
  {
    sub_6ACBA0((_QWORD *)(a1 + 136), &v81);
    v31 = *(_BYTE **)(a1 + 144);
    if ( v31 )
    {
      v32 = *((_DWORD *)v31 - 1);
      if ( v32 == *((_DWORD *)v31 - 2) )
      {
        v46 = (3 * v32 + 1) >> 1;
        v47 = v46 + 8;
        if ( v32 + 8 >= (unsigned int)v47 || v32 >= v46 )
          goto LABEL_49;
        v70.m128i_i32[0] = (3 * v32 + 1) >> 1;
        v48 = (_DWORD *)sub_186B300(v31 - 8, v47);
        v49 = (unsigned int)v48[1];
        v31 = v48 + 2;
        *v48 = v70.m128i_i32[0];
        LODWORD(v48) = v49;
        *(_QWORD *)(a1 + 144) = v31;
        v35 = &v31[v49];
        v34 = (_DWORD)v48 + 1;
      }
      else
      {
        v33 = v32;
        v34 = v32 + 1;
        v35 = &v31[v33];
      }
    }
    else
    {
      v66 = (_QWORD *)sub_186B270(0xAu);
      v31 = v66 + 1;
      *v66 = 2;
      v34 = 1;
      *(_QWORD *)(a1 + 144) = v31;
      v35 = v31;
    }
    *v35 = 1;
    *((_DWORD *)v31 - 1) = v34;
  }
  v19 = *(_DWORD *)(a1 + 88);
  v20 = *(_QWORD **)(a1 + 80);
  v81.m128i_i64[0] = v6;
  v21 = sub_6A98D0(v20, v19, v6);
  if ( !v21 )
  {
    sub_6ACBA0((_QWORD *)(a1 + 136), &v81);
    v27 = *(_BYTE **)(a1 + 144);
    if ( !v27 )
    {
      v65 = (_QWORD *)sub_186B270(0xAu);
      v27 = v65 + 1;
      *v65 = 2;
      result = 1;
      *(_QWORD *)(a1 + 144) = v27;
      v30 = v27;
      goto LABEL_19;
    }
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 != *((_DWORD *)v27 - 2) )
    {
      v29 = v28;
      result = v28 + 1;
      v30 = &v27[v29];
LABEL_19:
      *v30 = 0;
      *((_DWORD *)v27 - 1) = result;
      return result;
    }
    v50 = (3 * v28 + 1) >> 1;
    v51 = v50 + 8;
    if ( v28 + 8 < (unsigned int)v51 && v28 < v50 )
    {
      v52 = (unsigned int *)sub_186B300(v27 - 8, v51);
      v53 = v52[1];
      v27 = v52 + 2;
      *v52 = v50;
      *(_QWORD *)(a1 + 144) = v52 + 2;
      LODWORD(v52) = v53;
      v30 = &v27[v53];
      result = (unsigned int)((_DWORD)v52 + 1);
      goto LABEL_19;
    }
LABEL_49:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_6A99E0((__int64 *)v82, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v82);
    sub_233E40((__int64)v82);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  result = v21[1];
  if ( v10 && v14 && v18 && result )
  {
    v23 = (__m128i)(unsigned __int64)result;
    v24 = *(_QWORD *)a1;
    v71 = 0;
    v73 = 0;
    v72 = v24;
    v74 = v24;
    v76 = v24;
    v25 = *(_QWORD *)(a1 + 136);
    v75 = 0;
    --*(_DWORD *)(v25 - 4);
    v26 = *(_QWORD *)(a1 + 144);
    v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, v23);
    --*(_DWORD *)(v26 - 4);
    if ( a3 )
    {
      v77[0] = v10;
      v77[1] = v18;
      sub_6B02D0(a1 + 152, 2, v77, &v71);
      v78 = _mm_load_si128(&v70);
      sub_6B02D0(a1 + 152, 2, &v78, &v73);
      v79 = _mm_loadh_ps((const double *)&v73);
      sub_6B0370(a1 + 152, 2, &v79, &v75);
    }
    else
    {
      v80[0] = v10;
      v80[1] = v18;
      sub_6B0370(a1 + 152, 2, v80, &v71);
      v81 = _mm_load_si128(&v70);
      sub_6B0370(a1 + 152, 2, &v81, &v73);
      v82[0] = _mm_loadh_ps((const double *)&v73);
      sub_6B02D0(a1 + 152, 2, v82, &v75);
    }
    sub_6B8770(a1, a2, a3, v75);
    sub_6A99C0(v75, v76);
    sub_6A99C0(v73, v74);
    return sub_6A99C0(v71, v72);
  }
  return result;
}

