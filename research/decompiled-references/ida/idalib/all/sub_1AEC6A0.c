unsigned __int64 __fastcall sub_1AEC6A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __m128i *a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v11; // r13
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  int v24; // eax
  char v25; // r14
  char v26; // r13
  int v27; // r15d
  int v28; // r12d
  char v29; // al
  __int64 v30; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  char v40; // [rsp+8h] [rbp-40h]

  v11 = *(_QWORD **)(a1 + 248);
  v38 = a3;
  if ( !a6 )
    v38 = sub_BFB840(a3);
  v12 = *(_QWORD *)(v38 + 8);
  v13 = *(_BYTE *)(a3 + 1);
  if ( (v13 & 0x38) != 0 || (v13 & 6) == 0 )
  {
    v32 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
    v15 = sub_BB25B0(v11, (__int64)a5, a2, v12, v32);
    if ( !a4 )
    {
      v33 = sub_B31880((__int64)v11, 0);
      sub_B8CC60(v15, v33, v34, v35, v36, v37);
    }
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    {
      v21 = *(_QWORD *)(v38 + 8);
      v16 = sub_A73030((__int64)v11, v21, 1u);
    }
    else
    {
      v14 = *(_QWORD *)(v38 + 8);
      v15 = 0;
      v16 = sub_A70010((__int64)v11, v14);
      v20 = sub_C00A40(a3, v14, v17, v18, v19);
      v21 = v20;
      v23 = sub_19249E0(a1, v20, 4u, v38, 0, v22, a7, a8);
      if ( v23 <= 1 )
        return v15;
      v38 = v23 & 0xFFFFFFFFFFFFFFFELL;
    }
    v24 = sub_EEB7E0(a3, v21, *(double *)a7.m128_u64);
    v15 = sub_BB25B0(v11, (__int64)a5, a2, v16, v24);
  }
  sub_B8EA00(a5, v15);
  v25 = *(_BYTE *)(a1 + 12592);
  v26 = *(_BYTE *)(a1 + 11248);
  v27 = *(_DWORD *)(a1 + 11200);
  v28 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
  v29 = *(_BYTE *)(a1 + 10024);
  *(_BYTE *)(a1 + 12592) = 1;
  *(_BYTE *)(a1 + 11248) = 1;
  *(_BYTE *)(a1 + 10024) = 1;
  v40 = v29;
  sub_17ED4C0(a1, v15, v38, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
  *(_DWORD *)(a1 + 11200) = v27;
  *(_BYTE *)(a1 + 12592) = v25;
  *(_BYTE *)(a1 + 10024) = v40;
  v30 = *(_QWORD *)(a1 + 264);
  *(_BYTE *)(a1 + 11248) = v26;
  if ( *(_DWORD *)(v30 + 204) == 5 )
    *(_BYTE *)(v30 + 194) = 1;
  if ( v28 )
    v28 = 3;
  *(_DWORD *)(v30 + 204) = v28;
  return v15;
}
