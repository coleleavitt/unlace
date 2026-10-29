unsigned __int64 __fastcall metadata_dumper_t__::vfunc_8(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r10
  __int64 v17; // r13
  __int64 i; // r14
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  const char *v22; // rcx
  __int64 v23; // rax
  const char **v24; // rcx
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  const char *v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  const char *v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  const char *v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  const char *v46; // rdx
  __int64 v47; // rax
  __int64 *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-90h]
  __int64 v63; // [rsp+8h] [rbp-88h]
  unsigned __int64 v64; // [rsp+10h] [rbp-80h]
  __int64 *v65; // [rsp+18h] [rbp-78h]
  __int64 v66; // [rsp+30h] [rbp-60h] BYREF
  __int64 v67; // [rsp+38h] [rbp-58h] BYREF
  const char *v68; // [rsp+40h] [rbp-50h] BYREF
  __int128 v69; // [rsp+48h] [rbp-48h]
  unsigned __int64 v70; // [rsp+58h] [rbp-38h]

  v3 = *(__int64 **)(a1 + 56);
  v70 = __readfsqword(0x28u);
  v5 = v3[1];
  v6 = *v3;
  if ( v3[2] < (unsigned __int64)(v5 + 1) )
  {
    v59 = qvector_reserve(v3, v6, v5 + 1, 24);
    v5 = v3[1];
    *v3 = v59;
    v6 = v59;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++v3[1];
  sub_169A50((__int64 *)v7, (__int64)"Frame size: %lld", *(_QWORD *)a2);
  v8 = *(__int64 **)(a1 + 56);
  v9 = v8[1];
  v10 = *v8;
  if ( v8[2] < (unsigned __int64)(v9 + 1) )
  {
    v61 = qvector_reserve(*(_QWORD *)(a1 + 56), v10, v9 + 1, 24);
    v9 = v8[1];
    *v8 = v61;
    v10 = v61;
  }
  v11 = v10 + 24 * v9;
  *(_QWORD *)v11 = 0;
  *(_OWORD *)(v11 + 8) = 0;
  ++v8[1];
  sub_169A50((__int64 *)v11, (__int64)"Frame saved registers size: %d", *(unsigned __int16 *)(a2 + 16));
  v12 = *(__int64 **)(a1 + 56);
  v13 = v12[1];
  v14 = *v12;
  if ( v12[2] < (unsigned __int64)(v13 + 1) )
  {
    v60 = qvector_reserve(*(_QWORD *)(a1 + 56), v14, v13 + 1, 24);
    v13 = v12[1];
    *v12 = v60;
    v14 = v60;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  ++v12[1];
  sub_169A50((__int64 *)v15, (__int64)"Frame arguments size: %lld", *(_QWORD *)(a2 + 8));
  v16 = *(_QWORD *)(a2 + 24);
  v17 = v16 + 416LL * *(_QWORD *)(a2 + 32);
  if ( v16 != v17 )
  {
    for ( i = *(_QWORD *)(a2 + 24); v17 != i; i += 416 )
    {
      v19 = *(__int64 **)(a1 + 56);
      v20 = v19[1];
      v21 = *v19;
      if ( v19[2] < (unsigned __int64)(v20 + 1) )
      {
        v21 = qvector_reserve(v19, v21, v20 + 1, 24);
        *v19 = v21;
        v20 = v19[1];
      }
      v22 = &s1;
      v23 = v21 + 24 * v20;
      *(_QWORD *)v23 = 0;
      *(_OWORD *)(v23 + 8) = 0;
      ++v19[1];
      if ( *(_QWORD *)(i + 8) )
        v22 = *(const char **)i;
      sub_169A50((__int64 *)v23, (__int64)"frame member at: +0x%llx: %s", *(_QWORD *)(i + 120), v22);
      v66 = 0;
      v67 = *(_QWORD *)(i + 24);
      v24 = *(const char ***)(i + 48);
      v68 = (const char *)v24;
      if ( v24 )
        v24 = &v68;
      deserialize_tinfo(&v66, 0, &v67, v24, 0, 0, v62, v63, v64);
      v68 = nullptr;
      v69 = 0;
      print_tinfo(&v68, 0, 0, 0, 0, &v66, 0, 0);
      v25 = *(__int64 **)(a1 + 56);
      v26 = v25[1];
      v27 = *v25;
      if ( v25[2] < (unsigned __int64)(v26 + 1) )
      {
        v27 = qvector_reserve(v25, v27, v26 + 1, 24);
        *v25 = v27;
        v26 = v25[1];
      }
      v28 = v27 + 24 * v26;
      v29 = "  size: %llu";
      *(_QWORD *)v28 = 0;
      *(_OWORD *)(v28 + 8) = 0;
      ++v25[1];
      sub_169A50((__int64 *)v28, (__int64)"  size: %llu", *(_QWORD *)(i + 408));
      if ( (unsigned __int64)v69 <= 1 )
      {
        if ( *(_QWORD *)(i + 80) <= 1u )
          goto LABEL_10;
      }
      else
      {
        v30 = *(__int64 **)(a1 + 56);
        v31 = v30[1];
        v32 = *v30;
        if ( v30[2] < (unsigned __int64)(v31 + 1) )
        {
          v32 = qvector_reserve(v30, v32, v31 + 1, 24);
          *v30 = v32;
          v31 = v30[1];
        }
        v33 = 3 * v31;
        v34 = &s1;
        v35 = v32 + 8 * v33;
        *(_QWORD *)v35 = 0;
        *(_OWORD *)(v35 + 8) = 0;
        ++v30[1];
        if ( (_QWORD)v69 )
          v34 = v68;
        v29 = "  type: %s";
        sub_169A50((__int64 *)v35, (__int64)"  type: %s", v34);
        if ( *(_QWORD *)(i + 80) <= 1u )
        {
LABEL_10:
          if ( *(_QWORD *)(i + 104) <= 1u )
            goto LABEL_11;
LABEL_34:
          v42 = *(__int64 **)(a1 + 56);
          v43 = v42[1];
          v44 = *v42;
          if ( v42[2] < (unsigned __int64)(v43 + 1) )
          {
            v44 = qvector_reserve(v42, v44, v43 + 1, 24);
            *v42 = v44;
            v43 = v42[1];
          }
          v45 = 3 * v43;
          v46 = &s1;
          v47 = v44 + 8 * v45;
          *(_QWORD *)v47 = 0;
          *(_OWORD *)(v47 + 8) = 0;
          ++v42[1];
          if ( *(_QWORD *)(i + 104) )
            v46 = *(const char **)(i + 96);
          v29 = "  repeatable comment: %s";
          sub_169A50((__int64 *)v47, (__int64)"  repeatable comment: %s", v46);
          goto LABEL_11;
        }
      }
      v36 = *(__int64 **)(a1 + 56);
      v37 = v36[1];
      v38 = *v36;
      if ( v36[2] < (unsigned __int64)(v37 + 1) )
      {
        v38 = qvector_reserve(v36, v38, v37 + 1, 24);
        *v36 = v38;
        v37 = v36[1];
      }
      v39 = 3 * v37;
      v40 = &s1;
      v41 = v38 + 8 * v39;
      *(_QWORD *)v41 = 0;
      *(_OWORD *)(v41 + 8) = 0;
      ++v36[1];
      if ( *(_QWORD *)(i + 80) )
        v40 = *(const char **)(i + 72);
      v29 = "  comment: %s";
      sub_169A50((__int64 *)v41, (__int64)"  comment: %s", v40);
      if ( *(_QWORD *)(i + 104) > 1u )
        goto LABEL_34;
LABEL_11:
      if ( (_UNKNOWN *)(*(_QWORD *)(i + 128) & 0xF00000LL) == &loc_500000 )
      {
        v48 = *(__int64 **)(a1 + 56);
        v49 = v48[1];
        v50 = *v48;
        if ( v48[2] < (unsigned __int64)(v49 + 1) )
        {
          v65 = *(__int64 **)(a1 + 56);
          v58 = qvector_reserve(v65, v50, v49 + 1, 24);
          v48 = v65;
          v50 = v58;
          *v65 = v58;
          v49 = v65[1];
        }
        v51 = v50 + 24 * v49;
        *(_OWORD *)(v51 + 8) = 0;
        *(_QWORD *)v51 = 0;
        ++v48[1];
        v52 = *(_QWORD *)(v51 + 8);
        if ( v52 )
        {
          v53 = v52 + 14;
          v54 = v52 + 15;
          v55 = *(_QWORD *)v51;
          --v52;
          if ( *(_QWORD *)(v51 + 16) >= v54 )
          {
LABEL_43:
            *(_QWORD *)(v51 + 8) = v54;
            *(_BYTE *)(v55 + v53) = 0;
            v29 = nullptr;
            qmemcpy((void *)(*(_QWORD *)v51 + v52), "  offset repr: ", 15);
            print_refinfo(v51, 0, i + 136);
            goto LABEL_12;
          }
        }
        else
        {
          v55 = *(_QWORD *)v51;
          v54 = 16;
          v53 = 15;
          if ( *(_QWORD *)(v51 + 16) >= 0x10u )
            goto LABEL_43;
        }
        v62 = v53;
        v63 = v52;
        v64 = v54;
        v56 = qvector_reserve(v51, v55, v54, 1);
        v53 = v62;
        v55 = v56;
        v52 = v63;
        v54 = v64;
        *(_QWORD *)v51 = v56;
        goto LABEL_43;
      }
LABEL_12:
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68, v29);
      }
      clear_tinfo_t(&v66);
    }
  }
  return v70 - __readfsqword(0x28u);
}
