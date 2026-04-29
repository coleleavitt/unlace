__int64 __fastcall sub_3F4EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  bool v9; // zf
  unsigned int v10; // r13d
  char v11; // al
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __m128i v15; // xmm0
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+8h] [rbp-50h]
  __int128 v19; // [rsp+10h] [rbp-48h] BYREF
  char v20; // [rsp+21h] [rbp-37h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v7 = -1;
  v8 = a2;
  v9 = *(_BYTE *)(a2 + 41) == 7;
  v21 = __readfsqword(0x28u);
  v10 = a3;
  if ( v9 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL);
    v7 = *(_QWORD *)(a3 + 16) & (16LL * *(_QWORD *)a2 + (*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFFELL));
  }
  if ( *(_WORD *)(a2 + 24) == 4 && (unsigned __int8)is_mapped(v7) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    {
      a2 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int8)xrefblk_t_first_from(&v19, a2, 5) )
      {
        while ( *((_QWORD *)&v19 + 1) != v7 || v20 != 17 )
        {
          if ( !(unsigned __int8)xrefblk_t_next_from(&v19) )
            return 0;
        }
        goto LABEL_5;
      }
      return 0;
    }
  }
  else if ( !(unsigned __int8)is_call_insn(a2, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
LABEL_5:
  v11 = *(_BYTE *)(v8 + 41);
  if ( v11 == 1 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 64LL);
    v17 = 0x200000001LL;
    v18 = v14;
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
    LODWORD(v19) = 1;
    HIDWORD(v19) = 0;
    *(_QWORD *)((char *)&v19 + 4) = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v10)).m128i_u64[0];
    sub_1D5E90(a1, 57, (unsigned __int8 *)&v17, (unsigned __int8 *)&v19, nullptr);
    sub_11C7E0((__int64)&v19);
    sub_11C7E0((__int64)&v17);
  }
  else
  {
    if ( v11 != 7 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC35Bu, a2, a7);
      BUG();
    }
    v12 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)&v19 = -4294967290LL;
    v13 = 8 * *(_DWORD *)(v12 + 84);
    if ( (unsigned __int64)v13 <= 0x3F )
      v7 &= ~(-1LL << v13);
    *((_QWORD *)&v19 + 1) = v7;
    sub_1D5E90(a1, 56, (unsigned __int8 *)&v19, nullptr, nullptr);
    sub_11C7E0((__int64)&v19);
  }
  return 1;
}
