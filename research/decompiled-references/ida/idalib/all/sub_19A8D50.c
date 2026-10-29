__int64 __fastcall sub_19A8D50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  bool v10; // al
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // eax
  __m128 si128; // xmm0
  _BYTE *v21; // rax
  __int64 v22; // rbx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD v28[3]; // [rsp+0h] [rbp-D8h] BYREF
  _OWORD v29[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-70h]
  __int64 v31; // [rsp+70h] [rbp-68h]
  __int64 v32; // [rsp+78h] [rbp-60h]
  int v33; // [rsp+80h] [rbp-58h]
  __int64 v34; // [rsp+88h] [rbp-50h] BYREF
  __m128 v35; // [rsp+90h] [rbp-48h]
  __int64 v36; // [rsp+A0h] [rbp-38h]

  v10 = sub_169D3A0(*(_QWORD *)(a1 + 16), a2, a3, a4, a5, a6);
  v11 = *(_QWORD *)(a1 + 16);
  **(_BYTE **)(a1 + 8) |= v10;
  v15 = sub_16A2930(v11, a2, **(unsigned __int8 **)(a1 + 24), v12, v13, v14);
  if ( !v15 )
    return 0;
  v16 = v15;
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(a1 + 16);
  v19 = **(_DWORD **)(a1 + 40);
  v28[1] = v29;
  v31 = v18;
  v32 = v17;
  v28[2] = 0x800000000LL;
  v29[4] = 0;
  v33 = v19;
  v28[0] = 0;
  v30 = 0;
  sub_B85890(&v34, v17);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA520);
  v36 = 0x101010000LL;
  v35 = si128;
  sub_1A395A0(v28);
  if ( (unsigned __int8)sub_169F990(*(_QWORD *)(a1 + 16), a2, v16) )
  {
    v21 = *(_BYTE **)a1;
    v22 = 0;
    *v21 = 1;
  }
  else
  {
    sub_1A48440(*(_QWORD *)(a1 + 16), v28, v16, 0);
    v22 = sub_19A8630(*(_QWORD *)(a1 + 48), (__int64)v28, si128, a8, v24, v25, v26, v27);
  }
  sub_169D230((__int64)v28);
  return v22;
}
