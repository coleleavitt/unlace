__int64 __fastcall sub_288B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  int v5; // r13d
  char tinfo_property; // al
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rax
  __m128i *v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 tinfo_size; // r13
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 2) > 0xD )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( sub_255220(*(_QWORD *)(v2 + 24), v4)
    && (sub_255220(*(_QWORD *)(v2 + 32), v4)
     || (v14 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v2 + 24) + 48LL), 0),
         v14 < get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v2 + 32) + 48LL), 0))) )
  {
    if ( *(_DWORD *)(v4 + 8) != 49 )
      return 0;
    v13 = *(_QWORD *)(v4 + 24);
    if ( sub_255220(*(_QWORD *)(v2 + 24), v13) )
    {
      if ( sub_255220(*(_QWORD *)(v2 + 32), v13) )
        return 0;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v2 + 24) + 48LL), 0);
      if ( tinfo_size < get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v2 + 32) + 48LL), 0) )
        return 0;
    }
    v5 = 22;
  }
  else
  {
    v5 = 23;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 24);
  if ( (tinfo_property & 0xF) == 9 )
  {
    sub_250DB0(*(_QWORD *)(a2 + 32));
    *(_DWORD *)(v7 + 8) = 62;
    v12 = (__m128i *)j__qalloc_or_throw(20);
    *v12 = _mm_loadu_si128(xmmword_410BE0);
    v12[1].m128i_i32[0] = xmmword_410BE0[1].m128i_i32[0];
    *(_QWORD *)(v7 + 24) = v12;
    copy_tinfo_t(v7 + 48, v8 + 48);
    *(_DWORD *)(a2 + 56) |= 4u;
  }
  else
  {
    v9 = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
    sub_23C1A0(v7, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), 0, 0, v9, 0);
  }
  v10 = *(__int64 **)(a2 + 32);
  *(_DWORD *)(a2 + 8) = v5;
  v11 = *v10;
  v16[0] = 8;
  *(_QWORD *)a2 = v11;
  copy_tinfo_t(a2 + 48, v16);
  clear_tinfo_t(v16);
  if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
