void __fastcall sub_209D750(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 *v7; // r12
  __int64 *v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  void (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64, __int64, double); // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+38h] [rbp-1C0h] BYREF
  void *v37; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-1B0h]
  _BYTE v39[64]; // [rsp+50h] [rbp-1A8h] BYREF
  void *ptr; // [rsp+90h] [rbp-168h] BYREF
  __int64 v41; // [rsp+98h] [rbp-160h]
  _BYTE v42[64]; // [rsp+A0h] [rbp-158h] BYREF
  void *v43; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-110h]
  _BYTE v45[96]; // [rsp+F0h] [rbp-108h] BYREF
  void *v46; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+158h] [rbp-A0h]
  _BYTE v48[152]; // [rsp+160h] [rbp-98h] BYREF

  v5 = operator new(0x20u);
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_OWORD *)v5 = 0;
  sub_20BFA60(a2, v5);
  v43 = v45;
  v44 = 0xC00000000LL;
  if ( !a3 )
  {
    sub_20962E0(a1 + 16, (__int64)a2);
    v32 = v43;
    if ( v43 == v45 )
      return;
    goto LABEL_27;
  }
  v47 = 0xC00000000LL;
  v46 = v48;
  v37 = v39;
  ptr = v42;
  v6 = *(_DWORD *)(a1 + 376);
  v38 = 0x800000000LL;
  v41 = 0x800000000LL;
  sub_209AC40(a1, (__int64)&v37, (__int64)&ptr, (__int64)a2);
  v7 = (__int64 *)v37;
  v8 = (__int64 *)((char *)v37 + 8 * (unsigned int)v38);
  if ( v8 != v37 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *v7;
        if ( v6 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v7 + 8) + 24LL) + 376LL) )
          break;
        v14 = *v7++;
        sub_20962E0((__int64)&v46, v14);
        if ( v8 == v7 )
          goto LABEL_11;
      }
      v9 = (unsigned int)v44;
      v10 = (unsigned int)v44 + 1LL;
      if ( v10 > HIDWORD(v44) )
      {
        sub_2237220(&v43, v45, v10, 8);
        v9 = (unsigned int)v44;
      }
      *((_QWORD *)v43 + v9) = v13;
      v11 = *(unsigned int *)(a1 + 240);
      v12 = *(unsigned int *)(a1 + 244);
      LODWORD(v44) = v44 + 1;
      if ( v11 + 1 > v12 )
      {
        sub_2237220(a1 + 232, a1 + 248, v11 + 1, 8);
        v11 = *(unsigned int *)(a1 + 240);
      }
      ++v7;
      *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v11) = v13;
      ++*(_DWORD *)(a1 + 240);
    }
    while ( v8 != v7 );
  }
LABEL_11:
  if ( !(*(__int64 (__fastcall **)(_QWORD *))(*a2 + 104LL))(a2) )
    sub_20962E0((__int64)&v46, (__int64)a2);
  sub_209BA30(*(_QWORD *)(a1 + 8), (__int64 *)v46, (unsigned int)v47, (__int64)a2, v15, v16);
  if ( (_DWORD)v44 )
  {
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    sub_209BA30(*(_QWORD *)(a1 + 8), (__int64 *)v43, (unsigned int)v44, v33, v34, v35);
    LODWORD(v44) = 0;
  }
  v21 = (__int64 *)ptr;
  v22 = (__int64 *)((char *)ptr + 8 * (unsigned int)v41);
  if ( ptr != v22 )
  {
    do
    {
      while ( 1 )
      {
        v23 = sub_2099960(*(_QWORD *)(a1 + 8), *v21, v17, v18, v19, v20);
        v24 = (*(__int64 (**)(void))(v23 + 48))();
        v27 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 24LL);
        if ( v27 != sub_209D740 )
          break;
        ++v21;
        sub_209D620(a1 - 32, (__int64)a2, v24, (__int64)v27, v25, v26, 0.0);
        if ( v22 == v21 )
          goto LABEL_20;
      }
      ++v21;
      ((void (__fastcall *)(__int64, _QWORD *, __int64))v27)(a1, a2, v24);
    }
    while ( v22 != v21 );
  }
LABEL_20:
  sub_209B040(a1, (__int64)a2, 0.0);
  v36 = a2[2];
  *sub_209A420(a1 + 208, &v36, v28, v29, v30, v31) = (__int64)a2;
  sub_20962E0(a1 + 16, (__int64)a2);
  if ( ptr != v42 )
    free(ptr);
  if ( v37 != v39 )
    free(v37);
  if ( v46 != v48 )
    free(v46);
  v32 = v43;
  if ( v43 != v45 )
LABEL_27:
    free(v32);
}
