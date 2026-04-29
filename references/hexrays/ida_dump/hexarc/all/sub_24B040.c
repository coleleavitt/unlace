unsigned __int64 __fastcall sub_24B040(__int64 a1)
{
  _QWORD *exception; // rax
  __int64 v2; // r13
  _QWORD *v3; // r12
  __int64 v4; // rax
  size_t v5; // rbx
  void *v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebp
  int v17; // esi
  unsigned int i; // r13d
  __m128i *v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // r8d
  int v25; // r9d
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // r15
  _QWORD *v33; // rbp
  _QWORD *v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rdi
  int v37; // r8d
  int v38; // r9d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  unsigned int v44; // eax
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // [rsp-8h] [rbp-1E8h]
  _QWORD v49[5]; // [rsp+8h] [rbp-1D8h] BYREF
  char v50; // [rsp+30h] [rbp-1B0h]
  _QWORD v51[2]; // [rsp+38h] [rbp-1A8h] BYREF
  __int128 v52; // [rsp+48h] [rbp-198h]
  char v53; // [rsp+58h] [rbp-188h]
  unsigned __int64 v54; // [rsp+5Ch] [rbp-184h]
  __int64 v55; // [rsp+68h] [rbp-178h]
  __int128 v56; // [rsp+70h] [rbp-170h]
  __int64 v57; // [rsp+80h] [rbp-160h]
  __int128 v58; // [rsp+88h] [rbp-158h]
  __int64 v59; // [rsp+98h] [rbp-148h]
  __int128 v60; // [rsp+A0h] [rbp-140h]
  __int64 v61; // [rsp+B0h] [rbp-130h]
  __int128 v62; // [rsp+B8h] [rbp-128h]
  int v63; // [rsp+C8h] [rbp-118h]
  __int64 v64; // [rsp+D0h] [rbp-110h]
  __int128 v65; // [rsp+D8h] [rbp-108h]
  __int64 v66; // [rsp+E8h] [rbp-F8h]
  __int64 v67; // [rsp+F0h] [rbp-F0h]
  __int64 v68; // [rsp+F8h] [rbp-E8h]
  __int64 v69; // [rsp+100h] [rbp-E0h]
  __int128 v70; // [rsp+108h] [rbp-D8h]
  __int64 v71; // [rsp+118h] [rbp-C8h]
  __int64 v72; // [rsp+120h] [rbp-C0h]
  __int64 v73; // [rsp+128h] [rbp-B8h]
  __int64 v74; // [rsp+130h] [rbp-B0h]
  __int64 v75; // [rsp+138h] [rbp-A8h]
  __int128 v76; // [rsp+140h] [rbp-A0h]
  __int64 v77; // [rsp+150h] [rbp-90h]
  __int128 v78; // [rsp+158h] [rbp-88h]
  __int64 v79; // [rsp+168h] [rbp-78h]
  __int128 v80; // [rsp+170h] [rbp-70h]
  __int64 v81; // [rsp+180h] [rbp-60h]
  __int64 v82; // [rsp+188h] [rbp-58h]
  int v83; // [rsp+190h] [rbp-50h]
  unsigned __int64 v84; // [rsp+1A0h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  v53 = 0;
  v54 = 0xFFFFFFFF00000000LL;
  v51[1] = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v8 = *(_QWORD *)(a1 + 216);
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v52 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v65 = 0;
  v9 = *(_QWORD **)(a1 + 8);
  v66 = a1;
  v67 = 0;
  v51[0] = off_4B7B98;
  v68 = 0;
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = v8;
  v82 = 0;
  v83 = 0;
  v70 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v10 = sub_60B60(v9);
  *(_BYTE *)(v10 + 248) = 0;
  v11 = v10;
  if ( (unsigned int)sub_3368C0(*(_QWORD *)(a1 + 216), 8, (unsigned int)v51, a1, v10, v12) != 1 )
  {
    v16 = sub_30AD40(v11, v51);
    if ( v16 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v2 = *(_QWORD *)(a1 + 8);
      v3 = exception;
      v4 = *(_QWORD *)a1;
      *v3 = off_4A8510;
      v3[2] = v4;
      *((_DWORD *)v3 + 2) = v16;
      v3[3] = 0;
      *((_OWORD *)v3 + 2) = 0;
      v5 = *(_QWORD *)(v2 + 504);
      if ( v5 )
      {
        v6 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 504));
        v3[3] = v6;
        v3[5] = v5;
        memcpy(v6, *(const void **)(v2 + 496), v5);
        v3[4] = v5;
      }
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_73F40);
    }
  }
  v17 = 9;
  sub_3368C0(*(_QWORD *)(a1 + 216), 9, (unsigned int)v51, v13, v14, v15);
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 896LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 900LL) = 0;
  sub_272660(*(_QWORD *)(a1 + 216));
  for ( i = 0; i != 10; ++i )
  {
    sub_131D80(*(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 24) != 71 )
    {
      *(_DWORD *)(a1 + 24) = 71;
      v19 = (__m128i *)qalloc_or_throw(24);
      v19[1].m128i_i64[0] = 0;
      *v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
      *(_QWORD *)(a1 + 40) = v19;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
LABEL_5:
      if ( i != 3 )
        goto LABEL_6;
LABEL_17:
      sub_296F90(a1, v17, v20, v21, v22, v23, v48);
      goto LABEL_6;
    }
    v32 = *(_QWORD **)(a1 + 40);
    v33 = (_QWORD *)*v32;
    if ( v32 == (_QWORD *)*v32 )
      goto LABEL_5;
    do
    {
      v34 = v33;
      v33 = (_QWORD *)*v33;
      *(_QWORD *)v34[1] = v33;
      v33[1] = v34[1];
      sub_24DCD0(v34 + 2);
      qfree(v34);
      --v32[2];
    }
    while ( v32 != v33 );
    if ( i == 3 )
      goto LABEL_17;
LABEL_6:
    sub_3368C0(*(_QWORD *)(a1 + 216), 10, a1, 0, v22, v23);
    *(_DWORD *)(a1 + 56) = 0;
    v83 = 0;
    sub_249190(v51, (unsigned int)v54, a1 + 16, 0);
    sub_3368C0(*(_QWORD *)(a1 + 216), 10, a1, 1, v24, v25);
    v26 = v74 == 0;
    *(_DWORD *)(a1 + 56) = 1;
    if ( !v26 )
      sub_251240(a1);
    v17 = 0;
    sub_31DF50(a1, 0, 1);
    sub_23A980(a1, 0, v27, v28, v29);
    v30 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v30 + 3) & 2) == 0 )
      goto LABEL_24;
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 824LL);
    *(_DWORD *)(v31 + 8) = *(_DWORD *)(v30 + 64);
    *(_QWORD *)v31 = 0;
    if ( (unsigned __int8)sub_24ECC0(a1) )
    {
      v17 = i;
      if ( !(unsigned __int8)sub_2A54A0(a1, i) && !(unsigned __int8)sub_275F40(*(_QWORD *)(a1 + 216)) )
      {
        v17 = -1;
        if ( !(unsigned __int8)sub_2A54A0(a1, 0xFFFFFFFFLL)
          && !(unsigned int)sub_296F90(a1, -1, v40, v41, v42, v43, v48) )
        {
          break;
        }
      }
    }
  }
  v44 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL) & 0xFFFFFFF0;
  if ( v44 == 64 || v44 == 208 )
    sub_ED5E0((_QWORD *)a1, v17);
  sub_27DA70(a1, 1);
  if ( i == 10 )
  {
    sub_329B90(*(_QWORD *)(a1 + 8), -1, 13, v45, v46, v47);
    sub_238AC0(a1);
    sub_24EBF0(a1);
  }
  else if ( (int)sub_238AC0(a1) > 0 )
  {
    sub_24EBF0(a1);
  }
  sub_238B90(a1);
  if ( *(char *)(*(_QWORD *)(a1 + 216) + 604LL) < 0 )
    sub_238C60(a1);
  v35 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v35 + 320) )
  {
    sub_374880(a1);
    v35 = *(_QWORD *)(a1 + 8);
  }
  sub_36F7B0(v35);
  sub_209F50(*(_QWORD *)(a1 + 8), a1);
  sub_1EA4E0(*(_QWORD *)(a1 + 8));
  v36 = *(_QWORD *)(a1 + 8);
  memset(&v49[1], 0, 32);
  v50 = 0;
  v49[0] = &off_4AC170;
  sub_1194F0(v36, (__int64)v49);
  sub_24AC40(a1);
  sub_238A00(a1);
  sub_36F050(a1);
  sub_3368C0(*(_QWORD *)(a1 + 216), 10, a1, 8, v37, v38);
  *(_DWORD *)(a1 + 56) = 8;
  sub_31DF50(a1, 0, 1);
  *(_DWORD *)(a1 + 108) &= 0xFFFFFFF4;
LABEL_24:
  sub_65F00(v51);
  return v84 - __readfsqword(0x28u);
}
