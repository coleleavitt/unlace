unsigned __int64 __fastcall sub_16A0(__int64 a1, __int16 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-20F8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20F0h] BYREF
  __m128i si128; // [rsp+10h] [rbp-20E8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20C8h]
  __int64 v11; // [rsp+38h] [rbp-20C0h]
  __int64 v12; // [rsp+40h] [rbp-20B8h]
  __int128 v13; // [rsp+48h] [rbp-20B0h]
  __int128 v14; // [rsp+58h] [rbp-20A0h]
  __int128 v15; // [rsp+68h] [rbp-2090h]
  __int128 v16; // [rsp+78h] [rbp-2080h]
  __int128 v17; // [rsp+88h] [rbp-2070h]
  __int128 v18; // [rsp+98h] [rbp-2060h]
  __int128 v19; // [rsp+A8h] [rbp-2050h]
  __int128 v20; // [rsp+B8h] [rbp-2040h]
  unsigned __int64 v21; // [rsp+C8h] [rbp-2030h]
  _BYTE v22[4096]; // [rsp+D0h] [rbp-2028h] BYREF
  _BYTE v23[4104]; // [rsp+10D0h] [rbp-1028h] BYREF
  unsigned __int64 v24; // [rsp+20D8h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  set_processor_type("metapc", 1);
  setinf_flag(3, 2, 0);
  if ( !sub_1440(a1, byte_4140, 0x1000u) )
  {
    if ( !under_debugger )
      interr(20001);
    BUG();
  }
  memset(&si128, 0, 32);
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v21 = 0xFFFFFFFF00000000LL;
  v12 = setup_selector(0);
  LOWORD(v11) = 513;
  BYTE3(v11) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2090);
  if ( !(unsigned __int8)add_segm_ex(&si128, "BOOT_SECTOR", "CODE", 33) )
    sub_1390(0);
  if ( (a2 & 0x800) == 0 && byte_4140[0] )
  {
    if ( !(unsigned __int8)qisabspath(byte_4140)
      && getinf_buf(97, v22, 4096) > 0
      && (unsigned __int8)qdirname(v23, 4096, v22) )
    {
      qmakepath(v22, 4096, v23, byte_4140, 0);
      qstrncpy(byte_4140, v22, 4096);
    }
    if ( (unsigned __int64)qfilesize(byte_4140) > 0x1FF )
    {
      v5 = open_linput(byte_4140, 0);
      v6 = v5;
      if ( v5 )
      {
        file2base(v5, 0, 31744, 32256, 1);
        close_linput(v6);
      }
    }
  }
  create_filename_cmt();
  setinf(16, 31744);
  setinf(14, 0);
  setinf(15, 31744);
  v7 = -1;
  netnode_check(&v7, "$ bxldr_params", 0, 1);
  v8 = 1;
  netnode_supset(v7, 6, &v8, 8, 65);
  v8 = 2;
  netnode_supset(v7, 8, &v8, 8, 65);
  if ( !(unsigned __int8)callui(1072, "bochs", 0, &callui, v2, v3, v7, v8, si128.m128i_i64[0], si128.m128i_i64[1]) )
    sub_12C0((__int64)"AUTOHIDE REGISTRY\nFailed to load Bochs debugger!");
  return v24 - __readfsqword(0x28u);
}

