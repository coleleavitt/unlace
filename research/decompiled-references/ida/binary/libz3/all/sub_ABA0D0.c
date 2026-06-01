__int64 __fastcall sub_ABA0D0(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rdi
  __int64 result; // rax
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r14d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_B6E740(*(_QWORD *)(a1 + 16));
  sub_AB3F30(a1, a2, v6, v7, v8, v9);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8656) + 8LL * *a2);
  v12 = *(_QWORD **)(a1 + 544);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v26 = (3 * v13 + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v27 || v13 >= v26 )
        goto LABEL_18;
      v28 = (unsigned int *)sub_186B300(v12 - 1, v27);
      v10 = *(_QWORD *)(a1 + 16);
      v29 = v28[1];
      v12 = v28 + 2;
      *v28 = v26;
      *(_QWORD *)(a1 + 544) = v28 + 2;
      LODWORD(v28) = v29;
      v16 = &v12[v29];
      v15 = (_DWORD)v28 + 1;
    }
    else
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = &v12[v14];
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x18u);
    v10 = *(_QWORD *)(a1 + 16);
    v12 = v35 + 1;
    *v35 = 2;
    v15 = 1;
    *(_QWORD *)(a1 + 544) = v12;
    v16 = v12;
  }
  *v16 = v11;
  *((_DWORD *)v12 - 1) = v15;
  v17 = (_QWORD *)sub_180C100(v10 + 8400, 16);
  v18 = *(_QWORD **)(v10 + 9456);
  v19 = v17;
  *v17 = off_1C56790;
  v17[1] = a1 + 544;
  if ( v18 )
  {
    v20 = *((_DWORD *)v18 - 1);
    if ( v20 != *((_DWORD *)v18 - 2) )
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v18[v21];
      goto LABEL_7;
    }
    v30 = (3 * v20 + 1) >> 1;
    v31 = 8 * v30 + 8;
    if ( 8 * v20 + 8 < (unsigned int)v31 && v20 < v30 )
    {
      v32 = (unsigned int *)sub_186B300(v18 - 1, v31);
      v33 = v32[1];
      v18 = v32 + 2;
      *(_QWORD *)(v10 + 9456) = v32 + 2;
      *v32 = v30;
      LODWORD(v32) = v33;
      v23 = &v18[v33];
      v22 = (_DWORD)v32 + 1;
      goto LABEL_7;
    }
LABEL_18:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_139F3A(v36, "Overflow encountered when expanding vector", v3);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v36);
    sub_233E40((__int64)v36);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v34 = (_QWORD *)sub_186B270(0x18u);
  v18 = v34 + 1;
  *v34 = 2;
  v22 = 1;
  *(_QWORD *)(v10 + 9456) = v18;
  v23 = v18;
LABEL_7:
  *v23 = v19;
  v24 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v18 - 1) = v22;
  result = sub_8E7030(v24);
  if ( !(_DWORD)result )
    return sub_AB71C0(a1, (__int64)a2);
  return result;
}

