__int64 __fastcall sub_179CEA0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rbp
  __int64 (__fastcall **v19)(_QWORD); // rax
  __int64 v20; // r13
  _BYTE *v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // r14d
  char v25; // r15
  __int64 *v26; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  char v31; // dl
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx

  v7 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(v7 + 8) & 7LL;
  v9 = v8 | (*(__int64 *)(v7 + 8) >> 3) & 1;
  if ( v9 )
    v7 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v8, v9, a5);
  v12 = sub_F63270(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, a5, a6);
  v15 = *(_QWORD *)(**a1 + 40);
  if ( (*(_DWORD *)(**a1 + 40) & 7) == 4 )
  {
    v34 = a1[1][31];
    v35 = v12[6];
    if ( v35 )
    {
      v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      v37 = v36;
    }
    else
    {
      v36 = sub_A7AA70(v34, (__int64)v12, v10, v11, v13, v14);
      v34 = a1[1][31];
      v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v15 = sub_B87700(
            v34 + 17536,
            *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)(v37 + 8) | (unsigned __int8)v36) & 7);
  }
  v16 = sub_B94670((unsigned __int64)(v12 + 8), v15, v10, v11, v13, v14);
  if ( !v16 )
    return 0;
  while ( 1 )
  {
    v17 = v16;
    v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = *(__int64 (__fastcall ***)(_QWORD))(v16 & 0xFFFFFFFFFFFFFFF8LL);
    v20 = (v17 >> 2) & 1;
    if ( !(_DWORD)v20 )
    {
      v33 = v18;
LABEL_35:
      v21 = (_BYTE *)v19[4](v33);
      if ( (v21[28] & 0x7Fu) - 35 > 3 )
        return 0;
      goto LABEL_8;
    }
    if ( !v18 )
    {
      v33 = 0;
      goto LABEL_35;
    }
    v21 = (_BYTE *)(*((__int64 (__fastcall **)(_QWORD))*v19 + 4))(v19);
    if ( (v21[28] & 0x7Fu) - 35 > 3 )
      goto LABEL_13;
LABEL_8:
    v22 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v21 + 32LL))(v21);
    if ( (*(_QWORD *)(v22 + 80) & 0x40000LL) != 0
      || ((*(_QWORD *)(v22 + 80) >> 16) & 8) != 0
      || (unsigned int)sub_B984E0(v22) )
    {
      v25 = sub_1BDD090(a1[1], **a1, v21, 0, 1);
      if ( !v25 )
      {
        v23 = sub_184AAD0(a1[1], **a1, v21);
        if ( (_BYTE)v23 )
          break;
      }
    }
    if ( !(_DWORD)v20 || !v18 )
      return 0;
LABEL_13:
    v16 = *(_QWORD *)(v18 + 8);
    if ( !v16 )
      return 0;
  }
  v26 = a1[2];
  if ( *((_BYTE *)v26 + 20) )
  {
    v27 = (_QWORD *)*v26;
    v28 = *((unsigned int *)v26 + 3);
    v29 = (_QWORD *)(*v26 + 8 * v28);
    if ( (_QWORD *)*v26 != v29 )
    {
      v30 = (_QWORD *)*v26;
      if ( (_BYTE *)*v27 == v21 )
      {
LABEL_42:
        v32 = &v27[*((unsigned int *)v26 + 3)];
        goto LABEL_27;
      }
      while ( v29 != ++v30 )
      {
        if ( (_BYTE *)*v30 == v21 )
          goto LABEL_42;
      }
    }
    if ( (unsigned int)v28 < *((_DWORD *)v26 + 2) )
    {
      v25 = *((_BYTE *)v26 + 20);
      *((_DWORD *)v26 + 3) = v28 + 1;
      *v29 = v21;
      v27 = (_QWORD *)*v26;
      v30 = (_QWORD *)(*v26 + 8 * v28);
      goto LABEL_42;
    }
  }
  v30 = (_QWORD *)sub_2236760(a1[2], v21);
  v25 = v31;
  v27 = (_QWORD *)*v26;
  if ( *((_BYTE *)v26 + 20) )
    goto LABEL_42;
  v32 = &v27[*((unsigned int *)v26 + 2)];
LABEL_27:
  if ( v32 != v30 && (*v30 == -2 || *v30 == -1) )
  {
    do
      ++v30;
    while ( v32 != v30 && *v30 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v25 )
  {
    sub_B98480(**a1, (__int64)v21);
    sub_184FEA0(a1[1], **a1, v21);
    ((void (__fastcall *)(__int64 *, __int64, _BYTE *))sub_1865380)(a1[1], **a1, v21);
    sub_18B4F10(a1[1], **a1, v21);
    sub_1871500(a1[1], **a1, v21);
  }
  return v23;
}
