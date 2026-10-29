__int64 __fastcall sub_1E7C890(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        double a4,
        double a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 *v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 result; // rax
  int v28; // esi
  int v29; // r10d
  __int64 v30; // r8
  __m128 v31[3]; // [rsp+0h] [rbp-38h] BYREF

  v13 = a3 + 1;
  v14 = sub_F6C520(*(_QWORD *)(a2 + 24));
  sub_1E7C400(
    a1,
    *(_QWORD *)(a2 + 24),
    v14 * (((unsigned __int64)v13 - (v13 != nullptr)) / v14 + (v13 != nullptr)),
    v14,
    v15,
    v16,
    a4,
    a5,
    a6,
    a7,
    v17,
    v18,
    a10,
    a11);
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(unsigned int *)(v19 + 256);
  v21 = v19 + 240;
  v22 = *(_QWORD *)(v19 + 240);
  if ( !(_DWORD)v20 )
    goto LABEL_8;
  v23 = (v20 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v24 = (__int64 *)(v22 + 16LL * v23);
  v25 = *v24;
  if ( a2 != *v24 )
  {
    v28 = 1;
    if ( v25 != -4096 )
    {
      do
      {
        v29 = v28 + 1;
        v23 = (v20 - 1) & (v28 + v23);
        v24 = (__int64 *)(v22 + 16LL * v23);
        v30 = *v24;
        if ( a2 == *v24 )
          goto LABEL_3;
        v28 = v29;
      }
      while ( v30 != -4096 );
    }
LABEL_8:
    sub_1E616F0(v31, (_QWORD *)(v22 + 16LL * (unsigned int)v20), (_QWORD *)(v22 + 16LL * (unsigned int)v20), v21, 1);
    v26 = v31[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_1E616F0(v31, v24, (_QWORD *)(16 * v20 + v22), v21, 1);
  v26 = v31[0].m128_u64[0];
LABEL_4:
  result = *(unsigned int *)(v26 + 8);
  *a3 = result;
  return result;
}
