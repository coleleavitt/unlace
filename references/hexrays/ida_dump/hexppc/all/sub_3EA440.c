__int64 __fastcall sub_3EA440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v10; // edx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+8h] [rbp-50h]
  __int128 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v6 = a3;
  v7 = is_call_insn(a1 + 24, a2, a3, a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    if ( *(_BYTE *)(a2 + 1) == 7 )
    {
      if ( (unsigned __int8)sub_3EA1F0(a1, a1 + 24, a2) )
      {
        *(_BYTE *)(a1 + 864) = 1;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 800);
        *(_QWORD *)&v19 = 0xFFFFFFFF00000000LL;
        v13 = *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 24);
        v14 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 16LL);
        if ( v13 != v14 )
        {
          v14 &= v13;
          if ( v13 == -1 )
            v14 = -1;
        }
        v15 = *(_QWORD *)(a1 + 832);
        LOBYTE(v19) = 6;
        v16 = 8 * *(_DWORD *)(v15 + 84);
        if ( (unsigned __int64)v16 <= 0x3F )
          v14 &= ~(-1LL << v16);
        *((_QWORD *)&v19 + 1) = v14;
        sub_1D2850(a1, 56, (unsigned __int8 *)&v19, nullptr, nullptr);
        sub_119360((__int64)&v19);
      }
    }
    else if ( v6 == -1 )
    {
      return 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 832);
      v17 = 0x200000001LL;
      v10 = *(_DWORD *)(v9 + 64);
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 84));
      LODWORD(v19) = 1;
      HIDWORD(v19) = 0;
      v18 = v10;
      *(_QWORD *)((char *)&v19 + 4) = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(v6)).m128i_u64[0];
      sub_1D2850(a1, 57, (unsigned __int8 *)&v17, (unsigned __int8 *)&v19, nullptr);
      sub_119360((__int64)&v19);
      sub_119360((__int64)&v17);
    }
  }
  return v7;
}
