void __fastcall sub_4CBBC0(QT::QCursor *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // r14
  double v7; // xmm0_8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11[2]; // [rsp+0h] [rbp-38h] BYREF
  int v12[2]; // [rsp+8h] [rbp-30h]

  *(_QWORD *)v12 = __readfsqword(0x28u);
  v3 = sub_4C7A70((__int64)a1, a3);
  if ( v3 )
  {
    v4 = v3;
    v5 = QT::QCursor::pos(a1);
    v6 = (_QWORD *)operator new(0xA0u);
    *(_QWORD *)&v7 = _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128((int)v5 - *(_DWORD *)(v4 + 48)),
                       _mm_cvtsi32_si128(HIDWORD(v5))).m128i_u64[0];
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL);
    *(double *)v11 = v7;
    sub_4C58D0((__int64)v6, (__int64)a1, v4, v8, a2, (__int64 *)v11, v7);
    if ( !sub_47C810(nullptr) )
      sub_4CBB30(v6, (__int64)a1, v9, v10, v7);
  }
}
