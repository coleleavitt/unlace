__int64 *__fastcall sub_2216D40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // r13
  __int64 *result; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  size_t v17; // rdx
  const void *v18; // rbp
  size_t v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // rdx
  const void *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r10
  unsigned int v34; // eax
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rbx
  const void *v39; // r12
  size_t v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned int v43; // eax
  const void *v44; // rsi
  char v45; // dl
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  __int64 *v50; // rdx
  __int64 *v51; // rbp
  __int64 *v52; // rbx
  unsigned __int64 v53; // r13
  __int64 v54; // r13
  _QWORD *v55; // r15
  const void *v56; // r14
  size_t v57; // r12
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned int v60; // eax
  const void *v61; // rsi
  char v62; // dl
  __int64 *v63; // rax
  __int64 v64; // rax
  size_t v65; // rax
  size_t v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 *v69; // [rsp+0h] [rbp-D8h]
  __int64 *v70; // [rsp+0h] [rbp-D8h]
  unsigned int v71; // [rsp+14h] [rbp-C4h]
  const void *v72; // [rsp+18h] [rbp-C0h]
  _QWORD *v73; // [rsp+18h] [rbp-C0h]
  size_t v74; // [rsp+20h] [rbp-B8h]
  _QWORD *v75; // [rsp+28h] [rbp-B0h]
  __int64 *v76; // [rsp+30h] [rbp-A8h]
  __int64 *v77; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v78[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v79; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v80; // [rsp+68h] [rbp-70h]
  _QWORD *v81; // [rsp+70h] [rbp-68h]
  const void *v82; // [rsp+80h] [rbp-58h]
  size_t v83; // [rsp+88h] [rbp-50h]
  __int64 v84[9]; // [rsp+90h] [rbp-48h] BYREF

  v4 = sub_22103C0();
  v5 = *(_DWORD *)(a1 + 104);
  v78[0] = a2;
  v6 = v4;
  v78[1] = a3;
  v80 = v78;
  v7 = *(_DWORD *)(a1 + 100);
  v79 = a1;
  v81 = (_QWORD *)v6;
  if ( v7 == v5 )
  {
    v36 = sub_22111F0((__int64)&qword_2D0A780);
    v37 = v81;
    v38 = v36;
    result = v80;
    v39 = (const void *)*v80;
    v40 = v80[1];
    if ( *(_QWORD *)(v79 + 24) )
      return result;
    v41 = *v80;
    v42 = v80[1];
    v84[0] = v79;
    v82 = v39;
    v83 = v40;
    v43 = sub_2244B30(v41, v42);
    v44 = v82;
    result = sub_2216B80(v38 + 128, v82, v83, v43, v84);
    if ( v45 )
      return result;
    v46 = sub_227D6D0(v38 + 128, v44);
    v47 = sub_227BF10(v46, *v37, v37[1]);
    v28 = sub_995540(v47, ": CommandLine Error: Option '");
    v29 = v40;
LABEL_32:
    v30 = v39;
LABEL_10:
    v31 = sub_9954E0(v28, v30, v29);
    sub_995540(v31, "' registered more than once!\n");
    sub_2221C70("inconsistency in registered CommandLine options", 1);
  }
  v8 = *(_QWORD **)(a1 + 88);
  if ( v7 - v5 != 1 )
    goto LABEL_3;
  v35 = *(_QWORD *)sub_2214680((__int64 *)(a1 + 88), v8);
  if ( v35 == sub_22102D0() )
  {
    v48 = sub_2214680((__int64 *)(v6 + 272), *(_QWORD **)(v6 + 272));
    v49 = v6 + 272;
    v51 = v50;
    v52 = (__int64 *)v48;
    v53 = sub_2214700(v49);
    if ( v52 == (__int64 *)v53 )
    {
LABEL_43:
      v64 = sub_22102D0();
      return sub_2216C80(&v79, v64);
    }
    v70 = (__int64 *)v53;
    while ( 1 )
    {
      v54 = *v52;
      v55 = v81;
      v56 = (const void *)*v80;
      v57 = v80[1];
      if ( !*(_QWORD *)(v79 + 24) )
      {
        v58 = *v80;
        v59 = v80[1];
        v84[0] = v79;
        v82 = v56;
        v83 = v57;
        v60 = sub_2244B30(v58, v59);
        v61 = v82;
        sub_2216B80(v54 + 128, v82, v83, v60, v84);
        if ( !v62 )
          break;
      }
      if ( v51 == v52 + 1 )
      {
        v52 = v51;
      }
      else if ( (unsigned __int64)v52[1] < 0xFFFFFFFFFFFFFFFELL )
      {
        ++v52;
      }
      else
      {
        v63 = v52 + 2;
        do
        {
          v52 = v63;
          if ( v51 == v63 )
            break;
          ++v63;
        }
        while ( (unsigned __int64)*v52 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v52 == v70 )
        goto LABEL_43;
    }
    v65 = v57;
    v39 = v56;
    v66 = v65;
    v67 = sub_227D6D0(v54 + 128, v61);
    v68 = sub_227BF10(v67, *v55, v55[1]);
    v28 = sub_995540(v68, ": CommandLine Error: Option '");
    v29 = v66;
    goto LABEL_32;
  }
  v8 = *(_QWORD **)(a1 + 88);
LABEL_3:
  v9 = sub_2214680((__int64 *)(a1 + 88), v8);
  v69 = v10;
  if ( *(_BYTE *)(a1 + 108) )
    v11 = *(unsigned int *)(a1 + 100);
  else
    v11 = *(unsigned int *)(a1 + 96);
  v12 = (__int64 *)v9;
  result = (__int64 *)sub_2214680((__int64 *)(a1 + 88), (_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v11));
  v76 = result;
  if ( (__int64 *)v9 != result )
  {
    while ( 1 )
    {
      v14 = v79;
      v15 = *v12;
      v75 = v81;
      v16 = *v80;
      v17 = v80[1];
      v72 = (const void *)*v80;
      v74 = v17;
      if ( !*(_QWORD *)(v79 + 24) )
      {
        v19 = v80[1];
        v82 = (const void *)*v80;
        v18 = v82;
        v83 = v17;
        v20 = sub_2244B30(v16, v17);
        v21 = sub_2244CB0(v15 + 128, v18, v19, v20);
        v71 = v21;
        v25 = (__int64 *)(*(_QWORD *)(v15 + 128) + 8LL * v21);
        if ( *v25 )
        {
          if ( *v25 != -8 )
          {
            sub_2216AE0(&v77, v25, 0);
            v26 = sub_227D6D0(&v77, v25);
            v27 = sub_227BF10(v26, *v75, v75[1]);
            v28 = sub_995540(v27, ": CommandLine Error: Option '");
            v29 = v74;
            v30 = v72;
            goto LABEL_10;
          }
          --*(_DWORD *)(v15 + 144);
        }
        v32 = sub_22300B0(v19 + 17, 8, v21, v22, v23, v24);
        v33 = (_QWORD *)v32;
        if ( v19 )
        {
          v73 = (_QWORD *)v32;
          memcpy((void *)(v32 + 16), v18, v19);
          v33 = v73;
        }
        *((_BYTE *)v33 + v19 + 16) = 0;
        *v33 = v19;
        v33[1] = v14;
        *v25 = (__int64)v33;
        ++*(_DWORD *)(v15 + 140);
        v34 = sub_22450D0(v15 + 128, v71);
        sub_2216AE0(&v77, (__int64 *)(*(_QWORD *)(v15 + 128) + 8LL * v34), 0);
      }
      result = v12 + 1;
      if ( v69 == v12 + 1 )
      {
        v12 = v69;
        if ( v69 == v76 )
          return result;
      }
      else if ( (unsigned __int64)v12[1] < 0xFFFFFFFFFFFFFFFELL )
      {
        ++v12;
        if ( result == v76 )
          return result;
      }
      else
      {
        result = v12 + 2;
        do
        {
          v12 = result;
          if ( v69 == result )
            break;
          ++result;
        }
        while ( (unsigned __int64)*v12 >= 0xFFFFFFFFFFFFFFFELL );
        if ( v12 == v76 )
          return result;
      }
    }
  }
  return result;
}
