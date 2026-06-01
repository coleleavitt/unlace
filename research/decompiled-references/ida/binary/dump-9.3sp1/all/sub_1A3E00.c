__int64 __fastcall sub_1A3E00(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // edi
  unsigned __int64 v10; // rax
  int v11; // r13d
  int v12; // r14d
  int v13; // edx
  void *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  size_t v19; // rbx
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v21[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *a3;
  v21[1] = __readfsqword(0x28u);
  if ( v4 != 12 )
    goto LABEL_2;
  if ( !sub_125B60((unsigned __int8 *)a3 + 32, *(_QWORD *)(a1 + 16), 0)
    || !sub_125B60((unsigned __int8 *)a3 + 64, *(_QWORD *)(a1 + 16), 0) )
  {
    v4 = *a3;
LABEL_2:
    if ( v4 != 20 )
      return 0;
    v7 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    if ( !(unsigned __int8)sub_11FD80((char *)a3 + 48, v21, 1u) )
      return 0;
    if ( v21[0] + v7 )
      return 0;
    if ( *((_BYTE *)a3 + 32) != 4 )
      return 0;
    v8 = *((_QWORD *)a3 + 5);
    if ( *(_DWORD *)v8 != 12 )
      return 0;
    if ( !sub_125B60((unsigned __int8 *)(v8 + 32), *(_QWORD *)(a1 + 16), 0) )
      return 0;
    if ( !(unsigned __int8)sub_11FD80((char *)(*((_QWORD *)a3 + 5) + 48LL), v21, 1u) )
      return 0;
    if ( !sub_125B60((unsigned __int8 *)a3 + 64, *(_QWORD *)(a1 + 16), 0) )
      return 0;
    v9 = v21[0];
    if ( v21[0] < 0LL )
      return 0;
    v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    if ( v10 < v21[0] )
    {
      v9 = LODWORD(v21[0]) - v10;
      v21[0] -= v10;
    }
    v12 = v9 + v10 - 1;
    v13 = round_up_power2();
    if ( v13 > (v12 & -v11) )
      v13 = v12 & -v11;
    *(_DWORD *)(a1 + 240) = v13;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 244) )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a1 + 56) )
      return result;
  }
  if ( !(unsigned __int8)sub_1A3D40((_DWORD *)a1, (char *)a3 + 48) )
    return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
LABEL_24:
  *(_QWORD *)(a1 + 48) = a2;
  v14 = nullptr;
  *(_QWORD *)(a1 + 56) = a3;
  sub_648D0((__int64 *)(a1 + 160), (__int64 *)(a1 + 200));
  v16 = *(_QWORD *)(a1 + 224);
  v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  if ( v16 )
  {
    v20 = v17;
    v19 = 16 * v16;
    v14 = (void *)qalloc_or_throw(16 * v16, a1 + 200, v16, v15);
    memcpy(v14, *(const void **)(a1 + 216), v19);
    v17 = _mm_load_si128(&v20);
  }
  v18 = *(_QWORD *)(a1 + 176);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    v20 = v17;
    qfree(v18);
    v17 = _mm_load_si128(&v20);
  }
  *(_QWORD *)(a1 + 176) = v14;
  *(__m128i *)(a1 + 184) = v17;
  return 1;
}
