unsigned __int64 __fastcall sub_B75DC0(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]

  v11 = a9;
  v17 = a8;
  if ( a9 && (*(_BYTE *)(a9 + 28) & 0x7F) == 0x18 )
    v11 = *(_QWORD *)(a9 + 88);
  v18 = a5;
  v12 = sub_B6C590(96, (_QWORD *)a1, a2, 0);
  sub_B4E870(v12, 0x4Du, a2, a4);
  *(_QWORD *)(v12 + 48) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v13 = v18;
  *(_QWORD *)(v12 + 56) = v12;
  v14 = _mm_loadh_ps((const double *)&v17);
  *(_DWORD *)(v12 + 64) = a3;
  *(_QWORD *)v12 = &off_2BD9088;
  *(_QWORD *)(v12 + 40) = v13;
  *(_DWORD *)(v12 + 68) = a6;
  *(__m128 *)(v12 + 72) = v14;
  *(_QWORD *)(v12 + 88) = v11;
  return v12;
}

