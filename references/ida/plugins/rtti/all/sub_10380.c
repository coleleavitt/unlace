__int64 __fastcall sub_10380(__int64 a1, __int64 a2, char a3, const char *a4, __int64 a5)
{
  int v5; // r14d
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r8
  __int64 qword; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int dword; // eax
  int flags; // eax
  int v17; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-78h]
  __int64 v20; // [rsp+10h] [rbp-78h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-58h]

  v5 = a3 & 0xF;
  switch ( a3 & 0xF )
  {
    case 0:
      sub_FD90(a2, 4, 3);
      goto LABEL_24;
    case 1:
    case 2:
      create_data();
      set_op_type();
LABEL_24:
      v8 = 4;
      goto LABEL_18;
    case 3:
    case 4:
    case 5:
      if ( v5 == 3 )
      {
        flags = get_flags_ex();
        v10 = a5;
        v17 = flags;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 368);
        v9 = get_flags_ex();
        v10 = a5;
        v17 = v9;
        if ( v8 == 8 )
        {
          if ( (v9 & 0x600) != 0x400 || (v9 & 0xF0000000) != 0x30000000 )
          {
            create_data();
            v10 = a5;
          }
          v19 = v10;
          qword = get_qword();
          v12 = v19;
          v13 = qword;
          goto LABEL_7;
        }
        if ( v8 != 4 )
          goto LABEL_18;
      }
      if ( (v17 & 0x600) != 0x400 || (v17 & 0xF0000000) != 0x20000000 )
      {
        v20 = v10;
        create_data();
        v10 = v20;
      }
      v21 = v10;
      v8 = 4;
      dword = get_dword();
      v12 = v21;
      v13 = dword;
LABEL_7:
      if ( !v13 )
        goto LABEL_18;
      if ( (v17 & 0xF00000) != 0x500000 )
        goto LABEL_9;
      v23 = v12;
      if ( !(unsigned __int8)get_refinfo() )
      {
        v12 = v23;
LABEL_9:
        if ( v5 == 3 || v5 == 5 )
        {
          v22 = v12;
          getinf();
          v12 = v22;
        }
        v24 = v12;
        op_offset_ex();
      }
      if ( v24 )
        add_dref();
      if ( (a3 & 0x10) != 0 && !(unsigned __int8)is_spec_ea() )
      {
        auto_mark_range();
        auto_mark_range();
      }
LABEL_18:
      if ( a4 && *a4 )
        sub_102C0(a2, a4);
      return v8;
    case 6:
      v8 = *(_QWORD *)(a1 + 368);
      sub_FD90(a2, v8, 3);
      goto LABEL_18;
    case 7:
      v8 = *(_QWORD *)(a1 + 368);
      sub_FD90(a2, v8, 0);
      goto LABEL_18;
    default:
      v8 = 0;
      goto LABEL_18;
  }
}
