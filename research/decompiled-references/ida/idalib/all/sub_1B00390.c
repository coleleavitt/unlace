__int64 __fastcall sub_1B00390(_QWORD *a1, _QWORD *a2, __int64 a3, const void *a4, size_t a5, __m128 a6, __m128 a7)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  _QWORD *v21; // rsi
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // esi
  int v29; // edi
  _QWORD *v30; // r9
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // r9
  unsigned __int64 v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-50h] BYREF
  __m128 v40[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_B8E180(a1[68]) || (*(_DWORD *)a2 & 0x40000) != 0 )
    return (__int64)a2;
  if ( (unsigned __int8)sub_C3D680((__int64)a2, a1[31], 2, v12, v13, v14) )
  {
    v16 = a2[1];
    v17 = sub_BFB840((__int64)a2);
    return sub_1BFA490(a1, v17, v16, 3, 1);
  }
  v18 = *(unsigned int *)(a3 + 16);
  v19 = *(_QWORD *)a3;
  if ( !(_DWORD)v18 )
    goto LABEL_15;
  v20 = (v18 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v21 = (_QWORD *)(v19 + 16LL * v20);
  v22 = (_QWORD *)*v21;
  if ( a2 != (_QWORD *)*v21 )
  {
    v28 = 1;
    if ( v22 != (_QWORD *)-4096LL )
    {
      do
      {
        v29 = v28 + 1;
        v20 = (v18 - 1) & (v28 + v20);
        v21 = (_QWORD *)(v19 + 16LL * v20);
        v30 = (_QWORD *)*v21;
        if ( a2 == (_QWORD *)*v21 )
          goto LABEL_8;
        v28 = v29;
      }
      while ( v30 != (_QWORD *)-4096LL );
    }
LABEL_15:
    sub_1AFF290(v40, (_QWORD *)(v19 + 16LL * (unsigned int)v18), (_QWORD *)(v19 + 16LL * (unsigned int)v18), a3, 1);
    v23 = v40[0].m128_u64[0];
    goto LABEL_9;
  }
LABEL_8:
  sub_1AFF290(v40, v21, (_QWORD *)(16 * v18 + v19), a3, 1);
  v23 = v40[0].m128_u64[0];
LABEL_9:
  v38 = v23;
  v24 = (_QWORD *)(*(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 16));
  sub_1AFF290(v40, v24, v24, a3, 1);
  if ( v40[0].m128_u64[0] != v38 )
  {
    v26 = *(_QWORD *)(a3 + 24);
    v27 = v26 + 16LL * *(unsigned int *)(v38 + 8);
    if ( v27 != 16LL * *(unsigned int *)(a3 + 32) + v26 )
      return sub_1AFE4C0(a1, a2, (__int64 *)(v27 + 8), a4, a5, v25, a6, a7);
  }
  v39 = 0;
  v31 = sub_1AFE4C0(a1, a2, &v39, a4, a5, v25, a6, a7);
  v32 = v39;
  v33 = v31;
  v40[0].m128_u64[0] = (unsigned __int64)a2;
  *(_QWORD *)sub_1AFFC90(a3, (__int64 *)v40, v34, v35, v36, v37) = v32;
  return v33;
}
