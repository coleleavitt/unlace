__int64 __fastcall sub_E4A3D0(__int64 a1)
{
  __int64 v2; // r12
  __int64 (__fastcall *v3)(); // rax
  __int64 v4; // r13
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // r14
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 (__fastcall *v12)(); // rax
  __int64 v13; // r14
  __int64 (__fastcall *v14)(); // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 (__fastcall *v18)(); // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 (__fastcall *v22)(); // rax
  __int64 v23; // r12
  __int64 (__fastcall *v24)(); // rax
  __int64 v25; // r13
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // r14
  __int64 (__fastcall *v28)(); // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // r12
  __int64 (__fastcall *v36)(); // rax
  __int64 v37; // r13
  __int64 (__fastcall *v38)(); // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 (__fastcall *v42)(); // rax
  __int64 v43; // rdi
  __int64 v44; // rdi

  v2 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 96) = 1;
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 192LL);
  if ( v3 != sub_E4A3D0 )
    goto LABEL_19;
  v4 = *(_QWORD *)(v2 + 104);
  *(_BYTE *)(v2 + 96) = 1;
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 192LL);
  if ( v5 != sub_E4A3D0 )
    goto LABEL_44;
  v6 = *(_QWORD *)(v4 + 104);
  *(_BYTE *)(v4 + 96) = 1;
  v7 = *(__int64 (__fastcall **)())(*(_QWORD *)v6 + 192LL);
  if ( v7 == sub_E4A3D0 )
  {
    v8 = *(_QWORD *)(v6 + 104);
    *(_BYTE *)(v6 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 112) + 192LL))(*(_QWORD *)(v6 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v7)(v6);
  }
  v4 = *(_QWORD *)(v4 + 112);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 192LL);
  if ( v5 == sub_E4A3D0
    && (v9 = *(_QWORD *)(v4 + 104),
        *(_BYTE *)(v4 + 96) = 1,
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 192LL))(v9),
        v4 = *(_QWORD *)(v4 + 112),
        v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 192LL),
        v5 == sub_E4A3D0) )
  {
    v10 = *(_QWORD *)(v4 + 104);
    *(_BYTE *)(v4 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 192LL))(v10);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 112) + 192LL))(*(_QWORD *)(v4 + 112));
  }
  else
  {
LABEL_44:
    ((void (__fastcall *)(__int64))v5)(v4);
  }
  v2 = *(_QWORD *)(v2 + 112);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 192LL);
  if ( v3 != sub_E4A3D0 )
    goto LABEL_19;
  v11 = *(_QWORD *)(v2 + 104);
  *(_BYTE *)(v2 + 96) = 1;
  v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 192LL);
  if ( v12 != sub_E4A3D0 )
    goto LABEL_46;
  v13 = *(_QWORD *)(v11 + 104);
  *(_BYTE *)(v11 + 96) = 1;
  v14 = *(__int64 (__fastcall **)())(*(_QWORD *)v13 + 192LL);
  if ( v14 == sub_E4A3D0 )
  {
    v15 = *(_QWORD *)(v13 + 104);
    *(_BYTE *)(v13 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 192LL))(v15);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 112) + 192LL))(*(_QWORD *)(v13 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v14)(v13);
  }
  v11 = *(_QWORD *)(v11 + 112);
  v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 192LL);
  if ( v12 == sub_E4A3D0 )
  {
    v16 = *(_QWORD *)(v11 + 104);
    *(_BYTE *)(v11 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 192LL))(v16);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 112) + 192LL))(*(_QWORD *)(v11 + 112));
  }
  else
  {
LABEL_46:
    ((void (__fastcall *)(__int64))v12)(v11);
  }
  v2 = *(_QWORD *)(v2 + 112);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 192LL);
  if ( v3 != sub_E4A3D0 )
    goto LABEL_19;
  v17 = *(_QWORD *)(v2 + 104);
  *(_BYTE *)(v2 + 96) = 1;
  v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 192LL);
  if ( v18 == sub_E4A3D0 )
  {
    v19 = *(_QWORD *)(v17 + 104);
    *(_BYTE *)(v17 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 192LL))(v19);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 112) + 192LL))(*(_QWORD *)(v17 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v18)(v17);
  }
  v2 = *(_QWORD *)(v2 + 112);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 192LL);
  if ( v3 == sub_E4A3D0 )
  {
    v20 = *(_QWORD *)(v2 + 104);
    *(_BYTE *)(v2 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 192LL))(v20);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 112) + 192LL))(*(_QWORD *)(v2 + 112));
  }
  else
  {
LABEL_19:
    ((void (__fastcall *)(__int64))v3)(v2);
  }
  v21 = *(_QWORD *)(a1 + 112);
  v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 192LL);
  if ( v22 != sub_E4A3D0 )
    return ((__int64 (__fastcall *)(__int64))v22)(v21);
  v23 = *(_QWORD *)(v21 + 104);
  *(_BYTE *)(v21 + 96) = 1;
  v24 = *(__int64 (__fastcall **)())(*(_QWORD *)v23 + 192LL);
  if ( v24 != sub_E4A3D0 )
    goto LABEL_45;
  v25 = *(_QWORD *)(v23 + 104);
  *(_BYTE *)(v23 + 96) = 1;
  v26 = *(__int64 (__fastcall **)())(*(_QWORD *)v25 + 192LL);
  if ( v26 != sub_E4A3D0 )
    goto LABEL_47;
  v27 = *(_QWORD *)(v25 + 104);
  *(_BYTE *)(v25 + 96) = 1;
  v28 = *(__int64 (__fastcall **)())(*(_QWORD *)v27 + 192LL);
  if ( v28 == sub_E4A3D0 )
  {
    v29 = *(_QWORD *)(v27 + 104);
    *(_BYTE *)(v27 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 192LL))(v29);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 112) + 192LL))(*(_QWORD *)(v27 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v28)(v27);
  }
  v25 = *(_QWORD *)(v25 + 112);
  v26 = *(__int64 (__fastcall **)())(*(_QWORD *)v25 + 192LL);
  if ( v26 == sub_E4A3D0 )
  {
    v30 = *(_QWORD *)(v25 + 104);
    *(_BYTE *)(v25 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 192LL))(v30);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 112) + 192LL))(*(_QWORD *)(v25 + 112));
  }
  else
  {
LABEL_47:
    ((void (__fastcall *)(__int64))v26)(v25);
  }
  v23 = *(_QWORD *)(v23 + 112);
  v24 = *(__int64 (__fastcall **)())(*(_QWORD *)v23 + 192LL);
  if ( v24 != sub_E4A3D0 )
    goto LABEL_45;
  v31 = *(_QWORD *)(v23 + 104);
  *(_BYTE *)(v23 + 96) = 1;
  v32 = *(__int64 (__fastcall **)())(*(_QWORD *)v31 + 192LL);
  if ( v32 == sub_E4A3D0 )
  {
    v33 = *(_QWORD *)(v31 + 104);
    *(_BYTE *)(v31 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 192LL))(v33);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 112) + 192LL))(*(_QWORD *)(v31 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v32)(v31);
  }
  v23 = *(_QWORD *)(v23 + 112);
  v24 = *(__int64 (__fastcall **)())(*(_QWORD *)v23 + 192LL);
  if ( v24 == sub_E4A3D0 )
  {
    v34 = *(_QWORD *)(v23 + 104);
    *(_BYTE *)(v23 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 192LL))(v34);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 112) + 192LL))(*(_QWORD *)(v23 + 112));
  }
  else
  {
LABEL_45:
    ((void (__fastcall *)(__int64))v24)(v23);
  }
  v21 = *(_QWORD *)(v21 + 112);
  v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 192LL);
  if ( v22 != sub_E4A3D0 )
    return ((__int64 (__fastcall *)(__int64))v22)(v21);
  v35 = *(_QWORD *)(v21 + 104);
  *(_BYTE *)(v21 + 96) = 1;
  v36 = *(__int64 (__fastcall **)())(*(_QWORD *)v35 + 192LL);
  if ( v36 != sub_E4A3D0 )
    goto LABEL_48;
  v37 = *(_QWORD *)(v35 + 104);
  *(_BYTE *)(v35 + 96) = 1;
  v38 = *(__int64 (__fastcall **)())(*(_QWORD *)v37 + 192LL);
  if ( v38 == sub_E4A3D0 )
  {
    v39 = *(_QWORD *)(v37 + 104);
    *(_BYTE *)(v37 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 192LL))(v39);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + 112) + 192LL))(*(_QWORD *)(v37 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v38)(v37);
  }
  v35 = *(_QWORD *)(v35 + 112);
  v36 = *(__int64 (__fastcall **)())(*(_QWORD *)v35 + 192LL);
  if ( v36 == sub_E4A3D0 )
  {
    v40 = *(_QWORD *)(v35 + 104);
    *(_BYTE *)(v35 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 192LL))(v40);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 112) + 192LL))(*(_QWORD *)(v35 + 112));
  }
  else
  {
LABEL_48:
    ((void (__fastcall *)(__int64))v36)(v35);
  }
  v21 = *(_QWORD *)(v21 + 112);
  v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 192LL);
  if ( v22 != sub_E4A3D0 )
    return ((__int64 (__fastcall *)(_QWORD))v22)(v21);
  v41 = *(_QWORD *)(v21 + 104);
  *(_BYTE *)(v21 + 96) = 1;
  v42 = *(__int64 (__fastcall **)())(*(_QWORD *)v41 + 192LL);
  if ( v42 == sub_E4A3D0 )
  {
    v43 = *(_QWORD *)(v41 + 104);
    *(_BYTE *)(v41 + 96) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 192LL))(v43);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + 112) + 192LL))(*(_QWORD *)(v41 + 112));
  }
  else
  {
    ((void (__fastcall *)(__int64))v42)(v41);
  }
  v21 = *(_QWORD *)(v21 + 112);
  v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 192LL);
  if ( v22 != sub_E4A3D0 )
    return ((__int64 (__fastcall *)(_QWORD))v22)(v21);
  v44 = *(_QWORD *)(v21 + 104);
  *(_BYTE *)(v21 + 96) = 1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 192LL))(v44);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 112) + 192LL))(*(_QWORD *)(v21 + 112));
}

