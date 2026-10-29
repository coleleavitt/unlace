__int64 __fastcall sub_4481D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // r14
  _QWORD *v9; // r15
  std::ios_base *v10; // rbp
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rax
  bool v23; // zf
  _QWORD *v25; // rbx
  __int64 (__fastcall *v26)(__int64, _QWORD *); // rax
  _QWORD *v27; // rbp
  __int64 (__fastcall *v28)(__int64, _QWORD *); // rdx
  _QWORD *v29; // r12
  __int64 (__fastcall *v30)(__int64, _QWORD *); // rax
  _QWORD *v31; // r13
  __int64 (__fastcall *v32)(__int64, _QWORD *); // rdx
  __int64 v33; // r15
  __int64 (__fastcall *v34)(__int64, _QWORD *); // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  __int64 (__fastcall *v41)(__int64, _QWORD *); // rax
  _QWORD *v42; // r12
  __int64 (__fastcall *v43)(__int64, _QWORD *); // rdx
  _QWORD *v44; // r15
  __int64 (__fastcall *v45)(__int64, _QWORD *); // rax
  _QWORD *v46; // rdx
  __int64 (__fastcall *v47)(__int64, _QWORD *); // rcx
  _QWORD **v48; // rax
  __int64 (__fastcall *v49)(__int64, _QWORD *); // r8
  _QWORD **v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // [rsp+0h] [rbp-78h]
  _QWORD **v58; // [rsp+0h] [rbp-78h]
  __int64 v59; // [rsp+0h] [rbp-78h]
  void *v61; // [rsp+10h] [rbp-68h]
  __int64 v62; // [rsp+10h] [rbp-68h]
  __int64 v63; // [rsp+18h] [rbp-60h]
  _QWORD v64[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v65[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 144);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
  if ( a4 )
    sub_E5EBF0(*(_QWORD *)(a1 + 144), a4);
  v9 = *(_QWORD **)(a2 + 8);
  v10 = *(std::ios_base **)(a1 + 144);
  if ( v9 )
  {
    v11 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v11 )
    {
      do
        sub_E5EBF0(v10, *v9++);
      while ( v11 != v9 );
      v10 = *(std::ios_base **)(a1 + 144);
    }
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( !v12 || !*(_DWORD *)(v12 - 4) )
    goto LABEL_22;
  (*(void (__fastcall **)(std::ios_base *))(*(_QWORD *)v10 + 192LL))(v10);
  v64[0] = 0;
  v13 = *(_QWORD *)(a1 + 40);
  v64[1] = 0;
  v63 = v13;
  v65[0] = 1;
  v65[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v65);
  v17 = *(_QWORD *)(a1 + 56);
  BYTE4(v65[0]) &= ~1u;
  LODWORD(v65[0]) = 1;
  if ( !v17 )
  {
    sub_16669E0(a1 + 48);
    v17 = *(_QWORD *)(a1 + 56);
  }
  v18 = sub_166A700(v17, (unsigned int)v64, 0, v14, v15, v16);
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v64);
  sub_182CBA0(v61, v65);
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v19 = *(_QWORD *)(a3 + 8);
  if ( v19 )
  {
    v57 = v19 + 8LL * *(unsigned int *)(v19 - 4);
    if ( v57 != v19 )
    {
      v20 = *(_QWORD *)(a3 + 8);
      do
      {
        v21 = *(_QWORD *)(a1 + 144);
        v22 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        sub_E5EBF0(v21, v22);
        v20 += 8;
      }
      while ( v57 != v20 );
    }
  }
  if ( (unsigned int)sub_E60CB0(*(std::ios_base **)(a1 + 144), 0, 0) == 1 )
  {
    v40 = *(_QWORD **)(a1 + 144);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v40 + 32LL);
    if ( v41 != sub_41C670 )
    {
      v41((__int64)v40, a5);
      goto LABEL_64;
    }
    v42 = (_QWORD *)v40[12];
    v43 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v42 + 32LL);
    if ( v43 != v41 )
    {
      v43(v40[12], a5);
      goto LABEL_61;
    }
    v44 = (_QWORD *)v42[12];
    v45 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v44 + 32LL);
    if ( v45 != v43 )
    {
      v45(v42[12], a5);
      goto LABEL_58;
    }
    v46 = (_QWORD *)v44[12];
    v47 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v46 + 32LL);
    if ( v47 == v45 )
    {
      v48 = (_QWORD **)v46[12];
      v62 = v44[12];
      v49 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v48)[4];
      v58 = v48;
      if ( v49 == v47 )
      {
        sub_39A840(v48[12], a5);
        v50 = v58;
        v51 = v62;
      }
      else
      {
        v49((__int64)v48, a5);
        v51 = v62;
        v50 = v58;
      }
      if ( !*a5 )
        goto LABEL_67;
      v52 = v50[7];
      if ( !v52 )
      {
LABEL_56:
        v53 = *(_QWORD *)(v51 + 56);
        if ( !v53 )
        {
LABEL_59:
          v54 = v44[7];
          if ( !v54 )
          {
LABEL_62:
            v55 = v42[7];
            if ( !v55 )
              goto LABEL_65;
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v55 + 32LL))(v55, a5);
LABEL_64:
            if ( *a5 )
            {
LABEL_65:
              v56 = v40[7];
              if ( v56 )
                (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v56 + 32LL))(v56, a5);
            }
LABEL_67:
            if ( v18 )
            {
              v23 = (*(_DWORD *)(v18 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(v63, v18);
            }
            (*(void (__fastcall **)(std::ios_base *, __int64, __int64))(*(_QWORD *)v10 + 200LL))(v10, 1, v51);
            goto LABEL_45;
          }
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v54 + 32LL))(v54, a5);
LABEL_61:
          if ( !*a5 )
            goto LABEL_67;
          goto LABEL_62;
        }
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v53 + 32LL))(v53, a5);
LABEL_58:
        if ( !*a5 )
          goto LABEL_67;
        goto LABEL_59;
      }
      v59 = v51;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v52 + 32LL))(v52, a5);
    }
    else
    {
      v59 = v44[12];
      v47((__int64)v46, a5);
    }
    v51 = v59;
    if ( !*a5 )
      goto LABEL_67;
    goto LABEL_56;
  }
  if ( v18 )
  {
    v23 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v63, v18);
  }
  (*(void (__fastcall **)(std::ios_base *, __int64))(*(_QWORD *)v10 + 200LL))(v10, 1);
  v10 = *(std::ios_base **)(a1 + 144);
LABEL_22:
  if ( (unsigned int)sub_E60CB0(v10, 0, 0) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 337);
  }
  v25 = *(_QWORD **)(a1 + 144);
  v26 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v25 + 32LL);
  if ( v26 != sub_41C670 )
  {
    v26((__int64)v25, a5);
    goto LABEL_42;
  }
  v27 = (_QWORD *)v25[12];
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v27 + 32LL);
  if ( v28 != v26 )
  {
    v28(v25[12], a5);
    goto LABEL_39;
  }
  v29 = (_QWORD *)v27[12];
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v29 + 32LL);
  if ( v30 != v28 )
  {
    v30(v27[12], a5);
    goto LABEL_36;
  }
  v31 = (_QWORD *)v29[12];
  v32 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v31 + 32LL);
  if ( v32 != v30 )
  {
    v32(v29[12], a5);
    goto LABEL_33;
  }
  v33 = v31[12];
  v34 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v33 + 32LL);
  if ( v34 == v32 )
    sub_39A840(*(_QWORD **)(v33 + 96), a5);
  else
    v34(v31[12], a5);
  if ( *a5 )
  {
    v35 = *(_QWORD *)(v33 + 56);
    if ( !v35 )
    {
LABEL_34:
      v36 = v31[7];
      if ( !v36 )
      {
LABEL_37:
        v37 = v29[7];
        if ( !v37 )
        {
LABEL_40:
          v38 = v27[7];
          if ( !v38 )
          {
LABEL_43:
            v39 = v25[7];
            if ( v39 )
              (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v39 + 32LL))(v39, a5);
            goto LABEL_45;
          }
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v38 + 32LL))(v38, a5);
LABEL_42:
          if ( !*a5 )
            goto LABEL_45;
          goto LABEL_43;
        }
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 32LL))(v37, a5);
LABEL_39:
        if ( !*a5 )
          goto LABEL_45;
        goto LABEL_40;
      }
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v36 + 32LL))(v36, a5);
LABEL_36:
      if ( !*a5 )
        goto LABEL_45;
      goto LABEL_37;
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v35 + 32LL))(v35, a5);
LABEL_33:
    if ( !*a5 )
      goto LABEL_45;
    goto LABEL_34;
  }
LABEL_45:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 200LL))(v8, 1);
  return 1;
}

