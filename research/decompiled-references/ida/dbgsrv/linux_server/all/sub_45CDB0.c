/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CDB0
// Address: 0x000000000045CDB0

//----- (000000000045CDB0) ----------------------------------------------------
__int64 __fastcall sub_45CDB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 *v14; // rbx
  __int64 v15; // rax
  unsigned __int8 *v16; // r12
  char *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  void *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  double v32; // xmm0_8
  __int64 v33; // r12
  char *v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rbp
  char *v37; // rbx
  void *v38; // rdi
  void *v39; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // rax
  size_t v48; // rax
  size_t v49; // r15
  size_t v50; // rbp
  void *v51; // rax
  char v52[32]; // [rsp+0h] [rbp-22B8h] BYREF
  void *v53; // [rsp+20h] [rbp-2298h]
  __int64 v54; // [rsp+28h] [rbp-2290h]
  void *v55; // [rsp+70h] [rbp-2248h]
  __int64 v56; // [rsp+78h] [rbp-2240h]
  void *v57; // [rsp+120h] [rbp-2198h]
  __int64 v58; // [rsp+128h] [rbp-2190h]
  void *ptr; // [rsp+240h] [rbp-2078h]
  __int64 v60; // [rsp+248h] [rbp-2070h]
  __int64 v61; // [rsp+258h] [rbp-2060h]
  unsigned __int8 dest[4096]; // [rsp+270h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1270h] [rbp-1048h] BYREF
  unsigned __int64 v64; // [rsp+2278h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v14 = *(__int64 **)(a1 + 136);
  v15 = *v14;
  if ( !*v14 || *(_DWORD *)(v15 + 8) != 1 )
  {
    sub_410EA0(
      (int)"Input source is not local file.\n",
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v52[0]);
    return 0;
  }
  v16 = (unsigned __int8 *)s1;
  if ( *(_QWORD *)(v15 + 24) )
    v16 = *(unsigned __int8 **)(v15 + 16);
  v17 = (char *)v14[24];
  if ( !v17 )
    return 0;
  if ( (unsigned __int8)sub_480670((_BYTE *)v14[24]) )
  {
    sub_4821A0(s, v17, 4096);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_480670(v16) )
  {
    if ( !sub_4806D0((unsigned __int8 *)s, 4096, v16) || !(unsigned __int8)sub_480530((char *)dest, 0x1000u, s) )
      return 0;
    goto LABEL_35;
  }
  if ( !(unsigned __int8)sub_480530((char *)dest, 0x1000u, (const char *)v16) )
    return 0;
LABEL_35:
  sub_480480(s, 4096, dest, v14[24], 0);
LABEL_8:
  v18 = sub_47F560(s, 0);
  v25 = (void *)v18;
  if ( !v18 )
  {
    sub_410EA0(
      (int)"Cannot open file: %s.\n",
      (__int64)s,
      v19,
      v20,
      v21,
      v22,
      a7,
      a8,
      a9,
      a10,
      v23,
      v24,
      a13,
      a14,
      v52[0]);
    return 0;
  }
  sub_428130((__int64)v52, v18, 0);
  sub_424C30((__int64)v52, nullptr);
  if ( (unsigned __int8)sub_424C50((__int64)v52) && (unsigned __int8)sub_4251B0((__int64)v52) )
  {
    if ( (unsigned __int8)sub_4295E0(
                            (__int64)v52,
                            a7,
                            a8,
                            a9,
                            a10,
                            *(double *)v30.m128_u64,
                            *(double *)v31.m128_u64,
                            a13,
                            a14) )
    {
      v47 = operator new(0x28u);
      *(_DWORD *)(v47 + 8) = 1;
      v33 = v47;
      *(_QWORD *)v47 = &off_4C3450;
      v32 = 0.0;
      *(_QWORD *)(v47 + 16) = 0;
      *(_OWORD *)(v47 + 24) = 0;
      v48 = strlen(s);
      v49 = v48 + 1;
      v50 = v48;
      v51 = sub_481540(v33 + 16, nullptr, v48 + 1, 1u);
      *(_QWORD *)(v33 + 16) = v51;
      *(_QWORD *)(v33 + 24) = v49;
      memmove(v51, s, v50);
      *(_BYTE *)(*(_QWORD *)(v33 + 16) + v50) = 0;
      goto LABEL_12;
    }
    v32 = sub_410EA0(
            (int)"Failed to read ELF sections from: %s\n",
            (__int64)s,
            v41,
            v42,
            v43,
            v44,
            a7,
            a8,
            a9,
            a10,
            v45,
            v46,
            a13,
            a14,
            v52[0]);
  }
  else
  {
    v32 = sub_410EA0(
            (int)"Failed to read ELF ident/header from: %s\n",
            (__int64)s,
            v26,
            v27,
            v28,
            v29,
            a7,
            a8,
            a9,
            a10,
            v30,
            v31,
            a13,
            a14,
            v52[0]);
  }
  v33 = 0;
LABEL_12:
  if ( v61 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v61 + 8LL))(v61, v32);
  if ( ptr )
  {
    v60 = 0;
    j__free(ptr);
  }
  v34 = (char *)v57;
  if ( v57 )
  {
    v35 = v58;
    if ( v58 )
    {
      v36 = 0;
      do
      {
        v37 = &v34[96 * v36];
        v38 = *((void **)v37 + 3);
        if ( v38 )
        {
          *((_QWORD *)v37 + 4) = 0;
          j__free(v38);
        }
        v39 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          j__free(v39);
        }
        ++v36;
        v34 = (char *)v57;
      }
      while ( v35 != v36 );
    }
    v58 = 0;
    j__free(v34);
  }
  if ( v55 )
  {
    v56 = 0;
    j__free(v55);
  }
  if ( v53 )
  {
    v54 = 0;
    j__free(v53);
  }
  sub_47F680(v25);
  return v33;
}
// 45CE85: variable 'v26' is possibly undefined
// 45CE85: variable 'v27' is possibly undefined
// 45CE85: variable 'v28' is possibly undefined
// 45CE85: variable 'v29' is possibly undefined
// 45CE85: variable 'v30' is possibly undefined
// 45CE85: variable 'v31' is possibly undefined
// 45D11C: variable 'v41' is possibly undefined
// 45D11C: variable 'v42' is possibly undefined
// 45D11C: variable 'v43' is possibly undefined
// 45D11C: variable 'v44' is possibly undefined
// 45D11C: variable 'v45' is possibly undefined
// 45D11C: variable 'v46' is possibly undefined
// 45D13C: variable 'v19' is possibly undefined
// 45D13C: variable 'v20' is possibly undefined
// 45D13C: variable 'v21' is possibly undefined
// 45D13C: variable 'v22' is possibly undefined
// 45D13C: variable 'v23' is possibly undefined
// 45D13C: variable 'v24' is possibly undefined
// 4C3450: using guessed type _UNKNOWN *off_4C3450;
