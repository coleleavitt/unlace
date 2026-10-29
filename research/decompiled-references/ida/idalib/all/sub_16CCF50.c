__int64 __fastcall sub_16CCF50(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        double a8)
{
  int v8; // r12d
  _BYTE *v10; // rdi
  unsigned int v11; // eax
  size_t v12; // r13
  _BYTE *v13; // rsi
  size_t v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  _WORD *v17; // rax
  char v18; // r10
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // r8d
  bool v22; // zf
  char v23; // al
  int v24; // eax
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rax
  _WORD *v28; // rax
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // r14
  char v32; // r11
  __int64 v33; // r10
  char v34; // al
  unsigned __int8 v35; // al
  __int64 result; // rax
  __int64 v38; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  unsigned __int64 v43; // [rsp+38h] [rbp-80h] BYREF
  _BYTE ptr[24]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v45[96]; // [rsp+58h] [rbp-60h] BYREF

  v8 = a4;
  v40 = a3;
  if ( (_DWORD)a4 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v10 = v45;
    v11 = a4 * *((unsigned __int8 *)a1 + 312);
    *(_QWORD *)ptr = v45;
    *(__m128 *)&ptr[8] = si128;
    v12 = v11;
    if ( v11 )
    {
      if ( v11 > 0x20uLL )
      {
        sub_2236E10(ptr, v45, v11, 1);
        v10 = (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
      }
      memset(v10, 32, v12);
      v13 = *(_BYTE **)ptr;
      v14 = v12 + *(_QWORD *)&ptr[8];
      *(_QWORD *)&ptr[8] += v12;
    }
    else
    {
      v13 = v45;
      v14 = 0;
    }
    v15 = sub_AB3DF0(*(_QWORD *)(*a1 + 248LL), v13, v14);
    v16 = *a1;
    LODWORD(v38) = *((_DWORD *)a1 + 4);
    v17 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(v16 + 248), 8u);
    v18 = *(_BYTE *)(v15 + 1);
    v19 = *(_QWORD *)(v15 + 8);
    v20 = (__int64)v17;
    v21 = v38;
    v22 = unk_2CD7484 == 0;
    *v17 = *v17 & 0xFE00 | 0x14;
    if ( !v22 )
    {
      v41 = v19;
      LOBYTE(v39) = v18;
      sub_EE9B50(20);
      v18 = v39;
      v21 = v38;
    }
    v23 = *(_BYTE *)(v20 + 1);
    *(_QWORD *)(v20 + 8) = v19;
    *(_BYTE *)(v20 + 2) &= 0xF0u;
    *(_DWORD *)(v20 + 16) = v21;
    *(_DWORD *)(v20 + 20) = v21;
    *(_BYTE *)(v20 + 1) = v18 & 0x3E | v23 & 1;
    *(_QWORD *)(v20 + 24) = v15;
    v24 = sub_B62400(v20);
    a4 = (unsigned int)(v24 << 6);
    *(_BYTE *)(v20 + 1) = ((_BYTE)v24 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
    a3 = *(_BYTE *)(v20 + 2) & 0xF8;
    *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | ((unsigned __int8)v24 >> 2) & 7;
    if ( *(_BYTE **)ptr != v45 )
      free(*(void **)ptr);
  }
  else
  {
    v20 = 0;
  }
  v43 = sub_A7A9D0(*(_QWORD *)(*a1 + 248LL), a2, a3, a4, a5, a6);
  sub_F785A0((__int64)ptr, &v43, (const __m128i *)(a1 + 39));
  v25 = sub_AB3DF0(*(_QWORD *)(*a1 + 248LL), *(const void **)ptr, *(size_t *)&ptr[8]);
  v26 = *((_DWORD *)a1 + 4);
  v39 = v25;
  v27 = *a1;
  LODWORD(v38) = v26;
  v28 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(v27 + 248), 8u);
  v29 = v39;
  v30 = v38;
  v31 = (__int64)v28;
  v32 = *(_BYTE *)(v39 + 1);
  v33 = *(_QWORD *)(v39 + 8);
  v22 = unk_2CD7484 == 0;
  *v28 = *v28 & 0xFE00 | 0x14;
  if ( !v22 )
  {
    v42 = v33;
    LOBYTE(v41) = v32;
    sub_EE9B50(20);
    v33 = v42;
    v32 = v41;
    v29 = v39;
    v30 = v38;
  }
  v34 = *(_BYTE *)(v31 + 1);
  *(_QWORD *)(v31 + 24) = v29;
  *(_BYTE *)(v31 + 2) &= 0xF0u;
  *(_QWORD *)(v31 + 8) = v33;
  *(_DWORD *)(v31 + 16) = v30;
  *(_BYTE *)(v31 + 1) = v32 & 0x3E | v34 & 1;
  *(_DWORD *)(v31 + 20) = v30;
  v35 = sub_B62400(v31);
  *(_BYTE *)(v31 + 1) = (v35 << 6) | *(_BYTE *)(v31 + 1) & 0x3F;
  *(_BYTE *)(v31 + 2) = *(_BYTE *)(v31 + 2) & 0xF8 | (v35 >> 2) & 7;
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  if ( v20 )
  {
    v38 = v31;
    si128 = _mm_loadh_ps((const double *)&v38);
    *(__m128 *)ptr = si128;
    result = sub_16C9740(a1, "%s%s", 4u, (__int64)ptr, 2);
  }
  else
  {
    *(_QWORD *)ptr = v31;
    result = sub_16C9740(a1, "%s", 2u, (__int64)ptr, 1);
  }
  if ( !(_BYTE)result )
    return sub_16CBC30(a1, a2, v40, v20, v8, si128, a8);
  return result;
}
