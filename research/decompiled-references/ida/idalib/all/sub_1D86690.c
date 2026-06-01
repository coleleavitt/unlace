__int64 __fastcall sub_1D86690(
        __int64 **a1,
        __m128i *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        char a9)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  _BYTE *v24; // r12
  unsigned __int8 v25; // al
  unsigned int v26; // ebp
  unsigned __int8 v27; // r14
  unsigned __int64 v28; // r15
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v30 = a3;
  v11 = sub_F22F50(&v30);
  v12 = v11;
  if ( v11 )
  {
    v31[0] = *(_QWORD *)(v11 + 16);
    v13 = sub_F22BD0(v31, 0);
    v14 = sub_1D86580((__int64)a1, v13);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      if ( *((_DWORD *)*a1 + 3158) || a2->m128i_i64[1] != (v15 & 0xFFFFFFFFFFFFFFF8LL) || v14 != v13 )
      {
        v16 = (*a1)[31];
        sub_F22AA0((unsigned __int64 *)v31, v14);
        return sub_A80CA0(v16, a2->m128i_i64[1], (v15 >> 2) & 1, v31[0]);
      }
      return v30;
    }
    return 0;
  }
  v18 = (_QWORD *)sub_F22F70(&v30);
  if ( v18 )
  {
    v19 = a2->m128i_i64[1];
    v20 = a5;
    if ( v19 )
      v20 = 0;
    else
      LODWORD(v12) = a6;
    if ( *((_DWORD *)*a1 + 3158) || v19 != (*v18 & 0xFFFFFFFFFFFFFFF8LL) || (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      return sub_1D82500(a1, a2, a4, v18[1], a4, v20, a7, a8, v12, a9);
    return v30;
  }
  v21 = sub_F22BD0(&v30, 0);
  if ( v21 )
  {
    v22 = sub_1D86580((__int64)a1, v21);
    if ( !v22 )
      return 0;
    v23 = (*a1)[31];
    sub_F22AA0((unsigned __int64 *)v31, v22);
    return sub_A80CA0(v23, a2->m128i_i64[1], 0, v31[0]);
  }
  else
  {
    v24 = sub_F22F10(&v30);
    v25 = sub_F227A0((__int64)v24);
    v26 = *(_DWORD *)v24;
    v27 = v25;
    v28 = sub_F22790((__int64)v24);
    sub_F22160((__int64)v31, (__int64)v24);
    return sub_A80A10((*a1)[31], (__int64)v31, v28, (v26 >> 3) & 0x3FFF, v27);
  }
}
