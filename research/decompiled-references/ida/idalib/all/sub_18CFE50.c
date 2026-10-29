__int64 __fastcall sub_18CFE50(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, double a5)
{
  _QWORD *v9; // rax
  __int64 *v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i si128; // xmm0
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rbx
  int v26; // eax
  _BYTE *v27; // [rsp+8h] [rbp-160h]
  __int64 v28; // [rsp+18h] [rbp-150h] BYREF
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __m128i v30; // [rsp+28h] [rbp-140h]
  _BYTE v31[40]; // [rsp+38h] [rbp-130h] BYREF
  __int64 v32[3]; // [rsp+60h] [rbp-108h] BYREF
  void *v33; // [rsp+78h] [rbp-F0h]
  __int64 v34; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v35[4]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 v36; // [rsp+C0h] [rbp-A8h]

  v9 = (_QWORD *)sub_BFB9F0(a3);
  if ( (_QWORD *)a3 != v9 )
  {
    v10 = (__int64 *)(a1 + 8);
    v11 = 4797;
LABEL_3:
    sub_168B9F0((__int64)v35, v10, a2, v11, 0);
    v32[0] = sub_EEC8C0(a3, (__int64)v10, a5);
    v12 = *(unsigned __int8 *)(sub_1587DB0((__int64)v35, v32) + 120);
    sub_15F7200(v35);
    return v12;
  }
  v14 = (unsigned __int64)v9;
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x24 )
  {
    v10 = (__int64 *)(a1 + 8);
    v11 = 5208;
    goto LABEL_3;
  }
  if ( (*v9 & 0x80000LL) == 0 || (v12 = 0, !v9[4]) )
  {
    v15 = a4 + 72;
    v16 = *(_QWORD *)(sub_B8C1B0(v15) + 16);
    if ( (v16 & 4) != 0 )
      v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      BUG();
    v18 = *(_QWORD *)(v17 - 24);
    if ( (v18 & 7) == 0 && (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 && **(_DWORD **)(v19 + 16) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      ptr = v31;
      v30 = si128;
      v21 = *(_QWORD *)(sub_B8C1B0(v15) + 16);
      if ( (v21 & 4) != 0 )
        v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22 )
        v22 -= 64LL;
      v35[0] = sub_995750(v22);
      v36 = 773;
      v35[1] = v23;
      v35[2] = "::";
      sub_22538C0(v35, &ptr);
      v24 = v30.m128i_i64[0];
      v27 = ptr;
      sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), a2, 0x1502u, 0);
      v28 = sub_EEC8C0(v14, a1 + 8, *(double *)si128.m128i_i64);
      v25 = sub_1587DB0((__int64)v35, &v28);
      v26 = sub_EEC8C0(v14, (__int64)&v28, *(double *)si128.m128i_i64);
      sub_9EC740((__int64)v32, v26, v27, v24, 0);
      v12 = *(unsigned __int8 *)(sub_1589170(v25, v32) + 120);
      if ( v33 != &v34 )
        operator delete(v33);
      sub_15F7200(v35);
      if ( ptr != v31 )
        free(ptr);
    }
    else
    {
      sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), a2, 0x1502u, 0);
      v32[0] = sub_EEC8C0(v14, a1 + 8, a5);
      v12 = *(unsigned __int8 *)(sub_1587DB0((__int64)v35, v32) + 120);
      sub_15F7200(v35);
    }
  }
  return v12;
}
