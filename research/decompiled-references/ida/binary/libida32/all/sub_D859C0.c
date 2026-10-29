__int64 __fastcall sub_D859C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 (*v13)(void); // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 (__fastcall *v27)(__int64); // rax
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD **v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rax
  _QWORD **v36; // rdi
  __int64 (*v37)(void); // rax
  __int64 v38; // rbx
  void *v39; // rax
  void *v40; // rcx
  __int64 *v41; // rsi
  __int64 *v42; // rsi
  int v43; // eax
  unsigned int v44; // ebx
  unsigned __int64 *v46; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+8h] [rbp-D0h] BYREF
  int v48; // [rsp+1Ch] [rbp-BCh] BYREF
  __m128 v49; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 *v50; // [rsp+30h] [rbp-A8h]
  __int64 v51; // [rsp+38h] [rbp-A0h]
  unsigned __int64 *v52; // [rsp+40h] [rbp-98h]
  unsigned __int64 v53; // [rsp+50h] [rbp-88h] BYREF
  void *v54; // [rsp+58h] [rbp-80h]
  void *ptr; // [rsp+60h] [rbp-78h]
  __int64 v56; // [rsp+68h] [rbp-70h]
  _BYTE v57[104]; // [rsp+70h] [rbp-68h] BYREF

  v8 = *(_DWORD *)(a3 + 24);
  v47 = a2;
  v46 = a5;
  if ( v8 == 1 )
  {
    v10 = *(_QWORD *)(a3 + 32);
  }
  else if ( v8 )
  {
    v10 = 0;
    if ( v8 != 2 && v8 != 3 )
      v10 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL);
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 32);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      v11 = *(unsigned int *)(a3 + 40);
      if ( *(_DWORD *)(v10 + 24) != (_DWORD)v11 && (_DWORD)v11 )
        v10 = *(_QWORD *)(v9 + v11 + 32);
    }
    else
    {
      v10 = 64;
    }
  }
  v12 = *(_QWORD **)(a1 + 24);
  v13 = *(__int64 (**)(void))(*v12 + 104LL);
  if ( (char *)v13 == (char *)sub_D66930
    && (v14 = (_QWORD *)v12[3], v13 = *(__int64 (**)(void))(*v14 + 104LL), (char *)v13 == (char *)sub_D66930)
    && (v15 = (_QWORD *)v14[3], v13 = *(__int64 (**)(void))(*v15 + 104LL), (char *)v13 == (char *)sub_D66930)
    && (v16 = (_QWORD **)v15[3], v13 = (__int64 (*)(void))(*v16)[13], (char *)v13 == (char *)sub_D66930) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
  }
  else
  {
    v19 = v13();
  }
  v21 = sub_CCBA70(v10, v19, v17, v18, v20);
  v22 = *(_DWORD *)(a4 + 24);
  if ( v22 == 1 )
  {
    v24 = *(_QWORD *)(a4 + 32);
    goto LABEL_17;
  }
  if ( v22 )
  {
    v24 = 0;
    if ( v22 == 2 || v22 == 3 )
      goto LABEL_17;
LABEL_44:
    v24 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 32LL);
    goto LABEL_17;
  }
  v23 = *(_QWORD *)(a4 + 32);
  if ( !v23 )
    goto LABEL_44;
  v24 = *(_QWORD *)(v23 + 32);
  v25 = *(unsigned int *)(a4 + 40);
  if ( *(_DWORD *)(v24 + 24) != (_DWORD)v25 && (_DWORD)v25 )
  {
    v26 = *(_QWORD **)(a1 + 24);
    v24 = *(_QWORD *)(v23 + v25 + 32);
    v27 = *(__int64 (__fastcall **)(__int64))(*v26 + 104LL);
    if ( v27 == sub_D66930 )
      goto LABEL_18;
LABEL_37:
    v33 = ((__int64 (*)(void))v27)();
    goto LABEL_22;
  }
LABEL_17:
  v26 = *(_QWORD **)(a1 + 24);
  v27 = *(__int64 (__fastcall **)(__int64))(*v26 + 104LL);
  if ( v27 != sub_D66930 )
    goto LABEL_37;
LABEL_18:
  v28 = (_QWORD *)v26[3];
  v27 = *(__int64 (__fastcall **)(__int64))(*v28 + 104LL);
  if ( v27 != sub_D66930 )
    goto LABEL_37;
  v29 = (_QWORD *)v28[3];
  v27 = *(__int64 (__fastcall **)(__int64))(*v29 + 104LL);
  if ( v27 != sub_D66930 )
    goto LABEL_37;
  v30 = (_QWORD **)v29[3];
  v27 = (__int64 (__fastcall *)(__int64))(*v30)[13];
  if ( v27 != sub_D66930 )
    goto LABEL_37;
  v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v30[3] + 104LL))(v30[3]);
LABEL_22:
  v35 = sub_CCBA70(v24, v33, v31, v32, v34);
  if ( (unsigned __int8)sub_D80670(a1, v47, v35, 1u) && (unsigned __int8)sub_D80670(a1, v47, v21, 0) )
  {
    v36 = *(_QWORD ***)(a1 + 24);
    v37 = (__int64 (*)(void))(*v36)[13];
    if ( (char *)v37 == (char *)sub_D66930 )
      v38 = (*(__int64 (__fastcall **)(_QWORD *))(*v36[3] + 104LL))(v36[3]);
    else
      v38 = v37();
    v54 = nullptr;
    ptr = v57;
    v53 = 8LL * (_QWORD)v46;
    v56 = 0x300000000LL;
    v39 = (void *)operator new[]((unsigned int)v46);
    v40 = v39;
    if ( (_DWORD)v46 )
      v40 = memset(v39, 0, (unsigned int)v46);
    v54 = v40;
    v41 = *(__int64 **)(a1 + 184);
    v46 = &v53;
    v48 = *(unsigned __int8 *)(*(_QWORD *)(*v41 + 17448) + 272LL);
    v46 = (unsigned __int64 *)&v48;
    v49 = _mm_loadh_ps((const double *)&v46);
    sub_D7F2B0(
      (unsigned int *)a3,
      v41,
      0,
      v53,
      (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_D7D330,
      (__int64)&v49);
    v42 = *(__int64 **)(a1 + 184);
    v43 = *(unsigned __int8 *)(*(_QWORD *)(v38 + 17448) + 272LL);
    v49.m128_u64[0] = v38;
    v49.m128_u64[1] = (unsigned __int64)&v53;
    v48 = v43;
    v51 = a1;
    v50 = v46;
    v52 = &v47;
    v44 = sub_D7F2B0(
            (unsigned int *)a4,
            v42,
            0,
            v53,
            (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_D7DC40,
            (__int64)&v49);
    if ( ptr != v57 )
      free(ptr);
    if ( v54 )
      operator delete[](v54);
  }
  else
  {
    return 0;
  }
  return v44;
}

