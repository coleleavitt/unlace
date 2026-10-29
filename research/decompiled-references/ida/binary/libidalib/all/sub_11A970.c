__int64 sub_11A970()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int16 i; // ax
  int v3; // r9d
  int v4; // eax
  int v5; // eax
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+10h] [rbp-490h] BYREF
  __int64 v12; // [rsp+18h] [rbp-488h] BYREF
  __int64 v13; // [rsp+20h] [rbp-480h] BYREF
  __m128i v14; // [rsp+28h] [rbp-478h] BYREF
  __int64 v15; // [rsp+40h] [rbp-460h] BYREF
  __m128i v16; // [rsp+48h] [rbp-458h]
  _BYTE v17[1032]; // [rsp+60h] [rbp-440h] BYREF
  unsigned __int64 v18; // [rsp+468h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  if ( (*(_BYTE *)(get_ph() + 9) & 4) != 0 )
  {
    v0 = getseg();
    if ( v0 )
    {
      v11 = *(_QWORD *)(v0 + 48);
      v12 = *((_QWORD *)&xmmword_2528A0 + 1);
      v1 = xmmword_2528A0;
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
        if ( !(unsigned int)sub_18C660(
                              996,
                              (unsigned int)&v15,
                              (unsigned int)&v11,
                              (unsigned int)&v12,
                              (unsigned int)&v13,
                              v3) )
          goto LABEL_21;
        v5 = sub_9E360();
        if ( v5 <= 0 )
          goto LABEL_4;
        v6 = v5;
        del_items();
        if ( !(unsigned __int8)can_define_item() )
        {
          ea2str();
          sub_F9540(995, v17);
          goto LABEL_4;
        }
        nbits();
        patch_bytes();
        create_insn();
        auto_mark_range();
        if ( qword_252800 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252800 + 384LL))(qword_252800, v1 + 1);
        v7 = _mm_loadu_si128(&v14);
        v1 += v6;
        v8 = v15;
        v14.m128i_i64[0] = 0;
        v12 += v6;
        v15 = v13;
        v13 = v8;
        v14.m128i_i64[1] = v16.m128i_i64[1];
        v16 = v7;
      }
    }
    v9 = 0;
  }
  else
  {
    sub_F9540(997);
LABEL_21:
    v9 = 1;
  }
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree();
  }
  if ( v13 )
  {
    v14.m128i_i64[0] = 0;
    qfree();
  }
  return v9;
}

