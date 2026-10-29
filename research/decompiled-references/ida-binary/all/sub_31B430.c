__int64 __fastcall sub_31B430(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  bool v4; // r14
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  __int16 i; // ax
  int v8; // r9d
  int v9; // eax
  const char *v10; // rax
  int v11; // eax
  __int64 v12; // r13
  int v13; // eax
  int v14; // edx
  int v15; // eax
  __m128i v16; // xmm0
  const char *v17; // rdx
  unsigned int v18; // ebx
  const char **v20; // [rsp+0h] [rbp-4A0h]
  int v21; // [rsp+8h] [rbp-498h]
  __int64 v22; // [rsp+10h] [rbp-490h] BYREF
  __int64 v23; // [rsp+18h] [rbp-488h] BYREF
  const char *v24; // [rsp+20h] [rbp-480h] BYREF
  __m128i v25; // [rsp+28h] [rbp-478h] BYREF
  const char *v26; // [rsp+40h] [rbp-460h] BYREF
  __m128i v27; // [rsp+48h] [rbp-458h]
  _BYTE v28[1032]; // [rsp+60h] [rbp-440h] BYREF
  unsigned __int64 v29; // [rsp+468h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  v25 = 0;
  v24 = nullptr;
  v26 = nullptr;
  v27 = 0;
  if ( (*(_BYTE *)(get_ph(a1, a2) + 9) & 4) != 0 )
  {
    v2 = getseg(xmmword_8CC810);
    if ( v2 )
    {
      v3 = *(_BYTE *)(v2 + 43) == 0;
      v22 = *(_QWORD *)(v2 + 48);
      v4 = !v3;
      v23 = *((_QWORD *)&xmmword_8CC810 + 1);
      v5 = xmmword_8CC810;
      v6 = setinf_flag(45, 4, 1);
      v20 = &v24;
      generate_disasm_line(&v24, v5, 4);
      setinf_flag(45, 4, v6);
LABEL_4:
      a2 = &byte_4;
      for ( i = get_flags_ex(v5, 4); ; i = get_flags_ex(v5, 4) )
      {
        v9 = i & 0x600;
        if ( v9 )
        {
          if ( v9 != 1536 )
            break;
        }
        a2 = (const char *)&v26;
        if ( !(unsigned int)sub_507F10(
                              996,
                              (unsigned int)&v26,
                              (unsigned int)&v22,
                              (unsigned int)&v23,
                              (_DWORD)v20,
                              v8,
                              v20) )
          goto LABEL_25;
        v10 = &s1;
        if ( v25.m128i_i64[0] )
          v10 = v24;
        v11 = sub_1E73C0(0x49u, v28, v5, v22, v23, v4, v10);
        v21 = v11;
        if ( v11 <= 0 )
          goto LABEL_4;
        v12 = v11;
        del_items(v5, 2, v11, 0);
        if ( !(unsigned __int8)can_define_item(v5, v12, 0) )
        {
          ea2str(v28, 1024, v5);
          sub_17CE30(995, v28);
          goto LABEL_4;
        }
        v13 = nbits(v5);
        v14 = v13 + 14;
        v15 = v13 + 7;
        if ( v15 >= 0 )
          v14 = v15;
        patch_bytes(v5, v28, v21 * (v14 >> 3));
        create_insn(v5, 0);
        auto_mark_range(v5, v5 + 1, 40);
        if ( qword_8CC7C0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_8CC7C0 + 664LL))(qword_8CC7C0);
        v16 = _mm_loadu_si128(&v25);
        v5 += v12;
        a2 = &byte_4;
        v17 = v26;
        v25.m128i_i64[0] = 0;
        v23 += v12;
        v26 = v24;
        v24 = v17;
        v25.m128i_i64[1] = v27.m128i_i64[1];
        v27 = v16;
      }
    }
    v18 = 0;
  }
  else
  {
    sub_17CE30(997);
LABEL_25:
    v18 = 1;
  }
  if ( v26 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v26, a2);
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24, a2);
  }
  return v18;
}
