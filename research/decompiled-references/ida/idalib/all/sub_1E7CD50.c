void __fastcall sub_1E7CD50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  _QWORD *v14; // r14
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // r12
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  double v24; // xmm4_8
  double v25; // xmm5_8
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned __int64 *v29; // r12
  __int64 v30; // rdi
  __int64 *v31; // rbx
  unsigned int v32; // eax
  __int64 *v33; // [rsp+8h] [rbp-30h] BYREF

  v14 = (_QWORD *)a3;
  v16 = *(_QWORD *)(a1 + 24);
  if ( ((*(_DWORD *)v16 >> 12) & 0x7F) == 0x1C )
  {
    v30 = *(_QWORD *)(v16 + 8);
    v33 = nullptr;
    sub_1E5F010(v30, &v33);
    v31 = v33;
    if ( v33 )
    {
      a3 = *v33;
      a4 = *v33 & 7;
      if ( !(a4 | (*v33 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 && a3 )
      {
        v32 = sub_F6C560(a2);
        memcpy(v14, v31 + 1, v32);
        return;
      }
    }
    v16 = *(_QWORD *)(a1 + 24);
  }
  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
  {
    v17 = 0;
    if ( !*(_QWORD *)(a2 + 32) )
      goto LABEL_5;
  }
  else
  {
    v17 = *(_DWORD *)(v16 + 192);
  }
  *(_DWORD *)v14 = v17;
LABEL_5:
  sub_15AB9E0(v16 + 112, *(_QWORD **)(a1 + 8), a3, a4, a5, a6);
  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 || *(_QWORD *)(a2 + 32) )
  {
    v14[1] = v18;
    v19 = v14;
    v20 = *(_QWORD *)(a2 + 40);
    if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 )
    {
LABEL_7:
      v19 = v14 + 2;
      goto LABEL_8;
    }
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 40);
    v19 = v14;
  }
  if ( *(_QWORD *)(a2 + 32) )
    goto LABEL_7;
LABEL_8:
  v21 = (unsigned int)sub_F6C520(v20);
  v26 = v21 * ((v19 != nullptr) + ((unsigned __int64)v19 - (v19 != nullptr)) / v21);
  if ( v20 & 7 | (v20 >> 3) & 1 && v20 )
  {
    v29 = (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = (unsigned int)sub_F6C520(*v29 & 0xFFFFFFFFFFFFFFF0LL);
    v28 = *v29;
    v27 = v21 * ((v26 - (v26 != 0)) / v21 + (v26 != 0));
  }
  else
  {
    v27 = v26;
    v28 = v20;
  }
  sub_1E7C9B0(a1, v28, v27, v21, v22, v23, a7, a8, a9, a10, v24, v25, a13, a14);
}
