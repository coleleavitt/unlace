__int64 __fastcall sub_3DA630(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 *v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __m128i v16; // xmm0
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __m128i v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v10 = *(__int64 **)(a1 + 48);
  v11 = *a4;
  v23 = __readfsqword(0x28u);
  sub_3CC230(&v21, *v10, (__int64)a4, *(_DWORD *)(a2 + 64), (_DWORD *)a2);
  v12 = v21;
  if ( !v21 )
    return (unsigned int)sub_3DA320(a1, a2, a3, v11, a5, a6, a7, a8);
  if ( *(_DWORD *)(v21 + 312) == *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)a2 == -33 )
    {
      v20 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = -1;
      if ( v20 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        qfree(v20);
      }
      a5 = 0.0;
      *(_QWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 24) = 0;
    }
    else if ( *(_DWORD *)a2 )
    {
      goto LABEL_15;
    }
    sub_3DA280(&v22, *(unsigned __int64 **)(a1 + 48), v11, a5, a6, a7, a8);
    v16 = _mm_load_si128(&v22);
    v17 = *(volatile signed __int32 **)(a2 + 48);
    v18 = v16.m128i_i64[0];
    *(__m128i *)(a2 + 40) = v16;
    if ( v17 )
    {
      sub_3D07E0(v17);
      v18 = *(_QWORD *)(a2 + 40);
    }
    if ( v18 )
    {
      v13 = sub_3D3D80(a1, a2, a3);
      goto LABEL_4;
    }
    if ( !*(_DWORD *)a2 )
    {
      *(_DWORD *)a2 = -2;
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
      *(_QWORD *)(a2 + 8) = v19;
      sub_67670((__int64 *)(a2 + 16), (__int64)"Unable to jump to microcode for %08llX", v19);
    }
LABEL_15:
    v14 = 0;
    goto LABEL_5;
  }
  v13 = sub_3DA320(a1, a2, a3, v11, a5, a6, a7, a8);
LABEL_4:
  v14 = v13;
LABEL_5:
  sub_80090(v12);
  j__qfree(v12);
  return v14;
}
