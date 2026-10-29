unsigned __int64 __fastcall sub_15E940(__int64 a1, unsigned __int8 a2)
{
  bool v3; // zf
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdi
  int v9; // eax
  int v10; // esi
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  unsigned __int64 v13; // xmm0_8
  struct _Unwind_Exception *v14; // rdi
  int v15[4]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v16[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 984) )
  {
    v3 = *(_QWORD *)(a1 + 480) == 0;
    v5 = *(_QWORD *)(a1 + 960);
    v6 = *(_QWORD *)(a1 + 968);
    *(_OWORD *)v15 = 0;
    *(_OWORD *)v16 = 0;
    if ( v3 )
    {
      v14 = (struct _Unwind_Exception *)sub_1582F0(a1);
      *(_BYTE *)(a1 + 952) = 0;
      _Unwind_Resume(v14);
    }
    v7 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v7 = *(_QWORD *)(a1 + 848);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, unsigned int *, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 216LL))(
           v7,
           v15,
           v16,
           v5,
           v6,
           a2) )
    {
      v9 = v15[1];
      v10 = v15[3];
      *(_BYTE *)(a1 + 952) = 1;
      v11 = _mm_loadl_epi64((const __m128i *)v15);
      v12 = _mm_loadl_epi64((const __m128i *)&v15[2]);
      *(_DWORD *)(v5 + 108) = v9;
      *(_QWORD *)(v5 + 100) = _mm_unpacklo_epi32(v11, v12).m128i_u64[0];
      if ( v10 >= 0 && v10 != *(_DWORD *)(v5 + 72) )
      {
        TListViewer::selectItem((TListViewer *)v5, v10);
        *(_BYTE *)(a1 + 840) = 0;
        *(_BYTE *)(a1 + 953) = 1;
      }
      v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16[0]), _mm_cvtsi32_si128(v16[2])).m128i_u64[0];
      *(_DWORD *)(v6 + 108) = v16[1];
      *(_QWORD *)(v6 + 100) = v13;
      if ( a2 && (v16[3] & 0x80000000) == 0 && v16[3] != *(_DWORD *)(v6 + 72) && (*(_BYTE *)(a1 + 914) & 2) == 0 )
        TListViewer::selectItem((TListViewer *)v6, v16[3]);
      *(_BYTE *)(a1 + 952) = 0;
    }
  }
  return v17 - __readfsqword(0x28u);
}

