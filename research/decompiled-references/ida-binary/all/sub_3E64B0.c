unsigned __int64 __fastcall sub_3E64B0(
        QT::QAbstractItemView *this,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // eax
  _QWORD *v15; // rbp
  __int64 v16; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // r14
  int v24; // r15d
  __int64 v25; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-80h]
  _BYTE v29[32]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v30[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v14 = *(_DWORD *)(a2 + 372);
  v31 = __readfsqword(0x28u);
  v15 = *(_QWORD **)(a2 + 40);
  v16 = (unsigned int)(v14 - 2);
  if ( (unsigned int)v16 > 1 )
    goto LABEL_13;
  v18 = *(_QWORD *)(a2 + 40);
  a2 = v14 == 2;
  v28 = sub_3E62B0(v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, v16, a12, a13, a14);
  v19 = QT::QAbstractItemView::model(this);
  v22 = *(_QWORD **)(v19 + 32);
  v23 = v19;
  v30[0] = v22;
  if ( !v15 || !v22 )
  {
    if ( under_debugger )
      goto LABEL_15;
    interr(40275, a2, v20, v21, a3);
LABEL_13:
    if ( !under_debugger )
      interr(40280, a2, v16, a12, a3);
LABEL_15:
    BUG();
  }
  if ( v15 == v22 )
  {
LABEL_10:
    sub_3DF8D0((__int64)v29, v23, (__int64)v15, 0, a3);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v23 + 96LL))(v30, v23, v28, 0, v29);
    (*(void (__fastcall **)(QT::QAbstractItemView *, _QWORD *, _QWORD))(*(_QWORD *)this + 488LL))(this, v30, 0);
    v27 = QT::QAbstractItemView::selectionModel(this);
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v27 + 104LL))(v27, v30, 51);
    return v31 - __readfsqword(0x28u);
  }
  if ( v22[3] )
  {
    v24 = 0;
    v25 = 0;
    while ( !(unsigned __int8)sub_3DBF20(v30, v15, *(_QWORD *)(v22[2] + 8 * v25), v21, a3) )
    {
      v25 = ++v24;
      if ( (unsigned __int64)v24 >= v22[3] )
        return v31 - __readfsqword(0x28u);
    }
    goto LABEL_10;
  }
  return v31 - __readfsqword(0x28u);
}
