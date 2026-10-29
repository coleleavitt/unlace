__int64 __fastcall sub_1FD320(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  void (*v11)(void); // rax
  QT::QWidget *v12; // rax
  QT::QWidget *v13; // rdi
  int *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdi
  double v19; // xmm0_8
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  double v26; // xmm4_8
  double v27; // xmm5_8
  struct _Unwind_Exception *v28; // rbx
  int v29[2]; // [rsp+0h] [rbp-D8h] BYREF
  void *v30; // [rsp+8h] [rbp-D0h]
  int v31[2]; // [rsp+10h] [rbp-C8h] BYREF
  int v32; // [rsp+18h] [rbp-C0h]
  int v33[4]; // [rsp+20h] [rbp-B8h] BYREF
  int v34[2]; // [rsp+30h] [rbp-A8h]
  QT::QObject *v35; // [rsp+38h] [rbp-A0h]
  int v36[2]; // [rsp+40h] [rbp-98h]
  int v37[2]; // [rsp+48h] [rbp-90h]
  int v38[4]; // [rsp+50h] [rbp-88h]
  int v39[2]; // [rsp+60h] [rbp-78h]
  int v40[2]; // [rsp+68h] [rbp-70h]
  int v41[2]; // [rsp+70h] [rbp-68h]
  char v42[8]; // [rsp+78h] [rbp-60h]
  int v43[4]; // [rsp+80h] [rbp-58h]
  int v44[2]; // [rsp+90h] [rbp-48h]
  __int64 v45; // [rsp+98h] [rbp-40h]
  __int64 v46; // [rsp+A0h] [rbp-38h]
  int v47[2]; // [rsp+A8h] [rbp-30h]
  __int64 v48; // [rsp+B8h] [rbp-20h]

  v9 = *(_QWORD *)a1;
  v48 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 880) = 0;
  v11 = *(void (**)(void))(v9 + 760);
  if ( (char *)v11 == (char *)sub_1E6980 )
  {
    v12 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)a1);
    QT::QWidget::update(v12);
    v13 = *(QT::QWidget **)(a1 + 768);
    if ( v13 && *(char *)(*((_QWORD *)v13 + 4) + 9LL) < 0 )
      QT::QWidget::update(v13);
  }
  else
  {
    v11();
  }
  if ( *(_BYTE *)(a1 + 240) )
  {
    v14 = v29;
    *(_OWORD *)v33 = 0;
    LODWORD(v30) = 0;
    v32 = 0;
    *(_QWORD *)v34 = 0;
    v35 = (QT::QObject *)-1LL;
    *(_QWORD *)v36 = 0;
    *(_QWORD *)v37 = 0;
    *(_QWORD *)v29 = 0;
    *(_QWORD *)v31 = 0;
    if ( !(unsigned __int8)sub_1F07A0(a1, (__int64)v29, (__int64)v31, nullptr) )
    {
LABEL_7:
      if ( *(_QWORD *)v37 )
        qfree(*(_QWORD *)v37, (const char *)v14);
      return sub_531B30(2, 0, 0);
    }
    v18 = *(_QWORD *)v29;
    v19 = 0.0;
    *(_QWORD *)v39 = 0;
    *(_QWORD *)v40 = -1;
    v20 = *(_QWORD *)v31;
    *(_QWORD *)v41 = 0;
    *(_QWORD *)v42 = *(_QWORD *)v29;
    *(_OWORD *)v38 = 0;
    if ( *(_QWORD *)v29 )
      *(_QWORD *)v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        sub_1E69C0(0.0, v18, (__int64)v29, v15, v16);
        goto LABEL_41;
      }
      v21 = *(_DWORD *)(a1 + 416);
      if ( v21 == 2 )
      {
        v18 = *(_QWORD *)(a1 + 896);
      }
      else if ( v21 == 3 )
      {
        v18 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v18 = 0;
        if ( v21 == 1 )
          v18 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v18 = 0;
    }
    v14 = v33;
    if ( !(unsigned __int8)sub_174EF0(v18, (__int64)v33) )
    {
LABEL_20:
      if ( *(_QWORD *)v42 )
        qfree(*(_QWORD *)v42, (const char *)v14);
      goto LABEL_7;
    }
    v19 = 0.0;
    *(_QWORD *)v44 = 0;
    v45 = -1;
    v46 = 0;
    *(_QWORD *)v47 = v20;
    *(_OWORD *)v43 = 0;
    if ( v20 )
    {
      v18 = v20;
      *(_QWORD *)v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( !*(_BYTE *)(a1 + 968) )
    {
      v25 = 0;
LABEL_30:
      v14 = v33;
      if ( (unsigned __int8)sub_174EF0(v25, (__int64)v33) )
      {
        v14 = &dword_0 + 1;
        sub_1FC580(a1, 1u, 0.0, a3, a4, a5, v26, v27, a8, a9);
      }
      if ( *(_QWORD *)v47 )
        qfree(*(_QWORD *)v47, (const char *)v14);
      goto LABEL_20;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      v24 = *(_DWORD *)(a1 + 416);
      if ( v24 == 2 )
      {
        v25 = *(_QWORD *)(a1 + 896);
      }
      else if ( v24 == 3 )
      {
        v25 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v25 = 0;
        if ( v24 == 1 )
          v25 = *(_QWORD *)(a1 + 888);
      }
      goto LABEL_30;
    }
LABEL_41:
    v28 = (struct _Unwind_Exception *)sub_1E69C0(0.0, v18, (__int64)v14, v22, v23);
    if ( *(_QWORD *)v42 )
      v19 = qfree(*(_QWORD *)v42, (const char *)v14);
    if ( *(_QWORD *)v37 )
      qfree(*(_QWORD *)v37, (const char *)v14, v19);
    _Unwind_Resume(v28);
  }
  return sub_531B30(2, 0, 0);
}
