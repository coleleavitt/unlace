__int64 __fastcall sub_7986E0(_QWORD *a1, __int64 a2, signed int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  size_t v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // ebx
  __int64 v28; // rax
  void *v29; // rax
  const void *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34[2]; // [rsp+0h] [rbp-D8h]
  int v35[2]; // [rsp+0h] [rbp-D8h]
  size_t n; // [rsp+8h] [rbp-D0h]
  __int64 v37; // [rsp+10h] [rbp-C8h] BYREF
  int v38[2]; // [rsp+18h] [rbp-C0h]
  int v39[4]; // [rsp+20h] [rbp-B8h]
  void *v40; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-A0h]
  int v42[4]; // [rsp+40h] [rbp-98h]
  __int64 v43; // [rsp+50h] [rbp-88h] BYREF
  __int128 v44; // [rsp+58h] [rbp-80h]
  __int64 v45; // [rsp+68h] [rbp-70h]
  char v46[8]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v47; // [rsp+78h] [rbp-60h]
  __int64 v48; // [rsp+88h] [rbp-50h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( a3 != -1 && (unsigned __int64)-a3 < qword_2C7C620 )
      goto LABEL_3;
LABEL_20:
    v26 = 0;
    set_error_string(0, "?");
    set_qerrno(88);
    sub_799390((int)a1);
    return v26;
  }
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1[1] + 8LL) )
    goto LABEL_20;
LABEL_3:
  v12 = a1[10];
  v13 = a1[4];
  v14 = a1[9];
  if ( a1[11] < (unsigned __int64)(v12 + 1) )
  {
    *(_QWORD *)v35 = a1[4];
    v32 = qvector_reserve(a1 + 9, v14, v12 + 1, 4);
    LODWORD(v13) = v35[0];
    a1[9] = v32;
    v14 = v32;
    v12 = a1[10];
  }
  *(_DWORD *)(v14 + 4 * v12) = v13;
  ++a1[10];
  *(_QWORD *)v34 = a1 + 3;
  ++*(_DWORD *)(a2 + 48);
  v15 = a1[4];
  LOBYTE(v37) = 5;
  v16 = a1[3];
  *(_QWORD *)v38 = a2;
  *(_OWORD *)v39 = 0;
  if ( a1[5] < (unsigned __int64)(v15 + 1) )
  {
    v28 = qvector_reserve(*(_QWORD *)v34, v16, v15 + 1, 32);
    a1[3] = v28;
    v16 = v28;
    v15 = a1[4];
  }
  v17 = v16 + 32 * v15;
  *(_BYTE *)v17 = 2;
  *(_QWORD *)(v17 + 24) = 0;
  *(_OWORD *)(v17 + 8) = 0;
  ++a1[4];
  move_idcv(v17, &v37);
  v18 = *(_QWORD *)(a4 + 8);
  v40 = &byte_7;
  v41 = 0;
  *(_OWORD *)v42 = 0;
  if ( v18 )
  {
    n = v18;
    v29 = (void *)qalloc_or_throw(v18);
    v30 = *(const void **)a4;
    v41 = (__int64)v29;
    *(_QWORD *)&v42[2] = n;
    memcpy(v29, v30, n);
    *(_QWORD *)v42 = n;
  }
  v19 = a1[4];
  v20 = a1[3];
  if ( a1[5] < (unsigned __int64)(v19 + 1) )
  {
    v31 = qvector_reserve(*(_QWORD *)v34, v20, v19 + 1, 32);
    a1[3] = v31;
    v20 = v31;
    v19 = a1[4];
  }
  v21 = v20 + 32 * v19;
  *(_BYTE *)v21 = 2;
  *(_QWORD *)(v21 + 24) = 0;
  *(_OWORD *)(v21 + 8) = 0;
  ++a1[4];
  move_idcv(v21, &v40);
  if ( a6 )
  {
    v25 = sub_795CA0(a1, a5, nullptr, a3);
  }
  else
  {
    LOBYTE(v43) = 2;
    v44 = 0;
    v45 = 0;
    copy_idcv(&v43);
    v46[0] = 2;
    v47 = 0;
    v48 = 0;
    copy_idcv(v46);
    v22 = a1[4];
    v23 = a1[3];
    if ( a1[5] < (unsigned __int64)(v22 + 1) )
    {
      v33 = qvector_reserve(*(_QWORD *)v34, v23, v22 + 1, 32);
      a1[3] = v33;
      v23 = v33;
      v22 = a1[4];
    }
    v24 = v23 + 32 * v22;
    *(_BYTE *)v24 = 2;
    *(_QWORD *)(v24 + 24) = 0;
    *(_OWORD *)(v24 + 8) = 0;
    copy_idcv(v24);
    ++a1[4];
    free_idcv(v46);
    free_idcv(&v43);
    v25 = sub_795CA0(a1, 0, nullptr, a3);
  }
  v26 = v25;
  free_idcv(&v40);
  free_idcv(&v37);
  return v26;
}
