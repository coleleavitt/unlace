unsigned __int64 __fastcall sub_2EA10(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rbp
  void *v4; // r12
  __int64 *v5; // r13
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  const char *v17; // rsi
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  const char *v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v2 = calc_fixup_size(*(unsigned __int16 *)(a1 + 20));
  v3 = v2;
  if ( v2 != 8 )
  {
    if ( v2 != 4 )
    {
      if ( !under_debugger )
        interr(20129);
LABEL_40:
      BUG();
    }
    if ( !*(_BYTE *)(a1 + 72) || !*(_BYTE *)(a1 + 73) )
      goto LABEL_7;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
LABEL_5:
    if ( under_debugger )
      goto LABEL_40;
    interr(20072);
LABEL_7:
    v4 = &put_dword;
    goto LABEL_8;
  }
  v4 = &put_qword;
LABEL_8:
  sub_40E20(*(_QWORD *)(*(_QWORD *)a1 + 240LL), *(_QWORD *)(a1 + 24), 3);
  v5 = *(__int64 **)(*(_QWORD *)a1 + 232LL);
  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
      sub_42050(
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        0,
        *(_QWORD *)(a1 + 40),
        *(unsigned __int16 *)(a1 + 20),
        *(_QWORD *)(a1 + 56),
        1610612736,
        0);
      return v22 - __readfsqword(0x28u);
    case 4:
      ((void (__fastcall *)(_QWORD, _QWORD))v4)(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 48));
      set_op_type(*(_QWORD *)(a1 + 24), 0x22222202200000LL, 0);
      v12 = v5[20];
      v13 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v14 = v5[19];
      v15 = v12 + 1;
      if ( v5[21] < (unsigned __int64)(v12 + 1) )
      {
        v18 = v13;
        v16 = qvector_reserve(v5 + 19, v14, v12 + 1, 16);
        v12 = v5[20];
        v13 = _mm_load_si128(&v18);
        v5[19] = v16;
        v14 = v16;
        v15 = v12 + 1;
      }
      v5[20] = v15;
      *(__m128i *)(v14 + 16 * v12) = v13;
      return v22 - __readfsqword(0x28u);
    case 5:
    case 0xA:
      ((void (__fastcall *)(_QWORD, _QWORD))v4)(*(_QWORD *)(a1 + 24), 0);
      sub_42050(
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        v3 + *(_DWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        0,
        *(_QWORD *)(a1 + 40),
        *(unsigned __int16 *)(a1 + 20),
        *(_QWORD *)(a1 + 56),
        1610612736,
        0);
      v19 = 0;
      v10 = sub_2E8E0(v5);
      if ( (unsigned __int8)get_type_by_tid(&v19) && 2 * v3 == get_tinfo_size(0, v19, 0) )
        create_data(*(_QWORD *)(a1 + 24), 1610612736, 2 * v3, v10);
      if ( (get_flags_ex(*(_QWORD *)(a1 + 24), 4) & 0x4000) == 0 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        v21 = 0;
        v20 = nullptr;
        get_ea_name(&v20, v11, 0, 0);
        if ( (unsigned __int64)v21 > 1 && (unsigned __int8)is_uname(v20) )
        {
          v17 = &s1;
          if ( (_QWORD)v21 )
            v17 = v20;
          sub_428B0(*(_QWORD *)(a1 + 24), v17, 0, "_tlsdesc");
        }
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
      }
      clear_tinfo_t(&v19);
      return v22 - __readfsqword(0x28u);
    case 6:
    case 7:
      ((void (__fastcall *)(_QWORD, _QWORD))v4)(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 48));
      set_op_type(*(_QWORD *)(a1 + 24), 0x22222202200000LL, 0);
      v7 = v3 + *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 16) == 6 )
        sub_42050(
          *(_QWORD *)(*(_QWORD *)a1 + 240LL),
          v3 + *(_DWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32),
          0,
          *(_QWORD *)(a1 + 40),
          *(unsigned __int16 *)(a1 + 20),
          *(_QWORD *)(a1 + 56),
          1610612736,
          0);
      else
        ((void (__fastcall *)(__int64, _QWORD))v4)(v7, 0);
      v8 = sub_2E280(v5, *(_DWORD *)(a1 + 48));
      v20 = nullptr;
      v9 = v8;
      if ( (unsigned __int8)get_type_by_tid(&v20) && 2 * v3 == get_tinfo_size(0, v20, 0) )
        create_data(*(_QWORD *)(a1 + 24), 1610612736, 2 * v3, v9);
      clear_tinfo_t(&v20);
      return v22 - __readfsqword(0x28u);
    default:
      if ( !under_debugger )
        interr(20128);
      return result;
  }
  goto LABEL_40;
}

