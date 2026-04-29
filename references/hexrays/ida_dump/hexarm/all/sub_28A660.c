__int64 __fastcall sub_28A660(_QWORD *a1, __int64 a2)
{
  __m128i *v2; // rbp
  __int64 v3; // r15
  __int32 v4; // eax
  unsigned int v5; // r12d
  int v7; // eax
  __int64 v8; // r14
  __int32 v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int32 v12; // [rsp+4h] [rbp-54h]
  int tinfo_size; // [rsp+8h] [rbp-50h]
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( *(int *)(a1[8] + 56LL) <= 4 )
    return 0;
  v2 = *(__m128i **)(a2 + 24);
  v3 = a2;
  v4 = v2->m128i_i32[2];
  if ( v4 == 48 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v7 = *(_DWORD *)(v2[1].m128i_i64[1] + 8);
    v2 = (__m128i *)v2[1].m128i_i64[1];
    if ( v7 != 35 )
      return 0;
LABEL_7:
    if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v2[1].m128i_i64[1] + 48), 2) & 0xF) - 10) <= 1u )
      v8 = v2[1].m128i_i64[1];
    else
      v8 = v2[2].m128i_i64[0];
    if ( (*(_DWORD *)(v8 + 8) & 0xFFFFFFFB) == 0x30 )
      return 0;
    v5 = sub_256B80(v8);
    if ( (_BYTE)v5 )
      return 0;
    v9 = *(_DWORD *)(v3 + 12);
    v12 = v2->m128i_i32[3];
    if ( v12 == -1 )
    {
      *(_DWORD *)(v3 + 12) = -1;
      v12 = v9;
    }
    else
    {
      if ( v9 != -1 )
        return 0;
      v2->m128i_i32[3] = -1;
    }
    if ( v12 == -2 )
      return 0;
    v14[0] = get_tinfo_property(v2[3].m128i_i64[0], 9);
    if ( !(unsigned int)verify_tinfo(v14[0]) )
    {
      if ( v3 == a2 )
      {
LABEL_22:
        v10 = v2[1].m128i_i64[1];
        v2->m128i_i32[2] = 58;
        if ( v10 != v8 )
          *(__m128i *)((char *)v2 + 24) = _mm_unpacklo_epi64(_mm_loadl_epi64(v2 + 2), (__m128i)(unsigned __int64)v10);
        v11 = v2[3].m128i_i64[0];
        v2[3].m128i_i64[0] = *(_QWORD *)(v3 + 48);
        *(_QWORD *)(v3 + 48) = v11;
        v2->m128i_i64[0] = *(_QWORD *)v3;
        v2->m128i_i32[3] = v12;
        sub_255C10((__int64 *)v3, (__int64)v2);
        sub_244580(v3, *(_QWORD *)(a1[9] + 112LL), 0);
        v5 = 1;
        goto LABEL_25;
      }
      if ( !(unsigned __int8)sub_2453D0(*(_QWORD *)(a1[2] + 8LL * a1[3] - 8), a2) )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
        if ( tinfo_size <= (int)get_tinfo_property(*(_QWORD *)(v8 + 48), 14)
          && (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xB
          && (get_tinfo_property(v14[0], 2) & 0xF) != 0xB )
        {
          *(_DWORD *)(a2 + 8) = 48;
          goto LABEL_22;
        }
      }
    }
LABEL_25:
    clear_tinfo_t(v14);
    return v5;
  }
  if ( v4 == 35 )
    goto LABEL_7;
  return 0;
}
