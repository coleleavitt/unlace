__int64 __fastcall sub_3D7C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __m128i si128; // xmm0
  __int64 v9; // rdx
  char v10; // al
  unsigned int v11; // r14d
  __int64 v13; // r15
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v16 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 1024) = -1;
  *(__m128i *)(a1 + 1224) = si128;
  if ( (unsigned __int8)sub_3FC580(a1) )
  {
    a2 = a1 + 904;
    sub_3D2940(a1, (_QWORD *)(a1 + 904), v5, a3, a4);
  }
  if ( v5 == -1
    || (v5 != *(_QWORD *)(a1 + 1208)
      ? (*(_QWORD *)(a1 + 1208) = v5,
         a1 += 1120,
         a2 = v5,
         v10 = rangeset_t_find_range(v6 + 1120, v5) != 0,
         *(_BYTE *)(v6 + 1216) = v10)
      : (v10 = *(_BYTE *)(a1 + 1216)),
        !v10) )
  {
    v13 = *(_QWORD *)(v6 + 1016);
    if ( (unsigned __int8)must_journal(a1, a2, v9) && *(_DWORD *)(v13 + 96) != -1 )
    {
      v15 = 0;
      ptr = nullptr;
      v11 = sub_8BC100(v13, v5, a3, a4, &ptr);
      if ( (_QWORD)v15 )
        add_undo_record(*(unsigned int *)(v13 + 96), ptr, v15);
      if ( ptr )
      {
        *(_QWORD *)&v15 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v11 = sub_8BC100(v13, v5, a3, a4, 0);
    }
  }
  else
  {
    v11 = sub_3D2B80(v6, v5, a3, a4);
  }
  sub_848DF0(v6 + 1040, v5, a3);
  sub_3D7A60(v6, v5, a3, a4);
  return v11;
}
