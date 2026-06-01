unsigned __int64 __fastcall sub_3563D0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char **v9; // rax
  __int64 v10; // rbx
  const char *v11; // rbp
  char *v12; // rax
  size_t v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char **v22; // rax
  const char *v23; // rbx
  char *v24; // rax
  __int64 v25; // rcx
  char v26; // [rsp+0h] [rbp-B8h]
  int v27; // [rsp+Ch] [rbp-ACh]
  __int64 v28; // [rsp+10h] [rbp-A8h]
  __int64 v29; // [rsp+18h] [rbp-A0h]
  volatile signed __int32 *v30; // [rsp+30h] [rbp-88h]
  char v31; // [rsp+30h] [rbp-88h]
  void *v32[4]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  void *v34; // [rsp+70h] [rbp-48h]
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 416LL), 0);
  QT::QComboBox::currentText((QT::QComboBox *)v32);
  v29 = **(_QWORD **)(a1 + 48);
  v9 = *(const char ***)(v29 + 32);
  if ( !*v9 )
    goto LABEL_21;
  v27 = 0;
  v10 = 0;
  v28 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      v11 = v9[v28];
    }
    else
    {
      v11 = *v9;
      v12 = strchr(*v9, 58);
      if ( v12 )
      {
        v11 = v12 + 1;
LABEL_5:
        v13 = strlen(v11);
        goto LABEL_6;
      }
    }
    v13 = 0;
    if ( v11 )
      goto LABEL_5;
LABEL_6:
    *(double *)a2.m128_u64 = QT::QString::fromUtf8(ptr, v13, v11);
    if ( v34 != v32[2] )
    {
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      goto LABEL_10;
    }
    v30 = (volatile signed __int32 *)ptr[0];
    v14 = QT::QtPrivate::equalStrings(v34, v32[1], v34, ptr[1]);
    if ( v30 && !_InterlockedSub(v30, 1u) )
    {
      v31 = v14;
      free(ptr[0]);
      v14 = v31;
    }
    if ( v14 )
      break;
LABEL_10:
    v10 = ++v27;
    v28 = v27;
    if ( !*(_QWORD *)(*(_QWORD *)(v29 + 32) + v28 * 8) )
      goto LABEL_21;
    v9 = *(const char ***)(**(_QWORD **)(a1 + 48) + 32LL);
  }
  if ( (unsigned __int8)set_processor_type(*(_QWORD *)(*(_QWORD *)(v29 + 24) + v28 * 8), 3, v15) )
  {
    v22 = *(const char ***)(**(_QWORD **)(a1 + 48) + 32LL);
    if ( v10 )
    {
      v25 = v28 * 8;
      v23 = v22[v28];
    }
    else
    {
      v23 = *v22;
      v24 = strchr(*v22, 58);
      v16 = (__int64)(v24 + 1);
      if ( v24 )
        v23 = v24 + 1;
    }
    sub_169700((int)"Current processor: %s\n", (__int64)v23, v16, v25, v17, v18, a2, a3, a4, a5, v19, v20, a8, a9, v26);
    sub_356240(a1);
  }
LABEL_21:
  if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
    free(v32[0]);
  return v35 - __readfsqword(0x28u);
}
