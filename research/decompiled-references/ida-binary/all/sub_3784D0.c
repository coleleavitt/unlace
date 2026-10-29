__int64 __fastcall sub_3784D0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v15; // rbx
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  char v19[56]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v10 = sub_17D870(a1);
  if ( !v10 )
    return 0;
  v13 = v10;
  if ( (unsigned int)sub_1EB590(v10, a2, v11, v12, a3) != 3 )
    return 0;
  v15 = *(_QWORD **)(v13 + 904);
  if ( !v15 || v15[25] != 1 && (*(int (__fastcall **)(_QWORD *))(*v15 + 504LL))(v15) < 0 )
    return 0;
  sub_1E95D0((QT::QObject *)v19, qword_8CD7E8, 10, 0, -32768, a3);
  v18 = sub_3767A0((__int64)v15, a3, a4, a5, a6, v16, v17, a9, a10);
  sub_1E9680((__int64)v19);
  return v18;
}
