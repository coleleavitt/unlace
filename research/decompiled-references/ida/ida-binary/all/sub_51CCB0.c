unsigned __int64 __fastcall sub_51CCB0(QT::QWidget *a1, __int64 *a2, __int64 a3, double a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22[2]; // [rsp+8h] [rbp-30h]

  *(_QWORD *)v22 = __readfsqword(0x28u);
  v6 = sub_51D2D0(a3);
  if ( v6 - 1 > 2 )
  {
    if ( !(unsigned __int8)sub_51D2E0(a3) )
      return *(_QWORD *)v22 - __readfsqword(0x28u);
    goto LABEL_7;
  }
  v12 = sub_51C690(a1, v6, v7, v8, a4);
  v13 = *a2;
  v14 = v12;
  v15 = a2[1];
  if ( a2[2] < (unsigned __int64)(v15 + 1) )
  {
    v20 = qvector_reserve(a2, v13, v15 + 1, 8);
    *a2 = v20;
    v13 = v20;
    v15 = a2[1];
  }
  *(_QWORD *)(v13 + 8 * v15) = v14;
  ++a2[1];
  if ( (unsigned __int8)sub_51D2E0(a3) )
  {
LABEL_7:
    v16 = sub_51C690(a1, 0, v9, v10, a4);
    v17 = *a2;
    v18 = v16;
    v19 = a2[1];
    if ( a2[2] < (unsigned __int64)(v19 + 1) )
    {
      v21 = qvector_reserve(a2, v17, v19 + 1, 8);
      *a2 = v21;
      v17 = v21;
      v19 = a2[1];
    }
    *(_QWORD *)(v17 + 8 * v19) = v18;
    ++a2[1];
  }
  return *(_QWORD *)v22 - __readfsqword(0x28u);
}
