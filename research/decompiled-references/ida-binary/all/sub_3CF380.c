__int64 __fastcall sub_3CF380(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 (*v13)(); // rax
  __int64 v15; // rbx
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 (*v18)(); // rdx
  __int64 (*v19)(); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  void *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned int v33; // ebp
  double v34; // xmm0_8
  double v35; // xmm4_8
  double v36; // xmm5_8
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  __int64 tlc_for_til; // [rsp+0h] [rbp-108h] BYREF
  void *v40; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v41[31]; // [rsp+10h] [rbp-F8h] BYREF

  v10 = *(_DWORD *)(a1 + 8);
  v41[25] = __readfsqword(0x28u);
  if ( v10 == 58 || v10 == 25 )
  {
    v15 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v16 = *(__int64 **)(v15 + 1000);
      v17 = *v16;
      v18 = *(__int64 (**)())(*v16 + 80);
      if ( v18 == sub_3C42B0 )
        goto LABEL_9;
      if ( !((unsigned __int8 (__fastcall *)(_QWORD))v18)(*(_QWORD *)(v15 + 1000)) )
      {
        v17 = *v16;
LABEL_9:
        v19 = *(__int64 (**)())(v17 + 64);
        if ( v19 == sub_3AAC50 )
          return 0;
        v22 = ((__int64 (__fastcall *)(__int64 *))v19)(v16);
        if ( !v22 )
          return 0;
        v23 = 0;
        v24 = sub_3ACC10(v15, a2, v20, v21, a3);
        if ( v24 )
          v23 = *(_DWORD *)(v24 + 12);
        v25 = *(_QWORD *)(v15 + 8);
        v26 = *(_QWORD *)(v25 + 16);
        if ( !v26 || !QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, *(const QT::QObject **)(v25 + 16)) )
          return 0;
        goto LABEL_15;
      }
    }
    return 0;
  }
  if ( v10 != 10 )
    return 0;
  v11 = *(_QWORD *)(a1 + 328);
  if ( !v11 )
    return 0;
  v12 = *(_QWORD **)(v11 + 2488);
  v13 = *(__int64 (**)())(*v12 + 64LL);
  if ( v13 == sub_3AAC50 )
    return 0;
  v22 = ((__int64 (__fastcall *)(_QWORD *))v13)(v12);
  if ( !v22 )
    return 0;
  if ( !*(_QWORD *)(a1 + 56) )
    goto LABEL_30;
  v37 = **(_QWORD **)(a1 + 48);
  v38 = v12[2];
  if ( v38 )
  {
    if ( v37 < v38 )
    {
      v23 = *(_DWORD *)(v12[1] + 4 * v37);
      goto LABEL_31;
    }
LABEL_30:
    v23 = 0;
    goto LABEL_31;
  }
  if ( v37 >= (*(int (__fastcall **)(_QWORD *))(*v12 + 32LL))(v12) )
    goto LABEL_30;
  v23 = v37 + 1;
LABEL_31:
  v26 = sub_3C5C60(a1);
  if ( !v26 )
    return 0;
LABEL_15:
  v27 = (void *)operator new(0x40u);
  sub_3A4010((__int64)v27, 1, 0, 0);
  tlc_for_til = create_tlc_for_til(v22, 0);
  v40 = v27;
  sub_3A42C0((__int64)v41, (__int64)"Choose a type", 0x34u, 3, &tlc_for_til, (__int64)&v40);
  if ( tlc_for_til )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)tlc_for_til + 8LL))(tlc_for_til);
  v30 = (__int64 *)v40;
  if ( v40 )
  {
    v31 = *((_QWORD *)v40 + 3);
    if ( v31 )
    {
      *((_QWORD *)v40 + 4) = 0;
      a3 = qfree(v31, "Choose a type");
    }
    v32 = *v30;
    if ( *v30 )
    {
      v30[1] = 0;
      qfree(v32, "Choose a type", a3);
    }
    operator delete(v30, 0x40u);
  }
  v33 = sub_3A4190((__int64)v41, v23, v28, v29);
  v34 = til_chooser_t__::vfunc_0(v41, (const char *)v23);
  if ( v33 )
    sub_3C6B30(v26, v33, nullptr, 1, v34, a4, a5, a6, v35, v36, a9, a10);
  return 1;
}
