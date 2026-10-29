__int64 __fastcall sub_1A630(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  char v6; // dl
  bool v7; // al
  unsigned int v8; // r13d
  unsigned __int16 v9; // cx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rdi
  char v17; // dl
  __int64 v18; // rax
  __m128i si128; // xmm0

  v5 = *(_WORD *)(a3 + 12);
  if ( v5 == 15 )
  {
    v18 = getseg(*(_QWORD *)(a1 + 40));
    *(_QWORD *)(a1 + 56) -= get_segm_base(v18);
    goto LABEL_7;
  }
  if ( v5 > 0xFu )
  {
    if ( v5 == 18 || (unsigned __int16)(v5 - 20) <= 1u )
    {
      v17 = is_spec_ea(*(_QWORD *)(a1 + 40));
      v7 = 0;
      if ( !v17 )
        v7 = sub_5F40(0x58u, *(_QWORD *)(a1 + 40)) != 1;
      goto LABEL_6;
    }
  }
  else if ( v5 == 8 )
  {
    v6 = is_spec_ea(*(_QWORD *)(a1 + 40));
    v7 = 0;
    if ( !v6 )
      v7 = sub_5F40(0x58u, *(_QWORD *)(a1 + 40)) == 1;
LABEL_6:
    *(_BYTE *)(a1 + 65) = v7;
  }
LABEL_7:
  v8 = sub_16370((_QWORD *)a1, a2, a3);
  if ( (_BYTE)v8 )
  {
    v9 = *(_WORD *)(a3 + 12);
    if ( v9 <= 0x15u )
    {
      v10 = (1LL << v9) & 0x340108;
      if ( ((1LL << v9) & 0x340108) != 0 )
      {
LABEL_17:
        auto_mark_range(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 1LL, 20);
        return v8;
      }
      if ( ((1LL << v9) & 0x30000) != 0 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 4) = 0;
        *(_WORD *)a2 = 7;
        if ( v11 != -1 )
          v10 = 16 * sel2para(v11, a2);
        v12 = *(_QWORD *)(a2 + 24) + v10;
        v13 = getseg(v12);
        v14 = *(_DWORD *)(a2 + 4) & 0xFFFFFFFE;
        if ( v13 )
        {
          v15 = *(_QWORD *)(v13 + 48);
          *(_DWORD *)(a2 + 4) = v14;
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 16) = v15;
          if ( v15 != -1 )
            v12 -= 16 * sel2para(v15, a2);
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
          *(_DWORD *)(a2 + 4) = v14;
          *(__m128i *)(a2 + 8) = si128;
        }
        *(_QWORD *)(a2 + 24) = v12;
        set_fixup(*(_QWORD *)(a1 + 32) + 4LL, a2);
        *(_DWORD *)(a2 + 4) = 0;
        *(_WORD *)a2 = 9;
        goto LABEL_17;
      }
    }
  }
  return v8;
}

