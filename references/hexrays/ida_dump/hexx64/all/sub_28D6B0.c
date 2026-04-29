__int64 __fastcall sub_28D6B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int tinfo_size; // eax
  char v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __m128i v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  v21 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*(_QWORD *)(v3 + 48), 2) & 0x3F) == 0x2D )
  {
    v6 = *(_QWORD *)(a2 + 24);
    v19 = 0;
    v20 = 0;
    v7 = *(_QWORD *)(v6 + 48);
    if ( (v7 & 0x100) != 0 )
    {
      if ( get_tinfo_pdata(&v19, v7, 0)
        && (tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0),
            v9 = tinfo_size,
            v2 = sub_2612E0(nullptr, *(_QWORD *)(a2 + 24) + 48LL, 0, 0, tinfo_size, 0),
            (_BYTE)v2) )
      {
        v10 = j__qalloc_or_throw(64);
        *(_QWORD *)v10 = -1;
        v11 = (_QWORD *)v10;
        *(_QWORD *)(v10 + 8) = -4294967235LL;
        *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 48) = 0;
        *(_DWORD *)(v10 + 56) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        v12 = j__qalloc_or_throw(48);
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 40) = 0;
        *(_OWORD *)(v12 + 24) = 0;
        v11[3] = v12;
        *(_QWORD *)v12 = 0;
        v13 = v11[3];
        sub_329C80(v13 + 8, 0x88888808800000LL);
        v14 = v19;
        v15 = *(_QWORD *)(v13 + 16);
        *(_BYTE *)(v13 + 15) = v9;
        *(_BYTE *)(v13 + 13) |= 0x20u;
        v16 = _mm_loadu_si128((const __m128i *)(v13 + 24));
        *(_QWORD *)(v13 + 16) = v14;
        v17 = _mm_loadu_si128(&v20);
        v19 = v15;
        *(__m128i *)(v13 + 24) = v17;
        v18 = *(_QWORD *)(a2 + 24);
        v20 = v16;
        copy_tinfo_t(v11 + 6, v18 + 48);
        *v11 = **(_QWORD **)(a2 + 24);
        *(_QWORD *)(a2 + 32) = v11;
        *(_DWORD *)(a2 + 8) = 22;
      }
      else
      {
        v2 = 0;
      }
      if ( v19 )
      {
        v20.m128i_i64[0] = 0;
        qfree(v19);
      }
    }
  }
  return v2;
}
