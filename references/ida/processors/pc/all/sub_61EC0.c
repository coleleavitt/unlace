__int64 __fastcall sub_61EC0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  int i; // r14d
  int v5; // r15d
  const char *v6; // rsi
  __int64 v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rdi
  signed __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  char *v15; // rax
  int v16; // [rsp+Ch] [rbp-A1Ch]
  __int64 wide_dword; // [rsp+10h] [rbp-A18h]
  int wide_word; // [rsp+18h] [rbp-A10h]
  int v19; // [rsp+18h] [rbp-A10h]
  char *v20; // [rsp+20h] [rbp-A08h]
  unsigned __int64 v21; // [rsp+20h] [rbp-A08h]
  signed __int64 v22; // [rsp+20h] [rbp-A08h]
  signed __int64 v23; // [rsp+28h] [rbp-A00h]
  unsigned __int64 v24; // [rsp+30h] [rbp-9F8h]
  signed __int64 v25; // [rsp+30h] [rbp-9F8h]
  char *v26; // [rsp+38h] [rbp-9F0h]
  __int64 v27; // [rsp+48h] [rbp-9E0h] BYREF
  char *s; // [rsp+50h] [rbp-9D8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-9D0h]
  __int128 v30; // [rsp+70h] [rbp-9B8h]
  __int64 v31; // [rsp+80h] [rbp-9A8h]
  __int64 v32; // [rsp+88h] [rbp-9A0h]
  __int64 v33; // [rsp+90h] [rbp-998h]
  char v34; // [rsp+98h] [rbp-990h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-988h]
  __int64 v36; // [rsp+C8h] [rbp-960h]
  char v37; // [rsp+1D8h] [rbp-850h] BYREF
  unsigned __int64 v38; // [rsp+9E8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v27 = a1;
  create_data();
  qsnprintf();
  set_cmt();
  wide_dword = get_wide_dword();
  if ( wide_dword )
  {
    get_default_reftype();
    op_offset();
  }
  create_data();
  qsnprintf();
  set_name();
  num_flag();
  set_op_type();
  wide_word = get_wide_word();
  create_data();
  qsnprintf();
  set_name();
  num_flag();
  set_op_type();
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  num_flag();
  set_op_type();
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  num_flag();
  set_op_type();
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  num_flag();
  set_op_type();
  getinf();
  create_strlit();
  sub_612B0();
  set_cmt();
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  num_flag();
  set_op_type();
  v27 = a1 + 24;
  if ( sub_614B0(&v27, a2, (__int64)"Control_Proc", (__int64)"Offset of control procedure", (__int64)"Control", 1)
    && getinf() == -1 )
  {
    setinf();
    setinf();
  }
  sub_614B0(&v27, a2, (__int64)"V86_API_Proc", (__int64)"Offset of API procedure (or 0)", (__int64)"V86", 1);
  sub_614B0(&v27, a2, (__int64)"PM_API_Proc", (__int64)"Offset of API procedure (or 0)", (__int64)"PM", 1);
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  v2 = sub_614B0(
         &v27,
         a2,
         (__int64)"Service_Table_Ptr",
         (__int64)"Pointer to service table",
         (__int64)"Service_Table",
         0);
  if ( v2 )
  {
    v16 = get_wide_dword();
    if ( v16 > 0 )
    {
      for ( i = 0; i != v16; ++i )
        create_data();
      v5 = 0;
      create_data();
      qsnprintf();
      set_name();
      v6 = "Number of services";
      set_cmt();
      v27 += 4;
      v19 = wide_word << 16;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = get_wide_dword();
          if ( v7 )
            break;
          v2 += 4;
          if ( v16 == ++v5 )
            goto LABEL_6;
        }
        if ( (unsigned __int8)sub_61320(v7, v6) )
          goto LABEL_31;
        s = 0;
        v8 = &v34;
        v29 = 0;
        v31 = -1;
        v32 = 0;
        v33 = 0;
        v30 = -1;
        do
        {
          *(_WORD *)v8 = 0;
          v8 += 40;
          *((_WORD *)v8 - 19) = 0;
          *((_WORD *)v8 - 18) = 0;
          *((_DWORD *)v8 - 2) = 0;
          *((_WORD *)v8 - 17) = 0;
          *((_OWORD *)v8 - 2) = 0;
          *((_QWORD *)v8 - 2) = 0;
        }
        while ( &v37 != v8 );
        v35 = 32;
        LOWORD(v32) = 46;
        v36 = v5 + v19;
        get_predef_insn_cmt();
        if ( (unsigned __int64)v29 <= 1 )
          break;
        v24 = v29;
        v26 = s;
        v20 = s;
        v9 = strchr(s, 59);
        v10 = v20;
        if ( !v9 )
          goto LABEL_28;
        v11 = v9 - v20;
        if ( v9 - v20 == -1 )
          goto LABEL_28;
        v12 = v24;
        if ( v11 )
        {
          v13 = v11 + 1;
          if ( v24 < v11 + 1 )
          {
            if ( *((_QWORD *)&v29 + 1) < v13 )
            {
              v25 = v9 - v20;
              v22 = v11 + 1;
              v15 = (char *)qvector_reserve();
              v12 = v29;
              v11 = v25;
              v26 = v15;
              s = v15;
              v13 = v22;
            }
            v21 = v13;
            v23 = v11;
            memset(&v26[v12], 0, v13 - v12);
            v9 = &s[v23];
            *(_QWORD *)&v29 = v21;
          }
          else if ( v24 != v11 + 1 )
          {
            *(_QWORD *)&v29 = v11 + 1;
          }
          *v9 = 0;
          goto LABEL_25;
        }
        if ( !v20 )
          goto LABEL_28;
        *(_QWORD *)&v29 = 0;
        qfree();
        s = 0;
        v14 = v29;
        *((_QWORD *)&v29 + 1) = 0;
LABEL_26:
        v6 = s1;
        if ( !v14 )
          goto LABEL_29;
        v10 = s;
LABEL_28:
        v6 = v10;
LABEL_29:
        set_name();
        if ( s )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
LABEL_31:
        v2 += 4;
        ++v5;
        sub_613C0();
        if ( v16 == v5 )
          goto LABEL_6;
      }
      sub_30660((__int64 *)&s);
LABEL_25:
      v14 = v29;
      goto LABEL_26;
    }
  }
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
LABEL_6:
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  set_cmt();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  v27 += 4;
  create_data();
  qsnprintf();
  set_name();
  return wide_dword;
}
