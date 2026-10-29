__int64 sub_11A530()
{
  __int64 v0; // rax
  int v1; // ebx
  __int16 i; // ax
  int v3; // r9d
  int v4; // eax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v9; // [rsp+8h] [rbp-498h]
  int v10; // [rsp+18h] [rbp-488h] BYREF
  int v11; // [rsp+1Ch] [rbp-484h] BYREF
  __int64 v12; // [rsp+20h] [rbp-480h] BYREF
  __m128i v13; // [rsp+28h] [rbp-478h] BYREF
  __int64 v14; // [rsp+40h] [rbp-460h] BYREF
  __m128i v15; // [rsp+48h] [rbp-458h]
  _BYTE v16[1032]; // [rsp+60h] [rbp-440h] BYREF
  unsigned __int64 v17; // [rsp+468h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  if ( (*(_BYTE *)(get_ph() + 9) & 4) != 0 )
  {
    v0 = getseg();
    if ( v0 )
    {
      v10 = *(_DWORD *)(v0 + 28);
      v1 = qword_251700;
      v11 = HIDWORD(qword_251700);
      setinf_flag();
      generate_disasm_line();
      setinf_flag();
LABEL_4:
      for ( i = get_flags_ex(); ; i = get_flags_ex() )
      {
        v4 = i & 0x600;
        if ( v4 )
        {
          if ( v4 != 1536 )
            break;
        }
        if ( !(unsigned int)sub_18BA90(
                              996,
                              (unsigned int)&v14,
                              (unsigned int)&v10,
                              (unsigned int)&v11,
                              (unsigned int)&v12,
                              v3) )
          goto LABEL_21;
        v9 = sub_9E220();
        if ( v9 <= 0 )
          goto LABEL_4;
        del_items();
        if ( !(unsigned __int8)can_define_item() )
        {
          ea2str();
          sub_F9340(995, v16);
          goto LABEL_4;
        }
        nbits();
        patch_bytes();
        create_insn();
        auto_mark_range();
        if ( qword_251660 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_251660 + 384LL))(
            qword_251660,
            (unsigned int)(v1 + 1));
        v5 = _mm_loadu_si128(&v13);
        v13.m128i_i64[0] = 0;
        v6 = v14;
        v1 += v9;
        v11 += v9;
        v14 = v12;
        v12 = v6;
        v13.m128i_i64[1] = v15.m128i_i64[1];
        v15 = v5;
      }
    }
    v7 = 0;
  }
  else
  {
    sub_F9340(997);
LABEL_21:
    v7 = 1;
  }
  if ( v14 )
  {
    v15.m128i_i64[0] = 0;
    qfree();
  }
  if ( v12 )
  {
    v13.m128i_i64[0] = 0;
    qfree();
  }
  return v7;
}

